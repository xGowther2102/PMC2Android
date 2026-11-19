/**
 * Midnight Club II (PC) - Recompiled code chunk 0
 * Functions: 250 (0x00401000 - 0x00409E80)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00401000
 * Original: 0x00401000 - 0x00401005 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00401000: ;
    g_seh_ebp = ebp; sub_006192D5(); return; /* tail jmp 0x006192D5 */

}

/**
 * sub_00401010
 * Original: 0x00401010 - 0x004010B0 (160 bytes, 42 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00401010: ;
    SET_LO8(eax, MEM8(0x692E18));
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x118;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0040103B; /* jne: not equal / not zero */

loc_0040101F: ;
    edx = MEM32(0x692E18);
    edx = edx | 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0x67A777;
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x692E18) = edx;
    MEM32(0x67A760) = eax;

loc_0040103B: ;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x00401045u); RECOMP_ABI_CALL(0x005769E0u, sub_005769E0); /* call 0x005769E0 */

loc_00401045: ;
    ecx = MEM32(0x67A760);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x186A0);
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0040105Eu); RECOMP_ABI_CALL(0x00575BA0u, sub_00575BA0); /* call 0x00575BA0 */

loc_0040105E: ;
    eax = MEM32(0x86D7EC);
    ecx = MEM32(0x86D7E8);
    PUSH32(esp, eax);
    edx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(0x6C5258) = edx;
    PUSH32(esp, 0x0040107Au); RECOMP_ABI_CALL(0x006131E0u, sub_006131E0); /* call 0x006131E0 */

loc_0040107A: ;
    edx = MEM32(0x86D7EC);
    eax = MEM32(0x86D7E8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0040108Cu); RECOMP_ABI_CALL(0x00612910u, sub_00612910); /* call 0x00612910 */

loc_0040108C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00401094u); RECOMP_ABI_CALL(0x006181F0u, sub_006181F0); /* call 0x006181F0 */

loc_00401094: ;
    esi = eax;
    PUSH32(esp, 0x0040109Bu); RECOMP_ABI_CALL(0x00612F00u, sub_00612F00); /* call 0x00612F00 */

loc_0040109B: ;
    ecx = esp + 4;
    PUSH32(esp, 0x004010A4u); RECOMP_ABI_CALL(0x00575B70u, sub_00575B70); /* call 0x00575B70 */

loc_004010A4: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x118;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004010B0
 * Original: 0x004010B0 - 0x0040113C (140 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004010B0(void)
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

loc_004010B0: ;
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(0x692E50));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004010D0; /* jne: not equal / not zero */

loc_004010C0: ;
    MEM32(0x692E50) = MEM32(0x692E50) | eax;
    _fa = (uint32_t)(MEM32(0x692E50)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0x692E4C;
    PUSH32(esp, 0x004010D0u); RECOMP_ABI_CALL(0x00611C60u, sub_00611C60); /* call 0x00611C60 */

loc_004010D0: ;
    SET_LO8(eax, MEM8(0x692E55));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00401131; /* je: equal / zero */

loc_004010D9: ;
    SET_LO8(eax, MEM8(0x692E60));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00401131; /* jne: not equal / not zero */

loc_004010E2: ;
    PUSH32(esp, 0x004010E7u); RECOMP_ABI_CALL(0x00611C40u, sub_00611C40); /* call 0x00611C40 */

loc_004010E7: ;
    _fb = (uint32_t)(MEM32(0x692E4C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x692E4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_004010FF; /* jge: greater or equal (signed >=) */

loc_004010F9: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_004010FF: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x8600DC)); /* fmul dword ptr [0x8600dc] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x692E48)); /* fsub dword ptr [0x692e48] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D370)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d370] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00401131; /* jne: not equal / not zero */

loc_00401118: ;
    MEM32(0x692E48) = 0;
    PUSH32(esp, 0x00401127u); RECOMP_ABI_CALL(0x00611C40u, sub_00611C40); /* call 0x00611C40 */

loc_00401127: ;
    MEM32(0x692E4C) = eax;
    PUSH32(esp, 0x00401131u); RECOMP_ABI_CALL(0x00401520u, sub_00401520); /* call 0x00401520 */

loc_00401131: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x692E1C);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00401140
 * Original: 0x00401140 - 0x0040116E (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00401140: ;
    ecx = MEM32(0x860220);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00401152u); RECOMP_ABI_CALL(0x006137C0u, sub_006137C0); /* call 0x006137C0 */

loc_00401152: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040115D; /* je: equal / zero */

loc_00401156: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_00617FB0(); return; /* tail jmp 0x00617FB0 */

loc_0040115D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x62D374);
    PUSH32(esp, 0x0040116Au); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_0040116A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00401170
 * Original: 0x00401170 - 0x0040118B (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401170(void)
{

loc_00401170: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x62D3AC;
    edi = 0x62D3A0;
    ebx = 0x62D394;
    PUSH32(esp, 0x00401187u); RECOMP_ABI_CALL(0x00401140u, sub_00401140); /* call 0x00401140 */

loc_00401187: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00401190
 * Original: 0x00401190 - 0x004014B6 (806 bytes, 212 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00401190: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x62D4CC);
    PUSH32(esp, 0x004011A0u); RECOMP_ABI_CALL(0x0053A890u, sub_0053A890); /* call 0x0053A890 */

loc_004011A0: ;
    PUSH32(esp, 0x62D4B8);
    MEM32(0x85837C) = 0x65;
    PUSH32(esp, 0x004011B4u); RECOMP_ABI_CALL(0x005EDA50u, sub_005EDA50); /* call 0x005EDA50 */

loc_004011B4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004011BCu); RECOMP_ABI_CALL(0x005ECBE0u, sub_005ECBE0); /* call 0x005ECBE0 */

loc_004011BC: ;
    SET_LO8(ebx, 1);
    MEM8(0x8602D4) = LO8(ebx);
    MEM8(0x679778) = 0;
    PUSH32(esp, 0x004011D0u); RECOMP_ABI_CALL(0x0053A000u, sub_0053A000); /* call 0x0053A000 */

loc_004011D0: ;
    PUSH32(esp, 0x004011D5u); RECOMP_ABI_CALL(0x0053B9F0u, sub_0053B9F0); /* call 0x0053B9F0 */

loc_004011D5: ;
    PUSH32(esp, 0x004011DAu); RECOMP_ABI_CALL(0x004AF370u, sub_004AF370); /* call 0x004AF370 */

loc_004011DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004011E9; /* je: equal / zero */

loc_004011DF: ;
    PUSH32(esp, 0x004011E4u); RECOMP_ABI_CALL(0x004AF370u, sub_004AF370); /* call 0x004AF370 */

loc_004011E4: ;
    MEM32(0x6C2C5C) = eax;

loc_004011E9: ;
    PUSH32(esp, 0x004011EEu); RECOMP_ABI_CALL(0x005CDA60u, sub_005CDA60); /* call 0x005CDA60 */

loc_004011EE: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x62D4B0);
    MEM8(0x6CE211) = LO8(ebx);
    MEM32(esp + 0x18) = 0x62D4AC;
    PUSH32(esp, 0x0040120Du); RECOMP_ABI_CALL(0x00612EB0u, sub_00612EB0); /* call 0x00612EB0 */

loc_0040120D: ;
    PUSH32(esp, 0x122);
    PUSH32(esp, 0x62D4A4);
    PUSH32(esp, 0x108);
    PUSH32(esp, 0x00401221u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00401221: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040122F; /* je: equal / zero */

loc_00401228: ;
    ecx = eax;
    PUSH32(esp, 0x0040122Fu); RECOMP_ABI_CALL(0x00613360u, sub_00613360); /* call 0x00613360 */

loc_0040122F: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00401239u); RECOMP_ABI_CALL(0x006134D0u, sub_006134D0); /* call 0x006134D0 */

loc_00401239: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x6C3250;
    PUSH32(esp, 0x00401246u); RECOMP_ABI_CALL(0x0053B6A0u, sub_0053B6A0); /* call 0x0053B6A0 */

loc_00401246: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    ecx = 0x6C3250;
    PUSH32(esp, 0x00401254u); RECOMP_ABI_CALL(0x0053B320u, sub_0053B320); /* call 0x0053B320 */

loc_00401254: ;
    PUSH32(esp, eax);
    ecx = 0x6C3250;
    PUSH32(esp, 0x0040125Fu); RECOMP_ABI_CALL(0x0055E930u, sub_0055E930); /* call 0x0055E930 */

loc_0040125F: ;
    PUSH32(esp, eax);
    ecx = 0x6C3250;
    PUSH32(esp, 0x0040126Au); RECOMP_ABI_CALL(0x004DBA90u, sub_004DBA90); /* call 0x004DBA90 */

loc_0040126A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00401270u); RECOMP_ABI_CALL(0x005ED7B0u, sub_005ED7B0); /* call 0x005ED7B0 */

loc_00401270: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00401282u); RECOMP_ABI_CALL(0x0053A7B0u, sub_0053A7B0); /* call 0x0053A7B0 */

loc_00401282: ;
    esi = MEM32(0x679810);
    MEM32(0x692E1C) = esi;
    ecx = 0xA;
    edi = 0x692E20;
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
    MEM32(0x692E28) = 0x4010B0;
    MEM32(0x679810) = 0x692E20;
    PUSH32(esp, 0x004012B3u); RECOMP_ABI_CALL(0x0053A1B0u, sub_0053A1B0); /* call 0x0053A1B0 */

loc_004012B3: ;
    PUSH32(esp, 0x62D498);
    PUSH32(esp, 0x004012BDu); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_004012BD: ;
    PUSH32(esp, 0x62D48C);
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x004012C9u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_004012C9: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040132A; /* je: equal / zero */

loc_004012D0: ;
    PUSH32(esp, 0x62D480);
    PUSH32(esp, 0x004012DAu); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_004012DA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0040132A; /* jne: not equal / not zero */

loc_004012E1: ;
    PUSH32(esp, 0x62D470);
    PUSH32(esp, 0x004012EBu); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_004012EB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0040132A; /* jne: not equal / not zero */

loc_004012F2: ;
    PUSH32(esp, 0x62D468);
    PUSH32(esp, 0x004012FCu); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_004012FC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0040132A; /* jne: not equal / not zero */

loc_00401303: ;
    PUSH32(esp, 0x143);
    PUSH32(esp, 0x62D4A4);
    PUSH32(esp, 0x30000);
    PUSH32(esp, 0x00401317u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00401317: ;
    PUSH32(esp, 0x30000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x62D454);
    PUSH32(esp, 0x00401327u); RECOMP_ABI_CALL(0x00613DD0u, sub_00613DD0); /* call 0x00613DD0 */

loc_00401327: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0040132A: ;
    PUSH32(esp, 0x0040132Fu); RECOMP_ABI_CALL(0x00401170u, sub_00401170); /* call 0x00401170 */

loc_0040132F: ;
    PUSH32(esp, 0x00401334u); RECOMP_ABI_CALL(0x005C3530u, sub_005C3530); /* call 0x005C3530 */

loc_00401334: ;
    edi = 0x62D448;
    /* nop */

loc_00401340: ;
    PUSH32(esp, 0x62D438);
    PUSH32(esp, 0x0040134Au); RECOMP_ABI_CALL(0x0053A7E0u, sub_0053A7E0); /* call 0x0053A7E0 */

loc_0040134A: ;
    PUSH32(esp, 0x153);
    PUSH32(esp, 0x62D4A4);
    PUSH32(esp, 0x27C4);
    PUSH32(esp, 0x0040135Eu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0040135E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040137A; /* je: equal / zero */

loc_00401365: ;
    ecx = MEM32(0x858364);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00401373u); RECOMP_ABI_CALL(0x00600960u, sub_00600960); /* call 0x00600960 */

loc_00401373: ;
    MEM32(0x85D3F8) = eax;
    goto loc_00401384;

loc_0040137A: ;
    MEM32(0x85D3F8) = 0;

loc_00401384: ;
    PUSH32(esp, 0x00401389u); RECOMP_ABI_CALL(0x005C3530u, sub_005C3530); /* call 0x005C3530 */

loc_00401389: ;
    PUSH32(esp, 0x0040138Eu); RECOMP_ABI_CALL(0x00402560u, sub_00402560); /* call 0x00402560 */

loc_0040138E: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x00401397u); RECOMP_ABI_CALL(0x00401860u, sub_00401860); /* call 0x00401860 */

loc_00401397: ;
    PUSH32(esp, 0x0040139Cu); RECOMP_ABI_CALL(0x004028E0u, sub_004028E0); /* call 0x004028E0 */

loc_0040139C: ;
    PUSH32(esp, 0x004013A1u); RECOMP_ABI_CALL(0x00404BF0u, sub_00404BF0); /* call 0x00404BF0 */

loc_004013A1: ;
    PUSH32(esp, 0x62D430);
    PUSH32(esp, 0x004013ABu); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_004013AB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004013B9; /* je: equal / zero */

loc_004013B2: ;
    PUSH32(esp, 6);
    goto loc_00401467;

loc_004013B9: ;
    PUSH32(esp, 0x62D428);
    PUSH32(esp, 0x004013C3u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_004013C3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004013DC; /* je: equal / zero */

loc_004013CA: ;
    ecx = MEM32(0x6C3890);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x14);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004013D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004013D4u); } /* indirect call */
    }

loc_004013D7: ;
    goto loc_00401472;

loc_004013DC: ;
    PUSH32(esp, 0x62D420);
    PUSH32(esp, 0x004013E6u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_004013E6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004013F1; /* je: equal / zero */

loc_004013ED: ;
    PUSH32(esp, 0x13);
    goto loc_00401467;

loc_004013F1: ;
    PUSH32(esp, 0x62D418);
    PUSH32(esp, 0x004013FBu); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_004013FB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040142D; /* je: equal / zero */

loc_00401402: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x62D418);
    MEM32(esp + 0x1C) = edi;
    PUSH32(esp, 0x00401417u); RECOMP_ABI_CALL(0x00612EB0u, sub_00612EB0); /* call 0x00612EB0 */

loc_00401417: ;
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = 0x6C2E88;
    PUSH32(esp, 0x00401429u); RECOMP_ABI_CALL(0x0053ACB0u, sub_0053ACB0); /* call 0x0053ACB0 */

loc_00401429: ;
    PUSH32(esp, 0xF);
    goto loc_00401467;

loc_0040142D: ;
    PUSH32(esp, 0x62D40C);
    PUSH32(esp, 0x00401437u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_00401437: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00401465; /* jne: not equal / not zero */

loc_0040143E: ;
    SET_LO8(eax, MEM8(0x6C2C64));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00401465; /* jne: not equal / not zero */

loc_00401447: ;
    PUSH32(esp, 0x62D3FC);
    ecx = 0x6C2E88;
    PUSH32(esp, 0x00401456u); RECOMP_ABI_CALL(0x0053ACB0u, sub_0053ACB0); /* call 0x0053ACB0 */

loc_00401456: ;
    ecx = MEM32(0x6C3890);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xF);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00401463u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00401460u); } /* indirect call */
    }

loc_00401463: ;
    goto loc_00401472;

loc_00401465: ;
    PUSH32(esp, 0x11);

loc_00401467: ;
    ecx = MEM32(0x6C3890);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00401472u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040146Fu); } /* indirect call */
    }

loc_00401472: ;
    ecx = esi;
    PUSH32(esp, 0x00401479u); RECOMP_ABI_CALL(0x00402120u, sub_00402120); /* call 0x00402120 */

loc_00401479: ;
    PUSH32(esp, 0x0040147Eu); RECOMP_ABI_CALL(0x0053A8F0u, sub_0053A8F0); /* call 0x0053A8F0 */

loc_0040147E: ;
    PUSH32(esp, 0x00401483u); RECOMP_ABI_CALL(0x00402590u, sub_00402590); /* call 0x00402590 */

loc_00401483: ;
    PUSH32(esp, 0x00401488u); RECOMP_ABI_CALL(0x004017E0u, sub_004017E0); /* call 0x004017E0 */

loc_00401488: ;
    PUSH32(esp, 0x0040148Du); RECOMP_ABI_CALL(0x0053A870u, sub_0053A870); /* call 0x0053A870 */

loc_0040148D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004014A3; /* je: equal / zero */

loc_00401491: ;
    PUSH32(esp, 0x62D3B0);
    PUSH32(esp, 0x0040149Bu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0040149B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00401340;

loc_004014A3: ;
    PUSH32(esp, 0x004014A8u); RECOMP_ABI_CALL(0x0053A7D0u, sub_0053A7D0); /* call 0x0053A7D0 */

loc_004014A8: ;
    PUSH32(esp, 0x004014ADu); RECOMP_ABI_CALL(0x005ED220u, sub_005ED220); /* call 0x005ED220 */

loc_004014AD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004014C0
 * Original: 0x004014C0 - 0x004014EA (42 bytes, 12 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004014C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004014C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x62D50C);
    PUSH32(esp, 0x004014CEu); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_004014CE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x62D4F4);
    MEM32(0x692E58) = eax;
    PUSH32(esp, 0x004014E1u); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_004014E1: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x692E5C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_004014F0
 * Original: 0x004014F0 - 0x0040151F (47 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004014F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004014F0: ;
    eax = MEM32(0x692E58);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004014FBu); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_004014FB: ;
    ecx = MEM32(0x692E5C);
    PUSH32(esp, ecx);
    MEM32(0x692E58) = 0;
    PUSH32(esp, 0x00401511u); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_00401511: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x692E5C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00401520
 * Original: 0x00401520 - 0x0040165E (318 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401520(void)
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

loc_00401520: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x00401528u); RECOMP_ABI_CALL(0x00611C40u, sub_00611C40); /* call 0x00611C40 */

loc_00401528: ;
    _fb = (uint32_t)(MEM32(0x692E68)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x692E68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00401540; /* jge: greater or equal (signed >=) */

loc_0040153A: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_00401540: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x8600DC)); /* fmul dword ptr [0x8600dc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x692E64)); /* fadd dword ptr [0x692e64] */
    MEMF(0x692E64) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00401557u); RECOMP_ABI_CALL(0x00611C40u, sub_00611C40); /* call 0x00611C40 */

loc_00401557: ;
    fp_push(MEMF(0x692E64)); /* fld float */
    MEM32(0x692E68) = eax;
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    SET_LO8(eax, MEM8(0x692E54));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEMF(esp) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_00401584; /* je: equal / zero */

loc_0040157D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x662280) = MEM32(0x662280) - 8;
    _fa = (uint32_t)(MEM32(0x662280)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00401584: ;
    eax = MEM32(0x662280);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004015A2; /* jg: greater (signed >) */

loc_0040158D: ;
    MEM8(0x692E55) = 0;
    MEM32(0x662280) = 0;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_004015A2: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004015AAu); RECOMP_ABI_CALL(0x005EF3F0u, sub_005EF3F0); /* call 0x005EF3F0 */

loc_004015AA: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x004015B1u); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_004015B1: ;
    eax = MEM32(0x674FB0);
    PUSH32(esp, 0);
    esi = eax + -80;
    PUSH32(esp, 0xFF000000u);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    eax = MEM32(0x674FAC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004015D1u); RECOMP_ABI_CALL(0x005EF460u, sub_005EF460); /* call 0x005EF460 */

loc_004015D1: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    edi = MEM32(0x692E5C);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004015F1; /* je: equal / zero */

loc_004015EB: ;
    edi = MEM32(0x692E58);

loc_004015F1: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fb = (uint32_t)(0x15) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x15;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D51C)); /* fmul dword ptr [0x62d51c] */
    PUSH32(esp, 0x00401603u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00401603: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebp = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00401653; /* je: equal / zero */

loc_00401609: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0040160Fu); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_0040160F: ;
    eax = MEM32(0x674FAC);
    ecx = ZX16(MEM16(edi + 8));
    PUSH32(esp, 0);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x662280);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = edx << 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | 0xFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edx);
    edx = ZX16(MEM16(edi + 0xA));
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    edx = esi + ebp;
    PUSH32(esp, edx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = eax + ecx;
    PUSH32(esp, edx);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00401650u); RECOMP_ABI_CALL(0x005EF6F0u, sub_005EF6F0); /* call 0x005EF6F0 */

loc_00401650: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00401653: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_005F0F00(); return; /* tail jmp 0x005F0F00 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00401660
 * Original: 0x00401660 - 0x00401692 (50 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401660(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00401660: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x674FC9) = LO8(eax);
    MEM8(0x692E54) = LO8(eax);
    MEM8(0x692E55) = 1;
    MEM32(0x662280) = 0xFF;
    MEM32(0x692E64) = 0;
    PUSH32(esp, 0x0040168Cu); RECOMP_ABI_CALL(0x00611C40u, sub_00611C40); /* call 0x00611C40 */

loc_0040168C: ;
    MEM32(0x692E68) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_004016A0
 * Original: 0x004016A0 - 0x004016DF (63 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004016A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004016A0: ;
    SET_LO8(eax, 1);
    MEM8(0x674FC9) = LO8(eax);
    MEM8(0x692E54) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x692E55) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_004016DE; /* je: equal / zero */

loc_004016BB: ;
    eax = MEM32(0x674FB0);
    PUSH32(esp, 0);
    ecx = eax + -80;
    PUSH32(esp, 0xFF000000u);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    eax = MEM32(0x674FAC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004016DBu); RECOMP_ABI_CALL(0x005EF460u, sub_005EF460); /* call 0x005EF460 */

loc_004016DB: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004016DE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004016E0
 * Original: 0x004016E0 - 0x004016E3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004016E0(void)
{

loc_004016E0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_004016F0
 * Original: 0x004016F0 - 0x00401747 (87 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004016F0(void)
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

loc_004016F0: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    PUSH32(esp, ebx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x00401700u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00401700: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ebx, LO8(eax));
    PUSH32(esp, 0x00401713u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00401713: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_LO8(ebx, LO8(eax));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00401727u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00401727: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    eax = ZX8(LO8(eax));
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0040173Eu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0040173E: ;
    ecx = ZX8(LO8(eax));
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00401750
 * Original: 0x00401750 - 0x00401780 (48 bytes, 22 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00401750: ;
    eax = MEM32(esp + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0040177D; /* js: sign (negative) */

loc_00401757: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = eax + 1;
    /* nop */

loc_00401770: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x00401774u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00401772u); } /* indirect call */
    }

loc_00401774: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00401770; /* jne: not equal / not zero */

loc_00401779: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0040177D: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00401780
 * Original: 0x00401780 - 0x004017B1 (49 bytes, 24 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00401780: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_004017AC; /* js: sign (negative) */

loc_00401798: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    edi = eax + 1;

loc_004017A1: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ebp; PUSH32(esp, 0x004017A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004017A5u); } /* indirect call */
    }

loc_004017A7: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004017A1; /* jne: not equal / not zero */

loc_004017AA: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_004017AC: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004017C0
 * Original: 0x004017C0 - 0x004017DB (27 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004017C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004017C0: ;
    SET_LO8(edx, MEM8(esp + 4));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = eax * 4 + 4;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_005EE1E0(); return; /* tail jmp 0x005EE1E0 */

}

/**
 * sub_004017E0
 * Original: 0x004017E0 - 0x004017FB (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004017E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004017E0: ;
    ecx = MEM32(0x692E7C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004017F0; /* je: equal / zero */

loc_004017EA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004017F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004017EEu); } /* indirect call */
    }

loc_004017F0: ;
    MEM32(0x692E7C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00401800
 * Original: 0x00401800 - 0x0040181E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00401800: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00401808u); RECOMP_ABI_CALL(0x00614360u, sub_00614360); /* call 0x00614360 */

loc_00401808: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00401818; /* je: equal / zero */

loc_0040180F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00401815u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00401815: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00401818: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00401820
 * Original: 0x00401820 - 0x0040185E (62 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00401820: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x62D530;
    PUSH32(esp, 0x0040182Eu); RECOMP_ABI_CALL(0x00567180u, sub_00567180); /* call 0x00567180 */

loc_0040182E: ;
    PUSH32(esp, 0x00401833u); RECOMP_ABI_CALL(0x004CE850u, sub_004CE850); /* call 0x004CE850 */

loc_00401833: ;
    PUSH32(esp, 0x00401838u); RECOMP_ABI_CALL(0x0053CB10u, sub_0053CB10); /* call 0x0053CB10 */

loc_00401838: ;
    PUSH32(esp, 0x0040183Du); RECOMP_ABI_CALL(0x00478570u, sub_00478570); /* call 0x00478570 */

loc_0040183D: ;
    PUSH32(esp, 0x00401842u); RECOMP_ABI_CALL(0x00477A20u, sub_00477A20); /* call 0x00477A20 */

loc_00401842: ;
    PUSH32(esp, 0x00401847u); RECOMP_ABI_CALL(0x0052AA60u, sub_0052AA60); /* call 0x0052AA60 */

loc_00401847: ;
    PUSH32(esp, 0x0040184Cu); RECOMP_ABI_CALL(0x0053BAB0u, sub_0053BAB0); /* call 0x0053BAB0 */

loc_0040184C: ;
    PUSH32(esp, 0x00401851u); RECOMP_ABI_CALL(0x00534AB0u, sub_00534AB0); /* call 0x00534AB0 */

loc_00401851: ;
    PUSH32(esp, 0x00401856u); RECOMP_ABI_CALL(0x004057D0u, sub_004057D0); /* call 0x004057D0 */

loc_00401856: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00614360(); return; /* tail jmp 0x00614360 */

}

/**
 * sub_00401860
 * Original: 0x00401860 - 0x0040195A (250 bytes, 66 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00401860: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    MEM8(0x675024) = LO8(ebx);
    PUSH32(esp, 0x00401874u); RECOMP_ABI_CALL(0x0053DE60u, sub_0053DE60); /* call 0x0053DE60 */

loc_00401874: ;
    PUSH32(esp, 0x00401879u); RECOMP_ABI_CALL(0x0053C6B0u, sub_0053C6B0); /* call 0x0053C6B0 */

loc_00401879: ;
    PUSH32(esp, 0x0040187Eu); RECOMP_ABI_CALL(0x00405D50u, sub_00405D50); /* call 0x00405D50 */

loc_0040187E: ;
    PUSH32(esp, 0x62D560);
    PUSH32(esp, 0x00401888u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_00401888: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00401895; /* je: equal / zero */

loc_0040188F: ;
    MEM8(0x662284) = LO8(ebx);

loc_00401895: ;
    PUSH32(esp, 0x62D554);
    PUSH32(esp, 0x0040189Fu); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0040189F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004018AD; /* je: equal / zero */

loc_004018A6: ;
    MEM8(0x692E6C) = 1;

loc_004018AD: ;
    PUSH32(esp, 0x62D54C);
    PUSH32(esp, 0x004018B7u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_004018B7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004018C2; /* jne: not equal / not zero */

loc_004018BE: ;
    PUSH32(esp, 1);
    goto loc_004018C3;

loc_004018C2: ;
    PUSH32(esp, ebx);

loc_004018C3: ;
    PUSH32(esp, 0x004018C8u); RECOMP_ABI_CALL(0x0052B6C0u, sub_0052B6C0); /* call 0x0052B6C0 */

loc_004018C8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x5D36D0);
    ecx = esp + 0xC;
    PUSH32(esp, 0x004018D9u); RECOMP_ABI_CALL(0x00614400u, sub_00614400); /* call 0x00614400 */

loc_004018D9: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = 0x860618;
    PUSH32(esp, 0x004018E8u); RECOMP_ABI_CALL(0x006144D0u, sub_006144D0); /* call 0x006144D0 */

loc_004018E8: ;
    PUSH32(esp, 0x004018EDu); RECOMP_ABI_CALL(0x004069B0u, sub_004069B0); /* call 0x004069B0 */

loc_004018ED: ;
    PUSH32(esp, 0x004018F2u); RECOMP_ABI_CALL(0x00559350u, sub_00559350); /* call 0x00559350 */

loc_004018F2: ;
    PUSH32(esp, 0xD3);
    ecx = eax;
    MEM8(eax + 2) = LO8(ebx);
    PUSH32(esp, 0x00401901u); RECOMP_ABI_CALL(0x006126E0u, sub_006126E0); /* call 0x006126E0 */

loc_00401901: ;
    PUSH32(esp, 0x13);
    PUSH32(esp, 0x00401908u); RECOMP_ABI_CALL(0x004CEB00u, sub_004CEB00); /* call 0x004CEB00 */

loc_00401908: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0040190Eu); RECOMP_ABI_CALL(0x005670D0u, sub_005670D0); /* call 0x005670D0 */

loc_0040190E: ;
    MEM8(esi + 8) = LO8(ebx);
    PUSH32(esp, 0x00401916u); RECOMP_ABI_CALL(0x0053C9E0u, sub_0053C9E0); /* call 0x0053C9E0 */

loc_00401916: ;
    PUSH32(esp, 0x0040191Bu); RECOMP_ABI_CALL(0x00479100u, sub_00479100); /* call 0x00479100 */

loc_0040191B: ;
    PUSH32(esp, 0x00401920u); RECOMP_ABI_CALL(0x00477EF0u, sub_00477EF0); /* call 0x00477EF0 */

loc_00401920: ;
    PUSH32(esp, 0x00401925u); RECOMP_ABI_CALL(0x00482C60u, sub_00482C60); /* call 0x00482C60 */

loc_00401925: ;
    PUSH32(esp, 0x0040192Au); RECOMP_ABI_CALL(0x0040E240u, sub_0040E240); /* call 0x0040E240 */

loc_0040192A: ;
    MEM32(0x8582A8) = ebx;
    MEM32(0x6745C0) = ebx;
    MEM32(0x8582C4) = 0x62D544;
    PUSH32(esp, 0x00401945u); RECOMP_ABI_CALL(0x0057E250u, sub_0057E250); /* call 0x0057E250 */

loc_00401945: ;
    ecx = MEM32(0x662288);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00401951u); RECOMP_ABI_CALL(0x005F1A30u, sub_005F1A30); /* call 0x005F1A30 */

loc_00401951: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00401960
 * Original: 0x00401960 - 0x004019A5 (69 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00401960: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x6C38B4);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00401975; /* jl: less (signed <) */

loc_00401970: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00401975u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00401972u); } /* indirect call */
    }

loc_00401975: ;
    ecx = MEM32(0x6C38A4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00401980u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040197Du); } /* indirect call */
    }

loc_00401980: ;
    ecx = MEM32(0x692EB0);
    PUSH32(esp, 0x0040198Bu); RECOMP_ABI_CALL(0x00405300u, sub_00405300); /* call 0x00405300 */

loc_0040198B: ;
    SET_LO8(eax, MEM8(esi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004019A3; /* je: equal / zero */

loc_00401992: ;
    ecx = MEM32(0x6C3890);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0040199Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040199Cu); } /* indirect call */
    }

loc_0040199F: ;
    MEM8(esi + 8) = 0;

loc_004019A3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004019B0
 * Original: 0x004019B0 - 0x004019BB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004019B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004019B0: ;
    ecx = MEM32(0x692EB0);
    g_seh_ebp = ebp; sub_00405360(); return; /* tail jmp 0x00405360 */

}

/**
 * sub_004019C0
 * Original: 0x004019C0 - 0x00401CAF (751 bytes, 225 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004019C0(void)
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

loc_004019C0: ;
    SET_LO8(eax, MEM8(0x692E79));
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(0x692E74);
    if (CMP_EQ(_fa, _fb)) goto loc_004019D6; /* je: equal / zero */

loc_004019D1: ;
    MEM32(0x692E70) = eax;

loc_004019D6: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    SET_LO8(ecx, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004019F6; /* je: equal / zero */

loc_004019E1: ;
    MEM8(esi + 0xC) = 0;
    eax = MEM32(0x692E74);
    MEM8(0x692E78) = 1;
    MEM32(0x692E70) = eax;

loc_004019F6: ;
    _fb = (uint32_t)(MEM32(0x692E70)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x692E70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D580)); /* fmul dword ptr [0x62d580] */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00401A41; /* jp: parity */

loc_00401A18: ;
    SET_LO8(eax, MEM8(0x692E78));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00401A41; /* je: equal / zero */

loc_00401A21: ;
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x28)); /* fsub dword ptr [esi + 0x28] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 0x20)); /* fdiv dword ptr [esi + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x28)); /* fadd dword ptr [esi + 0x28] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    PUSH32(esp, 0x00401A3Eu); RECOMP_ABI_CALL(0x005C3530u, sub_005C3530); /* call 0x005C3530 */

loc_00401A3E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00401A41: ;
    ecx = MEM32(0x69585C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00401A50; /* je: equal / zero */

loc_00401A4B: ;
    PUSH32(esp, 0x00401A50u); RECOMP_ABI_CALL(0x00466FE0u, sub_00466FE0); /* call 0x00466FE0 */

loc_00401A50: ;
    SET_LO8(eax, MEM8(0x692E78));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00401BAB; /* je: equal / zero */

loc_00401A5D: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00401B96; /* jp: parity */

loc_00401A6F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 8);
    PUSH32(esp, 0x00401A79u); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_00401A79: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00401A80u); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_00401A80: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00401A8Cu); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_00401A8C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00401A93u); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_00401A93: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x20] */
    eax = esi + 0x10;
    edi = MEM32(eax);
    ebp = MEM32(eax + 4);
    ebx = MEM32(eax + 8);
    ecx = MEM32(eax + 0xC);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    MEM32(esp + 0x20) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00401B26; /* jne: not equal / not zero */

loc_00401AB6: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    PUSH32(esp, 0x3F800000);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x20)); /* fsub dword ptr [esi + 0x20] */
    PUSH32(esp, 0);
    fp_push(MEMF(esi + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x20)); /* fsub dword ptr [esi + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00401ADFu); RECOMP_ABI_CALL(0x005C3530u, sub_005C3530); /* call 0x005C3530 */

loc_00401ADF: ;
    ecx = MEM32(0x6C3890);
    SET_LO8(eax, MEM8(ecx + 9));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00401B3E; /* je: equal / zero */

loc_00401AEF: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00401AF6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00401AF3u); } /* indirect call */
    }

loc_00401AF6: ;
    ecx = MEM32(0x6CE2E4);
    PUSH32(esp, 0x00401B01u); RECOMP_ABI_CALL(0x0052B0D0u, sub_0052B0D0); /* call 0x0052B0D0 */

loc_00401B01: ;
    ecx = MEM32(0x6C38A4);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ecx + 0x18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00401B3C; /* jne: not equal / not zero */

loc_00401B11: ;
    MEMF(ecx + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(0x6C38A4);
    fp_push(MEMF(eax + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x18)); /* fadd dword ptr [eax + 0x18] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00401B3E;

loc_00401B26: ;
    ecx = MEM32(0x6C3890);
    SET_LO8(eax, MEM8(ecx + 9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00401B3E; /* jne: not equal / not zero */

loc_00401B33: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00401B3Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00401B37u); } /* indirect call */
    }

loc_00401B3A: ;
    goto loc_00401B3E;

loc_00401B3C: ;
    fp_pop(); /* fstp st(0) */

loc_00401B3E: ;
    ecx = MEM32(0x858378);
    esi = MEM32(0x8583A0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00401B50u); RECOMP_ABI_CALL(0x005F23A0u, sub_005F23A0); /* call 0x005F23A0 */

loc_00401B50: ;
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00401B66u); RECOMP_ABI_CALL(0x004016F0u, sub_004016F0); /* call 0x004016F0 */

loc_00401B66: ;
    ecx = MEM32(0x674FAC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(0x674FB0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00401B88u); RECOMP_ABI_CALL(0x005EF6F0u, sub_005EF6F0); /* call 0x005EF6F0 */

loc_00401B88: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00401B8Eu); RECOMP_ABI_CALL(0x005F23A0u, sub_005F23A0); /* call 0x005F23A0 */

loc_00401B8E: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    goto loc_00401BAB;

loc_00401B96: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00401BAB; /* jne: not equal / not zero */

loc_00401BA4: ;
    MEM8(0x692E78) = 0;

loc_00401BAB: ;
    PUSH32(esp, 0x62D56C);
    PUSH32(esp, 0x00401BB5u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_00401BB5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00401BE3; /* jne: not equal / not zero */

loc_00401BBC: ;
    edx = MEM32(0x6C3890);
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00401BE3; /* jne: not equal / not zero */

loc_00401BC8: ;
    ecx = MEM32(0x692EB0);
    SET_LO8(eax, MEM8(ecx + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00401BE3; /* jne: not equal / not zero */

loc_00401BD5: ;
    eax = MEM32(0x692EA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00401BE3; /* jne: not equal / not zero */

loc_00401BDE: ;
    PUSH32(esp, 0x00401BE3u); RECOMP_ABI_CALL(0x00405450u, sub_00405450); /* call 0x00405450 */

loc_00401BE3: ;
    ecx = MEM32(0x697B88);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00401BF2; /* je: equal / zero */

loc_00401BED: ;
    PUSH32(esp, 0x00401BF2u); RECOMP_ABI_CALL(0x005C3530u, sub_005C3530); /* call 0x005C3530 */

loc_00401BF2: ;
    eax = MEM32(0x6984B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00401C25; /* je: equal / zero */

loc_00401BFB: ;
    eax = MEM32(0x858378);
    esi = MEM32(0x8583A0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00401C0Cu); RECOMP_ABI_CALL(0x005F23A0u, sub_005F23A0); /* call 0x005F23A0 */

loc_00401C0C: ;
    ecx = MEM32(0x6984B4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x00401C1Cu); RECOMP_ABI_CALL(0x004989C0u, sub_004989C0); /* call 0x004989C0 */

loc_00401C1C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00401C22u); RECOMP_ABI_CALL(0x005F23A0u, sub_005F23A0); /* call 0x005F23A0 */

loc_00401C22: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00401C25: ;
    ecx = MEM32(0x69C7D0);
    PUSH32(esp, 0x00401C30u); RECOMP_ABI_CALL(0x005C3530u, sub_005C3530); /* call 0x005C3530 */

loc_00401C30: ;
    ecx = MEM32(0x69C7D0);
    ecx = MEM32(ecx + 0x58);
    PUSH32(esp, 0x00401C3Eu); RECOMP_ABI_CALL(0x005C3530u, sub_005C3530); /* call 0x005C3530 */

loc_00401C3E: ;
    ecx = MEM32(0x699498);
    PUSH32(esp, 0x00401C49u); RECOMP_ABI_CALL(0x004E9290u, sub_004E9290); /* call 0x004E9290 */

loc_00401C49: ;
    ecx = MEM32(0x698624);
    PUSH32(esp, 0x00401C54u); RECOMP_ABI_CALL(0x004AA010u, sub_004AA010); /* call 0x004AA010 */

loc_00401C54: ;
    edx = MEM32(0x6C3890);
    SET_LO8(eax, MEM8(edx + 9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00401C70; /* jne: not equal / not zero */

loc_00401C62: ;
    ecx = MEM32(0x6C8EB8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC4); PUSH32(esp, 0x00401C70u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00401C6Au); } /* indirect call */
    }

loc_00401C70: ;
    eax = MEM32(0x6C38A4);
    SET_LO8(ecx, MEM8(eax + 0x14));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00401C90; /* je: equal / zero */

loc_00401C7C: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00401C90; /* jne: not equal / not zero */

loc_00401C82: ;
    ecx = MEM32(0x697B88);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0x00401C90u); RECOMP_ABI_CALL(0x004869C0u, sub_004869C0); /* call 0x004869C0 */

loc_00401C90: ;
    SET_LO8(eax, MEM8(0x692E79));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(0x692E74);
    if (CMP_EQ(_fa, _fb)) goto loc_00401CA5; /* je: equal / zero */

loc_00401C9E: ;
    MEM8(0x692E79) = 0;

loc_00401CA5: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x692E74) = eax;
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
 * sub_00401CB0
 * Original: 0x00401CB0 - 0x00401E47 (407 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00401CB0: ;
    _fa = (uint32_t)(MEM32(0x6622BC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6622BC), 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00401CD5; /* jle: less or equal (signed <=) */

loc_00401CB9: ;
    PUSH32(esp, 0x62D5C0);
    PUSH32(esp, 0x00401CC3u); RECOMP_ABI_CALL(0x00618610u, sub_00618610); /* call 0x00618610 */

loc_00401CC3: ;
    PUSH32(esp, 0x00401CC8u); RECOMP_ABI_CALL(0x00577380u, sub_00577380); /* call 0x00577380 */

loc_00401CC8: ;
    PUSH32(esp, 0x62D5B8);
    PUSH32(esp, 0x00401CD2u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00401CD2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00401CD5: ;
    eax = MEM32(0x6C3890);
    SET_LO8(ecx, MEM8(eax + 9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00401CE6; /* jne: not equal / not zero */

loc_00401CE1: ;
    PUSH32(esp, 0x00401CE6u); RECOMP_ABI_CALL(0x00613FC0u, sub_00613FC0); /* call 0x00613FC0 */

loc_00401CE6: ;
    ecx = MEM32(0x6C3890);
    SET_LO8(eax, MEM8(ecx + 9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00401CFC; /* jne: not equal / not zero */

loc_00401CF3: ;
    edx = MEM32(0x6797CC);
    PUSH32(esp, edx);
    goto loc_00401CFE;

loc_00401CFC: ;
    PUSH32(esp, 0);

loc_00401CFE: ;
    PUSH32(esp, 0x00401D03u); RECOMP_ABI_CALL(0x005F1D80u, sub_005F1D80); /* call 0x005F1D80 */

loc_00401D03: ;
    eax = MEM32(0x6C3890);
    SET_LO8(ecx, MEM8(eax + 9));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00401DF3; /* jne: not equal / not zero */

loc_00401D16: ;
    eax = MEM32(0x697B88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00401DF3; /* je: equal / zero */

loc_00401D23: ;
    eax = MEM32(0x6C38B4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00401D39; /* jl: less (signed <) */

loc_00401D2F: ;
    _fa = (uint32_t)(MEM32(eax + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x74), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00401DF3; /* jne: not equal / not zero */

loc_00401D39: ;
    ecx = MEM32(0x6C8EEC);
    PUSH32(esp, 0x00401D44u); RECOMP_ABI_CALL(0x00584FB0u, sub_00584FB0); /* call 0x00584FB0 */

loc_00401D44: ;
    PUSH32(esp, 0x00401D49u); RECOMP_ABI_CALL(0x00478590u, sub_00478590); /* call 0x00478590 */

loc_00401D49: ;
    ecx = eax;
    PUSH32(esp, 0x00401D50u); RECOMP_ABI_CALL(0x004782D0u, sub_004782D0); /* call 0x004782D0 */

loc_00401D50: ;
    PUSH32(esp, 0x00401D55u); RECOMP_ABI_CALL(0x00477A40u, sub_00477A40); /* call 0x00477A40 */

loc_00401D55: ;
    ecx = eax;
    PUSH32(esp, 0x00401D5Cu); RECOMP_ABI_CALL(0x00477A50u, sub_00477A50); /* call 0x00477A50 */

loc_00401D5C: ;
    ecx = MEM32(0x69585C);
    PUSH32(esp, 0x00401D67u); RECOMP_ABI_CALL(0x004673B0u, sub_004673B0); /* call 0x004673B0 */

loc_00401D67: ;
    ecx = MEM32(0x69C868);
    PUSH32(esp, 0x00401D72u); RECOMP_ABI_CALL(0x00503F30u, sub_00503F30); /* call 0x00503F30 */

loc_00401D72: ;
    PUSH32(esp, 0x00401D77u); RECOMP_ABI_CALL(0x00509000u, sub_00509000); /* call 0x00509000 */

loc_00401D77: ;
    ecx = MEM32(0x697B88);
    PUSH32(esp, 0x00401D82u); RECOMP_ABI_CALL(0x0047C7A0u, sub_0047C7A0); /* call 0x0047C7A0 */

loc_00401D82: ;
    ecx = MEM32(0x69C7D0);
    PUSH32(esp, 0x00401D8Du); RECOMP_ABI_CALL(0x004FBAA0u, sub_004FBAA0); /* call 0x004FBAA0 */

loc_00401D8D: ;
    ecx = MEM32(0x69947C);
    PUSH32(esp, 0x00401D98u); RECOMP_ABI_CALL(0x004E84D0u, sub_004E84D0); /* call 0x004E84D0 */

loc_00401D98: ;
    ecx = MEM32(0x699498);
    PUSH32(esp, 0x00401DA3u); RECOMP_ABI_CALL(0x004E9260u, sub_004E9260); /* call 0x004E9260 */

loc_00401DA3: ;
    ecx = MEM32(0x6C38B8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00401DB2; /* je: equal / zero */

loc_00401DAD: ;
    PUSH32(esp, 0x00401DB2u); RECOMP_ABI_CALL(0x00541280u, sub_00541280); /* call 0x00541280 */

loc_00401DB2: ;
    ecx = MEM32(0x698624);
    PUSH32(esp, 0x00401DBDu); RECOMP_ABI_CALL(0x004A9F30u, sub_004A9F30); /* call 0x004A9F30 */

loc_00401DBD: ;
    PUSH32(esp, 0x00401DC2u); RECOMP_ABI_CALL(0x004AA890u, sub_004AA890); /* call 0x004AA890 */

loc_00401DC2: ;
    ecx = MEM32(0x6C263C);
    PUSH32(esp, 0x00401DCDu); RECOMP_ABI_CALL(0x00517AB0u, sub_00517AB0); /* call 0x00517AB0 */

loc_00401DCD: ;
    ecx = MEM32(0x6C5304);
    PUSH32(esp, 0x00401DD8u); RECOMP_ABI_CALL(0x00578000u, sub_00578000); /* call 0x00578000 */

loc_00401DD8: ;
    ecx = MEM32(0x69C858);
    PUSH32(esp, 0x00401DE3u); RECOMP_ABI_CALL(0x005031F0u, sub_005031F0); /* call 0x005031F0 */

loc_00401DE3: ;
    SET_LO8(eax, MEM8(0x692E6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00401E0D; /* jne: not equal / not zero */

loc_00401DEC: ;
    PUSH32(esp, 0x00401DF1u); RECOMP_ABI_CALL(0x00505EF0u, sub_00505EF0); /* call 0x00505EF0 */

loc_00401DF1: ;
    goto loc_00401E0D;

loc_00401DF3: ;
    ecx = MEM32(0x69585C);
    PUSH32(esp, 0x00401DFEu); RECOMP_ABI_CALL(0x004673B0u, sub_004673B0); /* call 0x004673B0 */

loc_00401DFE: ;
    ecx = MEM32(0x697B88);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00401E0D; /* je: equal / zero */

loc_00401E08: ;
    PUSH32(esp, 0x00401E0Du); RECOMP_ABI_CALL(0x0047C7A0u, sub_0047C7A0); /* call 0x0047C7A0 */

loc_00401E0D: ;
    ecx = MEM32(0x6984B4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00401E1C; /* je: equal / zero */

loc_00401E17: ;
    PUSH32(esp, 0x00401E1Cu); RECOMP_ABI_CALL(0x00498760u, sub_00498760); /* call 0x00498760 */

loc_00401E1C: ;
    PUSH32(esp, 0x00401E21u); RECOMP_ABI_CALL(0x00417FD0u, sub_00417FD0); /* call 0x00417FD0 */

loc_00401E21: ;
    _fa = (uint32_t)(MEM32(0x6622BC)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6622BC), 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00401E46; /* jle: less or equal (signed <=) */

loc_00401E2A: ;
    PUSH32(esp, 0x62D584);
    PUSH32(esp, 0x00401E34u); RECOMP_ABI_CALL(0x00618610u, sub_00618610); /* call 0x00618610 */

loc_00401E34: ;
    PUSH32(esp, 0x00401E39u); RECOMP_ABI_CALL(0x00577380u, sub_00577380); /* call 0x00577380 */

loc_00401E39: ;
    PUSH32(esp, 0x62D5B8);
    PUSH32(esp, 0x00401E43u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00401E43: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00401E46: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00401E50
 * Original: 0x00401E50 - 0x00401FBB (363 bytes, 101 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00401E50: ;
    ecx = MEM32(0x6C3890);
    MEM8(0x69C7D4) = 0;
    SET_LO8(eax, MEM8(ecx + 9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00401E71; /* je: equal / zero */

loc_00401E64: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00401E6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00401E68u); } /* indirect call */
    }

loc_00401E6B: ;
    ecx = MEM32(0x6C3890);

loc_00401E71: ;
    SET_LO8(eax, MEM8(ecx + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00401E7F; /* je: equal / zero */

loc_00401E78: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00401E7Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00401E7Cu); } /* indirect call */
    }

loc_00401E7F: ;
    PUSH32(esp, 0x00401E84u); RECOMP_ABI_CALL(0x00613F70u, sub_00613F70); /* call 0x00613F70 */

loc_00401E84: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x6CE2E4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00401E94u); RECOMP_ABI_CALL(0x0052AEC0u, sub_0052AEC0); /* call 0x0052AEC0 */

loc_00401E94: ;
    ecx = MEM32(0x69585C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00401EA3; /* je: equal / zero */

loc_00401E9E: ;
    PUSH32(esp, 0x00401EA3u); RECOMP_ABI_CALL(0x00467060u, sub_00467060); /* call 0x00467060 */

loc_00401EA3: ;
    ecx = MEM32(0x697B88);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00401EB2; /* je: equal / zero */

loc_00401EAD: ;
    PUSH32(esp, 0x00401EB2u); RECOMP_ABI_CALL(0x0047C800u, sub_0047C800); /* call 0x0047C800 */

loc_00401EB2: ;
    ecx = MEM32(0x697B90);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00401EC1; /* je: equal / zero */

loc_00401EBC: ;
    PUSH32(esp, 0x00401EC1u); RECOMP_ABI_CALL(0x0047E180u, sub_0047E180); /* call 0x0047E180 */

loc_00401EC1: ;
    ecx = MEM32(0x6C8EEC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00401ED0; /* je: equal / zero */

loc_00401ECB: ;
    PUSH32(esp, 0x00401ED0u); RECOMP_ABI_CALL(0x00580AC0u, sub_00580AC0); /* call 0x00580AC0 */

loc_00401ED0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x6C8EB8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00401EE2; /* je: equal / zero */

loc_00401EDB: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00401EE2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00401EDFu); } /* indirect call */
    }

loc_00401EE2: ;
    ecx = MEM32(0x6C263C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00401EF1; /* je: equal / zero */

loc_00401EEC: ;
    PUSH32(esp, 0x00401EF1u); RECOMP_ABI_CALL(0x00517A80u, sub_00517A80); /* call 0x00517A80 */

loc_00401EF1: ;
    ecx = MEM32(0x699498);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00401F00; /* je: equal / zero */

loc_00401EFB: ;
    PUSH32(esp, 0x00401F00u); RECOMP_ABI_CALL(0x004E9310u, sub_004E9310); /* call 0x004E9310 */

loc_00401F00: ;
    ecx = MEM32(0x6C38B8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00401F0F; /* je: equal / zero */

loc_00401F0A: ;
    PUSH32(esp, 0x00401F0Fu); RECOMP_ABI_CALL(0x005409B0u, sub_005409B0); /* call 0x005409B0 */

loc_00401F0F: ;
    ecx = MEM32(0x69947C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00401F1E; /* je: equal / zero */

loc_00401F19: ;
    PUSH32(esp, 0x00401F1Eu); RECOMP_ABI_CALL(0x004E7D90u, sub_004E7D90); /* call 0x004E7D90 */

loc_00401F1E: ;
    ecx = MEM32(0x698624);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00401F2D; /* je: equal / zero */

loc_00401F28: ;
    PUSH32(esp, 0x00401F2Du); RECOMP_ABI_CALL(0x004A9EF0u, sub_004A9EF0); /* call 0x004A9EF0 */

loc_00401F2D: ;
    SET_LO8(ecx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(0x6629EC) = LO8(eax);
    MEM8(0x662DB8) = LO8(eax);
    PUSH32(esp, 0x00401F45u); RECOMP_ABI_CALL(0x004AA8C0u, sub_004AA8C0); /* call 0x004AA8C0 */

loc_00401F45: ;
    ecx = MEM32(0x69C7D0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00401F54; /* je: equal / zero */

loc_00401F4F: ;
    PUSH32(esp, 0x00401F54u); RECOMP_ABI_CALL(0x004FA240u, sub_004FA240); /* call 0x004FA240 */

loc_00401F54: ;
    PUSH32(esp, 0x00401F59u); RECOMP_ABI_CALL(0x00478590u, sub_00478590); /* call 0x00478590 */

loc_00401F59: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00401F69; /* je: equal / zero */

loc_00401F5D: ;
    PUSH32(esp, 0x00401F62u); RECOMP_ABI_CALL(0x00478590u, sub_00478590); /* call 0x00478590 */

loc_00401F62: ;
    ecx = eax;
    PUSH32(esp, 0x00401F69u); RECOMP_ABI_CALL(0x00478140u, sub_00478140); /* call 0x00478140 */

loc_00401F69: ;
    PUSH32(esp, 0x00401F6Eu); RECOMP_ABI_CALL(0x00505250u, sub_00505250); /* call 0x00505250 */

loc_00401F6E: ;
    PUSH32(esp, 0x00401F73u); RECOMP_ABI_CALL(0x00508FB0u, sub_00508FB0); /* call 0x00508FB0 */

loc_00401F73: ;
    ecx = MEM32(0x69C868);
    PUSH32(esp, 0x00401F7Eu); RECOMP_ABI_CALL(0x00504B00u, sub_00504B00); /* call 0x00504B00 */

loc_00401F7E: ;
    PUSH32(esp, 0x00401F83u); RECOMP_ABI_CALL(0x00477A40u, sub_00477A40); /* call 0x00477A40 */

loc_00401F83: ;
    ecx = eax;
    PUSH32(esp, 0x00401F8Au); RECOMP_ABI_CALL(0x00477A90u, sub_00477A90); /* call 0x00477A90 */

loc_00401F8A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00401F9C; /* je: equal / zero */

loc_00401F8E: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00401F95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00401F92u); } /* indirect call */
    }

loc_00401F95: ;
    ecx = esi;
    PUSH32(esp, 0x00401F9Cu); RECOMP_ABI_CALL(0x00589300u, sub_00589300); /* call 0x00589300 */

loc_00401F9C: ;
    ecx = MEM32(0x6C38B4);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    MEM8(0x696858) = LO8(edx);
    MEM8(0x6C2618) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00401FC0
 * Original: 0x00401FC0 - 0x00401FD0 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401FC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00401FC0: ;
    ecx = MEM32(0x697B88);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00401FCF; /* je: equal / zero */

loc_00401FCA: ;
    g_seh_ebp = ebp; sub_0047C820(); return; /* tail jmp 0x0047C820 */

loc_00401FCF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00401FD0
 * Original: 0x00401FD0 - 0x00402027 (87 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00401FD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00401FD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00401FD8u); RECOMP_ABI_CALL(0x005E33D0u, sub_005E33D0); /* call 0x005E33D0 */

loc_00401FD8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x62D5F8;
    MEM8(esi + 0xC) = LO8(eax);
    ecx = 0x3E800000;
    MEM32(esi + 0x14) = ecx;
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x18) = 0x3F000000;
    PUSH32(esp, 0x62D5F0);
    ecx = esi;
    MEM32(esi + 0x20) = 0x3F19999A;
    MEM32(esi + 0x24) = 0x3FA66666;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = 0x3F800000;
    PUSH32(esp, 0x0040201Cu); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_0040201C: ;
    ecx = esi;
    PUSH32(esp, 0x00402023u); RECOMP_ABI_CALL(0x005E3320u, sub_005E3320); /* call 0x005E3320 */

loc_00402023: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00402030
 * Original: 0x00402030 - 0x00402036 (6 bytes, 2 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00402030(void)
{

loc_00402030: ;
    eax = 0x62D624;
    esp += 4; return; /* ret */

}

/**
 * sub_00402040
 * Original: 0x00402040 - 0x00402064 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00402040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00402040: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x62D5F8;
    PUSH32(esp, 0x0040204Eu); RECOMP_ABI_CALL(0x005E3280u, sub_005E3280); /* call 0x005E3280 */

loc_0040204E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0040205E; /* je: equal / zero */

loc_00402055: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0040205Bu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0040205B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0040205E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00402070
 * Original: 0x00402070 - 0x004020EB (123 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00402070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00402070: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 1);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x62D664);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x0040208Eu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0040208E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x62D658);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004020A4u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004020A4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x62D64C);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004020BAu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004020BA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x62D640);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004020D0u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004020D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x62D634);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004020E6u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004020E6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004020F0
 * Original: 0x004020F0 - 0x00402100 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004020F0(void)
{

loc_004020F0: ;
    eax = ecx;
    MEM32(eax) = 0x62D530;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00402100
 * Original: 0x00402100 - 0x0040211E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00402100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00402100: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00402108u); RECOMP_ABI_CALL(0x00401820u, sub_00401820); /* call 0x00401820 */

loc_00402108: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00402118; /* je: equal / zero */

loc_0040210F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00402115u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00402115: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00402118: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00402120
 * Original: 0x00402120 - 0x00402535 (1045 bytes, 274 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00402120(void)
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

loc_00402120: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x62D6AC);
    ebp = ecx;
    PUSH32(esp, 0x00402134u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00402134: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    PUSH32(esp, 0x00402140u); RECOMP_ABI_CALL(0x00611C60u, sub_00611C60); /* call 0x00611C60 */

loc_00402140: ;
    MEM8(esp + 0xF) = 0;

loc_00402145: ;
    ecx = MEM32(0x6C3890);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00402150u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040214Du); } /* indirect call */
    }

loc_00402150: ;
    PUSH32(esp, 0x00402155u); RECOMP_ABI_CALL(0x00611C40u, sub_00611C40); /* call 0x00611C40 */

loc_00402155: ;
    ecx = MEM32(0x692EB4);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00402164u); RECOMP_ABI_CALL(0x004064E0u, sub_004064E0); /* call 0x004064E0 */

loc_00402164: ;
    ecx = MEM32(0x6C3890);
    eax = MEM32(ecx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0040244D; /* ja: above (unsigned >) */

loc_00402177: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x402538); /* switch: 8 entries, 7 targets */
    if (_jt == 0x0040217Eu) goto loc_0040217E;
    if (_jt == 0x0040219Du) goto loc_0040219D;
    if (_jt == 0x0040225Bu) goto loc_0040225B;
    if (_jt == 0x004022CDu) goto loc_004022CD;
    if (_jt == 0x00402390u) goto loc_00402390;
    if (_jt == 0x004023F1u) goto loc_004023F1;
    if (_jt == 0x00402426u) goto loc_00402426;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0040217E: ;
    PUSH32(esp, 0x62D690);
    PUSH32(esp, 0x00402188u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00402188: ;
    ecx = MEM32(0x6C3890);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00402198u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00402195u); } /* indirect call */
    }

loc_00402198: ;
    goto loc_0040245A;

loc_0040219D: ;
    PUSH32(esp, 0x004021A2u); RECOMP_ABI_CALL(0x005ECFD0u, sub_005ECFD0); /* call 0x005ECFD0 */

loc_004021A2: ;
    ecx = ebp;
    PUSH32(esp, 0x004021A9u); RECOMP_ABI_CALL(0x00401960u, sub_00401960); /* call 0x00401960 */

loc_004021A9: ;
    ecx = ebp;
    PUSH32(esp, 0x004021B0u); RECOMP_ABI_CALL(0x00401CB0u, sub_00401CB0); /* call 0x00401CB0 */

loc_004021B0: ;
    PUSH32(esp, 0x004021B5u); RECOMP_ABI_CALL(0x005ED000u, sub_005ED000); /* call 0x005ED000 */

loc_004021B5: ;
    _fa = (uint32_t)(MEM8(0x858384)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x858384), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00402217; /* je: equal / zero */

loc_004021BE: ;
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x004021C5u); RECOMP_ABI_CALL(0x00611C50u, sub_00611C50); /* call 0x00611C50 */

loc_004021C5: ;
    SET_LO8(eax, MEM8(0x858384));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004021D6; /* je: equal / zero */

loc_004021D1: ;
    PUSH32(esp, 0x004021D6u); RECOMP_ABI_CALL(0x00506CF0u, sub_00506CF0); /* call 0x00506CF0 */

loc_004021D6: ;
    ecx = MEM32(0x6CE2E4);
    PUSH32(esp, 0x004021E1u); RECOMP_ABI_CALL(0x0052B6B0u, sub_0052B6B0); /* call 0x0052B6B0 */

loc_004021E1: ;
    PUSH32(esp, 0x004021E6u); RECOMP_ABI_CALL(0x005D36D0u, sub_005D36D0); /* call 0x005D36D0 */

loc_004021E6: ;
    ecx = ebp;
    PUSH32(esp, 0x004021EDu); RECOMP_ABI_CALL(0x004019B0u, sub_004019B0); /* call 0x004019B0 */

loc_004021ED: ;
    eax = MEM32(0x6C3890);
    SET_LO8(ecx, MEM8(eax + 0xA));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040245A; /* je: equal / zero */

loc_004021FD: ;
    ecx = ebp;
    PUSH32(esp, 0x00402204u); RECOMP_ABI_CALL(0x00401960u, sub_00401960); /* call 0x00401960 */

loc_00402204: ;
    ecx = ebp;
    PUSH32(esp, 0x0040220Bu); RECOMP_ABI_CALL(0x00401CB0u, sub_00401CB0); /* call 0x00401CB0 */

loc_0040220B: ;
    ecx = ebp;
    PUSH32(esp, 0x00402212u); RECOMP_ABI_CALL(0x004019B0u, sub_004019B0); /* call 0x004019B0 */

loc_00402212: ;
    goto loc_0040245A;

loc_00402217: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0040221Eu); RECOMP_ABI_CALL(0x005ED050u, sub_005ED050); /* call 0x005ED050 */

loc_0040221E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp;
    PUSH32(esp, 0x00402228u); RECOMP_ABI_CALL(0x004019C0u, sub_004019C0); /* call 0x004019C0 */

loc_00402228: ;
    ecx = ebp;
    PUSH32(esp, 0x0040222Fu); RECOMP_ABI_CALL(0x004019B0u, sub_004019B0); /* call 0x004019B0 */

loc_0040222F: ;
    ecx = MEM32(0x6C3890);
    SET_LO8(eax, MEM8(ecx + 0xA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00402251; /* je: equal / zero */

loc_0040223C: ;
    ecx = ebp;
    PUSH32(esp, 0x00402243u); RECOMP_ABI_CALL(0x00401960u, sub_00401960); /* call 0x00401960 */

loc_00402243: ;
    ecx = ebp;
    PUSH32(esp, 0x0040224Au); RECOMP_ABI_CALL(0x00401CB0u, sub_00401CB0); /* call 0x00401CB0 */

loc_0040224A: ;
    ecx = ebp;
    PUSH32(esp, 0x00402251u); RECOMP_ABI_CALL(0x004019B0u, sub_004019B0); /* call 0x004019B0 */

loc_00402251: ;
    PUSH32(esp, 0x00402256u); RECOMP_ABI_CALL(0x005ED0C0u, sub_005ED0C0); /* call 0x005ED0C0 */

loc_00402256: ;
    goto loc_0040245A;

loc_0040225B: ;
    PUSH32(esp, 0x00402260u); RECOMP_ABI_CALL(0x00420D00u, sub_00420D00); /* call 0x00420D00 */

loc_00402260: ;
    ecx = eax;
    PUSH32(esp, 0x00402267u); RECOMP_ABI_CALL(0x00420EA0u, sub_00420EA0); /* call 0x00420EA0 */

loc_00402267: ;
    PUSH32(esp, 0x0040226Cu); RECOMP_ABI_CALL(0x00420D00u, sub_00420D00); /* call 0x00420D00 */

loc_0040226C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004022BB; /* je: equal / zero */

loc_00402270: ;
    PUSH32(esp, 0x00402275u); RECOMP_ABI_CALL(0x00420D00u, sub_00420D00); /* call 0x00420D00 */

loc_00402275: ;
    SET_LO8(ecx, MEM8(eax + 0x1C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004022BB; /* jne: not equal / not zero */

loc_0040227C: ;
    PUSH32(esp, 0x00402281u); RECOMP_ABI_CALL(0x005ED9C0u, sub_005ED9C0); /* call 0x005ED9C0 */

loc_00402281: ;
    PUSH32(esp, 0x00402286u); RECOMP_ABI_CALL(0x005EF3F0u, sub_005EF3F0); /* call 0x005EF3F0 */

loc_00402286: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xFF000000u);
    PUSH32(esp, 3);
    PUSH32(esp, 0x00402299u); RECOMP_ABI_CALL(0x005EF420u, sub_005EF420); /* call 0x005EF420 */

loc_00402299: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004022A1u); RECOMP_ABI_CALL(0x00420D00u, sub_00420D00); /* call 0x00420D00 */

loc_004022A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004022B1; /* je: equal / zero */

loc_004022A5: ;
    PUSH32(esp, 0x004022AAu); RECOMP_ABI_CALL(0x00420D00u, sub_00420D00); /* call 0x00420D00 */

loc_004022AA: ;
    ecx = eax;
    PUSH32(esp, 0x004022B1u); RECOMP_ABI_CALL(0x00421050u, sub_00421050); /* call 0x00421050 */

loc_004022B1: ;
    PUSH32(esp, 0x004022B6u); RECOMP_ABI_CALL(0x005F0F00u, sub_005F0F00); /* call 0x005F0F00 */

loc_004022B6: ;
    goto loc_0040245A;

loc_004022BB: ;
    ecx = MEM32(0x6C3890);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004022C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004022C5u); } /* indirect call */
    }

loc_004022C8: ;
    goto loc_0040245A;

loc_004022CD: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x004022D4u); RECOMP_ABI_CALL(0x004025B0u, sub_004025B0); /* call 0x004025B0 */

loc_004022D4: ;
    ecx = eax;
    PUSH32(esp, 0x004022DBu); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_004022DB: ;
    edi = eax;
    SET_LO8(eax, MEM8(0x6622B0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00402311; /* je: equal / zero */

loc_004022E6: ;
    esi = MEM32(0x692E90);
    PUSH32(esp, 0x004022F1u); RECOMP_ABI_CALL(0x00618750u, sub_00618750); /* call 0x00618750 */

loc_004022F1: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1388) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1388 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0040230A; /* jae: above or equal (unsigned >=) */

loc_004022FA: ;
    ecx = 0x1388;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00402307u); RECOMP_ABI_CALL(0x00611C50u, sub_00611C50); /* call 0x00611C50 */

loc_00402307: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0040230A: ;
    MEM8(0x6622B0) = 0;

loc_00402311: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040245A; /* je: equal / zero */

loc_00402319: ;
    esi = MEM32(edi + 0x14);
    PUSH32(esp, 0x00402321u); RECOMP_ABI_CALL(0x005ECFD0u, sub_005ECFD0); /* call 0x005ECFD0 */

loc_00402321: ;
    PUSH32(esp, 0x00402326u); RECOMP_ABI_CALL(0x00613FC0u, sub_00613FC0); /* call 0x00613FC0 */

loc_00402326: ;
    _fa = (uint32_t)(MEM32(0x8582DC)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8582DC), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0040233A; /* jne: not equal / not zero */

loc_0040232F: ;
    ecx = MEM32(0x6C38B4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0040233Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00402337u); } /* indirect call */
    }

loc_0040233A: ;
    ecx = esi;
    PUSH32(esp, 0x00402341u); RECOMP_ABI_CALL(0x00420B70u, sub_00420B70); /* call 0x00420B70 */

loc_00402341: ;
    ecx = edi;
    PUSH32(esp, 0x00402348u); RECOMP_ABI_CALL(0x005C3530u, sub_005C3530); /* call 0x005C3530 */

loc_00402348: ;
    PUSH32(esp, 0x0040234Du); RECOMP_ABI_CALL(0x005ED000u, sub_005ED000); /* call 0x005ED000 */

loc_0040234D: ;
    _fa = (uint32_t)(MEM8(0x858384)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x858384), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00402375; /* je: equal / zero */

loc_00402356: ;
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x0040235Du); RECOMP_ABI_CALL(0x00611C50u, sub_00611C50); /* call 0x00611C50 */

loc_0040235D: ;
    ecx = MEM32(0x6CE2E4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0040236Bu); RECOMP_ABI_CALL(0x0052B6B0u, sub_0052B6B0); /* call 0x0052B6B0 */

loc_0040236B: ;
    PUSH32(esp, 0x00402370u); RECOMP_ABI_CALL(0x005D36D0u, sub_005D36D0); /* call 0x005D36D0 */

loc_00402370: ;
    goto loc_0040245A;

loc_00402375: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0040237Cu); RECOMP_ABI_CALL(0x005ED050u, sub_005ED050); /* call 0x005ED050 */

loc_0040237C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x00402386u); RECOMP_ABI_CALL(0x0041A960u, sub_0041A960); /* call 0x0041A960 */

loc_00402386: ;
    PUSH32(esp, 0x0040238Bu); RECOMP_ABI_CALL(0x005ED0C0u, sub_005ED0C0); /* call 0x005ED0C0 */

loc_0040238B: ;
    goto loc_0040245A;

loc_00402390: ;
    PUSH32(esp, 0x00402395u); RECOMP_ABI_CALL(0x005ECFD0u, sub_005ECFD0); /* call 0x005ECFD0 */

loc_00402395: ;
    PUSH32(esp, 0x0040239Au); RECOMP_ABI_CALL(0x00613FC0u, sub_00613FC0); /* call 0x00613FC0 */

loc_0040239A: ;
    PUSH32(esp, 0x0040239Fu); RECOMP_ABI_CALL(0x0040C150u, sub_0040C150); /* call 0x0040C150 */

loc_0040239F: ;
    ecx = eax;
    PUSH32(esp, 0x004023A6u); RECOMP_ABI_CALL(0x004158F0u, sub_004158F0); /* call 0x004158F0 */

loc_004023A6: ;
    PUSH32(esp, 0x004023ABu); RECOMP_ABI_CALL(0x005ED000u, sub_005ED000); /* call 0x005ED000 */

loc_004023AB: ;
    _fa = (uint32_t)(MEM8(0x858384)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x858384), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00402356; /* jne: not equal / not zero */

loc_004023B4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004023BBu); RECOMP_ABI_CALL(0x005ED050u, sub_005ED050); /* call 0x005ED050 */

loc_004023BB: ;
    eax = MEM32(0x858378);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004023C6u); RECOMP_ABI_CALL(0x005F23A0u, sub_005F23A0); /* call 0x005F23A0 */

loc_004023C6: ;
    ecx = MEM32(0x674F9C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    PUSH32(esp, 0x004023DBu); RECOMP_ABI_CALL(0x005EF420u, sub_005EF420); /* call 0x005EF420 */

loc_004023DB: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004023E3u); RECOMP_ABI_CALL(0x0040C150u, sub_0040C150); /* call 0x0040C150 */

loc_004023E3: ;
    ecx = eax;
    PUSH32(esp, 0x004023EAu); RECOMP_ABI_CALL(0x004155D0u, sub_004155D0); /* call 0x004155D0 */

loc_004023EA: ;
    PUSH32(esp, 0x004023EFu); RECOMP_ABI_CALL(0x005ED0C0u, sub_005ED0C0); /* call 0x005ED0C0 */

loc_004023EF: ;
    goto loc_0040245A;

loc_004023F1: ;
    PUSH32(esp, 0x004023F6u); RECOMP_ABI_CALL(0x00613FC0u, sub_00613FC0); /* call 0x00613FC0 */

loc_004023F6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004023FDu); RECOMP_ABI_CALL(0x005ED4A0u, sub_005ED4A0); /* call 0x005ED4A0 */

loc_004023FD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00402405u); RECOMP_ABI_CALL(0x004198F0u, sub_004198F0); /* call 0x004198F0 */

loc_00402405: ;
    ecx = eax;
    PUSH32(esp, 0x0040240Cu); RECOMP_ABI_CALL(0x00419980u, sub_00419980); /* call 0x00419980 */

loc_0040240C: ;
    PUSH32(esp, 0x00402411u); RECOMP_ABI_CALL(0x004198F0u, sub_004198F0); /* call 0x004198F0 */

loc_00402411: ;
    ecx = eax;
    PUSH32(esp, 0x00402418u); RECOMP_ABI_CALL(0x00419CA0u, sub_00419CA0); /* call 0x00419CA0 */

loc_00402418: ;
    PUSH32(esp, 0x0040241Du); RECOMP_ABI_CALL(0x005ED4C0u, sub_005ED4C0); /* call 0x005ED4C0 */

loc_0040241D: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x00402424u); RECOMP_ABI_CALL(0x00611C50u, sub_00611C50); /* call 0x00611C50 */

loc_00402424: ;
    goto loc_00402457;

loc_00402426: ;
    PUSH32(esp, 1);
    MEM8(esp + 0x13) = 1;
    PUSH32(esp, 0x00402432u); RECOMP_ABI_CALL(0x005ED4A0u, sub_005ED4A0); /* call 0x005ED4A0 */

loc_00402432: ;
    PUSH32(esp, 0x00402437u); RECOMP_ABI_CALL(0x005ED4C0u, sub_005ED4C0); /* call 0x005ED4C0 */

loc_00402437: ;
    PUSH32(esp, 0x0040243Cu); RECOMP_ABI_CALL(0x005C3530u, sub_005C3530); /* call 0x005C3530 */

loc_0040243C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00402443u); RECOMP_ABI_CALL(0x005ED4A0u, sub_005ED4A0); /* call 0x005ED4A0 */

loc_00402443: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0040244Bu); RECOMP_ABI_CALL(0x005ED4C0u, sub_005ED4C0); /* call 0x005ED4C0 */

loc_0040244B: ;
    goto loc_0040245A;

loc_0040244D: ;
    PUSH32(esp, 0x62D680);
    PUSH32(esp, 0x00402457u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_00402457: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0040245A: ;
    edx = MEM32(0x6C3890);
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00402519; /* jne: not equal / not zero */

loc_0040246A: ;
    PUSH32(esp, 0x0040246Fu); RECOMP_ABI_CALL(0x00611C40u, sub_00611C40); /* call 0x00611C40 */

loc_0040246F: ;
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00402485; /* jge: greater or equal (signed >=) */

loc_0040247F: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_00402485: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x8600DC)); /* fmul dword ptr [0x8600dc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D67C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d67c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00402519; /* jp: parity */

loc_0040249C: ;
    /* nop */

loc_004024A0: ;
    eax = MEM32(0x6797CC);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x004024AEu); RECOMP_ABI_CALL(0x00611C40u, sub_00611C40); /* call 0x00611C40 */

loc_004024AE: ;
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_004024C4; /* jge: greater or equal (signed >=) */

loc_004024BE: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_004024C4: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x8600DC)); /* fmul dword ptr [0x8600dc] */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x14) - fp_top()); /* fsubr dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0x6797CC)); /* fdiv dword ptr [0x6797cc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D678)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d678] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00402519; /* jne: not equal / not zero */

loc_004024E1: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004024E8u); RECOMP_ABI_CALL(0x00611C50u, sub_00611C50); /* call 0x00611C50 */

loc_004024E8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004024F0u); RECOMP_ABI_CALL(0x00611C40u, sub_00611C40); /* call 0x00611C40 */

loc_004024F0: ;
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00402506; /* jge: greater or equal (signed >=) */

loc_00402500: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_00402506: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x8600DC)); /* fmul dword ptr [0x8600dc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D67C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d67c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_004024A0; /* jnp: not parity */

loc_00402519: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0040252E; /* jne: not equal / not zero */

loc_00402521: ;
    PUSH32(esp, 0x00402526u); RECOMP_ABI_CALL(0x005ED220u, sub_005ED220); /* call 0x005ED220 */

loc_00402526: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00402145; /* je: equal / zero */

loc_0040252E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_00402560
 * Original: 0x00402560 - 0x0040258D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00402560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00402560: ;
    PUSH32(esp, 0xC2);
    PUSH32(esp, 0x62D6CC);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x00402571u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00402571: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00402585; /* je: equal / zero */

loc_00402578: ;
    ecx = eax;
    PUSH32(esp, 0x0040257Fu); RECOMP_ABI_CALL(0x004020F0u, sub_004020F0); /* call 0x004020F0 */

loc_0040257F: ;
    MEM32(0x692E7C) = eax;
    esp += 4; return; /* ret */

loc_00402585: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x692E7C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00402590
 * Original: 0x00402590 - 0x004025AB (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00402590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00402590: ;
    ecx = MEM32(0x692E88);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004025A0; /* je: equal / zero */

loc_0040259A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004025A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040259Eu); } /* indirect call */
    }

loc_004025A0: ;
    MEM32(0x692E88) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_004025B0
 * Original: 0x004025B0 - 0x004025B6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004025B0(void)
{

loc_004025B0: ;
    eax = MEM32(0x692E88);
    esp += 4; return; /* ret */

}

/**
 * sub_004025C0
 * Original: 0x004025C0 - 0x004025CB (11 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004025C0(void)
{

loc_004025C0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004025D0
 * Original: 0x004025D0 - 0x00402680 (176 bytes, 48 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004025D0(void)
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

loc_004025D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(0x85D1CC) = 0;
    MEM32(0x85D1D0) = 0;
    PUSH32(esp, 0x004025EDu); RECOMP_ABI_CALL(0x00618750u, sub_00618750); /* call 0x00618750 */

loc_004025ED: ;
    esi = MEM32(esp + 0xC);
    ecx = MEM32(edi + esi * 4 + 4);
    MEM32(0x692E84) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004025FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004025FCu); } /* indirect call */
    }

loc_004025FF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x62D700);
    PUSH32(esp, 0x0040260Au); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0040260A: ;
    ecx = MEM32(edi + esi * 4 + 4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00402616u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00402613u); } /* indirect call */
    }

loc_00402616: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00402637; /* jl: less (signed <) */

loc_0040261B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 7 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00402637; /* jg: greater (signed >) */

loc_00402620: ;
    PUSH32(esp, 0x62D6F4);
    PUSH32(esp, 0x0040262Au); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0040262A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00402637; /* jne: not equal / not zero */

loc_00402631: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x67978C); PUSH32(esp, 0x00402637u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00402631u); } /* indirect call */
    }

loc_00402637: ;
    _fa = (uint32_t)(MEM32(0x6622B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6622B8), 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00402645; /* jl: less (signed <) */

loc_00402640: ;
    PUSH32(esp, 0x00402645u); RECOMP_ABI_CALL(0x005E05C0u, sub_005E05C0); /* call 0x005E05C0 */

loc_00402645: ;
    eax = MEM32(0x6C5258);
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = ecx;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00402662; /* jge: greater or equal (signed >=) */

loc_0040265C: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_00402662: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D6F0)); /* fmul dword ptr [0x62d6f0] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x62D6D4);
    PUSH32(esp, 0x00402678u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00402678: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_00402680
 * Original: 0x00402680 - 0x00402732 (178 bytes, 50 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00402680(void)
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

loc_00402680: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x6C5258);
    edx = MEM32(eax + 0x10);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_004026A3; /* jge: greater or equal (signed >=) */

loc_0040269D: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_004026A3: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D6F0)); /* fmul dword ptr [0x62d6f0] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x62D6D4);
    PUSH32(esp, 0x004026B9u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_004026B9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004026C1u); RECOMP_ABI_CALL(0x00618750u, sub_00618750); /* call 0x00618750 */

loc_004026C1: ;
    fp_push(MEMF(0x85D1CC)); /* fld float */
    ecx = MEM32(0x692E84);
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + edx * 4 + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    MEM32(0x692E84) = eax;
    fp_push(MEMF(0x85D1D0)); /* fld float */
    eax = MEM32(ecx);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004026F2u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x004026EFu); } /* indirect call */
    }

loc_004026F2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x62D714);
    PUSH32(esp, 0x004026FDu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_004026FD: ;
    eax = MEM32(0x6622B8);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    POP32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_00402710; /* jl: less (signed <) */

loc_0040270B: ;
    PUSH32(esp, 0x00402710u); RECOMP_ABI_CALL(0x005E05C0u, sub_005E05C0); /* call 0x005E05C0 */

loc_00402710: ;
    PUSH32(esp, 0x00402715u); RECOMP_ABI_CALL(0x005EEC70u, sub_005EEC70); /* call 0x005EEC70 */

loc_00402715: ;
    PUSH32(esp, 0x0040271Au); RECOMP_ABI_CALL(0x005F1A40u, sub_005F1A40); /* call 0x005F1A40 */

loc_0040271A: ;
    PUSH32(esp, 0x0040271Fu); RECOMP_ABI_CALL(0x005F2A30u, sub_005F2A30); /* call 0x005F2A30 */

loc_0040271F: ;
    ecx = MEM32(0x6C8EB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040272E; /* je: equal / zero */

loc_00402729: ;
    PUSH32(esp, 0x0040272Eu); RECOMP_ABI_CALL(0x0057FE40u, sub_0057FE40); /* call 0x0057FE40 */

loc_0040272E: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00402740
 * Original: 0x00402740 - 0x0040276D (45 bytes, 13 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00402740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00402740: ;
    {
        uint32_t _layer = MEM32(esp + 4);
        uint32_t _caller = MEM32(esp);
        mc2_log_layer_unload(_layer, _caller);
        if (_layer == 3 && _caller == 0x004040EFu) {
            esp += 8; return; /* ret 4 */
        }
    }
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + eax * 4 + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0040274Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040274Au); } /* indirect call */
    }

loc_0040274D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x62D74C);
    PUSH32(esp, 0x00402758u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00402758: ;
    eax = MEM32(0x6622B8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0040276A; /* jl: less (signed <) */

loc_00402765: ;
    PUSH32(esp, 0x0040276Au); RECOMP_ABI_CALL(0x005E05C0u, sub_005E05C0); /* call 0x005E05C0 */

loc_0040276A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00402770
 * Original: 0x00402770 - 0x004027CC (92 bytes, 30 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00402770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00402770: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(esi + edi * 4 + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00402781u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040277Eu); } /* indirect call */
    }

loc_00402781: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x62D764);
    PUSH32(esp, 0x0040278Cu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0040278C: ;
    ecx = MEM32(esi + edi * 4 + 4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00402798u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00402795u); } /* indirect call */
    }

loc_00402798: ;
    _fa = (uint32_t)(MEM32(0x6622B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6622B8), 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004027A6; /* jl: less (signed <) */

loc_004027A1: ;
    PUSH32(esp, 0x004027A6u); RECOMP_ABI_CALL(0x005E05C0u, sub_005E05C0); /* call 0x005E05C0 */

loc_004027A6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004027C7; /* jl: less (signed <) */

loc_004027AB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 7 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004027C7; /* jg: greater (signed >) */

loc_004027B0: ;
    PUSH32(esp, 0x62D6F4);
    PUSH32(esp, 0x004027BAu); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_004027BA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004027C7; /* jne: not equal / not zero */

loc_004027C1: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x679790); PUSH32(esp, 0x004027C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004027C1u); } /* indirect call */
    }

loc_004027C7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004027D0
 * Original: 0x004027D0 - 0x004027FA (42 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004027D0(void)
{

loc_004027D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004027DEu); RECOMP_ABI_CALL(0x00402740u, sub_00402740); /* call 0x00402740 */

loc_004027DE: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004027E6u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_004027E6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004027EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004027EAu); } /* indirect call */
    }

loc_004027ED: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004027F5u); RECOMP_ABI_CALL(0x00402770u, sub_00402770); /* call 0x00402770 */

loc_004027F5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00402800
 * Original: 0x00402800 - 0x004028D7 (215 bytes, 57 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00402800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00402800: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x28;
    ecx = edi;
    MEM32(esi) = 0x62D794;
    PUSH32(esp, 0x00402816u); RECOMP_ABI_CALL(0x0040AE70u, sub_0040AE70); /* call 0x0040AE70 */

loc_00402816: ;
    ebx = esi + 0x5C;
    ecx = ebx;
    PUSH32(esp, 0x00402820u); RECOMP_ABI_CALL(0x0040AB30u, sub_0040AB30); /* call 0x0040AB30 */

loc_00402820: ;
    ebp = esi + 0x78;
    ecx = ebp;
    PUSH32(esp, 0x0040282Au); RECOMP_ABI_CALL(0x0040A940u, sub_0040A940); /* call 0x0040A940 */

loc_0040282A: ;
    ecx = esi + 0x94;
    PUSH32(esp, 0x00402835u); RECOMP_ABI_CALL(0x0040A4A0u, sub_0040A4A0); /* call 0x0040A4A0 */

loc_00402835: ;
    ecx = esi + 0xB8;
    PUSH32(esp, 0x00402840u); RECOMP_ABI_CALL(0x00409ED0u, sub_00409ED0); /* call 0x00409ED0 */

loc_00402840: ;
    ecx = esi + 0xD4;
    PUSH32(esp, 0x0040284Bu); RECOMP_ABI_CALL(0x00409DF0u, sub_00409DF0); /* call 0x00409DF0 */

loc_0040284B: ;
    ecx = esi + 0xE8;
    PUSH32(esp, 0x00402856u); RECOMP_ABI_CALL(0x00409A70u, sub_00409A70); /* call 0x00409A70 */

loc_00402856: ;
    ecx = esi + 0x104;
    PUSH32(esp, 0x00402861u); RECOMP_ABI_CALL(0x00409CF0u, sub_00409CF0); /* call 0x00409CF0 */

loc_00402861: ;
    ecx = esi + 0x118;
    PUSH32(esp, 0x0040286Cu); RECOMP_ABI_CALL(0x00409C50u, sub_00409C50); /* call 0x00409C50 */

loc_0040286C: ;
    PUSH32(esp, 0x6622B8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x62D788);
    PUSH32(esp, 0x0040287Du); RECOMP_ABI_CALL(0x00612E30u, sub_00612E30); /* call 0x00612E30 */

loc_0040287D: ;
    PUSH32(esp, 0x6622BC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x62D778);
    PUSH32(esp, 0x0040288Eu); RECOMP_ABI_CALL(0x00612E30u, sub_00612E30); /* call 0x00612E30 */

loc_0040288E: ;
    eax = esi + 0x94;
    MEM32(esi + 0x10) = eax;
    eax = esi + 0xB8;
    MEM32(esi + 0x14) = eax;
    eax = esi + 0xD4;
    MEM32(esi + 0x18) = eax;
    eax = esi + 0xE8;
    MEM32(esi + 0x1C) = eax;
    eax = esi + 0x104;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x20) = eax;
    eax = esi + 0x118;
    MEM32(esi + 4) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebp;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004028E0
 * Original: 0x004028E0 - 0x0040290D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004028E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004028E0: ;
    PUSH32(esp, 0x35);
    PUSH32(esp, 0x62D798);
    PUSH32(esp, 0x12C);
    PUSH32(esp, 0x004028F1u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_004028F1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00402905; /* je: equal / zero */

loc_004028F8: ;
    ecx = eax;
    PUSH32(esp, 0x004028FFu); RECOMP_ABI_CALL(0x00402800u, sub_00402800); /* call 0x00402800 */

loc_004028FF: ;
    MEM32(0x692E88) = eax;
    esp += 4; return; /* ret */

loc_00402905: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x692E88) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00402910
 * Original: 0x00402910 - 0x0040296C (92 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00402910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00402910: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = 0x66228C;
    /* nop */

loc_00402920: ;
    esi = MEM32(ebx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040295D; /* je: equal / zero */

loc_00402927: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040295D; /* je: equal / zero */

loc_0040292B: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00402933u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00402933: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0040293Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00402937u); } /* indirect call */
    }

loc_0040293A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040295D; /* je: equal / zero */

loc_0040293E: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00402946u); RECOMP_ABI_CALL(0x00402740u, sub_00402740); /* call 0x00402740 */

loc_00402946: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0040294Eu); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_0040294E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00402955u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00402952u); } /* indirect call */
    }

loc_00402955: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0040295Du); RECOMP_ABI_CALL(0x00402770u, sub_00402770); /* call 0x00402770 */

loc_0040295D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6622B0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x6622B0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00402920; /* jl: less (signed <) */

loc_00402968: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00402970
 * Original: 0x00402970 - 0x004029C3 (83 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00402970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00402970: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = 0x66228C;
    /* nop */

loc_00402980: ;
    esi = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0040298Au); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_0040298A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00402991u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040298Eu); } /* indirect call */
    }

loc_00402991: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004029B4; /* je: equal / zero */

loc_00402995: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0040299Du); RECOMP_ABI_CALL(0x00402740u, sub_00402740); /* call 0x00402740 */

loc_0040299D: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x004029A5u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_004029A5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004029ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004029A9u); } /* indirect call */
    }

loc_004029AC: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x004029B4u); RECOMP_ABI_CALL(0x00402770u, sub_00402770); /* call 0x00402770 */

loc_004029B4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6622B0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x6622B0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00402980; /* jl: less (signed <) */

loc_004029BF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004029D0
 * Original: 0x004029D0 - 0x00402A40 (112 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004029D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004029D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x62D794;
    PUSH32(esp, 0x004029DEu); RECOMP_ABI_CALL(0x00402970u, sub_00402970); /* call 0x00402970 */

loc_004029DE: ;
    ecx = esi + 0x118;
    PUSH32(esp, 0x004029E9u); RECOMP_ABI_CALL(0x00409C80u, sub_00409C80); /* call 0x00409C80 */

loc_004029E9: ;
    ecx = esi + 0x104;
    PUSH32(esp, 0x004029F4u); RECOMP_ABI_CALL(0x00409D20u, sub_00409D20); /* call 0x00409D20 */

loc_004029F4: ;
    ecx = esi + 0xE8;
    PUSH32(esp, 0x004029FFu); RECOMP_ABI_CALL(0x00409AA0u, sub_00409AA0); /* call 0x00409AA0 */

loc_004029FF: ;
    ecx = esi + 0xD4;
    PUSH32(esp, 0x00402A0Au); RECOMP_ABI_CALL(0x00409E20u, sub_00409E20); /* call 0x00409E20 */

loc_00402A0A: ;
    ecx = esi + 0xB8;
    PUSH32(esp, 0x00402A15u); RECOMP_ABI_CALL(0x00409F00u, sub_00409F00); /* call 0x00409F00 */

loc_00402A15: ;
    ecx = esi + 0x94;
    PUSH32(esp, 0x00402A20u); RECOMP_ABI_CALL(0x0040A4D0u, sub_0040A4D0); /* call 0x0040A4D0 */

loc_00402A20: ;
    ecx = esi + 0x78;
    PUSH32(esp, 0x00402A28u); RECOMP_ABI_CALL(0x0040A970u, sub_0040A970); /* call 0x0040A970 */

loc_00402A28: ;
    ecx = esi + 0x5C;
    PUSH32(esp, 0x00402A30u); RECOMP_ABI_CALL(0x0040AB60u, sub_0040AB60); /* call 0x0040AB60 */

loc_00402A30: ;
    ecx = esi + 0x28;
    PUSH32(esp, 0x00402A38u); RECOMP_ABI_CALL(0x0040AEB0u, sub_0040AEB0); /* call 0x0040AEB0 */

loc_00402A38: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00614360(); return; /* tail jmp 0x00614360 */

}

/**
 * sub_00402A40
 * Original: 0x00402A40 - 0x00402A5E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00402A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00402A40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00402A48u); RECOMP_ABI_CALL(0x004029D0u, sub_004029D0); /* call 0x004029D0 */

loc_00402A48: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00402A58; /* je: equal / zero */

loc_00402A4F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00402A55u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00402A55: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00402A58: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00402A60
 * Original: 0x00402A60 - 0x00402A8A (42 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00402A60(void)
{

loc_00402A60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00402A6Eu); RECOMP_ABI_CALL(0x004025D0u, sub_004025D0); /* call 0x004025D0 */

loc_00402A6E: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00402A76u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00402A76: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00402A7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00402A7Au); } /* indirect call */
    }

loc_00402A7D: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00402A85u); RECOMP_ABI_CALL(0x00402680u, sub_00402680); /* call 0x00402680 */

loc_00402A85: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00402A90
 * Original: 0x00402A90 - 0x00402AB8 (40 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00402A90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00402A90: ;
    ecx = MEM32(esp + 4);
    edx = ZX8(MEM8(ecx + 0x85F898));
    eax = ZX8(MEM8(ecx + 0x85F998));
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = MEM32(0x85F888);
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ZX8(MEM8(edx + ecx + 0x85F898));
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00402AC0
 * Original: 0x00402AC0 - 0x00402ACC (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00402AC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00402AC0: ;
    PUSH32(esp, 0x00402AC5u); RECOMP_ABI_CALL(0x004025B0u, sub_004025B0); /* call 0x004025B0 */

loc_00402AC5: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_00402970(); return; /* tail jmp 0x00402970 */

}

/**
 * sub_00402AD0
 * Original: 0x00402AD0 - 0x00402AE5 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00402AD0(void)
{

loc_00402AD0: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x67978C); PUSH32(esp, 0x00402AD6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00402AD0u); } /* indirect call */
    }

loc_00402AD6: ;
    eax = MEM32(0x6C5258);
    ecx = MEM32(eax + 0x10);
    MEM32(0x692E8C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00402AF0
 * Original: 0x00402AF0 - 0x00402B18 (40 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00402AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00402AF0: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x679790); PUSH32(esp, 0x00402AF6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00402AF0u); } /* indirect call */
    }

loc_00402AF6: ;
    eax = MEM32(0x6C5258);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(0x692E8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00402B17; /* je: equal / zero */

loc_00402B08: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x62D7A4);
    PUSH32(esp, 0x00402B14u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_00402B14: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00402B17: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00402B20
 * Original: 0x00402B20 - 0x00402E00 (736 bytes, 247 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00402B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00402B20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00402B2Cu); RECOMP_ABI_CALL(0x004025B0u, sub_004025B0); /* call 0x004025B0 */

loc_00402B2C: ;
    ebp = eax;
    ecx = ebp;
    PUSH32(esp, 0x00402B35u); RECOMP_ABI_CALL(0x00402970u, sub_00402970); /* call 0x00402970 */

loc_00402B35: ;
    PUSH32(esp, 0x00402B3Au); RECOMP_ABI_CALL(0x00539E30u, sub_00539E30); /* call 0x00539E30 */

loc_00402B3A: ;
    PUSH32(esp, 0x62D86C);
    PUSH32(esp, 0x00402B44u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_00402B44: ;
    PUSH32(esp, 0x62D858);
    MEM8(esp + 0x19) = LO8(eax);
    PUSH32(esp, 0x00402B52u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_00402B52: ;
    PUSH32(esp, 0x62D844);
    MEM8(esp + 0x1E) = LO8(eax);
    PUSH32(esp, 0x00402B60u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_00402B60: ;
    PUSH32(esp, 0x62D838);
    MEM8(esp + 0x23) = LO8(eax);
    PUSH32(esp, 0x00402B6Eu); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_00402B6E: ;
    MEM8(esp + 0x20) = LO8(eax);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    edi = 0x62D830;
    PUSH32(esp, 0x62D824);
    MEM32(esp + 0x30) = edi;
    PUSH32(esp, 0x00402B8Du); RECOMP_ABI_CALL(0x00612EB0u, sub_00612EB0); /* call 0x00612EB0 */

loc_00402B8D: ;
    eax = MEM32(esp + 0x30);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    if ((_flags != 0)) goto loc_00402BFA; /* je: equal / zero */

loc_00402BA1: ;
    edi = 0x62D81C;
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
    if ((_flags == 0)) goto loc_00402BBA; /* jne: not equal / not zero */

loc_00402BB3: ;
    ebx = 1;
    goto loc_00402BFF;

loc_00402BBA: ;
    edi = 0x62D810;
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
    if ((_flags == 0)) goto loc_00402BD3; /* jne: not equal / not zero */

loc_00402BCC: ;
    ebx = 2;
    goto loc_00402BFF;

loc_00402BD3: ;
    edi = 0x62D808;
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
    if ((_flags == 0)) goto loc_00402BEC; /* jne: not equal / not zero */

loc_00402BE5: ;
    ebx = 3;
    goto loc_00402BFF;

loc_00402BEC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x62D7D0);
    PUSH32(esp, 0x00402BF7u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_00402BF7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00402BFA: ;
    PUSH32(esp, 0x00402BFFu); RECOMP_ABI_CALL(0x00402AD0u, sub_00402AD0); /* call 0x00402AD0 */

loc_00402BFF: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00402C5A; /* je: equal / zero */

loc_00402C07: ;
    PUSH32(esp, 0x62D430);
    PUSH32(esp, 0x00402C11u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_00402C11: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00402C5A; /* jne: not equal / not zero */

loc_00402C18: ;
    PUSH32(esp, 6);
    ecx = ebp;
    PUSH32(esp, 0x00402C21u); RECOMP_ABI_CALL(0x004025D0u, sub_004025D0); /* call 0x004025D0 */

loc_00402C21: ;
    PUSH32(esp, 6);
    ecx = ebp;
    PUSH32(esp, 0x00402C2Au); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00402C2A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00402C31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00402C2Eu); } /* indirect call */
    }

loc_00402C31: ;
    PUSH32(esp, 6);
    ecx = ebp;
    PUSH32(esp, 0x00402C3Au); RECOMP_ABI_CALL(0x00402680u, sub_00402680); /* call 0x00402680 */

loc_00402C3A: ;
    PUSH32(esp, 6);
    ecx = ebp;
    PUSH32(esp, 0x00402C43u); RECOMP_ABI_CALL(0x00402740u, sub_00402740); /* call 0x00402740 */

loc_00402C43: ;
    PUSH32(esp, 6);
    ecx = ebp;
    PUSH32(esp, 0x00402C4Cu); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00402C4C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00402C53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00402C50u); } /* indirect call */
    }

loc_00402C53: ;
    PUSH32(esp, 6);
    goto loc_00402DD1;

loc_00402C5A: ;
    PUSH32(esp, 0);
    ecx = ebp;
    PUSH32(esp, 0x00402C63u); RECOMP_ABI_CALL(0x004025D0u, sub_004025D0); /* call 0x004025D0 */

loc_00402C63: ;
    PUSH32(esp, 0);
    ecx = ebp;
    PUSH32(esp, 0x00402C6Cu); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00402C6C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00402C73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00402C70u); } /* indirect call */
    }

loc_00402C73: ;
    PUSH32(esp, 0);
    ecx = ebp;
    PUSH32(esp, 0x00402C7Cu); RECOMP_ABI_CALL(0x00402680u, sub_00402680); /* call 0x00402680 */

loc_00402C7C: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00402DB6; /* jne: not equal / not zero */

loc_00402C88: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00402C92; /* jne: not equal / not zero */

loc_00402C8D: ;
    PUSH32(esp, 0x00402C92u); RECOMP_ABI_CALL(0x00402AD0u, sub_00402AD0); /* call 0x00402AD0 */

loc_00402C92: ;
    PUSH32(esp, 1);
    ecx = ebp;
    PUSH32(esp, 0x00402C9Bu); RECOMP_ABI_CALL(0x004025D0u, sub_004025D0); /* call 0x004025D0 */

loc_00402C9B: ;
    PUSH32(esp, 1);
    ecx = ebp;
    PUSH32(esp, 0x00402CA4u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00402CA4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00402CABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00402CA8u); } /* indirect call */
    }

loc_00402CAB: ;
    PUSH32(esp, 1);
    ecx = ebp;
    PUSH32(esp, 0x00402CB4u); RECOMP_ABI_CALL(0x00402680u, sub_00402680); /* call 0x00402680 */

loc_00402CB4: ;
    PUSH32(esp, 3);
    ecx = ebp;
    PUSH32(esp, 0x00402CBDu); RECOMP_ABI_CALL(0x004025D0u, sub_004025D0); /* call 0x004025D0 */

loc_00402CBD: ;
    PUSH32(esp, 3);
    ecx = ebp;
    PUSH32(esp, 0x00402CC6u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00402CC6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00402CCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00402CCAu); } /* indirect call */
    }

loc_00402CCD: ;
    PUSH32(esp, 3);
    ecx = ebp;
    PUSH32(esp, 0x00402CD6u); RECOMP_ABI_CALL(0x00402680u, sub_00402680); /* call 0x00402680 */

loc_00402CD6: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00402D68; /* jne: not equal / not zero */

loc_00402CE2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00402CEC; /* jne: not equal / not zero */

loc_00402CE7: ;
    PUSH32(esp, 0x00402CECu); RECOMP_ABI_CALL(0x00402AD0u, sub_00402AD0); /* call 0x00402AD0 */

loc_00402CEC: ;
    PUSH32(esp, 2);
    ecx = ebp;
    PUSH32(esp, 0x00402CF5u); RECOMP_ABI_CALL(0x004025D0u, sub_004025D0); /* call 0x004025D0 */

loc_00402CF5: ;
    PUSH32(esp, 2);
    ecx = ebp;
    PUSH32(esp, 0x00402CFEu); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00402CFE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00402D05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00402D02u); } /* indirect call */
    }

loc_00402D05: ;
    PUSH32(esp, 2);
    ecx = ebp;
    PUSH32(esp, 0x00402D0Eu); RECOMP_ABI_CALL(0x00402680u, sub_00402680); /* call 0x00402680 */

loc_00402D0E: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00402D3C; /* jne: not equal / not zero */

loc_00402D16: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00402D20; /* jne: not equal / not zero */

loc_00402D1B: ;
    PUSH32(esp, 0x00402D20u); RECOMP_ABI_CALL(0x00402AD0u, sub_00402AD0); /* call 0x00402AD0 */

loc_00402D20: ;
    PUSH32(esp, 4);
    ecx = ebp;
    PUSH32(esp, 0x00402D29u); RECOMP_ABI_CALL(0x00402A60u, sub_00402A60); /* call 0x00402A60 */

loc_00402D29: ;
    PUSH32(esp, 4);
    ecx = ebp;
    PUSH32(esp, 0x00402D32u); RECOMP_ABI_CALL(0x004027D0u, sub_004027D0); /* call 0x004027D0 */

loc_00402D32: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00402D3C; /* jne: not equal / not zero */

loc_00402D37: ;
    PUSH32(esp, 0x00402D3Cu); RECOMP_ABI_CALL(0x00402AF0u, sub_00402AF0); /* call 0x00402AF0 */

loc_00402D3C: ;
    PUSH32(esp, 2);
    ecx = ebp;
    PUSH32(esp, 0x00402D45u); RECOMP_ABI_CALL(0x00402740u, sub_00402740); /* call 0x00402740 */

loc_00402D45: ;
    PUSH32(esp, 2);
    ecx = ebp;
    PUSH32(esp, 0x00402D4Eu); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00402D4E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00402D55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00402D52u); } /* indirect call */
    }

loc_00402D55: ;
    PUSH32(esp, 2);
    ecx = ebp;
    PUSH32(esp, 0x00402D5Eu); RECOMP_ABI_CALL(0x00402770u, sub_00402770); /* call 0x00402770 */

loc_00402D5E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00402D68; /* jne: not equal / not zero */

loc_00402D63: ;
    PUSH32(esp, 0x00402D68u); RECOMP_ABI_CALL(0x00402AF0u, sub_00402AF0); /* call 0x00402AF0 */

loc_00402D68: ;
    PUSH32(esp, 3);
    ecx = ebp;
    PUSH32(esp, 0x00402D71u); RECOMP_ABI_CALL(0x00402740u, sub_00402740); /* call 0x00402740 */

loc_00402D71: ;
    PUSH32(esp, 3);
    ecx = ebp;
    PUSH32(esp, 0x00402D7Au); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00402D7A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00402D81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00402D7Eu); } /* indirect call */
    }

loc_00402D81: ;
    PUSH32(esp, 3);
    ecx = ebp;
    PUSH32(esp, 0x00402D8Au); RECOMP_ABI_CALL(0x00402770u, sub_00402770); /* call 0x00402770 */

loc_00402D8A: ;
    PUSH32(esp, 1);
    ecx = ebp;
    PUSH32(esp, 0x00402D93u); RECOMP_ABI_CALL(0x00402740u, sub_00402740); /* call 0x00402740 */

loc_00402D93: ;
    PUSH32(esp, 1);
    ecx = ebp;
    PUSH32(esp, 0x00402D9Cu); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00402D9C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00402DA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00402DA0u); } /* indirect call */
    }

loc_00402DA3: ;
    PUSH32(esp, 1);
    ecx = ebp;
    PUSH32(esp, 0x00402DACu); RECOMP_ABI_CALL(0x00402770u, sub_00402770); /* call 0x00402770 */

loc_00402DAC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00402DB6; /* jne: not equal / not zero */

loc_00402DB1: ;
    PUSH32(esp, 0x00402DB6u); RECOMP_ABI_CALL(0x00402AF0u, sub_00402AF0); /* call 0x00402AF0 */

loc_00402DB6: ;
    PUSH32(esp, 0);
    ecx = ebp;
    PUSH32(esp, 0x00402DBFu); RECOMP_ABI_CALL(0x00402740u, sub_00402740); /* call 0x00402740 */

loc_00402DBF: ;
    PUSH32(esp, 0);
    ecx = ebp;
    PUSH32(esp, 0x00402DC8u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00402DC8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00402DCFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00402DCCu); } /* indirect call */
    }

loc_00402DCF: ;
    PUSH32(esp, 0);

loc_00402DD1: ;
    ecx = ebp;
    PUSH32(esp, 0x00402DD8u); RECOMP_ABI_CALL(0x00402770u, sub_00402770); /* call 0x00402770 */

loc_00402DD8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00402DE5; /* jne: not equal / not zero */

loc_00402DE0: ;
    PUSH32(esp, 0x00402DE5u); RECOMP_ABI_CALL(0x00402AF0u, sub_00402AF0); /* call 0x00402AF0 */

loc_00402DE5: ;
    PUSH32(esp, 0x00402DEAu); RECOMP_ABI_CALL(0x005EECA0u, sub_005EECA0); /* call 0x005EECA0 */

loc_00402DEA: ;
    PUSH32(esp, 0x00402DEFu); RECOMP_ABI_CALL(0x005F2A10u, sub_005F2A10); /* call 0x005F2A10 */

loc_00402DEF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00402DF6u); RECOMP_ABI_CALL(0x00619525u, sub_00619525); /* call 0x00619525 */

loc_00402DF6: ;
    /* int3: debug-trap slide byte, stepped over */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */

    g_seh_ebp = ebp; sub_00402E00(); return; /* fallthrough 0x00402E00 */

}

/**
 * sub_00402E00
 * Original: 0x00402E00 - 0x00402E0A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00402E00(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00402E00: ;
    fp_push(MEMF(ecx + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0x48)); /* fdiv dword ptr [ecx + 0x48] */
    MEMF(ecx + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00402E10
 * Original: 0x00402E10 - 0x00402EAD (157 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00402E10(void)
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

loc_00402E10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00402E18u); RECOMP_ABI_CALL(0x00402E00u, sub_00402E00); /* call 0x00402E00 */

loc_00402E18: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00402E2A; /* jne: not equal / not zero */

loc_00402E1E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00402E25u); RECOMP_ABI_CALL(0x006142B0u, sub_006142B0); /* call 0x006142B0 */

loc_00402E25: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00402E3A;

loc_00402E2A: ;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00402E37u); RECOMP_ABI_CALL(0x00614300u, sub_00614300); /* call 0x00614300 */

loc_00402E37: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00402E3A: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00402E61; /* jne: not equal / not zero */

loc_00402E40: ;
    fp_push(MEMF(esi + 0x50)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00402E61; /* jne: not equal / not zero */

loc_00402E50: ;
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 0x50)); /* fdiv dword ptr [esi + 0x50] */
    MEMF(0x6797E0) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00402E6B;

loc_00402E61: ;
    MEM32(0x6797E0) = 0x3DCCCCCD;

loc_00402E6B: ;
    ecx = MEM32(0x6C263C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x6797E4) = 0x38D1B717;
    if (CMP_EQ(_fa, _fb)) goto loc_00402E9A; /* je: equal / zero */

loc_00402E7F: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00402E89; /* jne: not equal / not zero */

loc_00402E85: ;
    PUSH32(esp, 0x1E);
    goto loc_00402E95;

loc_00402E89: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00402E93; /* jne: not equal / not zero */

loc_00402E8F: ;
    PUSH32(esp, 0x1E);
    goto loc_00402E95;

loc_00402E93: ;
    PUSH32(esp, 0x3C);

loc_00402E95: ;
    PUSH32(esp, 0x00402E9Au); RECOMP_ABI_CALL(0x00518350u, sub_00518350); /* call 0x00518350 */

loc_00402E9A: ;
    esi = MEM32(esi + 0x58);
    _fa = (uint32_t)(MEM32(0x675030)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x675030), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00402EAB; /* je: equal / zero */

loc_00402EA5: ;
    MEM32(0x675030) = esi;

loc_00402EAB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00402EB0
 * Original: 0x00402EB0 - 0x00402EF9 (73 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00402EB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00402EB0: ;
    eax = 1;
    edx = 0x42700000;
    MEM32(ecx + 0x40) = eax;
    MEM32(ecx + 0x54) = eax;
    MEM32(ecx + 0x58) = eax;
    MEM32(ecx + 0x50) = 0xBF800000u;
    MEM32(ecx + 0x44) = edx;
    MEM32(ecx + 0x4C) = edx;
    MEM32(ecx + 0x48) = 0x3F800000;
    MEM8(ecx + 0x5C) = 0;
    MEM32(0x858384) = MEM32(0x858384) | 0x10;
    _fa = (uint32_t)(MEM32(0x858384)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x00402EE7u); RECOMP_ABI_CALL(0x00402E10u, sub_00402E10); /* call 0x00402E10 */

loc_00402EE7: ;
    MEM32(0x674F9C) = 0xFF0A0A1Du;
    MEM8(0x85AE84) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00402F00
 * Original: 0x00402F00 - 0x00402F6D (109 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00402F00(void)
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

loc_00402F00: ;
    MEM32(ecx + 0x40) = 0;
    MEM32(ecx + 0x50) = 0xBF800000u;
    fp_push((double)SMEM32(0x6754A4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(0x6754A4)); /* fild */
    MEM32(ecx + 0x48) = 0x3F800000;
    MEM32(ecx + 0x54) = 1;
    MEM32(ecx + 0x58) = 2;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEM8(ecx + 0x5C) = 0;
    MEMF(ecx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(0x858384);
    eax = eax & 0xFFFFFFEFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x858384) = eax;
    PUSH32(esp, 0x00402F57u); RECOMP_ABI_CALL(0x00402E10u, sub_00402E10); /* call 0x00402E10 */

loc_00402F57: ;
    MEM32(0x674F9C) = 0xFF000000u;
    MEM8(0x85AE84) = 0;
    g_seh_ebp = ebp; sub_00539D70(); return; /* tail jmp 0x00539D70 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00402F70
 * Original: 0x00402F70 - 0x004030B5 (325 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00402F70(void)
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

loc_00402F70: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 1;
    ecx = esp + 8;
    eax = 0x42700000;
    PUSH32(esp, ecx);
    MEM32(esi + 0x40) = ebx;
    MEM32(esi + 0x50) = 0x41C80000;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x54) = ebx;
    MEM32(esi + 0x58) = ebx;
    MEM8(esi + 0x5C) = LO8(ebx);
    eax = MEM32(0x6754A4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x62D8B0);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = 2;
    PUSH32(esp, 0x00402FBCu); RECOMP_ABI_CALL(0x00612E30u, sub_00612E30); /* call 0x00612E30 */

loc_00402FBC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00402FEB; /* je: equal / zero */

loc_00402FC3: ;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    MEM32(esi + 0x40) = 0;
    MEM32(esi + 0x54) = ebx;
    MEMF(esi + 0x44) = (float)fp_top(); /* fst */
    MEMF(esi + 0x4C) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x62D8AC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    PUSH32(esp, 0x00402FE4u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00402FE4: ;
    fp_pop(); /* fstp st(0) */
    MEM32(esi + 0x58) = eax;
    goto loc_0040302E;

loc_00402FEB: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x62D8A0);
    PUSH32(esp, 0x00402FFCu); RECOMP_ABI_CALL(0x00612E30u, sub_00612E30); /* call 0x00612E30 */

loc_00402FFC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040300C; /* je: equal / zero */

loc_00403003: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x58) = eax;
    goto loc_0040302B;

loc_0040300C: ;
    PUSH32(esp, 0x62D894);
    PUSH32(esp, 0x00403016u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_00403016: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040302E; /* je: equal / zero */

loc_0040301D: ;
    MEM32(esi + 0x50) = 0xBF800000u;
    MEM32(esi + 0x58) = 0;

loc_0040302B: ;
    MEM32(esi + 0x40) = ebx;

loc_0040302E: ;
    PUSH32(esp, 0x62D888);
    PUSH32(esp, 0x00403038u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_00403038: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00403044; /* je: equal / zero */

loc_0040303F: ;
    MEM8(esi + 0x5C) = LO8(ebx);
    goto loc_00403059;

loc_00403044: ;
    PUSH32(esp, 0x62D87C);
    PUSH32(esp, 0x0040304Eu); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0040304E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00403059; /* je: equal / zero */

loc_00403055: ;
    MEM8(esi + 0x5C) = 0;

loc_00403059: ;
    MEM32(esi + 0x48) = 0x3F800000;
    fp_push(MEMF(0x692E94)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00403088; /* jnp: not parity */

loc_00403073: ;
    SET_LO8(eax, MEM8(0x6C3421));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00403088; /* jne: not equal / not zero */

loc_0040307C: ;
    fp_push((double)SMEM32(esi + 0x58)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(0x692E94) / fp_top()); /* fdivr dword ptr [0x692e94] */
    MEMF(esi + 0x48) = (float)fp_top(); fp_pop(); /* fstp */

loc_00403088: ;
    MEM32(0x858384) = MEM32(0x858384) | 0x10;
    _fa = (uint32_t)(MEM32(0x858384)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = esi;
    PUSH32(esp, 0x00403096u); RECOMP_ABI_CALL(0x00402E10u, sub_00402E10); /* call 0x00402E10 */

loc_00403096: ;
    _fa = (uint32_t)(MEM32(0x6C3308)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C3308), ebx (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    POP32(esp, esi);
    MEM32(0x674F9C) = 0xFF0A0A1Du;
    MEM8(0x85AE84) = LO8(ecx);
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
 * sub_004030C0
 * Original: 0x004030C0 - 0x004031AC (236 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004030C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004030C0: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    SET_LO8(eax, MEM8(ebp + 9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004030D7; /* je: equal / zero */

loc_004030CA: ;
    PUSH32(esp, 0x62D8BC);
    PUSH32(esp, 0x004030D4u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_004030D4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004030D7: ;
    eax = MEM32(0x6627D0);
    PUSH32(esp, esi);
    esi = MEM32(0x85D3F8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004030EBu); RECOMP_ABI_CALL(0x00600690u, sub_00600690); /* call 0x00600690 */

loc_004030EB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00403134; /* je: equal / zero */

loc_004030EF: ;
    ecx = MEM32(0x6627D0);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x004030FDu); RECOMP_ABI_CALL(0x00602140u, sub_00602140); /* call 0x00602140 */

loc_004030FD: ;
    edx = MEM32(0x6627D0);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0040310Bu); RECOMP_ABI_CALL(0x006020C0u, sub_006020C0); /* call 0x006020C0 */

loc_0040310B: ;
    eax = MEM32(0x6627D0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00403118u); RECOMP_ABI_CALL(0x00600850u, sub_00600850); /* call 0x00600850 */

loc_00403118: ;
    ecx = MEM32(0x6627D0);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00403126u); RECOMP_ABI_CALL(0x006007C0u, sub_006007C0); /* call 0x006007C0 */

loc_00403126: ;
    edx = MEM32(0x6627D0);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00403134u); RECOMP_ABI_CALL(0x006022A0u, sub_006022A0); /* call 0x006022A0 */

loc_00403134: ;
    ecx = MEM32(0x69585C);
    eax = MEM32(ecx + 0x28);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0040317F; /* jle: less or equal (signed <=) */

loc_00403143: ;
    PUSH32(esp, edi);
    edi = 8;
    /* nop */

loc_00403150: ;
    _fa = (uint32_t)(MEM32(edi + ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00403173; /* je: equal / zero */

loc_00403156: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0040315Cu); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_0040315C: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040316D; /* je: equal / zero */

loc_00403166: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0040316Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040316Au); } /* indirect call */
    }

loc_0040316D: ;
    ecx = MEM32(0x69585C);

loc_00403173: ;
    eax = MEM32(ecx + 0x28);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00403150; /* jl: less (signed <) */

loc_0040317E: ;
    POP32(esp, edi);

loc_0040317F: ;
    MEM8(ebp + 0xA) = 0;
    MEM8(ebp + 9) = 1;
    eax = MEM32(0x697B90);
    ecx = MEM32(eax + 0x4C);
    SET_LO8(eax, MEM8(ecx + 0x487));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_004031AA; /* je: equal / zero */

loc_0040319A: ;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 4), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004031AA; /* jne: not equal / not zero */

loc_004031A0: ;
    MEM32(0x692EA4) = 1;

loc_004031AA: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004031B0
 * Original: 0x004031B0 - 0x004031D3 (35 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004031B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004031B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 9));
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004031CA; /* jne: not equal / not zero */

loc_004031BD: ;
    PUSH32(esp, 0x62D8EC);
    PUSH32(esp, 0x004031C7u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_004031C7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004031CA: ;
    MEM8(esi + 0xA) = LO8(ebx);
    MEM8(esi + 9) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004031E0
 * Original: 0x004031E0 - 0x004032AA (202 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004031E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004031E0: ;
    eax = MEM32(0x6627D0);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x85D3F8);
    ebp = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004031F7u); RECOMP_ABI_CALL(0x00600690u, sub_00600690); /* call 0x00600690 */

loc_004031F7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00403240; /* je: equal / zero */

loc_004031FB: ;
    ecx = MEM32(0x6627D0);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00403209u); RECOMP_ABI_CALL(0x00602140u, sub_00602140); /* call 0x00602140 */

loc_00403209: ;
    edx = MEM32(0x6627D0);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00403217u); RECOMP_ABI_CALL(0x006020C0u, sub_006020C0); /* call 0x006020C0 */

loc_00403217: ;
    eax = MEM32(0x6627D0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00403224u); RECOMP_ABI_CALL(0x00600850u, sub_00600850); /* call 0x00600850 */

loc_00403224: ;
    ecx = MEM32(0x6627D0);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00403232u); RECOMP_ABI_CALL(0x006007C0u, sub_006007C0); /* call 0x006007C0 */

loc_00403232: ;
    edx = MEM32(0x6627D0);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00403240u); RECOMP_ABI_CALL(0x006022A0u, sub_006022A0); /* call 0x006022A0 */

loc_00403240: ;
    SET_LO8(eax, MEM8(ebp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00403254; /* je: equal / zero */

loc_00403247: ;
    PUSH32(esp, 0x62D91C);
    PUSH32(esp, 0x00403251u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00403251: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00403254: ;
    ecx = MEM32(0x69585C);
    eax = MEM32(ecx + 0x28);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0040329F; /* jle: less or equal (signed <=) */

loc_00403263: ;
    PUSH32(esp, edi);
    edi = 8;
    /* nop */

loc_00403270: ;
    _fa = (uint32_t)(MEM32(edi + ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00403293; /* je: equal / zero */

loc_00403276: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0040327Cu); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_0040327C: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040328D; /* je: equal / zero */

loc_00403286: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0040328Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040328Au); } /* indirect call */
    }

loc_0040328D: ;
    ecx = MEM32(0x69585C);

loc_00403293: ;
    eax = MEM32(ecx + 0x28);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00403270; /* jl: less (signed <) */

loc_0040329E: ;
    POP32(esp, edi);

loc_0040329F: ;
    POP32(esp, esi);
    MEM8(ebp + 0xA) = 0;
    MEM8(ebp + 8) = 1;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004032B0
 * Original: 0x004032B0 - 0x004032D3 (35 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004032B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004032B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 8));
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004032CA; /* jne: not equal / not zero */

loc_004032BD: ;
    PUSH32(esp, 0x62D948);
    PUSH32(esp, 0x004032C7u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_004032C7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004032CA: ;
    MEM8(esi + 0xA) = LO8(ebx);
    MEM8(esi + 8) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004032E0
 * Original: 0x004032E0 - 0x004032EB (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004032E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004032E0: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004032EA; /* jne: not equal / not zero */

loc_004032E6: ;
    MEM8(ecx + 0xA) = 1;

loc_004032EA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004032F0
 * Original: 0x004032F0 - 0x004032F8 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004032F0(void)
{

loc_004032F0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004032F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004032F4u); } /* indirect call */
    }

loc_004032F7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00403300
 * Original: 0x00403300 - 0x0040334D (77 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00403300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00403300: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x00403309u); RECOMP_ABI_CALL(0x004025B0u, sub_004025B0); /* call 0x004025B0 */

loc_00403309: ;
    esi = eax;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x00403314u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00403314: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0040331Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403318u); } /* indirect call */
    }

loc_0040331B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00403341; /* je: equal / zero */

loc_0040331F: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x00403328u); RECOMP_ABI_CALL(0x00402740u, sub_00402740); /* call 0x00402740 */

loc_00403328: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x00403331u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00403331: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00403338u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403335u); } /* indirect call */
    }

loc_00403338: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x00403341u); RECOMP_ABI_CALL(0x00402770u, sub_00402770); /* call 0x00402770 */

loc_00403341: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0040334Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403347u); } /* indirect call */
    }

loc_0040334A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00403350
 * Original: 0x00403350 - 0x00403409 (185 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00403350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00403350: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x00403359u); RECOMP_ABI_CALL(0x004025B0u, sub_004025B0); /* call 0x004025B0 */

loc_00403359: ;
    esi = eax;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x00403364u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00403364: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0040336Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403368u); } /* indirect call */
    }

loc_0040336B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00403391; /* je: equal / zero */

loc_0040336F: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x00403378u); RECOMP_ABI_CALL(0x00402740u, sub_00402740); /* call 0x00402740 */

loc_00403378: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x00403381u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00403381: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00403388u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403385u); } /* indirect call */
    }

loc_00403388: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x00403391u); RECOMP_ABI_CALL(0x00402770u, sub_00402770); /* call 0x00402770 */

loc_00403391: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x0040339Au); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_0040339A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004033A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040339Eu); } /* indirect call */
    }

loc_004033A1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004033C7; /* je: equal / zero */

loc_004033A5: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x004033AEu); RECOMP_ABI_CALL(0x00402740u, sub_00402740); /* call 0x00402740 */

loc_004033AE: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x004033B7u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_004033B7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004033BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004033BBu); } /* indirect call */
    }

loc_004033BE: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x004033C7u); RECOMP_ABI_CALL(0x00402770u, sub_00402770); /* call 0x00402770 */

loc_004033C7: ;
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x004033D0u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_004033D0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004033D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004033D4u); } /* indirect call */
    }

loc_004033D7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004033FD; /* je: equal / zero */

loc_004033DB: ;
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x004033E4u); RECOMP_ABI_CALL(0x00402740u, sub_00402740); /* call 0x00402740 */

loc_004033E4: ;
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x004033EDu); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_004033ED: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004033F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004033F1u); } /* indirect call */
    }

loc_004033F4: ;
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x004033FDu); RECOMP_ABI_CALL(0x00402770u, sub_00402770); /* call 0x00402770 */

loc_004033FD: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00403406u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403403u); } /* indirect call */
    }

loc_00403406: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00403410
 * Original: 0x00403410 - 0x00403493 (131 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00403410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00403410: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x00403419u); RECOMP_ABI_CALL(0x004025B0u, sub_004025B0); /* call 0x004025B0 */

loc_00403419: ;
    esi = eax;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x00403424u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00403424: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0040342Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403428u); } /* indirect call */
    }

loc_0040342B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00403451; /* je: equal / zero */

loc_0040342F: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x00403438u); RECOMP_ABI_CALL(0x00402740u, sub_00402740); /* call 0x00402740 */

loc_00403438: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x00403441u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00403441: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00403448u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403445u); } /* indirect call */
    }

loc_00403448: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x00403451u); RECOMP_ABI_CALL(0x00402770u, sub_00402770); /* call 0x00402770 */

loc_00403451: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x0040345Au); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_0040345A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00403461u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040345Eu); } /* indirect call */
    }

loc_00403461: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00403487; /* je: equal / zero */

loc_00403465: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x0040346Eu); RECOMP_ABI_CALL(0x00402740u, sub_00402740); /* call 0x00402740 */

loc_0040346E: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x00403477u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00403477: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0040347Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040347Bu); } /* indirect call */
    }

loc_0040347E: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x00403487u); RECOMP_ABI_CALL(0x00402770u, sub_00402770); /* call 0x00402770 */

loc_00403487: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00403490u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040348Du); } /* indirect call */
    }

loc_00403490: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004034A0
 * Original: 0x004034A0 - 0x004034EB (75 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004034A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004034A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x004034A9u); RECOMP_ABI_CALL(0x004025B0u, sub_004025B0); /* call 0x004025B0 */

loc_004034A9: ;
    esi = eax;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x004034B4u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_004034B4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004034BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004034B8u); } /* indirect call */
    }

loc_004034BB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004034DF; /* je: equal / zero */

loc_004034BF: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x004034C8u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_004034C8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004034CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004034CCu); } /* indirect call */
    }

loc_004034CF: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x004034D8u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_004034D8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004034DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004034DCu); } /* indirect call */
    }

loc_004034DF: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004034E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004034E5u); } /* indirect call */
    }

loc_004034E8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004034F0
 * Original: 0x004034F0 - 0x00403615 (293 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004034F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004034F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x004034F9u); RECOMP_ABI_CALL(0x004025B0u, sub_004025B0); /* call 0x004025B0 */

loc_004034F9: ;
    esi = eax;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x00403504u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00403504: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0040350Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403508u); } /* indirect call */
    }

loc_0040350B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00403531; /* je: equal / zero */

loc_0040350F: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x00403518u); RECOMP_ABI_CALL(0x00402740u, sub_00402740); /* call 0x00402740 */

loc_00403518: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x00403521u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00403521: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00403528u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403525u); } /* indirect call */
    }

loc_00403528: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x00403531u); RECOMP_ABI_CALL(0x00402770u, sub_00402770); /* call 0x00402770 */

loc_00403531: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x0040353Au); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_0040353A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00403541u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040353Eu); } /* indirect call */
    }

loc_00403541: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00403567; /* je: equal / zero */

loc_00403545: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x0040354Eu); RECOMP_ABI_CALL(0x00402740u, sub_00402740); /* call 0x00402740 */

loc_0040354E: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x00403557u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00403557: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0040355Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040355Bu); } /* indirect call */
    }

loc_0040355E: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x00403567u); RECOMP_ABI_CALL(0x00402770u, sub_00402770); /* call 0x00402770 */

loc_00403567: ;
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x00403570u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00403570: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00403577u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403574u); } /* indirect call */
    }

loc_00403577: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040359D; /* je: equal / zero */

loc_0040357B: ;
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x00403584u); RECOMP_ABI_CALL(0x00402740u, sub_00402740); /* call 0x00402740 */

loc_00403584: ;
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x0040358Du); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_0040358D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00403594u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403591u); } /* indirect call */
    }

loc_00403594: ;
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x0040359Du); RECOMP_ABI_CALL(0x00402770u, sub_00402770); /* call 0x00402770 */

loc_0040359D: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x004035A6u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_004035A6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004035ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004035AAu); } /* indirect call */
    }

loc_004035AD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004035D3; /* je: equal / zero */

loc_004035B1: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x004035BAu); RECOMP_ABI_CALL(0x00402740u, sub_00402740); /* call 0x00402740 */

loc_004035BA: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x004035C3u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_004035C3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004035CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004035C7u); } /* indirect call */
    }

loc_004035CA: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x004035D3u); RECOMP_ABI_CALL(0x00402770u, sub_00402770); /* call 0x00402770 */

loc_004035D3: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x004035DCu); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_004035DC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004035E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004035E0u); } /* indirect call */
    }

loc_004035E3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00403609; /* je: equal / zero */

loc_004035E7: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x004035F0u); RECOMP_ABI_CALL(0x00402740u, sub_00402740); /* call 0x00402740 */

loc_004035F0: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x004035F9u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_004035F9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00403600u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004035FDu); } /* indirect call */
    }

loc_00403600: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00403609u); RECOMP_ABI_CALL(0x00402770u, sub_00402770); /* call 0x00402770 */

loc_00403609: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00403612u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040360Fu); } /* indirect call */
    }

loc_00403612: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00403620
 * Original: 0x00403620 - 0x00403628 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00403620(void)
{

loc_00403620: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00403627u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403624u); } /* indirect call */
    }

loc_00403627: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00403630
 * Original: 0x00403630 - 0x00403638 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00403630(void)
{

loc_00403630: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00403637u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403634u); } /* indirect call */
    }

loc_00403637: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00403640
 * Original: 0x00403640 - 0x004036F9 (185 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00403640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00403640: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x00403649u); RECOMP_ABI_CALL(0x004025B0u, sub_004025B0); /* call 0x004025B0 */

loc_00403649: ;
    esi = eax;
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x00403654u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00403654: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0040365Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403658u); } /* indirect call */
    }

loc_0040365B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00403681; /* je: equal / zero */

loc_0040365F: ;
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x00403668u); RECOMP_ABI_CALL(0x00402740u, sub_00402740); /* call 0x00402740 */

loc_00403668: ;
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x00403671u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00403671: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00403678u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403675u); } /* indirect call */
    }

loc_00403678: ;
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x00403681u); RECOMP_ABI_CALL(0x00402770u, sub_00402770); /* call 0x00402770 */

loc_00403681: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x0040368Au); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_0040368A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00403691u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040368Eu); } /* indirect call */
    }

loc_00403691: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004036B7; /* je: equal / zero */

loc_00403695: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x0040369Eu); RECOMP_ABI_CALL(0x00402740u, sub_00402740); /* call 0x00402740 */

loc_0040369E: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x004036A7u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_004036A7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004036AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004036ABu); } /* indirect call */
    }

loc_004036AE: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x004036B7u); RECOMP_ABI_CALL(0x00402770u, sub_00402770); /* call 0x00402770 */

loc_004036B7: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x004036C0u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_004036C0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004036C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004036C4u); } /* indirect call */
    }

loc_004036C7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004036ED; /* je: equal / zero */

loc_004036CB: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x004036D4u); RECOMP_ABI_CALL(0x00402740u, sub_00402740); /* call 0x00402740 */

loc_004036D4: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x004036DDu); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_004036DD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004036E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004036E1u); } /* indirect call */
    }

loc_004036E4: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x004036EDu); RECOMP_ABI_CALL(0x00402770u, sub_00402770); /* call 0x00402770 */

loc_004036ED: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004036F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004036F3u); } /* indirect call */
    }

loc_004036F6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00403700
 * Original: 0x00403700 - 0x00403708 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00403700(void)
{

loc_00403700: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00403707u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403704u); } /* indirect call */
    }

loc_00403707: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00403710
 * Original: 0x00403710 - 0x0040375D (77 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00403710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00403710: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x00403719u); RECOMP_ABI_CALL(0x004025B0u, sub_004025B0); /* call 0x004025B0 */

loc_00403719: ;
    esi = eax;
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x00403724u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00403724: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0040372Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403728u); } /* indirect call */
    }

loc_0040372B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00403751; /* je: equal / zero */

loc_0040372F: ;
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x00403738u); RECOMP_ABI_CALL(0x00402740u, sub_00402740); /* call 0x00402740 */

loc_00403738: ;
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x00403741u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00403741: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00403748u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403745u); } /* indirect call */
    }

loc_00403748: ;
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x00403751u); RECOMP_ABI_CALL(0x00402770u, sub_00402770); /* call 0x00402770 */

loc_00403751: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0040375Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403757u); } /* indirect call */
    }

loc_0040375A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00403760
 * Original: 0x00403760 - 0x00403768 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00403760(void)
{

loc_00403760: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00403767u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403764u); } /* indirect call */
    }

loc_00403767: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00403770
 * Original: 0x00403770 - 0x00403778 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00403770(void)
{

loc_00403770: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 7);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00403777u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403774u); } /* indirect call */
    }

loc_00403777: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00403780
 * Original: 0x00403780 - 0x0040379A (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00403780(void)
{

loc_00403780: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00403788u); RECOMP_ABI_CALL(0x004025B0u, sub_004025B0); /* call 0x004025B0 */

loc_00403788: ;
    ecx = eax;
    PUSH32(esp, 0x0040378Fu); RECOMP_ABI_CALL(0x00402910u, sub_00402910); /* call 0x00402910 */

loc_0040378F: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00403798u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403795u); } /* indirect call */
    }

loc_00403798: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004037A0
 * Original: 0x004037A0 - 0x004037A8 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004037A0(void)
{

loc_004037A0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004037A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004037A4u); } /* indirect call */
    }

loc_004037A7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004037B0
 * Original: 0x004037B0 - 0x004037CE (30 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004037B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004037B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x14) = eax;
    if ((_fa != 0)) goto loc_004037CC; /* jne: not equal / not zero */

loc_004037BC: ;
    PUSH32(esp, 0x004037C1u); RECOMP_ABI_CALL(0x005F3E40u, sub_005F3E40); /* call 0x005F3E40 */

loc_004037C1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004037C7u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_004037C7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004037CC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004037D0
 * Original: 0x004037D0 - 0x004037EE (30 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004037D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004037D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 8) = eax;
    if ((_fa != 0)) goto loc_004037EC; /* jne: not equal / not zero */

loc_004037DC: ;
    PUSH32(esp, 0x004037E1u); RECOMP_ABI_CALL(0x005F4E50u, sub_005F4E50); /* call 0x005F4E50 */

loc_004037E1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004037E7u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_004037E7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004037EC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004037F0
 * Original: 0x004037F0 - 0x00403806 (22 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004037F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004037F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x62D968;
    PUSH32(esp, 0x004037FEu); RECOMP_ABI_CALL(0x004014F0u, sub_004014F0); /* call 0x004014F0 */

loc_004037FE: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0053A8E0(); return; /* tail jmp 0x0053A8E0 */

}

/**
 * sub_00403810
 * Original: 0x00403810 - 0x0040383C (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00403810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00403810: ;
    _fa = (uint32_t)(MEM32(ecx + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x3C), 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00403839; /* je: equal / zero */

loc_00403816: ;
    edx = MEM32(ecx + 0x34);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    MEM32(ecx + 0x34) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0040382B; /* jne: not equal / not zero */

loc_00403824: ;
    MEM32(ecx + 0x34) = 0;

loc_0040382B: ;
    eax = MEM32(ecx + 0x34);
    edx = MEM32(esp + 4);
    MEM32(ecx + eax * 4 + 0xC) = edx;
    MEM32(ecx + 0x3C) = MEM32(ecx + 0x3C) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00403839: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00403840
 * Original: 0x00403840 - 0x00403860 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00403840(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00403840: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x62D97C);
    esi = ecx;
    PUSH32(esp, 0x0040384Du); RECOMP_ABI_CALL(0x00613AC0u, sub_00613AC0); /* call 0x00613AC0 */

loc_0040384D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x00403857u); RECOMP_ABI_CALL(0x00402EB0u, sub_00402EB0); /* call 0x00402EB0 */

loc_00403857: ;
    MEM32(esi + 4) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00403860
 * Original: 0x00403860 - 0x004038D8 (120 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00403860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00403860: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x62D984);
    esi = ecx;
    PUSH32(esp, 0x0040386Du); RECOMP_ABI_CALL(0x00613AC0u, sub_00613AC0); /* call 0x00613AC0 */

loc_0040386D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x00403877u); RECOMP_ABI_CALL(0x00402F00u, sub_00402F00); /* call 0x00402F00 */

loc_00403877: ;
    PUSH32(esp, 0x0040387Cu); RECOMP_ABI_CALL(0x004025B0u, sub_004025B0); /* call 0x004025B0 */

loc_0040387C: ;
    esi = eax;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x00403887u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00403887: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0040388Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040388Bu); } /* indirect call */
    }

loc_0040388E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004038B4; /* je: equal / zero */

loc_00403892: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x0040389Bu); RECOMP_ABI_CALL(0x00402740u, sub_00402740); /* call 0x00402740 */

loc_0040389B: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x004038A4u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_004038A4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004038ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004038A8u); } /* indirect call */
    }

loc_004038AB: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x004038B4u); RECOMP_ABI_CALL(0x00402770u, sub_00402770); /* call 0x00402770 */

loc_004038B4: ;
    PUSH32(esp, 5);
    ecx = esi;
    PUSH32(esp, 0x004038BDu); RECOMP_ABI_CALL(0x004025D0u, sub_004025D0); /* call 0x004025D0 */

loc_004038BD: ;
    PUSH32(esp, 5);
    ecx = esi;
    PUSH32(esp, 0x004038C6u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_004038C6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004038CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004038CAu); } /* indirect call */
    }

loc_004038CD: ;
    PUSH32(esp, 5);
    ecx = esi;
    PUSH32(esp, 0x004038D6u); RECOMP_ABI_CALL(0x00402680u, sub_00402680); /* call 0x00402680 */

loc_004038D6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004038E0
 * Original: 0x004038E0 - 0x00403AD6 (502 bytes, 171 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004038E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004038E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x62D9D8);
    esi = ecx;
    PUSH32(esp, 0x004038EDu); RECOMP_ABI_CALL(0x00613AC0u, sub_00613AC0); /* call 0x00613AC0 */

loc_004038ED: ;
    PUSH32(esp, 0x62D6F4);
    PUSH32(esp, 0x004038F7u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_004038F7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0040390C; /* je: equal / zero */

loc_00403900: ;
    PUSH32(esp, 0x00403905u); RECOMP_ABI_CALL(0x00402B20u, sub_00402B20); /* call 0x00402B20 */

loc_00403905: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0040390Cu); RECOMP_ABI_CALL(0x00619525u, sub_00619525); /* call 0x00619525 */

loc_0040390C: ;
    PUSH32(esp, 0x00403911u); RECOMP_ABI_CALL(0x00402EB0u, sub_00402EB0); /* call 0x00402EB0 */

loc_00403911: ;
    ecx = MEM32(0x6C38B4);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00403923; /* jl: less (signed <) */

loc_0040391E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x00403923u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403920u); } /* indirect call */
    }

loc_00403923: ;
    ecx = MEM32(0x692EB0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00403932; /* je: equal / zero */

loc_0040392D: ;
    PUSH32(esp, 0x00403932u); RECOMP_ABI_CALL(0x00405430u, sub_00405430); /* call 0x00405430 */

loc_00403932: ;
    PUSH32(esp, 0x00403937u); RECOMP_ABI_CALL(0x004025B0u, sub_004025B0); /* call 0x004025B0 */

loc_00403937: ;
    PUSH32(esp, 0x62D9D0);
    esi = eax;
    PUSH32(esp, 0x00403943u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_00403943: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004039A2; /* je: equal / zero */

loc_0040394A: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00403953u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00403953: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0040395Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403957u); } /* indirect call */
    }

loc_0040395A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004039A2; /* jne: not equal / not zero */

loc_0040395E: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00403967u); RECOMP_ABI_CALL(0x004025D0u, sub_004025D0); /* call 0x004025D0 */

loc_00403967: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00403970u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00403970: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00403977u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403974u); } /* indirect call */
    }

loc_00403977: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00403980u); RECOMP_ABI_CALL(0x00402680u, sub_00402680); /* call 0x00402680 */

loc_00403980: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00403989u); RECOMP_ABI_CALL(0x004025D0u, sub_004025D0); /* call 0x004025D0 */

loc_00403989: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00403992u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00403992: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00403999u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403996u); } /* indirect call */
    }

loc_00403999: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x004039A2u); RECOMP_ABI_CALL(0x00402680u, sub_00402680); /* call 0x00402680 */

loc_004039A2: ;
    PUSH32(esp, 7);
    ecx = esi;
    PUSH32(esp, 0x004039ABu); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_004039AB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004039B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004039AFu); } /* indirect call */
    }

loc_004039B2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004039D8; /* je: equal / zero */

loc_004039B6: ;
    PUSH32(esp, 7);
    ecx = esi;
    PUSH32(esp, 0x004039BFu); RECOMP_ABI_CALL(0x00402740u, sub_00402740); /* call 0x00402740 */

loc_004039BF: ;
    PUSH32(esp, 7);
    ecx = esi;
    PUSH32(esp, 0x004039C8u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_004039C8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004039CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004039CCu); } /* indirect call */
    }

loc_004039CF: ;
    PUSH32(esp, 7);
    ecx = esi;
    PUSH32(esp, 0x004039D8u); RECOMP_ABI_CALL(0x00402770u, sub_00402770); /* call 0x00402770 */

loc_004039D8: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x004039E1u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_004039E1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004039E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004039E5u); } /* indirect call */
    }

loc_004039E8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00403A0E; /* je: equal / zero */

loc_004039EC: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x004039F5u); RECOMP_ABI_CALL(0x00402740u, sub_00402740); /* call 0x00402740 */

loc_004039F5: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x004039FEu); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_004039FE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00403A05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403A02u); } /* indirect call */
    }

loc_00403A05: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x00403A0Eu); RECOMP_ABI_CALL(0x00402770u, sub_00402770); /* call 0x00402770 */

loc_00403A0E: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x00403A17u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00403A17: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00403A1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403A1Bu); } /* indirect call */
    }

loc_00403A1E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00403A51; /* je: equal / zero */

loc_00403A22: ;
    PUSH32(esp, 0x62D99C);
    PUSH32(esp, 0x00403A2Cu); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00403A2C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x00403A38u); RECOMP_ABI_CALL(0x00402740u, sub_00402740); /* call 0x00402740 */

loc_00403A38: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x00403A41u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00403A41: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00403A48u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403A45u); } /* indirect call */
    }

loc_00403A48: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x00403A51u); RECOMP_ABI_CALL(0x00402770u, sub_00402770); /* call 0x00402770 */

loc_00403A51: ;
    PUSH32(esp, 0x62D98C);
    PUSH32(esp, 0x00403A5Bu); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_00403A5B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00403AB2; /* je: equal / zero */

loc_00403A62: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x67978C); PUSH32(esp, 0x00403A68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403A62u); } /* indirect call */
    }

loc_00403A68: ;
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x00403A71u); RECOMP_ABI_CALL(0x004025D0u, sub_004025D0); /* call 0x004025D0 */

loc_00403A71: ;
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x00403A7Au); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00403A7A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00403A81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403A7Eu); } /* indirect call */
    }

loc_00403A81: ;
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x00403A8Au); RECOMP_ABI_CALL(0x00402680u, sub_00402680); /* call 0x00402680 */

loc_00403A8A: ;
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x00403A93u); RECOMP_ABI_CALL(0x00402740u, sub_00402740); /* call 0x00402740 */

loc_00403A93: ;
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x00403A9Cu); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00403A9C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00403AA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403AA0u); } /* indirect call */
    }

loc_00403AA3: ;
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x00403AACu); RECOMP_ABI_CALL(0x00402770u, sub_00402770); /* call 0x00402770 */

loc_00403AAC: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x679790); PUSH32(esp, 0x00403AB2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403AACu); } /* indirect call */
    }

loc_00403AB2: ;
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x00403ABBu); RECOMP_ABI_CALL(0x004025D0u, sub_004025D0); /* call 0x004025D0 */

loc_00403ABB: ;
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x00403AC4u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00403AC4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00403ACBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403AC8u); } /* indirect call */
    }

loc_00403ACB: ;
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x00403AD4u); RECOMP_ABI_CALL(0x00402680u, sub_00402680); /* call 0x00402680 */

loc_00403AD4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00403AE0
 * Original: 0x00403AE0 - 0x00403B2E (78 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00403AE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00403AE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x62D9E4);
    esi = ecx;
    PUSH32(esp, 0x00403AEDu); RECOMP_ABI_CALL(0x00613AC0u, sub_00613AC0); /* call 0x00613AC0 */

loc_00403AED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x00403AF7u); RECOMP_ABI_CALL(0x00402EB0u, sub_00402EB0); /* call 0x00402EB0 */

loc_00403AF7: ;
    PUSH32(esp, 0x00403AFCu); RECOMP_ABI_CALL(0x004025B0u, sub_004025B0); /* call 0x004025B0 */

loc_00403AFC: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x00403B05u); RECOMP_ABI_CALL(0x00402970u, sub_00402970); /* call 0x00402970 */

loc_00403B05: ;
    PUSH32(esp, 0x00403B0Au); RECOMP_ABI_CALL(0x00539E30u, sub_00539E30); /* call 0x00539E30 */

loc_00403B0A: ;
    PUSH32(esp, 7);
    ecx = esi;
    PUSH32(esp, 0x00403B13u); RECOMP_ABI_CALL(0x004025D0u, sub_004025D0); /* call 0x004025D0 */

loc_00403B13: ;
    PUSH32(esp, 7);
    ecx = esi;
    PUSH32(esp, 0x00403B1Cu); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00403B1C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00403B23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403B20u); } /* indirect call */
    }

loc_00403B23: ;
    PUSH32(esp, 7);
    ecx = esi;
    PUSH32(esp, 0x00403B2Cu); RECOMP_ABI_CALL(0x00402680u, sub_00402680); /* call 0x00402680 */

loc_00403B2C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00403B30
 * Original: 0x00403B30 - 0x00403B7E (78 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00403B30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00403B30: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x62D9F4);
    esi = ecx;
    PUSH32(esp, 0x00403B3Du); RECOMP_ABI_CALL(0x00613AC0u, sub_00613AC0); /* call 0x00613AC0 */

loc_00403B3D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x00403B47u); RECOMP_ABI_CALL(0x00402EB0u, sub_00402EB0); /* call 0x00402EB0 */

loc_00403B47: ;
    PUSH32(esp, 0x00403B4Cu); RECOMP_ABI_CALL(0x004025B0u, sub_004025B0); /* call 0x004025B0 */

loc_00403B4C: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x00403B55u); RECOMP_ABI_CALL(0x00402910u, sub_00402910); /* call 0x00402910 */

loc_00403B55: ;
    PUSH32(esp, 0x00403B5Au); RECOMP_ABI_CALL(0x00539E30u, sub_00539E30); /* call 0x00539E30 */

loc_00403B5A: ;
    PUSH32(esp, 8);
    ecx = esi;
    PUSH32(esp, 0x00403B63u); RECOMP_ABI_CALL(0x004025D0u, sub_004025D0); /* call 0x004025D0 */

loc_00403B63: ;
    PUSH32(esp, 8);
    ecx = esi;
    PUSH32(esp, 0x00403B6Cu); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00403B6C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00403B73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403B70u); } /* indirect call */
    }

loc_00403B73: ;
    PUSH32(esp, 8);
    ecx = esi;
    PUSH32(esp, 0x00403B7Cu); RECOMP_ABI_CALL(0x00402680u, sub_00402680); /* call 0x00402680 */

loc_00403B7C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00403B80
 * Original: 0x00403B80 - 0x004043BE (2110 bytes, 703 insns)
 * Category: game_physics
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00403B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00403B80: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x28));
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0x00403B8Fu); RECOMP_ABI_CALL(0x00618750u, sub_00618750); /* call 0x00618750 */

loc_00403B8F: ;
    PUSH32(esp, 0x62D6F4);
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x00403B9Du); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_00403B9D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00403BB2; /* je: equal / zero */

loc_00403BA4: ;
    ecx = esi;
    PUSH32(esp, 0x00403BABu); RECOMP_ABI_CALL(0x00402B20u, sub_00402B20); /* call 0x00402B20 */

loc_00403BAB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00403BB2u); RECOMP_ABI_CALL(0x00619525u, sub_00619525); /* call 0x00619525 */

loc_00403BB2: ;
    PUSH32(esp, 0x00403BB7u); RECOMP_ABI_CALL(0x005C3530u, sub_005C3530); /* call 0x005C3530 */

loc_00403BB7: ;
    ecx = MEM32(0x6C38B4);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00403BC9; /* jl: less (signed <) */

loc_00403BC4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x00403BC9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403BC6u); } /* indirect call */
    }

loc_00403BC9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00403BD0u); RECOMP_ABI_CALL(0x004025B0u, sub_004025B0); /* call 0x004025B0 */

loc_00403BD0: ;
    esi = eax;
    SET_LO8(eax, MEM8(esp + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    edi = 0x6C2E88;
    if (CMP_NE(_fa, _fb)) goto loc_00403BE4; /* jne: not equal / not zero */

loc_00403BDF: ;
    edi = 0x6C32C8;

loc_00403BE4: ;
    SET_LO8(eax, MEM8(edi + 0x158));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00403BF7; /* jne: not equal / not zero */

loc_00403BEE: ;
    SET_LO8(eax, MEM8(0x6C3421));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00403BFE; /* je: equal / zero */

loc_00403BF7: ;
    ecx = edi;
    PUSH32(esp, 0x00403BFEu); RECOMP_ABI_CALL(0x0053B1B0u, sub_0053B1B0); /* call 0x0053B1B0 */

loc_00403BFE: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00403C07u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00403C07: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00403C0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403C0Bu); } /* indirect call */
    }

loc_00403C0E: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 1);
    ecx = esi;
    MEM8(esp + 0x13) = LO8(eax);
    PUSH32(esp, 0x00403C21u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00403C21: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00403C28u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403C25u); } /* indirect call */
    }

loc_00403C28: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 2);
    ecx = esi;
    MEM8(esp + 0x16) = LO8(eax);
    PUSH32(esp, 0x00403C3Bu); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00403C3B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00403C42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403C3Fu); } /* indirect call */
    }

loc_00403C42: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 3);
    ecx = esi;
    MEM8(esp + 0x15) = LO8(eax);
    PUSH32(esp, 0x00403C55u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00403C55: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00403C5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403C59u); } /* indirect call */
    }

loc_00403C5C: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 4);
    ecx = esi;
    MEM8(esp + 0x14) = LO8(eax);
    PUSH32(esp, 0x00403C6Fu); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00403C6F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00403C76u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403C73u); } /* indirect call */
    }

loc_00403C76: ;
    ecx = MEM32(edi);
    SET_LO8(ebx, LO8(eax));
    eax = MEM32(0x6C32C8);
    _cf = (int)((LO8(ebx)) != 0);
    SET_LO8(ebx, (uint32_t)(0u - (uint32_t)(LO8(ebx))));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00403C8E; /* je: equal / zero */

loc_00403C89: ;
    MEM8(esp + 0xF) = 1;

loc_00403C8E: ;
    edx = 0x6C32CA;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(edi));
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x1C) = edx;
    edx = 0x6C32CB;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(edi));
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x20) = edx;
    edx = 0x6C32CC;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(edi));
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x24) = edx;
    edx = 0x6C32CD;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(edi));
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x28) = edx;
    ecx = 0x6C32C9;
    edx = 0x6C32CE;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edi));
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(edi));
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = 0x6C3311;
    eax = edi + 0x49;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x18) = 2;
    /* nop */

loc_00403CE0: ;
    SET_LO8(edx, MEM8(ebp + -1));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + -1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax + -1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00403CED; /* je: equal / zero */

loc_00403CE8: ;
    MEM8(esp + 0x13) = 1;

loc_00403CED: ;
    SET_LO8(edx, MEM8(ebp));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00403CF9; /* je: equal / zero */

loc_00403CF4: ;
    MEM8(esp + 0x13) = 1;

loc_00403CF9: ;
    SET_LO8(edx, MEM8(ecx + eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00403D06; /* je: equal / zero */

loc_00403D01: ;
    MEM8(esp + 0x13) = 1;

loc_00403D06: ;
    edx = MEM32(esp + 0x20);
    SET_LO8(edx, MEM8(edx + eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax + 2) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00403D17; /* je: equal / zero */

loc_00403D12: ;
    MEM8(esp + 0x13) = 1;

loc_00403D17: ;
    edx = MEM32(esp + 0x24);
    SET_LO8(edx, MEM8(edx + eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 3)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax + 3) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00403D28; /* je: equal / zero */

loc_00403D23: ;
    MEM8(esp + 0x13) = 1;

loc_00403D28: ;
    edx = MEM32(esp + 0x28);
    SET_LO8(edx, MEM8(edx + eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax + 4) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00403D39; /* je: equal / zero */

loc_00403D34: ;
    MEM8(esp + 0x13) = 1;

loc_00403D39: ;
    edx = MEM32(esp + 0x2C);
    SET_LO8(edx, MEM8(edx + eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 5)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax + 5) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00403D4A; /* je: equal / zero */

loc_00403D45: ;
    MEM8(esp + 0x13) = 1;

loc_00403D4A: ;
    edx = MEM32(esp + 0x30);
    SET_LO8(edx, MEM8(edx + eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 6)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax + 6) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00403D5B; /* je: equal / zero */

loc_00403D56: ;
    MEM8(esp + 0x13) = 1;

loc_00403D5B: ;
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(8)) >> 32) & 1);
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = edx;
    if ((_fa != 0)) goto loc_00403CE0; /* jne: not equal / not zero */

loc_00403D70: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00403D8B; /* jne: not equal / not zero */

loc_00403D7A: ;
    SET_LO8(eax, MEM8(edi + 0x159));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00403D8B; /* je: equal / zero */

loc_00403D84: ;
    MEM8(esp + 0x13) = 1;
    goto loc_00403D93;

loc_00403D8B: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00403DA4; /* je: equal / zero */

loc_00403D93: ;
    MEM8(esp + 0x14) = 1;
    MEM8(esp + 0x15) = 1;
    MEM8(esp + 0x16) = 1;
    SET_LO8(ebx, 1);

loc_00403DA4: ;
    SET_LO8(ecx, MEM8(0x6C342D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + 0x165)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(edi + 0x165) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00403DB7; /* je: equal / zero */

loc_00403DB2: ;
    MEM8(esp + 0x16) = 1;

loc_00403DB7: ;
    SET_LO8(edx, MEM8(0x6C342A));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + 0x162)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(edi + 0x162) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00403DDB; /* jne: not equal / not zero */

loc_00403DC5: ;
    eax = MEM32(0x6C32D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(edi + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_00403DD7; /* jne: not equal / not zero */

loc_00403DD1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00403DDB; /* jne: not equal / not zero */

loc_00403DD5: ;
    goto loc_00403DE0;

loc_00403DD7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00403DE0; /* jne: not equal / not zero */

loc_00403DDB: ;
    MEM8(esp + 0x14) = 1;

loc_00403DE0: ;
    SET_LO8(eax, MEM8(0x6C3429));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + 0x161)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(edi + 0x161) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00403DF2; /* je: equal / zero */

loc_00403DED: ;
    MEM8(esp + 0x14) = 1;

loc_00403DF2: ;
    SET_LO8(ecx, MEM8(0x6C3421));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + 0x159)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(edi + 0x159) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00403E05; /* je: equal / zero */

loc_00403E00: ;
    MEM8(esp + 0x14) = 1;

loc_00403E05: ;
    SET_LO8(edx, MEM8(0x6C342C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + 0x164)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(edi + 0x164) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00403E89; /* jne: not equal / not zero */

loc_00403E13: ;
    eax = MEM32(0x6C32D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(edi + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_00403E85; /* jne: not equal / not zero */

loc_00403E1F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00403E89; /* jne: not equal / not zero */

loc_00403E23: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00403E31; /* je: equal / zero */

loc_00403E2B: ;
    SET_LO8(ebx, 1);
    MEM8(esp + 0x15) = LO8(ebx);

loc_00403E31: ;
    eax = MEM32(0x6C32CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00403E46; /* jne: not equal / not zero */

loc_00403E3B: ;
    ecx = MEM32(0x6C32D0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00403E58; /* je: equal / zero */

loc_00403E46: ;
    SET_LO8(ebx, 1);
    MEM8(esp + 0x15) = LO8(ebx);
    MEM8(esp + 0x14) = LO8(ebx);
    MEM8(esp + 0x16) = LO8(ebx);
    MEM8(esp + 0x13) = LO8(ebx);

loc_00403E58: ;
    eax = edi + 0x58;
    ebp = 0x6C3320;

loc_00403E60: ;
    SET_LO8(edx, MEM8(ebp));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00403E90; /* jne: not equal / not zero */

loc_00403E69: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00403E81; /* je: equal / zero */

loc_00403E6D: ;
    SET_LO8(edx, MEM8(ebp + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00403E90; /* jne: not equal / not zero */

loc_00403E77: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(2)) >> 32) & 1);
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00403E60; /* jne: not equal / not zero */

loc_00403E81: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00403E95;

loc_00403E85: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00403E23; /* jne: not equal / not zero */

loc_00403E89: ;
    MEM8(esp + 0x14) = 1;
    goto loc_00403E2B;

loc_00403E90: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00403E95: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00403E9B; /* je: equal / zero */

loc_00403E99: ;
    SET_LO8(ebx, 1);

loc_00403E9B: ;
    eax = MEM32(0x6C32E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x18) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00403EA7; /* je: equal / zero */

loc_00403EA5: ;
    SET_LO8(ebx, 1);

loc_00403EA7: ;
    SET_LO8(ecx, MEM8(edi + 0x39));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00403EBC; /* je: equal / zero */

loc_00403EAE: ;
    SET_LO8(ecx, MEM8(0x6C3421));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00403EBC; /* je: equal / zero */

loc_00403EB8: ;
    SET_LO8(ebx, 1);
    goto loc_00403EF7;

loc_00403EBC: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00403EF7; /* jne: not equal / not zero */

loc_00403EC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00403EF7; /* jne: not equal / not zero */

loc_00403EC5: ;
    edx = MEM32(0x6C3600);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x338)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 0x338) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00403ED7; /* je: equal / zero */

loc_00403ED3: ;
    SET_LO8(ebx, 1);
    goto loc_00403EF7;

loc_00403ED7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_00403EF7; /* jle: less or equal (signed <=) */

loc_00403EDB: ;
    ecx = 0x6C3604;
    eax = edi + 0x33C;

loc_00403EE6: ;
    ebp = MEM32(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(eax) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00403EEE; /* je: equal / zero */

loc_00403EEC: ;
    SET_LO8(ebx, 1);

loc_00403EEE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00403EE6; /* jne: not equal / not zero */

loc_00403EF7: ;
    SET_LO8(eax, MEM8(0x6C3301));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00403F0C; /* je: equal / zero */

loc_00403F00: ;
    SET_LO8(eax, MEM8(0x6C3300));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + 0x38)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(edi + 0x38) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00403F0C; /* je: equal / zero */

loc_00403F0A: ;
    SET_LO8(ebx, 1);

loc_00403F0C: ;
    ecx = MEM32(edi + 0x3C);
    _fa = (uint32_t)(MEM32(0x6C3304)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C3304), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00403F1B; /* je: equal / zero */

loc_00403F17: ;
    SET_LO8(ebx, 1);
    goto loc_00403F50;

loc_00403F1B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00403F50; /* jne: not equal / not zero */

loc_00403F1F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_00403F6F; /* jle: less or equal (signed <=) */

loc_00403F23: ;
    ebp = 0x6C32C8;
    eax = edi + 0x16C;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebp) < (uint32_t)(edi));
    ebp = ebp - edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = ecx;

loc_00403F32: ;
    ecx = MEM32(eax + ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00403F3B; /* je: equal / zero */

loc_00403F39: ;
    SET_LO8(ebx, 1);

loc_00403F3B: ;
    SET_LO8(edx, MEM8(eax + ebp + 0x24));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 0x24)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax + 0x24) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00403F46; /* je: equal / zero */

loc_00403F44: ;
    SET_LO8(ebx, 1);

loc_00403F46: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00403F32; /* jne: not equal / not zero */

loc_00403F4C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00403F6F; /* je: equal / zero */

loc_00403F50: ;
    PUSH32(esp, 0x62DAAC);
    PUSH32(esp, 0x00403F5Au); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_00403F5A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00403F6B; /* je: equal / zero */

loc_00403F61: ;
    MEM8(esp + 0x15) = 1;
    MEM8(esp + 0x14) = 1;

loc_00403F6B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00403F96; /* jne: not equal / not zero */

loc_00403F6F: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00403F96; /* jne: not equal / not zero */

loc_00403F77: ;
    SET_LO8(eax, MEM8(esp + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00403F96; /* jne: not equal / not zero */

loc_00403F7F: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00403F96; /* jne: not equal / not zero */

loc_00403F87: ;
    SET_LO8(eax, MEM8(esp + 0x16));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00403F96; /* jne: not equal / not zero */

loc_00403F8F: ;
    MEM8(esp + 0x17) = 0;
    goto loc_00403FAF;

loc_00403F96: ;
    PUSH32(esp, 4);
    ecx = esi;
    MEM8(esp + 0x1B) = 1;
    PUSH32(esp, 0x00403FA4u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00403FA4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00403FAFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403FACu); } /* indirect call */
    }

loc_00403FAF: ;
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x00403FB8u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00403FB8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00403FBFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403FBCu); } /* indirect call */
    }

loc_00403FBF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_00403FE6; /* je: equal / zero */

loc_00403FC4: ;
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x00403FCDu); RECOMP_ABI_CALL(0x00402740u, sub_00402740); /* call 0x00402740 */

loc_00403FCD: ;
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x00403FD6u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00403FD6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00403FDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403FDAu); } /* indirect call */
    }

loc_00403FDD: ;
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x00403FE6u); RECOMP_ABI_CALL(0x00402770u, sub_00402770); /* call 0x00402770 */

loc_00403FE6: ;
    PUSH32(esp, 7);
    ecx = esi;
    PUSH32(esp, 0x00403FEFu); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00403FEF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00403FF6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00403FF3u); } /* indirect call */
    }

loc_00403FF6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0040401C; /* je: equal / zero */

loc_00403FFA: ;
    PUSH32(esp, 7);
    ecx = esi;
    PUSH32(esp, 0x00404003u); RECOMP_ABI_CALL(0x00402740u, sub_00402740); /* call 0x00402740 */

loc_00404003: ;
    PUSH32(esp, 7);
    ecx = esi;
    PUSH32(esp, 0x0040400Cu); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_0040400C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00404013u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00404010u); } /* indirect call */
    }

loc_00404013: ;
    PUSH32(esp, 7);
    ecx = esi;
    PUSH32(esp, 0x0040401Cu); RECOMP_ABI_CALL(0x00402770u, sub_00402770); /* call 0x00402770 */

loc_0040401C: ;
    PUSH32(esp, 8);
    ecx = esi;
    PUSH32(esp, 0x00404025u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00404025: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0040402Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00404029u); } /* indirect call */
    }

loc_0040402C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00404052; /* je: equal / zero */

loc_00404030: ;
    PUSH32(esp, 8);
    ecx = esi;
    PUSH32(esp, 0x00404039u); RECOMP_ABI_CALL(0x00402740u, sub_00402740); /* call 0x00402740 */

loc_00404039: ;
    PUSH32(esp, 8);
    ecx = esi;
    PUSH32(esp, 0x00404042u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00404042: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00404049u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00404046u); } /* indirect call */
    }

loc_00404049: ;
    PUSH32(esp, 8);
    ecx = esi;
    PUSH32(esp, 0x00404052u); RECOMP_ABI_CALL(0x00402770u, sub_00402770); /* call 0x00402770 */

loc_00404052: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0040408C; /* je: equal / zero */

loc_00404056: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x0040405Fu); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_0040405F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00404066u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00404063u); } /* indirect call */
    }

loc_00404066: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0040408C; /* je: equal / zero */

loc_0040406A: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x00404073u); RECOMP_ABI_CALL(0x00402740u, sub_00402740); /* call 0x00402740 */

loc_00404073: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x0040407Cu); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_0040407C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00404083u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00404080u); } /* indirect call */
    }

loc_00404083: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x0040408Cu); RECOMP_ABI_CALL(0x00402770u, sub_00402770); /* call 0x00402770 */

loc_0040408C: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004040CA; /* je: equal / zero */

loc_00404094: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x0040409Du); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_0040409D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004040A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004040A1u); } /* indirect call */
    }

loc_004040A4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004040CA; /* je: equal / zero */

loc_004040A8: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x004040B1u); RECOMP_ABI_CALL(0x00402740u, sub_00402740); /* call 0x00402740 */

loc_004040B1: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x004040BAu); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_004040BA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004040C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004040BEu); } /* indirect call */
    }

loc_004040C1: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x004040CAu); RECOMP_ABI_CALL(0x00402770u, sub_00402770); /* call 0x00402770 */

loc_004040CA: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00404108; /* je: equal / zero */

loc_004040D2: ;
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x004040DBu); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_004040DB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004040E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004040DFu); } /* indirect call */
    }

loc_004040E2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00404108; /* je: equal / zero */

loc_004040E6: ;
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x004040EFu); RECOMP_ABI_CALL(0x00402740u, sub_00402740); /* call 0x00402740 */

loc_004040EF: ;
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x004040F8u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_004040F8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004040FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004040FCu); } /* indirect call */
    }

loc_004040FF: ;
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x00404108u); RECOMP_ABI_CALL(0x00402770u, sub_00402770); /* call 0x00402770 */

loc_00404108: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00404146; /* je: equal / zero */

loc_00404110: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00404119u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00404119: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00404120u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040411Du); } /* indirect call */
    }

loc_00404120: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00404146; /* je: equal / zero */

loc_00404124: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0040412Du); RECOMP_ABI_CALL(0x00402740u, sub_00402740); /* call 0x00402740 */

loc_0040412D: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00404136u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00404136: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0040413Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040413Au); } /* indirect call */
    }

loc_0040413D: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00404146u); RECOMP_ABI_CALL(0x00402770u, sub_00402770); /* call 0x00402770 */

loc_00404146: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00404184; /* je: equal / zero */

loc_0040414E: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00404157u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00404157: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0040415Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040415Bu); } /* indirect call */
    }

loc_0040415E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00404184; /* je: equal / zero */

loc_00404162: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0040416Bu); RECOMP_ABI_CALL(0x00402740u, sub_00402740); /* call 0x00402740 */

loc_0040416B: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00404174u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00404174: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0040417Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00404178u); } /* indirect call */
    }

loc_0040417B: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00404184u); RECOMP_ABI_CALL(0x00402770u, sub_00402770); /* call 0x00402770 */

loc_00404184: ;
    SET_LO8(eax, MEM8(esp + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00404191; /* je: equal / zero */

loc_0040418C: ;
    PUSH32(esp, 0x00404191u); RECOMP_ABI_CALL(0x00539E30u, sub_00539E30); /* call 0x00539E30 */

loc_00404191: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x0040419Au); RECOMP_ABI_CALL(0x00402F70u, sub_00402F70); /* call 0x00402F70 */

loc_0040419A: ;
    PUSH32(esp, 0x62DA98);
    PUSH32(esp, 0x004041A4u); RECOMP_ABI_CALL(0x00613AC0u, sub_00613AC0); /* call 0x00613AC0 */

loc_004041A4: ;
    PUSH32(esp, 0x62DA88);
    PUSH32(esp, 0x004041AEu); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_004041AE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004041D0; /* jne: not equal / not zero */

loc_004041B5: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004041D0; /* je: equal / zero */

loc_004041BD: ;
    PUSH32(esp, 0x004041C2u); RECOMP_ABI_CALL(0x00401660u, sub_00401660); /* call 0x00401660 */

loc_004041C2: ;
    eax = MEM32(0x6C38B4);
    MEM8(eax + 0x2E9) = 1;
    goto loc_004041DD;

loc_004041D0: ;
    ecx = MEM32(0x6C38B4);
    MEM8(ecx + 0x2E9) = 0;

loc_004041DD: ;
    PUSH32(esp, 0x004041E2u); RECOMP_ABI_CALL(0x005F2A30u, sub_005F2A30); /* call 0x005F2A30 */

loc_004041E2: ;
    PUSH32(esp, 0x004041E7u); RECOMP_ABI_CALL(0x005EEC70u, sub_005EEC70); /* call 0x005EEC70 */

loc_004041E7: ;
    PUSH32(esp, 0x62DA7C);
    PUSH32(esp, 0x004041F1u); RECOMP_ABI_CALL(0x00613AC0u, sub_00613AC0); /* call 0x00613AC0 */

loc_004041F1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x004041FDu); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_004041FD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00404204u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00404201u); } /* indirect call */
    }

loc_00404204: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0040422A; /* jne: not equal / not zero */

loc_00404208: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00404211u); RECOMP_ABI_CALL(0x004025D0u, sub_004025D0); /* call 0x004025D0 */

loc_00404211: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0040421Au); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_0040421A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00404221u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040421Eu); } /* indirect call */
    }

loc_00404221: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0040422Au); RECOMP_ABI_CALL(0x00402680u, sub_00402680); /* call 0x00402680 */

loc_0040422A: ;
    PUSH32(esp, 0x62DA70);
    PUSH32(esp, 0x00404234u); RECOMP_ABI_CALL(0x00613AC0u, sub_00613AC0); /* call 0x00613AC0 */

loc_00404234: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00404240u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00404240: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00404247u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00404244u); } /* indirect call */
    }

loc_00404247: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0040426D; /* jne: not equal / not zero */

loc_0040424B: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00404254u); RECOMP_ABI_CALL(0x004025D0u, sub_004025D0); /* call 0x004025D0 */

loc_00404254: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0040425Du); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_0040425D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00404264u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00404261u); } /* indirect call */
    }

loc_00404264: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0040426Du); RECOMP_ABI_CALL(0x00402680u, sub_00402680); /* call 0x00402680 */

loc_0040426D: ;
    PUSH32(esp, 0x62DA60);
    PUSH32(esp, 0x00404277u); RECOMP_ABI_CALL(0x00613AC0u, sub_00613AC0); /* call 0x00613AC0 */

loc_00404277: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x00404283u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00404283: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0040428Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00404287u); } /* indirect call */
    }

loc_0040428A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004042B0; /* jne: not equal / not zero */

loc_0040428E: ;
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x00404297u); RECOMP_ABI_CALL(0x004025D0u, sub_004025D0); /* call 0x004025D0 */

loc_00404297: ;
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x004042A0u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_004042A0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004042A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004042A4u); } /* indirect call */
    }

loc_004042A7: ;
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x004042B0u); RECOMP_ABI_CALL(0x00402680u, sub_00402680); /* call 0x00402680 */

loc_004042B0: ;
    PUSH32(esp, 0x62DA4C);
    PUSH32(esp, 0x004042BAu); RECOMP_ABI_CALL(0x00613AC0u, sub_00613AC0); /* call 0x00613AC0 */

loc_004042BA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x004042C6u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_004042C6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004042CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004042CAu); } /* indirect call */
    }

loc_004042CD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004042F3; /* jne: not equal / not zero */

loc_004042D1: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x004042DAu); RECOMP_ABI_CALL(0x004025D0u, sub_004025D0); /* call 0x004025D0 */

loc_004042DA: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x004042E3u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_004042E3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004042EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004042E7u); } /* indirect call */
    }

loc_004042EA: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x004042F3u); RECOMP_ABI_CALL(0x00402680u, sub_00402680); /* call 0x00402680 */

loc_004042F3: ;
    PUSH32(esp, 0x62DA40);
    PUSH32(esp, 0x004042FDu); RECOMP_ABI_CALL(0x00613AC0u, sub_00613AC0); /* call 0x00613AC0 */

loc_004042FD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x00404309u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00404309: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00404310u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040430Du); } /* indirect call */
    }

loc_00404310: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00404336; /* jne: not equal / not zero */

loc_00404314: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x0040431Du); RECOMP_ABI_CALL(0x004025D0u, sub_004025D0); /* call 0x004025D0 */

loc_0040431D: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x00404326u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00404326: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0040432Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040432Au); } /* indirect call */
    }

loc_0040432D: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x00404336u); RECOMP_ABI_CALL(0x00402680u, sub_00402680); /* call 0x00402680 */

loc_00404336: ;
    PUSH32(esp, 0x0040433Bu); RECOMP_ABI_CALL(0x00618750u, sub_00618750); /* call 0x00618750 */

loc_0040433B: ;
    ebx = MEM32(esp + 0x30);
    edi = MEM32(0x692EA0);
    esi = MEM32(0x692E9C);
    ecx = eax;
    eax = MEM32(0x692E98);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(ebx));
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ecx)) >> 32) & 1);
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x692EA0) = edi;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, edi);
    MEM32(0x692E9C) = esi;
    POP32(esp, ebx);
    if (CMP_BE(_fa, _fb)) goto loc_00404370; /* jbe: below or equal (unsigned <=) */

loc_00404369: ;
    eax = ecx;
    MEM32(0x692E98) = eax;

loc_00404370: ;
    edx = MEM32(0x6622B4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00404382; /* jae: above or equal (unsigned >=) */

loc_0040437A: ;
    edx = ecx;
    MEM32(0x6622B4) = edx;

loc_00404382: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(0x692EA0);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(0x692E9C));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(0x692E9C)); }
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x62DA0C);
    PUSH32(esp, 0x0040439Du); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0040439D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x6C32C8;
    PUSH32(esp, 0x004043AAu); RECOMP_ABI_CALL(0x0053AD50u, sub_0053AD50); /* call 0x0053AD50 */

loc_004043AA: ;
    PUSH32(esp, 0x62DA00);
    PUSH32(esp, 0x004043B4u); RECOMP_ABI_CALL(0x00613AC0u, sub_00613AC0); /* call 0x00613AC0 */

loc_004043B4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004043C0
 * Original: 0x004043C0 - 0x004045BA (506 bytes, 168 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004043C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004043C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x004043C9u); RECOMP_ABI_CALL(0x004025B0u, sub_004025B0); /* call 0x004025B0 */

loc_004043C9: ;
    esi = eax;
    PUSH32(esp, 5);
    ecx = esi;
    PUSH32(esp, 0x004043D4u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_004043D4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004043DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004043D8u); } /* indirect call */
    }

loc_004043DB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00404570; /* je: equal / zero */

loc_004043E3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 5);
    ecx = esi;
    PUSH32(esp, 0x004043EDu); RECOMP_ABI_CALL(0x00402740u, sub_00402740); /* call 0x00402740 */

loc_004043ED: ;
    PUSH32(esp, 5);
    ecx = esi;
    PUSH32(esp, 0x004043F6u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_004043F6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004043FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004043FAu); } /* indirect call */
    }

loc_004043FD: ;
    PUSH32(esp, 5);
    ecx = esi;
    PUSH32(esp, 0x00404406u); RECOMP_ABI_CALL(0x00402770u, sub_00402770); /* call 0x00402770 */

loc_00404406: ;
    SET_LO8(ebx, MEM8(0x692EC0));
    PUSH32(esp, 5);
    ecx = esi;
    PUSH32(esp, 0x00404415u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00404415: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00404437; /* je: equal / zero */

loc_0040441A: ;
    PUSH32(esp, 0x62DC10);
    PUSH32(esp, 0x00404424u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00404424: ;
    ecx = MEM32(0x6C3890);
    eax = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00404434u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00404431u); } /* indirect call */
    }

loc_00404434: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00404437: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x62DC04);
    PUSH32(esp, 0x6C31A0);
    PUSH32(esp, 0x00404448u); RECOMP_ABI_CALL(0x006197E0u, sub_006197E0); /* call 0x006197E0 */

loc_00404448: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0040447B; /* jne: not equal / not zero */

loc_0040444F: ;
    PUSH32(esp, 0x62DBD4);
    PUSH32(esp, 0x00404459u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00404459: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x62DBC8);
    ecx = 0x6C2E88;
    PUSH32(esp, 0x0040446Bu); RECOMP_ABI_CALL(0x0053ACB0u, sub_0053ACB0); /* call 0x0053ACB0 */

loc_0040446B: ;
    ecx = MEM32(0x6C3890);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xF);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00404478u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00404475u); } /* indirect call */
    }

loc_00404478: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0040447B: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x62DBC0);
    PUSH32(esp, 0x6C31A0);
    PUSH32(esp, 0x0040448Cu); RECOMP_ABI_CALL(0x006197E0u, sub_006197E0); /* call 0x006197E0 */

loc_0040448C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004044BF; /* jne: not equal / not zero */

loc_00404493: ;
    PUSH32(esp, 0x62DB94);
    PUSH32(esp, 0x0040449Du); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0040449D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x62DB84);
    ecx = 0x6C2E88;
    PUSH32(esp, 0x004044AFu); RECOMP_ABI_CALL(0x0053ACB0u, sub_0053ACB0); /* call 0x0053ACB0 */

loc_004044AF: ;
    ecx = MEM32(0x6C3890);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xF);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004044BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004044B9u); } /* indirect call */
    }

loc_004044BC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004044BF: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x62DB78);
    PUSH32(esp, 0x6C31A0);
    PUSH32(esp, 0x004044D0u); RECOMP_ABI_CALL(0x006197E0u, sub_006197E0); /* call 0x006197E0 */

loc_004044D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00404570; /* jne: not equal / not zero */

loc_004044DB: ;
    PUSH32(esp, 0x62DB4C);
    PUSH32(esp, 0x004044E5u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_004044E5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004044ECu); RECOMP_ABI_CALL(0x005ED4A0u, sub_005ED4A0); /* call 0x005ED4A0 */

loc_004044EC: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x62DB44);
    PUSH32(esp, 0x004044F9u); RECOMP_ABI_CALL(0x005F5B20u, sub_005F5B20); /* call 0x005F5B20 */

loc_004044F9: ;
    edi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040452E; /* je: equal / zero */

loc_00404502: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00404508u); RECOMP_ABI_CALL(0x005F5000u, sub_005F5000); /* call 0x005F5000 */

loc_00404508: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040452E; /* je: equal / zero */

loc_00404511: ;
    eax = MEM32(0x674FAC);
    _fb = (uint32_t)(0xFFFFFD80u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFD80u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00404529u); RECOMP_ABI_CALL(0x005EFB70u, sub_005EFB70); /* call 0x005EFB70 */

loc_00404529: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0040453B;

loc_0040452E: ;
    PUSH32(esp, 0x62DB10);
    PUSH32(esp, 0x00404538u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00404538: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0040453B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00404546; /* je: equal / zero */

loc_0040453F: ;
    ecx = edi;
    PUSH32(esp, 0x00404546u); RECOMP_ABI_CALL(0x004037B0u, sub_004037B0); /* call 0x004037B0 */

loc_00404546: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00404551; /* je: equal / zero */

loc_0040454A: ;
    ecx = esi;
    PUSH32(esp, 0x00404551u); RECOMP_ABI_CALL(0x004037D0u, sub_004037D0); /* call 0x004037D0 */

loc_00404551: ;
    PUSH32(esp, 0x00404556u); RECOMP_ABI_CALL(0x005ED4C0u, sub_005ED4C0); /* call 0x005ED4C0 */

loc_00404556: ;
    ecx = MEM32(0x6C3890);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00404563u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00404560u); } /* indirect call */
    }

loc_00404563: ;
    PUSH32(esp, 0x00404568u); RECOMP_ABI_CALL(0x00618750u, sub_00618750); /* call 0x00618750 */

loc_00404568: ;
    POP32(esp, edi);
    MEM32(0x692E90) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00404570: ;
    eax = MEM32(0x6C2C60);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004045A2; /* je: equal / zero */

loc_0040457A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00404596; /* je: equal / zero */

loc_0040457D: ;
    PUSH32(esp, 0x62DAC0);
    PUSH32(esp, 0x00404587u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00404587: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00404593u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00404590u); } /* indirect call */
    }

loc_00404593: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00404596: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0040459Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040459Cu); } /* indirect call */
    }

loc_0040459F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004045A2: ;
    ecx = MEM32(0x6C3898);
    PUSH32(esp, 0x004045ADu); RECOMP_ABI_CALL(0x0053C6E0u, sub_0053C6E0); /* call 0x0053C6E0 */

loc_004045AD: ;
    ecx = MEM32(0x6C3898);
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0053BDB0(); return; /* tail jmp 0x0053BDB0 */

}

/**
 * sub_004045C0
 * Original: 0x004045C0 - 0x004045DE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004045C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004045C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004045C8u); RECOMP_ABI_CALL(0x004037F0u, sub_004037F0); /* call 0x004037F0 */

loc_004045C8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004045D8; /* je: equal / zero */

loc_004045CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004045D5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_004045D5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004045D8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004045E0
 * Original: 0x004045E0 - 0x0040473E (350 bytes, 104 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004045E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004045E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040473C; /* je: equal / zero */

loc_004045EE: ;
    edi = edi;

loc_004045F0: ;
    edx = MEM32(esi + 0x3C);
    ecx = MEM32(esi + 0x38);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    MEM32(esi + 0x3C) = edx;
    MEM32(esi + 0x38) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0040460C; /* jne: not equal / not zero */

loc_00404605: ;
    MEM32(esi + 0x38) = 0;

loc_0040460C: ;
    eax = MEM32(esi + 0x38);
    eax = MEM32(esi + eax * 4 + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00404724; /* ja: above (unsigned >) */

loc_0040461C: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x404740); /* switch: 23 entries, 22 targets */
    if (_jt == 0x00404623u) goto loc_00404623;
    if (_jt == 0x0040462Du) goto loc_0040462D;
    if (_jt == 0x0040464Au) goto loc_0040464A;
    if (_jt == 0x00404656u) goto loc_00404656;
    if (_jt == 0x00404673u) goto loc_00404673;
    if (_jt == 0x0040467Fu) goto loc_0040467F;
    if (_jt == 0x0040468Bu) goto loc_0040468B;
    if (_jt == 0x00404697u) goto loc_00404697;
    if (_jt == 0x004046A3u) goto loc_004046A3;
    if (_jt == 0x004046AFu) goto loc_004046AF;
    if (_jt == 0x004046B8u) goto loc_004046B8;
    if (_jt == 0x004046C1u) goto loc_004046C1;
    if (_jt == 0x004046CAu) goto loc_004046CA;
    if (_jt == 0x004046D3u) goto loc_004046D3;
    if (_jt == 0x004046DCu) goto loc_004046DC;
    if (_jt == 0x004046E5u) goto loc_004046E5;
    if (_jt == 0x004046EEu) goto loc_004046EE;
    if (_jt == 0x004046F7u) goto loc_004046F7;
    if (_jt == 0x00404700u) goto loc_00404700;
    if (_jt == 0x00404709u) goto loc_00404709;
    if (_jt == 0x00404712u) goto loc_00404712;
    if (_jt == 0x0040471Bu) goto loc_0040471B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00404623: ;
    PUSH32(esp, 0x62DC60);
    goto loc_00404729;

loc_0040462D: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040463E; /* je: equal / zero */

loc_00404635: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00404731; /* jne: not equal / not zero */

loc_0040463E: ;
    ecx = esi;
    PUSH32(esp, 0x00404645u); RECOMP_ABI_CALL(0x004030C0u, sub_004030C0); /* call 0x004030C0 */

loc_00404645: ;
    goto loc_00404731;

loc_0040464A: ;
    ecx = esi;
    PUSH32(esp, 0x00404651u); RECOMP_ABI_CALL(0x004031B0u, sub_004031B0); /* call 0x004031B0 */

loc_00404651: ;
    goto loc_00404731;

loc_00404656: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00404667; /* je: equal / zero */

loc_0040465E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00404731; /* jne: not equal / not zero */

loc_00404667: ;
    ecx = esi;
    PUSH32(esp, 0x0040466Eu); RECOMP_ABI_CALL(0x004031E0u, sub_004031E0); /* call 0x004031E0 */

loc_0040466E: ;
    goto loc_00404731;

loc_00404673: ;
    ecx = esi;
    PUSH32(esp, 0x0040467Au); RECOMP_ABI_CALL(0x004032B0u, sub_004032B0); /* call 0x004032B0 */

loc_0040467A: ;
    goto loc_00404731;

loc_0040467F: ;
    ecx = esi;
    PUSH32(esp, 0x00404686u); RECOMP_ABI_CALL(0x004032E0u, sub_004032E0); /* call 0x004032E0 */

loc_00404686: ;
    goto loc_00404731;

loc_0040468B: ;
    ecx = esi;
    PUSH32(esp, 0x00404692u); RECOMP_ABI_CALL(0x004032F0u, sub_004032F0); /* call 0x004032F0 */

loc_00404692: ;
    goto loc_00404731;

loc_00404697: ;
    ecx = esi;
    PUSH32(esp, 0x0040469Eu); RECOMP_ABI_CALL(0x00403300u, sub_00403300); /* call 0x00403300 */

loc_0040469E: ;
    goto loc_00404731;

loc_004046A3: ;
    ecx = esi;
    PUSH32(esp, 0x004046AAu); RECOMP_ABI_CALL(0x00403350u, sub_00403350); /* call 0x00403350 */

loc_004046AA: ;
    goto loc_00404731;

loc_004046AF: ;
    ecx = esi;
    PUSH32(esp, 0x004046B6u); RECOMP_ABI_CALL(0x00403410u, sub_00403410); /* call 0x00403410 */

loc_004046B6: ;
    goto loc_00404731;

loc_004046B8: ;
    ecx = esi;
    PUSH32(esp, 0x004046BFu); RECOMP_ABI_CALL(0x004034A0u, sub_004034A0); /* call 0x004034A0 */

loc_004046BF: ;
    goto loc_00404731;

loc_004046C1: ;
    ecx = esi;
    PUSH32(esp, 0x004046C8u); RECOMP_ABI_CALL(0x004034F0u, sub_004034F0); /* call 0x004034F0 */

loc_004046C8: ;
    goto loc_00404731;

loc_004046CA: ;
    ecx = esi;
    PUSH32(esp, 0x004046D1u); RECOMP_ABI_CALL(0x00403620u, sub_00403620); /* call 0x00403620 */

loc_004046D1: ;
    goto loc_00404731;

loc_004046D3: ;
    ecx = esi;
    PUSH32(esp, 0x004046DAu); RECOMP_ABI_CALL(0x00403630u, sub_00403630); /* call 0x00403630 */

loc_004046DA: ;
    goto loc_00404731;

loc_004046DC: ;
    ecx = esi;
    PUSH32(esp, 0x004046E3u); RECOMP_ABI_CALL(0x00403640u, sub_00403640); /* call 0x00403640 */

loc_004046E3: ;
    goto loc_00404731;

loc_004046E5: ;
    ecx = esi;
    PUSH32(esp, 0x004046ECu); RECOMP_ABI_CALL(0x004043C0u, sub_004043C0); /* call 0x004043C0 */

loc_004046EC: ;
    goto loc_00404731;

loc_004046EE: ;
    ecx = esi;
    PUSH32(esp, 0x004046F5u); RECOMP_ABI_CALL(0x00403700u, sub_00403700); /* call 0x00403700 */

loc_004046F5: ;
    goto loc_00404731;

loc_004046F7: ;
    ecx = esi;
    PUSH32(esp, 0x004046FEu); RECOMP_ABI_CALL(0x00403710u, sub_00403710); /* call 0x00403710 */

loc_004046FE: ;
    goto loc_00404731;

loc_00404700: ;
    ecx = esi;
    PUSH32(esp, 0x00404707u); RECOMP_ABI_CALL(0x00403760u, sub_00403760); /* call 0x00403760 */

loc_00404707: ;
    goto loc_00404731;

loc_00404709: ;
    ecx = esi;
    PUSH32(esp, 0x00404710u); RECOMP_ABI_CALL(0x00403770u, sub_00403770); /* call 0x00403770 */

loc_00404710: ;
    goto loc_00404731;

loc_00404712: ;
    ecx = esi;
    PUSH32(esp, 0x00404719u); RECOMP_ABI_CALL(0x00403780u, sub_00403780); /* call 0x00403780 */

loc_00404719: ;
    goto loc_00404731;

loc_0040471B: ;
    ecx = esi;
    PUSH32(esp, 0x00404722u); RECOMP_ABI_CALL(0x004037A0u, sub_004037A0); /* call 0x004037A0 */

loc_00404722: ;
    goto loc_00404731;

loc_00404724: ;
    PUSH32(esp, 0x62DC48);

loc_00404729: ;
    PUSH32(esp, 0x0040472Eu); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_0040472E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00404731: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004045F0; /* jne: not equal / not zero */

loc_0040473C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004047A0
 * Original: 0x004047A0 - 0x004049DA (570 bytes, 153 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004047A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004047A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0x004047AAu); RECOMP_ABI_CALL(0x00403B80u, sub_00403B80); /* call 0x00403B80 */

loc_004047AA: ;
    MEM32(esi + 4) = 2;
    ecx = MEM32(0x6C38B4);
    PUSH32(esp, 3);
    PUSH32(esp, 0x004047BEu); RECOMP_ABI_CALL(0x00535DC0u, sub_00535DC0); /* call 0x00535DC0 */

loc_004047BE: ;
    ecx = MEM32(0x692EB0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004047CD; /* je: equal / zero */

loc_004047C8: ;
    PUSH32(esp, 0x004047CDu); RECOMP_ABI_CALL(0x00405420u, sub_00405420); /* call 0x00405420 */

loc_004047CD: ;
    ecx = MEM32(0x692E7C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004047DAu); RECOMP_ABI_CALL(0x00401E50u, sub_00401E50); /* call 0x00401E50 */

loc_004047DA: ;
    SET_LO8(eax, MEM8(0x6C3301));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0040481A; /* jne: not equal / not zero */

loc_004047E3: ;
    SET_LO8(eax, MEM8(0x6C2EE0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x692E79) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00404805; /* je: equal / zero */

loc_004047F3: ;
    eax = MEM32(0x692E7C);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x6C2EE0);
    PUSH32(esp, 0x00404805u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_00404805: ;
    ecx = MEM32(0x692E7C);
    ecx = MEM32(ecx + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00404813u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00404810u); } /* indirect call */
    }

loc_00404813: ;
    MEM8(0x692E78) = 1;

loc_0040481A: ;
    PUSH32(esp, 0x62DCE8);
    PUSH32(esp, 0x00404824u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_00404824: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00404838; /* je: equal / zero */

loc_0040482B: ;
    ecx = MEM32(0x6C3890);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x16);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00404838u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00404835u); } /* indirect call */
    }

loc_00404838: ;
    ecx = MEM32(0x6C38B4);
    PUSH32(esp, 5);
    PUSH32(esp, 0x00404845u); RECOMP_ABI_CALL(0x00535DC0u, sub_00535DC0); /* call 0x00535DC0 */

loc_00404845: ;
    SET_LO8(eax, MEM8(0x692E55));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004049BC; /* je: equal / zero */

loc_00404852: ;
    SET_LO8(eax, MEM8(0x692E60));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004049BC; /* jne: not equal / not zero */

loc_0040485F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00404866u); RECOMP_ABI_CALL(0x004016A0u, sub_004016A0); /* call 0x004016A0 */

loc_00404866: ;
    ecx = MEM32(0x697B88);
    esi = MEM32(ecx + 4);
    eax = MEM32(esi + 0x554);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004049BC; /* je: equal / zero */

loc_00404880: ;
    _fa = (uint32_t)(MEM32(0x6C2C60)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C2C60), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004049BC; /* jne: not equal / not zero */

loc_0040488D: ;
    edx = MEM32(0x6C3890);
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004049BC; /* je: equal / zero */

loc_0040489D: ;
    PUSH32(esp, 0x62DCDC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004048A8u); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_004048A8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004048B6; /* jne: not equal / not zero */

loc_004048AF: ;
    esi = 1;
    goto loc_004048D7;

loc_004048B6: ;
    esi = MEM32(esi + 0x554);
    PUSH32(esp, 0x62DCD4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004048C7u); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_004048C7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004049BC; /* jne: not equal / not zero */

loc_004048D2: ;
    esi = 2;

loc_004048D7: ;
    ecx = 0x8582C8;
    PUSH32(esp, 0x004048E1u); RECOMP_ABI_CALL(0x005E1A80u, sub_005E1A80); /* call 0x005E1A80 */

loc_004048E1: ;
    PUSH32(esp, 0x004048E6u); RECOMP_ABI_CALL(0x004025B0u, sub_004025B0); /* call 0x004025B0 */

loc_004048E6: ;
    PUSH32(esp, 4);
    ecx = eax;
    PUSH32(esp, 0x004048EFu); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_004048EF: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x004048F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004048F4u); } /* indirect call */
    }

loc_004048F7: ;
    PUSH32(esp, 0x18);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00404900u); RECOMP_ABI_CALL(0x00467650u, sub_00467650); /* call 0x00467650 */

loc_00404900: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00404915; /* jne: not equal / not zero */

loc_00404907: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0040490Eu); RECOMP_ABI_CALL(0x00402A90u, sub_00402A90); /* call 0x00402A90 */

loc_0040490E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040491A; /* je: equal / zero */

loc_00404915: ;
    esi = 0x800;

loc_0040491A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x62DC90);
    PUSH32(esp, 0x00404925u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00404925: ;
    ecx = MEM32(0x69585C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00404937u); RECOMP_ABI_CALL(0x00467090u, sub_00467090); /* call 0x00467090 */

loc_00404937: ;
    eax = MEM32(0x6C3688);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00404998; /* jne: not equal / not zero */

loc_00404940: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00404998; /* jne: not equal / not zero */

loc_00404944: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x800 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00404998; /* jne: not equal / not zero */

loc_0040494C: ;
    /* nop */

loc_00404950: ;
    PUSH32(esp, 0x00404955u); RECOMP_ABI_CALL(0x006040E0u, sub_006040E0); /* call 0x006040E0 */

loc_00404955: ;
    PUSH32(esp, 0x0040495Au); RECOMP_ABI_CALL(0x006039E0u, sub_006039E0); /* call 0x006039E0 */

loc_0040495A: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00404961u); RECOMP_ABI_CALL(0x00467650u, sub_00467650); /* call 0x00467650 */

loc_00404961: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00404976; /* jne: not equal / not zero */

loc_00404968: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0040496Fu); RECOMP_ABI_CALL(0x00402A90u, sub_00402A90); /* call 0x00402A90 */

loc_0040496F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040497B; /* je: equal / zero */

loc_00404976: ;
    esi = 0x800;

loc_0040497B: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, 0x00404982u); RECOMP_ABI_CALL(0x00611C50u, sub_00611C50); /* call 0x00611C50 */

loc_00404982: ;
    ecx = MEM32(0x6CE2E4);
    eax = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00404990u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040498Du); } /* indirect call */
    }

loc_00404990: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x800 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00404950; /* je: equal / zero */

loc_00404998: ;
    ecx = MEM32(0x6C2C5C);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x62DC80);
    ecx = 0x8582C8;
    MEM32(0x8582C4) = 0x62D544;
    PUSH32(esp, 0x004049BCu); RECOMP_ABI_CALL(0x005E1500u, sub_005E1500); /* call 0x005E1500 */

loc_004049BC: ;
    PUSH32(esp, 0x004049C1u); RECOMP_ABI_CALL(0x00539D40u, sub_00539D40); /* call 0x00539D40 */

loc_004049C1: ;
    ecx = MEM32(0x6C38A4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004049CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004049CBu); } /* indirect call */
    }

loc_004049CE: ;
    ecx = MEM32(0x692E7C);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00401FC0(); return; /* tail jmp 0x00401FC0 */

}

/**
 * sub_004049E0
 * Original: 0x004049E0 - 0x00404A8E (174 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004049E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004049E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x62DCF4);
    esi = ecx;
    PUSH32(esp, 0x004049EDu); RECOMP_ABI_CALL(0x00613AC0u, sub_00613AC0); /* call 0x00613AC0 */

loc_004049ED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x004049F9u); RECOMP_ABI_CALL(0x00403B80u, sub_00403B80); /* call 0x00403B80 */

loc_004049F9: ;
    MEM32(esi + 4) = 3;
    ecx = MEM32(0x6C38A4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00404A0Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00404A0Au); } /* indirect call */
    }

loc_00404A0D: ;
    ecx = MEM32(0x692EB0);
    PUSH32(esp, 0x00404A18u); RECOMP_ABI_CALL(0x004053B0u, sub_004053B0); /* call 0x004053B0 */

loc_00404A18: ;
    ecx = MEM32(0x692E7C);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00404A25u); RECOMP_ABI_CALL(0x00401E50u, sub_00401E50); /* call 0x00401E50 */

loc_00404A25: ;
    SET_LO8(eax, MEM8(0x6C3301));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00404A67; /* jne: not equal / not zero */

loc_00404A2F: ;
    SET_LO8(eax, MEM8(0x6C2EE0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x692E79) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00404A52; /* je: equal / zero */

loc_00404A3F: ;
    ecx = MEM32(0x692E7C);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0x6C2EE0);
    PUSH32(esp, 0x00404A52u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_00404A52: ;
    edx = MEM32(0x692E7C);
    ecx = MEM32(edx + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00404A60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00404A5Du); } /* indirect call */
    }

loc_00404A60: ;
    MEM8(0x692E78) = 1;

loc_00404A67: ;
    SET_LO8(eax, MEM8(0x692E55));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00404A83; /* je: equal / zero */

loc_00404A70: ;
    SET_LO8(eax, MEM8(0x692E60));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00404A83; /* jne: not equal / not zero */

loc_00404A79: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00404A80u); RECOMP_ABI_CALL(0x004016A0u, sub_004016A0); /* call 0x004016A0 */

loc_00404A80: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00404A83: ;
    ecx = MEM32(0x692E7C);
    g_seh_ebp = ebp; sub_00401FC0(); return; /* tail jmp 0x00401FC0 */

}

/**
 * sub_00404A90
 * Original: 0x00404A90 - 0x00404B63 (211 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404A90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00404A90: ;
    PUSH32(esp, ecx);
    edx = MEM32(esp + 8);
    eax = edx + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    MEM32(esp) = ecx;
    if (CMP_A(_fa, _fb)) goto loc_00404B2F; /* ja: above (unsigned >) */

loc_00404AA5: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x404B64); /* switch: 8 entries, 8 targets */
    if (_jt == 0x00404AACu) goto loc_00404AAC;
    if (_jt == 0x00404AB6u) goto loc_00404AB6;
    if (_jt == 0x00404AFEu) goto loc_00404AFE;
    if (_jt == 0x00404B05u) goto loc_00404B05;
    if (_jt == 0x00404B0Cu) goto loc_00404B0C;
    if (_jt == 0x00404B13u) goto loc_00404B13;
    if (_jt == 0x00404B21u) goto loc_00404B21;
    if (_jt == 0x00404B28u) goto loc_00404B28;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00404AAC: ;
    PUSH32(esp, 0x00404AB1u); RECOMP_ABI_CALL(0x00403840u, sub_00403840); /* call 0x00403840 */

loc_00404AB1: ;
    goto loc_00404B3C;

loc_00404AB6: ;
    PUSH32(esp, ebx);
    eax = 0x4D2;
    ebx = 0x929;
    ecx = 0xD80;
    { uint32_t _icall_esp = g_esp;
    (void)_icall_esp; eax = ecx; /* SafeDisc .grxdd DRM check bypass (was MEM32(0x870000) call) */
    }

loc_00404ACC: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD80 (32-bit) */
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, 0x00404ADDu); RECOMP_ABI_CALL(0x004047A0u, sub_004047A0); /* call 0x004047A0 */

loc_00404ADD: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00404B3C; /* jne: not equal / not zero */

loc_00404AE2: ;
    eax = MEM32(0x697B88);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 3);
    PUSH32(esp, 0x00404AF1u); RECOMP_ABI_CALL(0x004854C0u, sub_004854C0); /* call 0x004854C0 */

loc_00404AF1: ;
    ecx = MEM32(esp);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00404AFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00404AF9u); } /* indirect call */
    }

loc_00404AFC: ;
    goto loc_00404B3C;

loc_00404AFE: ;
    PUSH32(esp, 0x00404B03u); RECOMP_ABI_CALL(0x004049E0u, sub_004049E0); /* call 0x004049E0 */

loc_00404B03: ;
    goto loc_00404B3C;

loc_00404B05: ;
    PUSH32(esp, 0x00404B0Au); RECOMP_ABI_CALL(0x00403860u, sub_00403860); /* call 0x00403860 */

loc_00404B0A: ;
    goto loc_00404B3C;

loc_00404B0C: ;
    PUSH32(esp, 0x00404B11u); RECOMP_ABI_CALL(0x004038E0u, sub_004038E0); /* call 0x004038E0 */

loc_00404B11: ;
    goto loc_00404B3C;

loc_00404B13: ;
    MEM32(ecx + 4) = edx;
    ecx = MEM32(esp);
    PUSH32(esp, 0x00404B1Fu); RECOMP_ABI_CALL(0x00403AE0u, sub_00403AE0); /* call 0x00403AE0 */

loc_00404B1F: ;
    goto loc_00404B3C;

loc_00404B21: ;
    PUSH32(esp, 0x00404B26u); RECOMP_ABI_CALL(0x00403B30u, sub_00403B30); /* call 0x00403B30 */

loc_00404B26: ;
    goto loc_00404B3C;

loc_00404B28: ;
    PUSH32(esp, 0x00404B2Du); RECOMP_ABI_CALL(0x00402AC0u, sub_00402AC0); /* call 0x00402AC0 */

loc_00404B2D: ;
    goto loc_00404B3C;

loc_00404B2F: ;
    PUSH32(esp, 0x62DCFC);
    PUSH32(esp, 0x00404B39u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_00404B39: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00404B3C: ;
    eax = MEM32(esp);
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = ecx;
    edx = MEM32(esp);
    MEM8(edx + 9) = 0;
    eax = MEM32(esp);
    MEM8(eax + 8) = 0;
    ecx = MEM32(esp);
    MEM8(ecx + 0xA) = 0;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00404B90
 * Original: 0x00404B90 - 0x00404BE7 (87 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404B90(void)
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

loc_00404B90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00404B99u); RECOMP_ABI_CALL(0x0053A920u, sub_0053A920); /* call 0x0053A920 */

loc_00404B99: ;
    MEM32(esi) = 0x62D968;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 1);
    ecx = esi;
    MEM32(esi + 0x3C) = edi;
    MEM32(esi + 0x38) = edi;
    MEM32(esi + 0x34) = edi;
    PUSH32(esp, 0x00404BB3u); RECOMP_ABI_CALL(0x00404A90u, sub_00404A90); /* call 0x00404A90 */

loc_00404BB3: ;
    MEM32(esi + 0x40) = edi;
    fp_push((double)SMEM32(0x6754A4)); /* fild */
    MEMF(esi + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(0x6754A4)); /* fild */
    MEM32(esi + 0x48) = 0x3F800000;
    MEM32(esi + 0x54) = 1;
    MEM32(esi + 0x58) = edi;
    MEMF(esi + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM8(esi + 0x5C) = 1;
    PUSH32(esp, 0x00404BE2u); RECOMP_ABI_CALL(0x004014C0u, sub_004014C0); /* call 0x004014C0 */

loc_00404BE2: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00404BF0
 * Original: 0x00404BF0 - 0x00404C24 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00404BF0: ;
    PUSH32(esp, 0x78);
    PUSH32(esp, 0x62DD24);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x00404BFEu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00404BFE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00404C17; /* je: equal / zero */

loc_00404C05: ;
    ecx = eax;
    PUSH32(esp, 0x00404C0Cu); RECOMP_ABI_CALL(0x00404B90u, sub_00404B90); /* call 0x00404B90 */

loc_00404C0C: ;
    MEM32(0x6C3894) = eax;
    MEM32(0x6C3890) = eax;
    esp += 4; return; /* ret */

loc_00404C17: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x6C3894) = eax;
    MEM32(0x6C3890) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00404C30
 * Original: 0x00404C30 - 0x00404C49 (25 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404C30(void)
{

loc_00404C30: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00404C50
 * Original: 0x00404C50 - 0x00404C76 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404C50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00404C50: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    MEM32(esi) = 0x62DD40;
    PUSH32(esp, 0x00404C62u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00404C62: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00404C6Bu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00404C6B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00614360(); return; /* tail jmp 0x00614360 */

}

/**
 * sub_00404C80
 * Original: 0x00404C80 - 0x00404CDE (94 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00404C80: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(0x6C3890);
    MEM32(0x67967C) = eax;
    SET_LO8(eax, MEM8(ecx + 9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00404C9F; /* jne: not equal / not zero */

loc_00404C98: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00404C9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00404C9Cu); } /* indirect call */
    }

loc_00404C9F: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x62DD44);
    MEM32(esi + 0x10) = 0;
    PUSH32(esp, 0x00404CB8u); RECOMP_ABI_CALL(0x00618610u, sub_00618610); /* call 0x00618610 */

loc_00404CB8: ;
    edx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00404CC1u); RECOMP_ABI_CALL(0x00614910u, sub_00614910); /* call 0x00614910 */

loc_00404CC1: ;
    MEM8(esi + 4) = 1;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x692EA4) = 0;
    MEM32(0x692EA8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00404CE0
 * Original: 0x00404CE0 - 0x00404D40 (96 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00404CE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x62DD64);
    esi = ecx;
    PUSH32(esp, 0x00404CEDu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00404CED: ;
    eax = MEM32(esi + 0x14);
    eax = MEM32(eax + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00404D01; /* je: equal / zero */

loc_00404CFA: ;
    MEM32(eax + 8) = 0;

loc_00404D01: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00404D0Au); RECOMP_ABI_CALL(0x006148C0u, sub_006148C0); /* call 0x006148C0 */

loc_00404D0A: ;
    ecx = MEM32(0x67967C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x269EC3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x67967C) = ecx;
    eax = MEM32(0x67967E);
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 8) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x67967C) = eax;
    MEM32(esi + 0x10) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00404D40
 * Original: 0x00404D40 - 0x00404D50 (16 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404D40(void)
{

loc_00404D40: ;
    PUSH32(esp, 0x00404D45u); RECOMP_ABI_CALL(0x00614570u, sub_00614570); /* call 0x00614570 */

loc_00404D45: ;
    MEM32(0x860678) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00404D50
 * Original: 0x00404D50 - 0x00404EA7 (343 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00404D50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00404D50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x1C));
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x6C3304);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00404EA0; /* je: equal / zero */

loc_00404D69: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00404D6Eu); RECOMP_ABI_CALL(0x00614770u, sub_00614770); /* call 0x00614770 */

loc_00404D6E: ;
    ecx = MEM32(esi + 0x10);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00404EA0; /* jl: less (signed <) */

loc_00404D80: ;
    MEM32(esi + 0x10) = 0;
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
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00404D9Eu); RECOMP_ABI_CALL(0x004690F0u, sub_004690F0); /* call 0x004690F0 */

loc_00404D9E: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x48);
    edx = MEM32(ecx + 0x6C);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(eax + 0x70);
    edx = MEM32(eax + 0x74);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x70)) >> 32) & 1);
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + 8);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x86066C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00404EA0; /* je: equal / zero */

loc_00404DD2: ;
    SET_LO8(eax, MEM8(0x860620));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00404E6D; /* je: equal / zero */

loc_00404DDF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00404DE4u); RECOMP_ABI_CALL(0x006145E0u, sub_006145E0); /* call 0x006145E0 */

loc_00404DE4: ;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00404DEDu); RECOMP_ABI_CALL(0x006145E0u, sub_006145E0); /* call 0x006145E0 */

loc_00404DED: ;
    MEM32(esp + 0x18) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00404DF6u); RECOMP_ABI_CALL(0x006145E0u, sub_006145E0); /* call 0x006145E0 */

loc_00404DF6: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 8] */
    MEM32(esp + 0x1C) = eax;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00404E27; /* jp: parity */

loc_00404E09: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00404E27; /* jp: parity */

loc_00404E18: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00404EA0; /* jnp: not parity */

loc_00404E27: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x30));
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp + 0x28) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    MEMD(esp + 0x20) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    MEMD(esp + 0x18) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x62DD80);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00404E63u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00404E63: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x34)) >> 32) & 1);
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00404E6D: ;
    ecx = MEM32(esp + 8);
    edx = ecx;
    PUSH32(esp, edx);
    MEM32(esp + 8) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00404E7Du); RECOMP_ABI_CALL(0x00614700u, sub_00614700); /* call 0x00614700 */

loc_00404E7D: ;
    eax = MEM32(esp + 0x10);
    ecx = eax;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00404E8Du); RECOMP_ABI_CALL(0x00614700u, sub_00614700); /* call 0x00614700 */

loc_00404E8D: ;
    edx = MEM32(esp + 0x18);
    eax = edx;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00404E9Du); RECOMP_ABI_CALL(0x00614700u, sub_00614700); /* call 0x00614700 */

loc_00404E9D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00404EA0: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
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
 * sub_00404EB0
 * Original: 0x00404EB0 - 0x00404EB5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404EB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00404EB0: ;
    g_seh_ebp = ebp; sub_00614740(); return; /* tail jmp 0x00614740 */

}

/**
 * sub_00404EC0
 * Original: 0x00404EC0 - 0x00404F17 (87 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00404EC0: ;
    ecx = MEM32(0x6C3890);
    SET_LO8(eax, MEM8(ecx + 9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00404EF1; /* je: equal / zero */

loc_00404ECD: ;
    eax = MEM32(0x692EA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00404EF1; /* jne: not equal / not zero */

loc_00404ED6: ;
    eax = MEM32(0x692EA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00404EE9; /* jne: not equal / not zero */

loc_00404EDF: ;
    MEM32(0x692EA8) = 1;

loc_00404EE9: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00404EF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00404EEDu); } /* indirect call */
    }

loc_00404EF0: ;
    esp += 4; return; /* ret */

loc_00404EF1: ;
    eax = MEM32(0x692EA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00404EE9; /* jne: not equal / not zero */

loc_00404EFA: ;
    PUSH32(esp, 0x00404EFFu); RECOMP_ABI_CALL(0x0052BEB0u, sub_0052BEB0); /* call 0x0052BEB0 */

loc_00404EFF: ;
    ecx = MEM32(0x6C3890);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00404F0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00404F09u); } /* indirect call */
    }

loc_00404F0C: ;
    MEM32(0x692EA8) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00404F20
 * Original: 0x00404F20 - 0x00404F6B (75 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00404F20: ;
    eax = MEM32(0x692EA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00404F33; /* je: equal / zero */

loc_00404F29: ;
    MEM32(0x692EA8) = 0;

loc_00404F33: ;
    eax = MEM32(0x6C3890);
    SET_LO8(ecx, MEM8(eax + 9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00404F48; /* jne: not equal / not zero */

loc_00404F3F: ;
    PUSH32(esp, 0x00404F44u); RECOMP_ABI_CALL(0x0052BEB0u, sub_0052BEB0); /* call 0x0052BEB0 */

loc_00404F44: ;
    PUSH32(esp, 1);
    goto loc_00404F55;

loc_00404F48: ;
    ecx = MEM32(0x6CE2E4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00404F53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00404F50u); } /* indirect call */
    }

loc_00404F53: ;
    PUSH32(esp, 2);

loc_00404F55: ;
    ecx = MEM32(0x6C3890);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00404F60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00404F5Du); } /* indirect call */
    }

loc_00404F60: ;
    MEM32(0x692EA4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00404F70
 * Original: 0x00404F70 - 0x00404F7C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00404F70: ;
    SET_LO8(eax, MEM8(ecx + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ecx + 4) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00404F80
 * Original: 0x00404F80 - 0x00405050 (208 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00404F80: ;
    eax = MEM32(0x86066C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0040504E; /* je: equal / zero */

loc_00404F90: ;
    SET_LO8(eax, MEM8(0x860620));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040504E; /* je: equal / zero */

loc_00404F9D: ;
    eax = MEM32(0x6C3890);
    SET_LO8(ecx, MEM8(eax + 9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00404FB3; /* jne: not equal / not zero */

loc_00404FA9: ;
    MEM32(0x692EA4) = 0;

loc_00404FB3: ;
    ecx = MEM32(0x6C38A4);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0040504E; /* jl: less (signed <) */

loc_00404FC3: ;
    edx = MEM32(0x692EB0);
    SET_LO8(eax, MEM8(edx + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0040504E; /* jne: not equal / not zero */

loc_00404FD0: ;
    eax = MEM32(0x85F888);
    SET_LO8(edx, MEM8(0x85FA65));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x85F965));
    ecx = eax;
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(edx, LO8(edx) ^ LO8(ebx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ecx + 0x85F965)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x85F965), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00405005; /* je: equal / zero */

loc_00404FF1: ;
    ecx = MEM32(0x692EA4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00405005; /* jne: not equal / not zero */

loc_00404FFB: ;
    PUSH32(esp, 0x00405000u); RECOMP_ABI_CALL(0x00404EC0u, sub_00404EC0); /* call 0x00404EC0 */

loc_00405000: ;
    eax = MEM32(0x85F888);

loc_00405005: ;
    SET_LO8(ebx, MEM8(0x85F968));
    SET_LO8(edx, MEM8(0x85FA68));
    ecx = eax;
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(edx, LO8(edx) ^ LO8(ebx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ecx + 0x85F968)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x85F968), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0040502A; /* je: equal / zero */

loc_00405020: ;
    PUSH32(esp, 0x00405025u); RECOMP_ABI_CALL(0x00404F20u, sub_00404F20); /* call 0x00404F20 */

loc_00405025: ;
    eax = MEM32(0x85F888);

loc_0040502A: ;
    SET_LO8(ebx, MEM8(0x85F960));
    SET_LO8(ecx, MEM8(0x85FA60));
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(edx, MEM8(eax + 0x85F960));
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(edx) (8-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0040504E; /* je: equal / zero */

loc_00405046: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00404F70(); return; /* tail jmp 0x00404F70 */

loc_0040504E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00405050
 * Original: 0x00405050 - 0x00405159 (265 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405050(void)
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

loc_00405050: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = 0x62DD40;
    PUSH32(esp, 0x00405062u); RECOMP_ABI_CALL(0x0053A8D0u, sub_0053A8D0); /* call 0x0053A8D0 */

loc_00405062: ;
    ecx = eax;
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x64);
    eax = 0x51EB851F;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edi = edx;
    edi = edi >> 5;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00405095; /* jae: above or equal (unsigned >=) */

loc_00405080: ;
    edi = ecx + -131072;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x400 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00405095; /* jae: above or equal (unsigned >=) */

loc_0040508E: ;
    edi = 0x400;
    goto loc_004050A2;

loc_00405095: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x80000 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004050A2; /* jbe: below or equal (unsigned <=) */

loc_0040509D: ;
    edi = 0x80000;

loc_004050A2: ;
    PUSH32(esp, 0x62DE18);
    PUSH32(esp, 0x004050ACu); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_004050AC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004050F2; /* jne: not equal / not zero */

loc_004050B5: ;
    _fa = (uint32_t)(MEM8(0x6C3421)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x6C3421), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004050F2; /* jne: not equal / not zero */

loc_004050BD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x40000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004050F7; /* jae: above or equal (unsigned >=) */

loc_004050C5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x10) = edi;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_004050D7; /* jge: greater or equal (signed >=) */

loc_004050D1: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_004050D7: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62DE14)); /* fmul dword ptr [0x62de14] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x62DDE8);
    PUSH32(esp, 0x004050EDu); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_004050ED: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004050F7;

loc_004050F2: ;
    edi = 0x80;

loc_004050F7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x62DDD0);
    PUSH32(esp, 0x00405102u); RECOMP_ABI_CALL(0x00618610u, sub_00618610); /* call 0x00618610 */

loc_00405102: ;
    PUSH32(esp, 0x59);
    PUSH32(esp, 0x62DDC4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0040510Fu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0040510F: ;
    PUSH32(esp, 0x62);
    PUSH32(esp, 0x62DDC4);
    ebp = esi + 0x1C;
    PUSH32(esp, 0x24);
    MEM32(esi + 0x18) = eax;
    MEM32(ebp) = eax;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    PUSH32(esp, 0x00405132u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00405132: ;
    MEM32(esi + 0x14) = eax;
    MEM32(eax + 0x1C) = ebp;
    ecx = MEM32(ebp);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x20) = ecx;
    POP32(esp, edi);
    MEM32(0x692EA4) = ebx;
    MEM32(0x692EA8) = ebx;
    MEM8(esi + 4) = 1;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_00405160
 * Original: 0x00405160 - 0x0040517E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00405160: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00405168u); RECOMP_ABI_CALL(0x00404C50u, sub_00404C50); /* call 0x00404C50 */

loc_00405168: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00405178; /* je: equal / zero */

loc_0040516F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00405175u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00405175: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00405178: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00405180
 * Original: 0x00405180 - 0x004051E0 (96 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00405180: ;
    ecx = MEM32(0x69585C);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004051AE; /* je: equal / zero */

loc_0040518D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00405194u); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_00405194: ;
    ecx = MEM32(0x69585C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004051A1u); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_004051A1: ;
    ecx = MEM32(0x69585C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004051AEu); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_004051AE: ;
    PUSH32(esp, 0x004051B3u); RECOMP_ABI_CALL(0x00614810u, sub_00614810); /* call 0x00614810 */

loc_004051B3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004051C7; /* jne: not equal / not zero */

loc_004051B7: ;
    PUSH32(esp, 0x62DE24);
    PUSH32(esp, 0x004051C1u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_004051C1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_004051C7: ;
    _fa = (uint32_t)(MEM32(0x692EA8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x692EA8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004051DD; /* jne: not equal / not zero */

loc_004051D0: ;
    ecx = MEM32(0x6C3890);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004051DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004051DAu); } /* indirect call */
    }

loc_004051DD: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_004051E0
 * Original: 0x004051E0 - 0x00405218 (56 bytes, 19 insns)
 * CC: cdecl, 8 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_004051E0(void)
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

loc_004051E0: ;
    eax = MEM32(esp + 0x20);
    fp_push((double)SMEM32(esp + 8)); /* fild */
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00405215u); RECOMP_ABI_CALL(0x005DF5B0u, sub_005DF5B0); /* call 0x005DF5B0 */

loc_00405215: ;
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00405220
 * Original: 0x00405220 - 0x0040524A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00405220: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x62DE3C;
    PUSH32(esp, 0x0040522Eu); RECOMP_ABI_CALL(0x00614570u, sub_00614570); /* call 0x00614570 */

loc_0040522E: ;
    eax = MEM32(esi + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00405237u); RECOMP_ABI_CALL(0x005E1010u, sub_005E1010); /* call 0x005E1010 */

loc_00405237: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC;
    PUSH32(esp, 0x00405242u); RECOMP_ABI_CALL(0x00404C50u, sub_00404C50); /* call 0x00404C50 */

loc_00405242: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00614360(); return; /* tail jmp 0x00614360 */

}

/**
 * sub_00405250
 * Original: 0x00405250 - 0x0040526B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00405250: ;
    ecx = MEM32(0x692EB0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00405260; /* je: equal / zero */

loc_0040525A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00405260u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040525Eu); } /* indirect call */
    }

loc_00405260: ;
    MEM32(0x692EB0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00405270
 * Original: 0x00405270 - 0x004052F3 (131 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00405270: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM8(edi + 0x34) = 1;
    ecx = MEM32(0x697B90);
    PUSH32(esp, 0x62DE40);
    PUSH32(esp, 0x00405288u); RECOMP_ABI_CALL(0x0047EBE0u, sub_0047EBE0); /* call 0x0047EBE0 */

loc_00405288: ;
    ecx = MEM32(0x6C3890);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00405295u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00405292u); } /* indirect call */
    }

loc_00405295: ;
    ecx = MEM32(0x69585C);
    MEM32(0x692EA8) = 0;
    MEM32(0x692EA4) = 0;
    eax = MEM32(ecx + 0x28);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004052F0; /* jle: less or equal (signed <=) */

loc_004052B8: ;
    PUSH32(esp, ebx);
    ebx = 8;
    edi = edi;

loc_004052C0: ;
    _fa = (uint32_t)(MEM32(ebx + ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004052E4; /* je: equal / zero */

loc_004052C6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004052CCu); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_004052CC: ;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0x58);
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + edi + 4));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004052DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004052DBu); } /* indirect call */
    }

loc_004052DE: ;
    ecx = MEM32(0x69585C);

loc_004052E4: ;
    eax = MEM32(ecx + 0x28);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004052C0; /* jl: less (signed <) */

loc_004052EF: ;
    POP32(esp, ebx);

loc_004052F0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00405300
 * Original: 0x00405300 - 0x00405351 (81 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00405300: ;
    eax = MEM32(0x6C3890);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(eax + 9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0040532B; /* jne: not equal / not zero */

loc_0040530F: ;
    eax = MEM32(0x697B88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040532B; /* je: equal / zero */

loc_00405318: ;
    ecx = esi + 0xC;
    PUSH32(esp, 0x00405320u); RECOMP_ABI_CALL(0x00404D50u, sub_00404D50); /* call 0x00404D50 */

loc_00405320: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0040532B; /* jne: not equal / not zero */

loc_00405324: ;
    ecx = esi;
    PUSH32(esp, 0x0040532Bu); RECOMP_ABI_CALL(0x00405270u, sub_00405270); /* call 0x00405270 */

loc_0040532B: ;
    ecx = MEM32(0x6C38A4);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 7 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0040534F; /* jge: greater or equal (signed >=) */

loc_00405337: ;
    ecx = MEM32(0x697B90);
    PUSH32(esp, 0x00405342u); RECOMP_ABI_CALL(0x0047CA00u, sub_0047CA00); /* call 0x0047CA00 */

loc_00405342: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0040534F; /* jne: not equal / not zero */

loc_00405346: ;
    ecx = esi + 0xC;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00404F80(); return; /* tail jmp 0x00404F80 */

loc_0040534F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00405360
 * Original: 0x00405360 - 0x004053A1 (65 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00405360: ;
    eax = MEM32(0x6C3890);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(eax + 9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0040538B; /* jne: not equal / not zero */

loc_0040536F: ;
    eax = MEM32(0x697B88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040538B; /* je: equal / zero */

loc_00405378: ;
    ecx = esi + 0xC;
    PUSH32(esp, 0x00405380u); RECOMP_ABI_CALL(0x00405180u, sub_00405180); /* call 0x00405180 */

loc_00405380: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0040538B; /* jne: not equal / not zero */

loc_00405384: ;
    ecx = esi;
    PUSH32(esp, 0x0040538Bu); RECOMP_ABI_CALL(0x00405270u, sub_00405270); /* call 0x00405270 */

loc_0040538B: ;
    SET_LO8(eax, MEM8(esi + 0x35));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040539F; /* je: equal / zero */

loc_00405392: ;
    MEM8(esi + 0x35) = 0;
    ecx = esi + 0xC;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00404EB0(); return; /* tail jmp 0x00404EB0 */

loc_0040539F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004053B0
 * Original: 0x004053B0 - 0x00405411 (97 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004053B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004053B0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, esi);
    ecx = ebx + 0xC;
    MEM8(ebx + 0x34) = 0;
    PUSH32(esp, 0x004053C0u); RECOMP_ABI_CALL(0x00404C80u, sub_00404C80); /* call 0x00404C80 */

loc_004053C0: ;
    ecx = MEM32(0x69585C);
    eax = MEM32(ecx + 0x28);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0040540E; /* jle: less or equal (signed <=) */

loc_004053CF: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = 8;

loc_004053D6: ;
    _fa = (uint32_t)(MEM32(ecx + ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + ebp), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00405401; /* je: equal / zero */

loc_004053DC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004053E2u); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_004053E2: ;
    edi = MEM32(eax + 0x10);
    ecx = MEM32(edi + 0x58);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004053EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004053EAu); } /* indirect call */
    }

loc_004053ED: ;
    MEM8(esi + ebx + 4) = LO8(eax);
    ecx = MEM32(edi + 0x58);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004053FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004053F8u); } /* indirect call */
    }

loc_004053FB: ;
    ecx = MEM32(0x69585C);

loc_00405401: ;
    eax = MEM32(ecx + 0x28);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004053D6; /* jl: less (signed <) */

loc_0040540C: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0040540E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00405420
 * Original: 0x00405420 - 0x0040542C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00405420: ;
    MEM8(ecx + 0x35) = 0;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00404CE0(); return; /* tail jmp 0x00404CE0 */

}

/**
 * sub_00405430
 * Original: 0x00405430 - 0x00405441 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405430(void)
{

loc_00405430: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    PUSH32(esp, 0x0040543Bu); RECOMP_ABI_CALL(0x00404D40u, sub_00404D40); /* call 0x00404D40 */

loc_0040543B: ;
    MEM8(esi + 0x35) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00405450
 * Original: 0x00405450 - 0x0040562E (478 bytes, 141 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405450(void)
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

loc_00405450: ;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x10));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00405625; /* je: equal / zero */

loc_00405467: ;
    eax = MEM32(0x6C38A4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00405625; /* jl: less (signed <) */

loc_00405476: ;
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00405480u); RECOMP_ABI_CALL(0x005E1AF0u, sub_005E1AF0); /* call 0x005E1AF0 */

loc_00405480: ;
    eax = MEM32(0x674FB0);
    ecx = MEM32(0x674FAC);
    PUSH32(esp, 0x62DE7C);
    edx = esp + 0x54;
    _fb = (uint32_t)(0xFFFFFFD8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFD8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax + -106;
    PUSH32(esp, 0x50);
    PUSH32(esp, edx);
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x1C) = 2;
    MEM32(esp + 0x54) = 0xFFBFE6F5u;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = ebx;
    PUSH32(esp, 0x004054CEu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004054CE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = 0x8582C8;
    PUSH32(esp, 0x004054E0u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_004054E0: ;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    edx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x38);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x41A00000);
    PUSH32(esp, 0x0040550Au); RECOMP_ABI_CALL(0x005DF5B0u, sub_005DF5B0); /* call 0x005DF5B0 */

loc_0040550A: ;
    PUSH32(esp, 0x62DE6C);
    eax = esp + 0x54;
    PUSH32(esp, 0x50);
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = ebx;
    PUSH32(esp, 0x00405523u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00405523: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    ecx = 0x8582C8;
    PUSH32(esp, 0x00405535u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_00405535: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    _fb = (uint32_t)(0x2E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x2E;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = edi;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x38);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x41A00000);
    PUSH32(esp, 0x00405566u); RECOMP_ABI_CALL(0x005DF5B0u, sub_005DF5B0); /* call 0x005DF5B0 */

loc_00405566: ;
    edi = MEM32(0x674FB0);
    PUSH32(esp, 0x62DE60);
    ecx = esp + 0x54;
    PUSH32(esp, 0x50);
    _fb = (uint32_t)(0xFFFFFFADu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFADu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = ebx;
    PUSH32(esp, 0x0040558Cu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0040558C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x50;
    PUSH32(esp, edx);
    ecx = 0x8582C8;
    PUSH32(esp, 0x0040559Eu); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0040559E: ;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    edx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x38);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x41A00000);
    PUSH32(esp, 0x004055C8u); RECOMP_ABI_CALL(0x005DF5B0u, sub_005DF5B0); /* call 0x005DF5B0 */

loc_004055C8: ;
    PUSH32(esp, 0x62DE4C);
    eax = esp + 0x54;
    PUSH32(esp, 0x50);
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = ebx;
    PUSH32(esp, 0x004055E1u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004055E1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    ecx = 0x8582C8;
    PUSH32(esp, 0x004055F3u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_004055F3: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    _fb = (uint32_t)(0x2E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x2E;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = edi;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x38);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x41A00000);
    PUSH32(esp, 0x00405624u); RECOMP_ABI_CALL(0x005DF5B0u, sub_005DF5B0); /* call 0x005DF5B0 */

loc_00405624: ;
    POP32(esp, edi);

loc_00405625: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00405630
 * Original: 0x00405630 - 0x00405662 (50 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405630(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00405630: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x62DE3C;
    PUSH32(esp, 0x00405641u); RECOMP_ABI_CALL(0x00405050u, sub_00405050); /* call 0x00405050 */

loc_00405641: ;
    eax = 0x1010101;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0);
    PUSH32(esp, 0x62D544);
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x00405658u); RECOMP_ABI_CALL(0x005E11E0u, sub_005E11E0); /* call 0x005E11E0 */

loc_00405658: ;
    MEM32(esi + 0x38) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00405670
 * Original: 0x00405670 - 0x0040568E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00405670: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00405678u); RECOMP_ABI_CALL(0x00405220u, sub_00405220); /* call 0x00405220 */

loc_00405678: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00405688; /* je: equal / zero */

loc_0040567F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00405685u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00405685: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00405688: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00405690
 * Original: 0x00405690 - 0x004056BA (42 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00405690: ;
    PUSH32(esp, 0x3A);
    PUSH32(esp, 0x62DE8C);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x0040569Eu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0040569E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004056B2; /* je: equal / zero */

loc_004056A5: ;
    ecx = eax;
    PUSH32(esp, 0x004056ACu); RECOMP_ABI_CALL(0x00405630u, sub_00405630); /* call 0x00405630 */

loc_004056AC: ;
    MEM32(0x692EB0) = eax;
    esp += 4; return; /* ret */

loc_004056B2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x692EB0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_004056C0
 * Original: 0x004056C0 - 0x004056F1 (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004056C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004056C0: ;
    edx = MEM32(esp + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004056EC; /* jle: less or equal (signed <=) */

loc_004056CA: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);

loc_004056D4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + edi));
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(esi + ecx * 2) = LO16(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004056D4; /* jl: less (signed <) */

loc_004056E7: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004056EC: ;
    eax = MEM32(esp + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00405700
 * Original: 0x00405700 - 0x00405729 (41 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00405700: ;
    edx = MEM32(esp + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00405724; /* jle: less or equal (signed <=) */

loc_0040570A: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);

loc_00405714: ;
    SET_LO8(eax, MEM8(edi + ecx * 2));
    MEM8(ecx + esi) = LO8(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00405714; /* jl: less (signed <) */

loc_0040571F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00405724: ;
    eax = MEM32(esp + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00405730
 * Original: 0x00405730 - 0x004057A5 (117 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00405730: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = ebx;
    PUSH32(esp, esi);
    edx = eax + 1;
    goto loc_00405740;

    /* nop */

loc_00405740: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00405740; /* jne: not equal / not zero */

loc_00405747: ;
    esi = MEM32(esp + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    eax = esi;
    PUSH32(esp, edi);
    edi = eax + 1;

loc_00405755: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00405755; /* jne: not equal / not zero */

loc_0040575C: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_004057A0; /* jle: less or equal (signed <=) */

loc_00405763: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebx)) >> 32) & 1);
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00405767: ;
    SET_LO8(edx, MEM8(ecx));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(eax, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0040578F; /* jne: not equal / not zero */

loc_00405771: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0040578B; /* je: equal / zero */

loc_00405775: ;
    SET_LO8(edx, MEM8(ecx + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(eax, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0040578F; /* jne: not equal / not zero */

loc_00405781: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00405767; /* jne: not equal / not zero */

loc_0040578B: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00405794;

loc_0040578F: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00405794: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004057A0; /* jne: not equal / not zero */

loc_00405798: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_004057A0: ;
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004057B0
 * Original: 0x004057B0 - 0x004057D0 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004057B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004057B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1D24);
    PUSH32(esp, eax);
    MEM32(esi) = 0x62DE98;
    PUSH32(esp, 0x004057C5u); RECOMP_ABI_CALL(0x00577350u, sub_00577350); /* call 0x00577350 */

loc_004057C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00614360(); return; /* tail jmp 0x00614360 */

}

/**
 * sub_004057D0
 * Original: 0x004057D0 - 0x004057EB (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004057D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004057D0: ;
    ecx = MEM32(0x692EB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004057E0; /* je: equal / zero */

loc_004057DA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004057E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004057DEu); } /* indirect call */
    }

loc_004057E0: ;
    MEM32(0x692EB4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_004057F0
 * Original: 0x004057F0 - 0x00405807 (23 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004057F0(void)
{

loc_004057F0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x1D1C) = eax;
    MEM32(ecx + 0x1D20) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00405810
 * Original: 0x00405810 - 0x00405835 (37 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00405810: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00405830; /* jne: not equal / not zero */

loc_00405817: ;
    SET_LO8(edx, MEM8(ecx + 0xC));
    SET_LO8(eax, 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00405830; /* jne: not equal / not zero */

loc_00405820: ;
    edx = MEM32(esp + 4);
    MEM8(ecx + 0xC) = 0;
    ecx = MEM32(ecx + 8);
    MEM32(edx) = ecx;
    esp += 8; return; /* ret 4 */

loc_00405830: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00405840
 * Original: 0x00405840 - 0x00405868 (40 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00405840: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00405859; /* je: equal / zero */

loc_00405847: ;
    PUSH32(esp, 0x62DE9C);
    PUSH32(esp, 0x00405851u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00405851: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_00405859: ;
    SET_LO8(eax, 1);
    MEM32(ecx + 8) = 0;
    MEM8(ecx + 0xC) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00405870
 * Original: 0x00405870 - 0x00405876 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405870(void)
{

loc_00405870: ;
    eax = 0xFFFF;
    esp += 4; return; /* ret */

}

/**
 * sub_00405880
 * Original: 0x00405880 - 0x00405895 (21 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405880(void)
{

loc_00405880: ;
    eax = MEM32(ecx + 0x1D2C);
    edx = MEM32(esp + 4);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 0x1D24);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004058A0
 * Original: 0x004058A0 - 0x004058E4 (68 bytes, 19 insns)
 * Category: game_io
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004058A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004058A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x62DEF0);
    esi = ecx;
    PUSH32(esp, 0x004058ADu); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_004058AD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004058C5; /* je: equal / zero */

loc_004058B4: ;
    MEM8(esi + 0xC) = 1;
    MEM32(esi + 8) = 0;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

loc_004058C5: ;
    PUSH32(esp, 0x004058CAu); RECOMP_ABI_CALL(0x00611C40u, sub_00611C40); /* call 0x00611C40 */

loc_004058CA: ;
    MEM32(esi + 0x1D78) = eax;
    MEM8(esi + 0x1D7C) = 0;
    MEM32(esi + 4) = 0x64;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004058F0
 * Original: 0x004058F0 - 0x00405987 (151 bytes, 51 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004058F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004058F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 2);
    eax = ebx + 0x1AC0;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00405909u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_00405909: ;
    PUSH32(esp, 0x1FC);
    ecx = ebx + 0x1AC4;
    PUSH32(esp, ecx);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0040591Eu); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_0040591E: ;
    PUSH32(esp, 0x38);
    _fb = (uint32_t)(0x1CC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x1CC0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00405930u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_00405930: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x692FC8);
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00405940u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_00405940: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x692FC9);
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00405950u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_00405950: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x692FCA);
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00405960u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_00405960: ;
    PUSH32(esp, 0x2706);
    PUSH32(esp, 0x692FCC);
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00405973u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_00405973: ;
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0040597Cu); RECOMP_ABI_CALL(0x00617FF0u, sub_00617FF0); /* call 0x00617FF0 */

loc_0040597C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00405990
 * Original: 0x00405990 - 0x00405A5B (203 bytes, 64 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00405990: ;
    eax = 0x270C;
    PUSH32(esp, 0x0040599Au); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_0040599A: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x1D30);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x238);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2718);
    PUSH32(esp, edi);
    ecx = eax + ebx + 0x10;
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x004059C0u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_004059C0: ;
    edx = MEM32(ebx + 0x1D30);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x238);
    edi = eax;
    PUSH32(esp, 0x1FC);
    eax = edx + ebx + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004059DFu); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_004059DF: ;
    ecx = MEM32(ebx + 0x1D30);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x238);
    edx = ecx + ebx + 0x210;
    PUSH32(esp, 0x38);
    PUSH32(esp, edx);
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004059FEu); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_004059FE: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00405A0Eu); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_00405A0E: ;
    PUSH32(esp, 1);
    ecx = esp + 0x11;
    PUSH32(esp, ecx);
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00405A1Eu); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_00405A1E: ;
    PUSH32(esp, 1);
    edx = esp + 0x12;
    PUSH32(esp, edx);
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00405A2Eu); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_00405A2E: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x2706);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00405A41u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_00405A41: ;
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00405A4Au); RECOMP_ABI_CALL(0x00617FF0u, sub_00617FF0); /* call 0x00617FF0 */

loc_00405A4A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x270C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x270C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00405A60
 * Original: 0x00405A60 - 0x00405AE8 (136 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00405A60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00405A73; /* jne: not equal / not zero */

loc_00405A6C: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00405A73: ;
    PUSH32(esp, 2);
    eax = edi + 0x1AC0;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00405A83u); RECOMP_ABI_CALL(0x00617E40u, sub_00617E40); /* call 0x00617E40 */

loc_00405A83: ;
    PUSH32(esp, 0x1FC);
    ecx = edi + 0x1AC4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00405A96u); RECOMP_ABI_CALL(0x00617E40u, sub_00617E40); /* call 0x00617E40 */

loc_00405A96: ;
    PUSH32(esp, 0x38);
    _fb = (uint32_t)(0x1CC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1CC0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00405AA6u); RECOMP_ABI_CALL(0x00617E40u, sub_00617E40); /* call 0x00617E40 */

loc_00405AA6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x692FC8);
    ecx = esi;
    PUSH32(esp, 0x00405AB4u); RECOMP_ABI_CALL(0x00617E40u, sub_00617E40); /* call 0x00617E40 */

loc_00405AB4: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x692FC9);
    ecx = esi;
    PUSH32(esp, 0x00405AC2u); RECOMP_ABI_CALL(0x00617E40u, sub_00617E40); /* call 0x00617E40 */

loc_00405AC2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x692FCA);
    ecx = esi;
    PUSH32(esp, 0x00405AD0u); RECOMP_ABI_CALL(0x00617E40u, sub_00617E40); /* call 0x00617E40 */

loc_00405AD0: ;
    PUSH32(esp, 0x2706);
    PUSH32(esp, 0x692FCC);
    ecx = esi;
    PUSH32(esp, 0x00405AE1u); RECOMP_ABI_CALL(0x00617E40u, sub_00617E40); /* call 0x00617E40 */

loc_00405AE1: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00405AF0
 * Original: 0x00405AF0 - 0x00405B22 (50 bytes, 16 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00405AF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x62DEF0);
    esi = ecx;
    PUSH32(esp, 0x00405AFDu); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_00405AFD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00405B15; /* je: equal / zero */

loc_00405B04: ;
    MEM8(esi + 0xC) = 1;
    MEM32(esi + 8) = 0;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00405B15: ;
    MEM32(esi + 4) = 0x82;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00405B30
 * Original: 0x00405B30 - 0x00405B6C (60 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405B30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00405B30: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x1CF8;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x62DEF8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00405B4Cu); RECOMP_ABI_CALL(0x0061985Du, sub_0061985D); /* call 0x0061985D */

loc_00405B4C: ;
    edx = MEM32(esp + 0x54);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = 0;
    PUSH32(esp, 0x00405B5Eu); RECOMP_ABI_CALL(0x0040E0F0u, sub_0040E0F0); /* call 0x0040E0F0 */

loc_00405B5E: ;
    MEM32(esi + 4) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00405B70
 * Original: 0x00405B70 - 0x00405B8E (30 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405B70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00405B70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x62DEF8);
    _fb = (uint32_t)(0x1CF8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1CF8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x21);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00405B88u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00405B88: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00405B90
 * Original: 0x00405B90 - 0x00405BBE (46 bytes, 16 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00405B90: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x62DEF0);
    esi = ecx;
    PUSH32(esp, 0x00405B9Du); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_00405B9D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00405BB3; /* je: equal / zero */

loc_00405BA4: ;
    MEM8(esi + 0xC) = 1;
    MEM32(esi + 8) = 0;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00405BB3: ;
    MEM32(esi + 4) = 0xA;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00405BC0
 * Original: 0x00405BC0 - 0x00405BF9 (57 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405BC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00405BC0: ;
    ecx = MEM32(esp + 4);
    eax = ZX16(MEM16(ecx + 6));
    edx = ZX8(MEM8(ecx + 4));
    eax = eax + eax * 2;
    eax = edx + eax * 4;
    edx = ZX8(MEM8(ecx + 3));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1F);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(MEM8(ecx + 2));
    eax = eax + eax * 2;
    eax = edx + eax * 8;
    edx = ZX8(MEM8(ecx + 1));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    ecx = ZX8(MEM8(ecx));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00405C00
 * Original: 0x00405C00 - 0x00405C1E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00405C00: ;
    SET_LO8(eax, MEM8(0x6C2E6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00405C18; /* jne: not equal / not zero */

loc_00405C09: ;
    eax = MEM32(0x6C3898);
    SET_LO8(ecx, MEM8(eax + 0x50));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00405C18; /* jne: not equal / not zero */

loc_00405C15: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00405C18: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00405C20
 * Original: 0x00405C20 - 0x00405C3B (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405C20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00405C20: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x1AB0) = eax;
    MEM32(ecx + 0x1AB4) = eax;
    MEM32(ecx + 0x1AB8) = eax;
    MEM32(ecx + 0x1D2C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00405C40
 * Original: 0x00405C40 - 0x00405C90 (80 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00405C40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = ecx;
    edx = edi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00405C50: ;
    SET_LO8(ebx, MEM8(edx));
    MEM8(ecx + edx) = LO8(ebx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00405C50; /* jne: not equal / not zero */

loc_00405C5A: ;
    edx = edi + 0x21;
    esi = eax + 0x21;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00405C62: ;
    SET_LO8(ebx, MEM8(edx));
    MEM8(esi + edx) = LO8(ebx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00405C62; /* jne: not equal / not zero */

loc_00405C6C: ;
    ecx = MEM32(edi + 0x2A);
    MEM32(eax + 0x2A) = ecx;
    edx = MEM32(edi + 0x2E);
    MEM32(eax + 0x2E) = edx;
    ecx = MEM32(edi + 0x34);
    MEM32(eax + 0x34) = ecx;
    edx = MEM32(edi + 0x38);
    MEM32(eax + 0x38) = edx;
    SET_LO8(ecx, MEM8(edi + 0x3C));
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax + 0x3C) = LO8(ecx);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00405C90
 * Original: 0x00405C90 - 0x00405D28 (152 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405C90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00405C90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esi) = 0x62DE98;
    MEM32(esi + 4) = ebx;
    edi = esi + 0x14;
    ebp = 0xC;
    /* nop */

loc_00405CB0: ;
    ecx = edi;
    PUSH32(esp, 0x00405CB7u); RECOMP_ABI_CALL(0x0053E890u, sub_0053E890); /* call 0x0053E890 */

loc_00405CB7: ;
    _fb = (uint32_t)(0x238) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x238;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00405CB0; /* jne: not equal / not zero */

loc_00405CC0: ;
    ecx = esi + 0x1AC4;
    PUSH32(esp, 0x00405CCBu); RECOMP_ABI_CALL(0x0053E890u, sub_0053E890); /* call 0x0053E890 */

loc_00405CCB: ;
    ecx = esi + 0x1D78;
    MEM32(esi + 0x1D1C) = ebx;
    MEM32(esi + 0x1D20) = ebx;
    PUSH32(esp, 0x00405CE2u); RECOMP_ABI_CALL(0x00611C60u, sub_00611C60); /* call 0x00611C60 */

loc_00405CE2: ;
    PUSH32(esp, 0x757);
    PUSH32(esp, 0x62DEFC);
    PUSH32(esp, 0x340);
    PUSH32(esp, 0x00405CF6u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00405CF6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x1D24) = eax;
    MEM32(esi + 0x1D2C) = ebx;
    MEM32(esi + 0x1D30) = ebx;
    MEM32(esi + 0x1D34) = ebx;
    MEM8(esi + 0x1CF8) = LO8(ebx);
    MEM32(esi + 0x1D28) = 0xFFFFFFFFu;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00405D30
 * Original: 0x00405D30 - 0x00405D4E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00405D30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00405D38u); RECOMP_ABI_CALL(0x004057B0u, sub_004057B0); /* call 0x004057B0 */

loc_00405D38: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00405D48; /* je: equal / zero */

loc_00405D3F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00405D45u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00405D45: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00405D48: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00405D50
 * Original: 0x00405D50 - 0x00405D80 (48 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00405D50: ;
    PUSH32(esp, 0x770);
    PUSH32(esp, 0x62DEFC);
    PUSH32(esp, 0x1D80);
    PUSH32(esp, 0x00405D64u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00405D64: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00405D78; /* je: equal / zero */

loc_00405D6B: ;
    ecx = eax;
    PUSH32(esp, 0x00405D72u); RECOMP_ABI_CALL(0x00405C90u, sub_00405C90); /* call 0x00405C90 */

loc_00405D72: ;
    MEM32(0x692EB4) = eax;
    esp += 4; return; /* ret */

loc_00405D78: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x692EB4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00405D80
 * Original: 0x00405D80 - 0x00405E4C (204 bytes, 61 insns)
 * Category: game_io
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405D80(void)
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

loc_00405D80: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00405D94u); RECOMP_ABI_CALL(0x00611C60u, sub_00611C60); /* call 0x00611C60 */

loc_00405D94: ;
    edi = 0x100;
    esi = esp + 0x14;
    PUSH32(esp, 0x00405DA2u); RECOMP_ABI_CALL(0x0040E080u, sub_0040E080); /* call 0x0040E080 */

loc_00405DA2: ;
    ecx = MEM32(0x860220);
    eax = MEM32(ecx);
    edx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00405DB2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00405DAFu); } /* indirect call */
    }

loc_00405DB2: ;
    edi = MEM32(esp + 0x118);
    ecx = MEM32(0x860220);
    PUSH32(esp, 0);
    PUSH32(esp, 0x62DF24);
    PUSH32(esp, edi);
    PUSH32(esp, 0x62DF21);
    PUSH32(esp, 0x00405DD1u); RECOMP_ABI_CALL(0x00613840u, sub_00613840); /* call 0x00613840 */

loc_00405DD1: ;
    ecx = MEM32(0x860220);
    esi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00405DDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00405DDBu); } /* indirect call */
    }

loc_00405DDE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00405DF0; /* jne: not equal / not zero */

loc_00405DE2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00405DF0: ;
    _fa = (uint32_t)(MEM32(esp + 0x11C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x11C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00405E02; /* jne: not equal / not zero */

loc_00405DFA: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x00405E02u); RECOMP_ABI_CALL(0x00405A60u, sub_00405A60); /* call 0x00405A60 */

loc_00405E02: ;
    ecx = esi;
    PUSH32(esp, 0x00405E09u); RECOMP_ABI_CALL(0x00617FB0u, sub_00617FB0); /* call 0x00617FB0 */

loc_00405E09: ;
    PUSH32(esp, 0x00405E0Eu); RECOMP_ABI_CALL(0x00611C40u, sub_00611C40); /* call 0x00611C40 */

loc_00405E0E: ;
    _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00405E24; /* jge: greater or equal (signed >=) */

loc_00405E1E: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_00405E24: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x8600DC)); /* fmul dword ptr [0x8600dc] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    PUSH32(esp, 0x62DF08);
    PUSH32(esp, 0x00405E3Bu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00405E3B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00405E50
 * Original: 0x00405E50 - 0x00405F40 (240 bytes, 70 insns)
 * Category: game_io
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405E50(void)
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

loc_00405E50: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x00405E67u); RECOMP_ABI_CALL(0x00611C60u, sub_00611C60); /* call 0x00611C60 */

loc_00405E67: ;
    eax = MEM32(0x679810);
    edi = 0x100;
    esi = esp + 0x18;
    MEM32(esp + 0x10) = eax;
    MEM32(0x679810) = 0x679884;
    PUSH32(esp, 0x00405E88u); RECOMP_ABI_CALL(0x0040E080u, sub_0040E080); /* call 0x0040E080 */

loc_00405E88: ;
    ecx = MEM32(0x860220);
    edx = MEM32(ecx);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00405E98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00405E95u); } /* indirect call */
    }

loc_00405E98: ;
    edi = MEM32(esp + 0x11C);
    ecx = MEM32(0x860220);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x62DF24);
    PUSH32(esp, edi);
    PUSH32(esp, 0x62DF21);
    PUSH32(esp, 0x00405EB9u); RECOMP_ABI_CALL(0x006137C0u, sub_006137C0); /* call 0x006137C0 */

loc_00405EB9: ;
    esi = eax;
    eax = MEM32(esp + 0x120);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00405ED1; /* jne: not equal / not zero */

loc_00405EC7: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x00405ECFu); RECOMP_ABI_CALL(0x004058F0u, sub_004058F0); /* call 0x004058F0 */

loc_00405ECF: ;
    goto loc_00405EDE;

loc_00405ED1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00405EE0; /* jne: not equal / not zero */

loc_00405ED6: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x00405EDEu); RECOMP_ABI_CALL(0x00405990u, sub_00405990); /* call 0x00405990 */

loc_00405EDE: ;
    SET_LO8(ebx, LO8(eax));

loc_00405EE0: ;
    ecx = esi;
    PUSH32(esp, 0x00405EE7u); RECOMP_ABI_CALL(0x00617FB0u, sub_00617FB0); /* call 0x00617FB0 */

loc_00405EE7: ;
    ecx = MEM32(esp + 0x10);
    MEM32(0x679810) = ecx;
    ecx = MEM32(0x860220);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00405EFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00405EF9u); } /* indirect call */
    }

loc_00405EFC: ;
    PUSH32(esp, 0x00405F01u); RECOMP_ABI_CALL(0x00611C40u, sub_00611C40); /* call 0x00611C40 */

loc_00405F01: ;
    _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00405F17; /* jge: greater or equal (signed >=) */

loc_00405F11: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_00405F17: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x8600DC)); /* fmul dword ptr [0x8600dc] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    PUSH32(esp, 0x62DF28);
    PUSH32(esp, 0x00405F2Eu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00405F2E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00405F40
 * Original: 0x00405F40 - 0x004060D6 (406 bytes, 102 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00405F40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00405F40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1D34);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xC (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004060D1; /* jge: greater or equal (signed >=) */

loc_00405F53: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004060D0; /* je: equal / zero */

loc_00405F60: ;
    PUSH32(esp, 0x62DF44);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00405F6Bu); RECOMP_ABI_CALL(0x00405730u, sub_00405730); /* call 0x00405730 */

loc_00405F6B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004060D0; /* jne: not equal / not zero */

loc_00405F76: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00405F81u); RECOMP_ABI_CALL(0x00405E50u, sub_00405E50); /* call 0x00405E50 */

loc_00405F81: ;
    PUSH32(esp, ebx);
    ebp = edi;
    ebp = ebp << 6;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, 0x62DEF8);
    PUSH32(esp, 0x21);
    if (CMP_EQ(_fa, _fb)) goto loc_0040607D; /* je: equal / zero */

loc_00405F96: ;
    eax = MEM32(esi + 0x1D30);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x238);
    _fa = (uint32_t)(MEM16(eax + esi + 0x10)) & 0xFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + esi + 0x10), 0xD (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00406038; /* jne: not equal / not zero */

loc_00405FAE: ;
    MEM8(edi + esi + 0x1AB0) = 1;
    ecx = MEM32(esi + 0x1D24);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00405FC4u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00405FC4: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x238);
    eax = MEM32(esi + 0x1D24);
    edx = edi + esi + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, 0x62DEF8);
    ecx = eax + ebp + 0x21;
    PUSH32(esp, 9);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00405FE6u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00405FE6: ;
    edx = MEM32(esi + 0x1D30);
    eax = MEM32(esi + 0x1D24);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x238);
    ecx = MEM32(edx + esi + 0x224);
    MEM32(eax + ebp + 0x34) = ecx;
    edx = MEM32(esi + 0x1D30);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x238);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx + esi + 0x210;
    PUSH32(esp, 0x0040601Eu); RECOMP_ABI_CALL(0x0053C270u, sub_0053C270); /* call 0x0053C270 */

loc_0040601E: ;
    ecx = MEM32(esi + 0x1D24);
    MEM32(ecx + ebp + 0x38) = eax;
    edx = MEM32(esi + 0x1D24);
    MEM8(edx + ebp + 0x3C) = 1;
    goto loc_004060C3;

loc_00406038: ;
    MEM8(edi + esi + 0x1AB0) = 0;
    eax = MEM32(esi + 0x1D24);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0040604Eu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0040604E: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x238);
    edx = MEM32(esi + 0x1D24);
    ecx = edi + esi + 0x54;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x62DEF8);
    eax = edx + ebp + 0x21;
    PUSH32(esp, 9);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00406070u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00406070: ;
    ecx = MEM32(esi + 0x1D24);
    MEM8(ecx + ebp + 0x3C) = 0;
    goto loc_004060C0;

loc_0040607D: ;
    MEM8(edi + esi + 0x1AB0) = 0;
    edx = MEM32(esi + 0x1D24);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x00406093u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00406093: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x238);
    ecx = MEM32(esi + 0x1D24);
    eax = edi + esi + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, 0x62DEF8);
    edx = ecx + ebp + 0x21;
    PUSH32(esp, 9);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004060B5u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004060B5: ;
    eax = MEM32(esi + 0x1D24);
    MEM8(eax + ebp + 0x3C) = 0;

loc_004060C0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004060C3: ;
    MEM32(esi + 0x1D34) = MEM32(esi + 0x1D34) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1D34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1D30) = MEM32(esi + 0x1D30) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1D30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);

loc_004060D0: ;
    POP32(esp, ebx);

loc_004060D1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004060E0
 * Original: 0x004060E0 - 0x004061C6 (230 bytes, 64 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004060E0(void)
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

loc_004060E0: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x40));
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = ecx;
    SET_LO8(eax, MEM8(ebp + 0x1D7C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00406188; /* jne: not equal / not zero */

loc_004060F4: ;
    ecx = MEM32(0x6C3898);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00406103u); RECOMP_ABI_CALL(0x0053BAD0u, sub_0053BAD0); /* call 0x0053BAD0 */

loc_00406103: ;
    PUSH32(esp, 0x6C2C70);
    ecx = ebp + 0x1AC4;
    esi = eax;
    MEM16(ebp + 0x1AC0) = 0xD;
    PUSH32(esp, 0x0040611Eu); RECOMP_ABI_CALL(0x0053DF70u, sub_0053DF70); /* call 0x0053DF70 */

loc_0040611E: ;
    eax = ebp + 0x1CF8;
    PUSH32(esp, eax);
    edi = ebp + 0x1CC0;
    ecx = 0xE;
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
    ecx = esp + 0x10;
    PUSH32(esp, 0x62DEF8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00406141u); RECOMP_ABI_CALL(0x0061985Du, sub_0061985D); /* call 0x0061985D */

loc_00406141: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x00406152u); RECOMP_ABI_CALL(0x00405D80u, sub_00405D80); /* call 0x00405D80 */

loc_00406152: ;
    ecx = MEM32(esp + 0x50);
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    PUSH32(esp, 0);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xFFFFFFF7u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF7u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF7u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    ecx = 0x6C2C70;
    PUSH32(esp, 0x0040616Eu); RECOMP_ABI_CALL(0x0053DF60u, sub_0053DF60); /* call 0x0053DF60 */

loc_0040616E: ;
    edx = MEM32(0x6C3898);
    POP32(esp, edi);
    MEM8(edx + 0x50) = 0;
    POP32(esp, esi);
    MEM8(ebp + 0x1D7C) = 1;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x40)) >> 32) & 1);
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00406188: ;
    PUSH32(esp, 0x0040618Du); RECOMP_ABI_CALL(0x00611C40u, sub_00611C40); /* call 0x00611C40 */

loc_0040618D: ;
    _fb = (uint32_t)(MEM32(ebp + 0x1D78)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ebp + 0x1D78)));
    eax = eax - MEM32(ebp + 0x1D78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x48) = eax;
    fp_push((double)SMEM32(esp + 0x48)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_004061A5; /* jge: greater or equal (signed >=) */

loc_0040619F: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_004061A5: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x8600DC)); /* fmul dword ptr [0x8600dc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_004061BF; /* jne: not equal / not zero */

loc_004061B8: ;
    MEM32(ebp + 4) = 0;

loc_004061BF: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x40)) >> 32) & 1);
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
 * sub_004061D0
 * Original: 0x004061D0 - 0x00406276 (166 bytes, 51 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004061D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004061D0: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x62DEF0);
    ebx = ecx;
    PUSH32(esp, 0x004061E0u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_004061E0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004061FB; /* je: equal / zero */

loc_004061E7: ;
    MEM8(ebx + 0xC) = 1;
    MEM32(ebx + 8) = 0;

loc_004061F2: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_004061FB: ;
    eax = ebx + 0x1CF8;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x62DEF8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00406211u); RECOMP_ABI_CALL(0x0061985Du, sub_0061985D); /* call 0x0061985D */

loc_00406211: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x00406222u); RECOMP_ABI_CALL(0x00405E50u, sub_00405E50); /* call 0x00405E50 */

loc_00406222: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004061F2; /* je: equal / zero */

loc_00406226: ;
    ecx = MEM32(0x6C3898);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00406235u); RECOMP_ABI_CALL(0x0053BAD0u, sub_0053BAD0); /* call 0x0053BAD0 */

loc_00406235: ;
    edi = eax;
    esi = ebx + 0x1CC0;
    ecx = 0xE;
    eax = ebx + 0x1AC4;
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
    PUSH32(esp, eax);
    ecx = 0x6C2C70;
    PUSH32(esp, 0x00406255u); RECOMP_ABI_CALL(0x0053DF70u, sub_0053DF70); /* call 0x0053DF70 */

loc_00406255: ;
    ecx = MEM32(0x6C3898);
    PUSH32(esp, 0x00406260u); RECOMP_ABI_CALL(0x0053BAE0u, sub_0053BAE0); /* call 0x0053BAE0 */

loc_00406260: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebx + 0xC) = 1;
    MEM32(ebx + 8) = 0;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00406280
 * Original: 0x00406280 - 0x0040632A (170 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406280(void)
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

loc_00406280: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x44));
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x1D7C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004062EC; /* jne: not equal / not zero */

loc_00406290: ;
    eax = esi + 0x1CF8;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x62DEF8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004062A6u); RECOMP_ABI_CALL(0x0061985Du, sub_0061985D); /* call 0x0061985D */

loc_004062A6: ;
    ecx = MEM32(0x860220);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x62DF24);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x62DF21);
    PUSH32(esp, 0x004062C3u); RECOMP_ABI_CALL(0x00613880u, sub_00613880); /* call 0x00613880 */

loc_004062C3: ;
    PUSH32(esp, 1);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004062D1u); RECOMP_ABI_CALL(0x00405D80u, sub_00405D80); /* call 0x00405D80 */

loc_004062D1: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    MEM8(esi + 0x1D7C) = 1;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xFFFFFFF7u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF7u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF7u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x44)) >> 32) & 1);
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_004062EC: ;
    PUSH32(esp, 0x004062F1u); RECOMP_ABI_CALL(0x00611C40u, sub_00611C40); /* call 0x00611C40 */

loc_004062F1: ;
    _fb = (uint32_t)(MEM32(esi + 0x1D78)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esi + 0x1D78)));
    eax = eax - MEM32(esi + 0x1D78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00406309; /* jge: greater or equal (signed >=) */

loc_00406303: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_00406309: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x8600DC)); /* fmul dword ptr [0x8600dc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00406323; /* jne: not equal / not zero */

loc_0040631C: ;
    MEM32(esi + 4) = 0;

loc_00406323: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x44)) >> 32) & 1);
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00406330
 * Original: 0x00406330 - 0x0040642A (250 bytes, 80 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00406330: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    ecx = MEM32(0x6C3898);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00406346u); RECOMP_ABI_CALL(0x0053BAD0u, sub_0053BAD0); /* call 0x0053BAD0 */

loc_00406346: ;
    PUSH32(esp, 0x6C2C70);
    ecx = ebx + 0x1AC4;
    esi = eax;
    MEM16(ebx + 0x1AC0) = 0xD;
    PUSH32(esp, 0x00406361u); RECOMP_ABI_CALL(0x0053DF70u, sub_0053DF70); /* call 0x0053DF70 */

loc_00406361: ;
    ebp = ebx + 0x1B04;
    PUSH32(esp, ebp);
    eax = esp + 0x14;
    PUSH32(esp, 0x62DEF8);
    edi = ebx + 0x1CC0;
    ecx = 0xE;
    PUSH32(esp, eax);
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
    PUSH32(esp, 0x00406384u); RECOMP_ABI_CALL(0x0061985Du, sub_0061985D); /* call 0x0061985D */

loc_00406384: ;
    eax = MEM32(ebx + 0x1D2C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004063BB; /* jle: less or equal (signed <=) */

loc_00406393: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00406395: ;
    ecx = MEM32(ebx + 0x1D24);
    eax = esi + ecx + 0x21;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004063A6u); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_004063A6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004063F4; /* je: equal / zero */

loc_004063AD: ;
    eax = MEM32(ebx + 0x1D2C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00406395; /* jl: less (signed <) */

loc_004063BB: ;
    PUSH32(esp, 1);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x004063C9u); RECOMP_ABI_CALL(0x00405D80u, sub_00405D80); /* call 0x00405D80 */

loc_004063C9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040640F; /* je: equal / zero */

loc_004063CD: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x004063D9u); RECOMP_ABI_CALL(0x00405B70u, sub_00405B70); /* call 0x00405B70 */

loc_004063D9: ;
    edx = MEM32(esp + 0x54);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx) = 0;
    POP32(esp, ebp);
    MEM32(ebx + 4) = 0;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_004063F4: ;
    edx = MEM32(esp + 0x54);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx) = 0xFFFFFFF1u;
    POP32(esp, ebp);
    MEM32(ebx + 4) = 0;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0040640F: ;
    eax = MEM32(esp + 0x54);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = 0xFFFFFFF7u;
    POP32(esp, ebp);
    MEM32(ebx + 4) = 0;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00406430
 * Original: 0x00406430 - 0x004064DE (174 bytes, 67 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00406430: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x1D2C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = 0xFFFFFFFFu;
    if (CMP_G(_fas, _fbs)) goto loc_00406454; /* jg: greater (signed >) */

loc_0040644B: ;
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00406454: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_004064C5; /* jle: less or equal (signed <=) */

loc_0040645C: ;
    edi = MEM32(ebp + 0x1D24);
    MEM32(esp + 0x14) = edi;
    _fb = (uint32_t)(0x2A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x2A;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_00406470: ;
    SET_LO8(eax, MEM8(edi + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00406489; /* je: equal / zero */

loc_00406477: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0040647Fu); RECOMP_ABI_CALL(0x00405BC0u, sub_00405BC0); /* call 0x00405BC0 */

loc_0040647F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00406489; /* jbe: below or equal (unsigned <=) */

loc_00406483: ;
    MEM32(esp + 0x10) = esi;
    ebx = eax;

loc_00406489: ;
    eax = MEM32(ebp + 0x1D2C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00406470; /* jl: less (signed <) */

loc_00406497: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004064C5; /* jl: less (signed <) */

loc_0040649F: ;
    edi = MEM32(esp + 0x14);
    ecx = eax;
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x62DF8C);
    PUSH32(esp, 0x004064B6u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_004064B6: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_004064C5: ;
    PUSH32(esp, 0x62DF4C);
    PUSH32(esp, 0x004064CFu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_004064CF: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
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
 * sub_004064E0
 * Original: 0x004064E0 - 0x0040658C (172 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004064E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004064E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x82 (32-bit) */
    MEM32(esp + 8) = 0;
    if (CMP_A(_fa, _fb)) goto loc_0040654D; /* ja: above (unsigned >) */

loc_004064F8: ;
    eax = ZX8(MEM8(edi + 0x4065A4));
    { uint32_t _jt = MEM32(eax * 4 + 0x40658C); /* switch: 6 entries, 6 targets */
    if (_jt == 0x00406506u) goto loc_00406506;
    if (_jt == 0x00406515u) goto loc_00406515;
    if (_jt == 0x00406523u) goto loc_00406523;
    if (_jt == 0x00406531u) goto loc_00406531;
    if (_jt == 0x0040653Fu) goto loc_0040653F;
    if (_jt == 0x0040654Du) goto loc_0040654D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00406506: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00406510u); RECOMP_ABI_CALL(0x00604330u, sub_00604330); /* call 0x00604330 */

loc_00406510: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0040655B;

loc_00406515: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00406521u); RECOMP_ABI_CALL(0x00406330u, sub_00406330); /* call 0x00406330 */

loc_00406521: ;
    goto loc_0040655B;

loc_00406523: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0040652Fu); RECOMP_ABI_CALL(0x004060E0u, sub_004060E0); /* call 0x004060E0 */

loc_0040652F: ;
    goto loc_0040655B;

loc_00406531: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0040653Du); RECOMP_ABI_CALL(0x00406280u, sub_00406280); /* call 0x00406280 */

loc_0040653D: ;
    goto loc_0040655B;

loc_0040653F: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0040654Bu); RECOMP_ABI_CALL(0x00405B30u, sub_00405B30); /* call 0x00405B30 */

loc_0040654B: ;
    goto loc_0040655B;

loc_0040654D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x62DFC0);
    PUSH32(esp, 0x00406558u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_00406558: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0040655B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00406588; /* je: equal / zero */

loc_0040655F: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00406588; /* jne: not equal / not zero */

loc_00406566: ;
    eax = MEM32(esi + 0x1D20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(esp + 8);
    MEM32(esi + 8) = edx;
    MEM8(esi + 0xC) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00406588; /* je: equal / zero */

loc_0040657B: ;
    ecx = MEM32(esi + 0x1D1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00406588; /* je: equal / zero */

loc_00406585: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00406588u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00406586u); } /* indirect call */
    }

loc_00406588: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00406630
 * Original: 0x00406630 - 0x004066C0 (144 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00406630: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004066BC; /* jne: not equal / not zero */

loc_0040663F: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x48);
    PUSH32(esp, 0x40);
    eax = esp + 8;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00406651u); RECOMP_ABI_CALL(0x00619910u, sub_00619910); /* call 0x00619910 */

loc_00406651: ;
    eax = esp + 0x10;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x43) = 0;
    edx = eax + 1;

loc_00406660: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00406660; /* jne: not equal / not zero */

loc_00406667: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004066BB; /* jbe: below or equal (unsigned <=) */

loc_0040666E: ;
    eax = esp + 4;
    edx = eax + 1;

loc_00406675: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00406675; /* jne: not equal / not zero */

loc_0040667C: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax + esi + -4;
    PUSH32(esp, 0x62DFEC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0040668Du); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_0040668D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004066BB; /* jne: not equal / not zero */

loc_00406694: ;
    eax = esp + 4;
    edx = eax + 1;
    goto loc_004066A0;

    /* nop */

loc_004066A0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004066A0; /* jne: not equal / not zero */

loc_004066A7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp + 4;
    MEM8(esp + eax) = LO8(ecx);
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004066BBu); RECOMP_ABI_CALL(0x00405F40u, sub_00405F40); /* call 0x00405F40 */

loc_004066BB: ;
    POP32(esp, esi);

loc_004066BC: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004066C0
 * Original: 0x004066C0 - 0x004066F3 (51 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004066C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004066C0: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x406630);
    edi = 0x100;
    esi = esp + 0x14;
    PUSH32(esp, 0x004066DEu); RECOMP_ABI_CALL(0x0040E080u, sub_0040E080); /* call 0x0040E080 */

loc_004066DE: ;
    ecx = MEM32(0x860220);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004066EAu); RECOMP_ABI_CALL(0x006138B0u, sub_006138B0); /* call 0x006138B0 */

loc_004066EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00406700
 * Original: 0x00406700 - 0x004068EA (490 bytes, 153 insns)
 * Category: game_io
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00406700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00406700: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x14C));
    esp = esp - 0x14C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x62DEF0);
    MEM32(ebp + -8) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0040671Bu); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0040671B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0040673E; /* je: equal / zero */

loc_00406722: ;
    MEM8(esi + 0xC) = 1;
    MEM32(esi + 8) = 0;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp = ebp + -344;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0040673E: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406745u); RECOMP_ABI_CALL(0x00405C20u, sub_00405C20); /* call 0x00405C20 */

loc_00406745: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1D30) = eax;
    MEM32(esi + 0x1D34) = eax;
    ebx = MEM32(0x679810);
    edi = 0x100;
    esi = ebp + -332;
    MEM32(0x679810) = 0x679884;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406773u); RECOMP_ABI_CALL(0x0040E080u, sub_0040E080); /* call 0x0040E080 */

loc_00406773: ;
    ecx = MEM32(0x860220);
    eax = MEM32(ecx);
    edx = ebp + -332;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00406785u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00406782u); } /* indirect call */
    }

loc_00406785: ;
    edi = MEM32(ebp + -8);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0040678Fu); RECOMP_ABI_CALL(0x004066C0u, sub_004066C0); /* call 0x004066C0 */

loc_0040678F: ;
    ecx = MEM32(0x860220);
    MEM32(0x679810) = ebx;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004067A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040679Du); } /* indirect call */
    }

loc_004067A0: ;
    ecx = MEM32(edi + 0x1D34);
    MEM32(edi + 0x1D2C) = ecx;
    MEM32(ebp + -12) = 1;

loc_004067B3: ;
    eax = 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004067BDu); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_004067BD: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = esp;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004067D0;

    /* nop */
    /* nop */

loc_004067D0: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(eax + 0x62E008));
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(esi + eax * 2) = LO16(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_004067D0; /* jl: less (signed <) */

loc_004067E8: ;
    eax = MEM32(ebp + -12);
    PUSH32(esp, eax);
    PUSH32(esp, 0x62DFF4);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004067FBu); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_004067FB: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    edx = ebp + -76;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406809u); RECOMP_ABI_CALL(0x00619A4Au, sub_00619A4A); /* call 0x00619A4A */

loc_00406809: ;
    eax = MEM32(edi + 0x1D2C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(ebp + -1) = 0;
    MEM32(ebp + -8) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_004068BB; /* jle: less or equal (signed <=) */

loc_00406821: ;
    eax = ebp + -76;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0040682Au); RECOMP_ABI_CALL(0x00619A34u, sub_00619A34); /* call 0x00619A34 */

loc_0040682A: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(3)) >> 32) & 1);
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0040683Du); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_0040683D: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = esp;
    if (CMP_LE(_fas, _fbs)) goto loc_00406851; /* jle: less or equal (signed <=) */

loc_00406845: ;
    SET_LO8(edx, MEM8(ebp + eax * 2 + -76));
    MEM8(ecx + eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00406845; /* jl: less (signed <) */

loc_00406851: ;
    eax = MEM32(edi + 0x1D24);
    esi = ebx + eax + 0x21;
    eax = ecx;
    /* nop */

loc_00406860: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00406884; /* jne: not equal / not zero */

loc_00406868: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00406880; /* je: equal / zero */

loc_0040686C: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00406884; /* jne: not equal / not zero */

loc_00406876: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00406860; /* jne: not equal / not zero */

loc_00406880: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00406889;

loc_00406884: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00406889: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00406898; /* jne: not equal / not zero */

loc_0040688D: ;
    eax = MEM32(ebp + -12);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ebp + -1) = 1;
    MEM32(ebp + -12) = eax;

loc_00406898: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(edi + 0x1D2C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x40)) >> 32) & 1);
    ebx = ebx + 0x40;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00406821; /* jl: less (signed <) */

loc_004068B0: ;
    SET_LO8(eax, MEM8(ebp + -1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004067B3; /* jne: not equal / not zero */

loc_004068BB: ;
    eax = ebp + -76;
    PUSH32(esp, eax);
    ecx = edi + 0x1D38;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004068CBu); RECOMP_ABI_CALL(0x00619A4Au, sub_00619A4A); /* call 0x00619A4A */

loc_004068CB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + 0xC) = 1;
    MEM32(edi + 8) = 0;
    SET_LO8(eax, 1);
    esp = ebp + -344;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004068F0
 * Original: 0x004068F0 - 0x00406918 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004068F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004068F0: ;
    ecx = MEM32(esp + 4);
    eax = ecx;
    edx = ecx;
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ecx;
    edx = edx & 0xFF0000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_00406920
 * Original: 0x00406920 - 0x00406947 (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406920(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00406920: ;
    ecx = MEM32(ecx + 4);
    eax = ecx;
    edx = ecx;
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFF0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ecx;
    edx = edx & 0xFF00;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_00406950
 * Original: 0x00406950 - 0x00406984 (52 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406950(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00406950: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00406964u); RECOMP_ABI_CALL(0x00537350u, sub_00537350); /* call 0x00537350 */

loc_00406964: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 0x2F0) = LO8(eax);
    MEM8(esi + 0x2F8) = LO8(eax);
    MEM32(esi + 0x2F4) = eax;
    MEM32(esi) = 0x62E040;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00406990
 * Original: 0x00406990 - 0x00406993 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406990(void)
{

loc_00406990: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004069A0
 * Original: 0x004069A0 - 0x004069AB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004069A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004069A0: ;
    MEM32(ecx) = 0x62E040;
    g_seh_ebp = ebp; sub_00534A40(); return; /* tail jmp 0x00534A40 */

}

/**
 * sub_004069B0
 * Original: 0x004069B0 - 0x00406A56 (166 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004069B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004069B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x62E278);
    MEM32(esp + 0xC) = 0x260D;
    PUSH32(esp, 0x004069CCu); RECOMP_ABI_CALL(0x00612E30u, sub_00612E30); /* call 0x00612E30 */

loc_004069CC: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004069DE; /* jl: less (signed <) */

loc_004069D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004069F3; /* jle: less or equal (signed <=) */

loc_004069DE: ;
    PUSH32(esp, 0x62E250);
    PUSH32(esp, 0x004069E8u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_004069E8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp) = 0xE4A;

loc_004069F3: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x62E244);
    MEM32(esp + 0x10) = 0x64;
    PUSH32(esp, 0x00406A0Cu); RECOMP_ABI_CALL(0x00612E30u, sub_00612E30); /* call 0x00612E30 */

loc_00406A0C: ;
    PUSH32(esp, 0xAD);
    PUSH32(esp, 0x62E234);
    PUSH32(esp, 0x300);
    PUSH32(esp, 0x00406A20u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00406A20: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00406A46; /* je: equal / zero */

loc_00406A27: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(esp);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00406A38u); RECOMP_ABI_CALL(0x00406950u, sub_00406950); /* call 0x00406950 */

loc_00406A38: ;
    MEM32(0x6C2BB4) = eax;
    MEM32(0x6C38B4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00406A46: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x6C2BB4) = eax;
    MEM32(0x6C38B4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00406A60
 * Original: 0x00406A60 - 0x00406BA0 (320 bytes, 104 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00406A60(void)
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

loc_00406A60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = ecx;
    SET_LO8(eax, MEM8(ebx + 0x2F8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00406A9F; /* je: equal / zero */

loc_00406A72: ;
    fp_push(MEMF(ebx + 0x2F4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62E2B0)); /* fadd dword ptr [0x62e2b0] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x8602E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x8602e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00406A9F; /* jp: parity */

loc_00406A8B: ;
    MEM8(ebx + 0x2F8) = 0;
    ecx = MEM32(0x6C3890);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 7);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00406A9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00406A9Cu); } /* indirect call */
    }

loc_00406A9F: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406AA6u); RECOMP_ABI_CALL(0x00536010u, sub_00536010); /* call 0x00536010 */

loc_00406AA6: ;
    ecx = MEM32(0x6C3890);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00406B48; /* jne: not equal / not zero */

loc_00406AB6: ;
    SET_LO8(eax, MEM8(ebx + 0x70));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00406B48; /* jne: not equal / not zero */

loc_00406AC1: ;
    SET_LO8(eax, MEM8(0x692EB8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00406B42; /* jne: not equal / not zero */

loc_00406ACA: ;
    PUSH32(esp, 0x62E298);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406AD9u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_00406AD9: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00406AE4; /* jne: not equal / not zero */

loc_00406AE0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00406B2E;

loc_00406AE4: ;
    PUSH32(esp, 0x62E298);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406AF3u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_00406AF3: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406AFCu); RECOMP_ABI_CALL(0x00619A34u, sub_00619A34); /* call 0x00619A34 */

loc_00406AFC: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406B0Fu); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_00406B0F: ;
    edi = esp;
    PUSH32(esp, 0x62E298);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406B20u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_00406B20: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406B2Bu); RECOMP_ABI_CALL(0x00405700u, sub_00405700); /* call 0x00405700 */

loc_00406B2B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00406B2E: ;
    ecx = MEM32(0x6C3424);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x00406B42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00406B3Cu); } /* indirect call */
    }

loc_00406B42: ;
    MEM8(0x692EB8) = MEM8(0x692EB8) + 1;
    _fa = (uint32_t)(MEM8(0x692EB8)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_00406B48: ;
    ecx = MEM32(0x6C38B4);
    edx = MEM32(ecx + 0x78);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00406B98; /* je: equal / zero */

loc_00406B55: ;
    eax = edx;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00406B80; /* je: equal / zero */

loc_00406B5C: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00406B98; /* je: equal / zero */

loc_00406B61: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x00406B6Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00406B64u); } /* indirect call */
    }

loc_00406B6A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x62E280);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406B75u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_00406B75: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp + -12;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00406B80: ;
    SET_LO8(eax, MEM8(ebx + 0x2F0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00406B98; /* jne: not equal / not zero */

loc_00406B8A: ;
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406B91u); RECOMP_ABI_CALL(0x005E4CC0u, sub_005E4CC0); /* call 0x005E4CC0 */

loc_00406B91: ;
    MEM8(ebx + 0x2F0) = 1;

loc_00406B98: ;
    esp = ebp + -12;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00406BA0
 * Original: 0x00406BA0 - 0x00406BA5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406BA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00406BA0: ;
    g_seh_ebp = ebp; sub_00536050(); return; /* tail jmp 0x00536050 */

}

/**
 * sub_00406BB0
 * Original: 0x00406BB0 - 0x00406BC9 (25 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406BB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00406BB0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ecx + 0x2F0) = LO8(eax);
    MEM32(ecx + 0x2F4) = eax;
    MEM8(ecx + 0x2F8) = LO8(eax);
    g_seh_ebp = ebp; sub_00535C90(); return; /* tail jmp 0x00535C90 */

}

/**
 * sub_00406BD0
 * Original: 0x00406BD0 - 0x00406BD5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406BD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00406BD0: ;
    g_seh_ebp = ebp; sub_00534AE0(); return; /* tail jmp 0x00534AE0 */

}

/**
 * sub_00406BE0
 * Original: 0x00406BE0 - 0x00406CE7 (263 bytes, 97 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00406BE0: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_00406C52; /* jle: less or equal (signed <=) */

loc_00406BEF: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0xFE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0xFE (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00406C52; /* jne: not equal / not zero */

loc_00406BF4: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0xFD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 0xFD (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00406C52; /* jne: not equal / not zero */

loc_00406BFA: ;
    SET_LO8(edx, MEM8(ecx + 0x2A0));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00406C38; /* je: equal / zero */

loc_00406C04: ;
    ecx = MEM32(0x6C2C40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00406C24; /* je: equal / zero */

loc_00406C0E: ;
    edi = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x00406C1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00406C17u); } /* indirect call */
    }

loc_00406C1D: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00406C24: ;
    PUSH32(esp, 0x62E3A4);
    PUSH32(esp, 0x00406C2Eu); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00406C2E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00406C38: ;
    PUSH32(esp, 0x62E368);

loc_00406C3D: ;
    PUSH32(esp, 0x00406C42u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00406C42: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00406C48u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00406C48: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00406C52: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00406CC2; /* jle: less or equal (signed <=) */

loc_00406C57: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0xFD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0xFD (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00406CC2; /* jne: not equal / not zero */

loc_00406C5C: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0xFC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 0xFC (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00406CC2; /* jne: not equal / not zero */

loc_00406C62: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(0x1E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), 0x1E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00406CC2; /* jne: not equal / not zero */

loc_00406C68: ;
    _fa = (uint32_t)(MEM8(esi + 3)) & 0xFFu; _fb = (uint32_t)(0x66) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 3), 0x66 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00406CC2; /* jne: not equal / not zero */

loc_00406C6E: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(0x6A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 4), 0x6A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00406CC2; /* jne: not equal / not zero */

loc_00406C74: ;
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(0xB2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 5), 0xB2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00406CC2; /* jne: not equal / not zero */

loc_00406C7A: ;
    SET_LO8(edx, MEM8(ecx + 0x2A0));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00406CB8; /* je: equal / zero */

loc_00406C84: ;
    ecx = MEM32(0x6C2C40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00406CA4; /* je: equal / zero */

loc_00406C8E: ;
    edi = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00406C9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00406C97u); } /* indirect call */
    }

loc_00406C9D: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00406CA4: ;
    PUSH32(esp, 0x62E32C);
    PUSH32(esp, 0x00406CAEu); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00406CAE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00406CB8: ;
    PUSH32(esp, 0x62E2E8);
    goto loc_00406C3D;

loc_00406CC2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00406CE0; /* jle: less or equal (signed <=) */

loc_00406CC6: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0x5C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00406CE0; /* jne: not equal / not zero */

loc_00406CCB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x62E2B4);
    PUSH32(esp, 0x00406CD6u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00406CD6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00406CE0: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00406CF0
 * Original: 0x00406CF0 - 0x00406E68 (376 bytes, 125 insns)
 * Category: game_ui
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00406CF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00406CF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x6C3890);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_00406E4D; /* jl: less (signed <) */

loc_00406D0C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00406DAB; /* jle: less or equal (signed <=) */

loc_00406D15: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00406E4D; /* jne: not equal / not zero */

loc_00406D1E: ;
    edi = MEM32(0x6957A8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00406D90; /* je: equal / zero */

loc_00406D28: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(ebp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_00406D59; /* je: equal / zero */

loc_00406D32: ;
    ecx = MEM32(0x6C38B4);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406D3Eu); RECOMP_ABI_CALL(0x005E3F20u, sub_005E3F20); /* call 0x005E3F20 */

loc_00406D3E: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406D4Bu); RECOMP_ABI_CALL(0x0041DFD0u, sub_0041DFD0); /* call 0x0041DFD0 */

loc_00406D4B: ;
    esp = ebp + -264;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_00406D59: ;
    eax = 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406D63u); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_00406D63: ;
    eax = esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x62E490);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406D72u); RECOMP_ABI_CALL(0x004056C0u, sub_004056C0); /* call 0x004056C0 */

loc_00406D72: ;
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406D82u); RECOMP_ABI_CALL(0x0041DFD0u, sub_0041DFD0); /* call 0x0041DFD0 */

loc_00406D82: ;
    esp = ebp + -264;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_00406D90: ;
    PUSH32(esp, 0x62E45C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406D9Au); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_00406D9A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp + -264;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_00406DAB: ;
    SET_LO8(eax, MEM8(0x6C3421));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00406E5A; /* je: equal / zero */

loc_00406DB8: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00406DDF; /* je: equal / zero */

loc_00406DBF: ;
    edx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x62E454);
    eax = ebp + -256;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406DDAu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00406DDA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00406DFC;

loc_00406DDF: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x62DEF8);
    edx = ebp + -256;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406DF9u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00406DF9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00406DFC: ;
    eax = MEM32(0x6C3424);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406E07u); RECOMP_ABI_CALL(0x004690F0u, sub_004690F0); /* call 0x004690F0 */

loc_00406E07: ;
    eax = MEM32(eax + 0x50);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00406E32; /* je: equal / zero */

loc_00406E11: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x54);
    edx = ebp + -256;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406E24u); RECOMP_ABI_CALL(0x00498C50u, sub_00498C50); /* call 0x00498C50 */

loc_00406E24: ;
    esp = ebp + -264;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_00406E32: ;
    PUSH32(esp, 0x62E424);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406E3Cu); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_00406E3C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp + -264;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_00406E4D: ;
    PUSH32(esp, 0x62E3D8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406E57u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00406E57: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00406E5A: ;
    esp = ebp + -264;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00406E70
 * Original: 0x00406E70 - 0x00406ECA (90 bytes, 34 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00406E70: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x6C3898);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x54;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00406E84u); RECOMP_ABI_CALL(0x0053FEE0u, sub_0053FEE0); /* call 0x0053FEE0 */

loc_00406E84: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00406E8D; /* je: equal / zero */

loc_00406E88: ;
    esi = 2;

loc_00406E8D: ;
    ecx = edi;
    PUSH32(esp, 0x00406E94u); RECOMP_ABI_CALL(0x0053FF10u, sub_0053FF10); /* call 0x0053FF10 */

loc_00406E94: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00406E9B; /* je: equal / zero */

loc_00406E98: ;
    esi = esi | 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00406E9B: ;
    ecx = edi;
    PUSH32(esp, 0x00406EA2u); RECOMP_ABI_CALL(0x0053FF40u, sub_0053FF40); /* call 0x0053FF40 */

loc_00406EA2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00406EA9; /* je: equal / zero */

loc_00406EA6: ;
    esi = esi | 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00406EA9: ;
    ecx = edi;
    PUSH32(esp, 0x00406EB0u); RECOMP_ABI_CALL(0x0053FF70u, sub_0053FF70); /* call 0x0053FF70 */

loc_00406EB0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00406EB7; /* je: equal / zero */

loc_00406EB4: ;
    esi = esi | 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00406EB7: ;
    ecx = edi;
    PUSH32(esp, 0x00406EBEu); RECOMP_ABI_CALL(0x0053FFA0u, sub_0053FFA0); /* call 0x0053FFA0 */

loc_00406EBE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00406EC5; /* je: equal / zero */

loc_00406EC2: ;
    esi = esi | 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00406EC5: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00406ED0
 * Original: 0x00406ED0 - 0x00406ED5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00406ED0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00406ED0: ;
    g_seh_ebp = ebp; sub_00535D90(); return; /* tail jmp 0x00535D90 */

}

/**
 * sub_00406EE0
 * Original: 0x00406EE0 - 0x0040719E (702 bytes, 234 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00406EE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00406EE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x204) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x204;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x6957A8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00406F31; /* je: equal / zero */

loc_00406EFD: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00406F31; /* jne: not equal / not zero */

loc_00406F04: ;
    SET_LO8(eax, MEM8(0x695704));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00406F31; /* je: equal / zero */

loc_00406F0D: ;
    ebx = MEM32(edi + 0xC);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406F27u); RECOMP_ABI_CALL(0x005E4230u, sub_005E4230); /* call 0x005E4230 */

loc_00406F27: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406F2Eu); RECOMP_ABI_CALL(0x00418400u, sub_00418400); /* call 0x00418400 */

loc_00406F2E: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00406F31: ;
    ecx = MEM32(0x6C3890);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00406F4D; /* jne: not equal / not zero */

loc_00406F3D: ;
    ecx = MEM32(0x69947C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00406F4D; /* je: equal / zero */

loc_00406F47: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406F4Du); RECOMP_ABI_CALL(0x004E5AF0u, sub_004E5AF0); /* call 0x004E5AF0 */

loc_00406F4D: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00406F69; /* je: equal / zero */

loc_00406F54: ;
    edx = MEM32(ebp + 0x14);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406F64u); RECOMP_ABI_CALL(0x0041E000u, sub_0041E000); /* call 0x0041E000 */

loc_00406F64: ;
    goto loc_0040714D;

loc_00406F69: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0040709C; /* jne: not equal / not zero */

loc_00406F71: ;
    esi = MEM32(ebp + 0xC);
    eax = esi + -1;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00406FFB; /* ja: above (unsigned >) */

loc_00406F7E: ;
    eax = ZX8(MEM8(eax + 0x4071B4));
    { uint32_t _jt = MEM32(eax * 4 + 0x4071A0); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00406F8Cu) goto loc_00406F8C;
    if (_jt == 0x00406FB4u) goto loc_00406FB4;
    if (_jt == 0x00406FBBu) goto loc_00406FBB;
    if (_jt == 0x00406FDFu) goto loc_00406FDF;
    if (_jt == 0x00406FFBu) goto loc_00406FFB;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00406F8C: ;
    PUSH32(esp, 0x62E554);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406F9Bu); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_00406F9B: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = ebp + -516;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406FAFu); RECOMP_ABI_CALL(0x00619A4Au, sub_00619A4A); /* call 0x00619A4A */

loc_00406FAF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0040701D;

loc_00406FB4: ;
    PUSH32(esp, 0x62E544);
    goto loc_00407000;

loc_00406FBB: ;
    PUSH32(esp, 0x62E534);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406FCAu); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_00406FCA: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    ecx = ebp + -516;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406FDAu); RECOMP_ABI_CALL(0x00619A4Au, sub_00619A4A); /* call 0x00619A4A */

loc_00406FDA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0040701F;

loc_00406FDF: ;
    PUSH32(esp, 0x62E51C);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00406FEEu); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_00406FEE: ;
    edx = MEM32(eax + 8);
    PUSH32(esp, edx);
    eax = ebp + -516;
    PUSH32(esp, eax);
    goto loc_00407015;

loc_00406FFB: ;
    PUSH32(esp, 0x62E508);

loc_00407000: ;
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0040700Au); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0040700A: ;
    ecx = MEM32(eax + 8);
    edx = ebp + -516;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);

loc_00407015: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0040701Au); RECOMP_ABI_CALL(0x00619A4Au, sub_00619A4A); /* call 0x00619A4A */

loc_0040701A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0040701D: ;
    SET_LO8(ebx, 1);

loc_0040701F: ;
    eax = MEM32(0x6C3424);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040706A; /* je: equal / zero */

loc_00407028: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040706A; /* je: equal / zero */

loc_0040702C: ;
    ecx = MEM32(0x69585C);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00407038u); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_00407038: ;
    ebx = eax;
    ecx = MEM32(ebx + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00407051; /* je: equal / zero */

loc_00407041: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00407046u); RECOMP_ABI_CALL(0x00499900u, sub_00499900); /* call 0x00499900 */

loc_00407046: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00407051; /* je: equal / zero */

loc_0040704A: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00407051u); RECOMP_ABI_CALL(0x00468C10u, sub_00468C10); /* call 0x00468C10 */

loc_00407051: ;
    ecx = MEM32(0x6C3890);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0040705Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040705Bu); } /* indirect call */
    }

loc_0040705E: ;
    ecx = MEM32(0x697B90);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0040706Au); RECOMP_ABI_CALL(0x004816F0u, sub_004816F0); /* call 0x004816F0 */

loc_0040706A: ;
    ecx = ebp + -516;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00407076u); RECOMP_ABI_CALL(0x00619A34u, sub_00619A34); /* call 0x00619A34 */

loc_00407076: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00407089u); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_00407089: ;
    eax = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    edx = ebp + -516;
    PUSH32(esp, edx);
    goto loc_00407121;

loc_0040709C: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x62E4CC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004070A9u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_004070A9: ;
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004070CC; /* je: equal / zero */

loc_004070B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004070C0; /* jne: not equal / not zero */

loc_004070B9: ;
    PUSH32(esp, 0x62E4B8);
    goto loc_004070D1;

loc_004070C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004070CC; /* jne: not equal / not zero */

loc_004070C5: ;
    PUSH32(esp, 0x62E4A0);
    goto loc_004070D1;

loc_004070CC: ;
    PUSH32(esp, 0x62E494);

loc_004070D1: ;
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004070DBu); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_004070DB: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    eax = ebp + -516;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004070EFu); RECOMP_ABI_CALL(0x00619A4Au, sub_00619A4A); /* call 0x00619A4A */

loc_004070EF: ;
    ecx = ebp + -516;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004070FEu); RECOMP_ABI_CALL(0x00619A34u, sub_00619A34); /* call 0x00619A34 */

loc_004070FE: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00407111u); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_00407111: ;
    edx = MEM32(ebp + 8);
    eax = esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = ebp + -516;
    PUSH32(esp, ecx);

loc_00407121: ;
    ebx = MEM32(edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00407129u); RECOMP_ABI_CALL(0x00405700u, sub_00405700); /* call 0x00405700 */

loc_00407129: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx + 0xDC); PUSH32(esp, 0x00407135u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040712Fu); } /* indirect call */
    }

loc_00407135: ;
    edx = MEM32(0x697B88);
    ecx = MEM32(edx + 4);
    edx = MEM32(ebp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00407147u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00407144u); } /* indirect call */
    }

loc_00407147: ;
    esi = MEM32(ebp + 8);
    ebx = MEM32(ebp + 0xC);

loc_0040714D: ;
    SET_LO8(eax, MEM8(0x695704));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00407174; /* je: equal / zero */

loc_00407156: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00407174; /* jne: not equal / not zero */

loc_0040715A: ;
    eax = MEM32(0x6C3890);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00407174; /* jne: not equal / not zero */

loc_00407165: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00407171u); RECOMP_ABI_CALL(0x00418440u, sub_00418440); /* call 0x00418440 */

loc_00407171: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00407174: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1F0); PUSH32(esp, 0x0040717Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00407178u); } /* indirect call */
    }

loc_0040717E: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0040718Fu); RECOMP_ABI_CALL(0x00535B20u, sub_00535B20); /* call 0x00535B20 */

loc_0040718F: ;
    esp = ebp + -528;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004071C0
 * Original: 0x004071C0 - 0x00407338 (376 bytes, 127 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004071C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    int _jf_0040724F = 0; /* per-edge flags of joins */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004071C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x200));
    esp = esp - 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x004071DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004071D4u); } /* indirect call */
    }

loc_004071DA: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004071E2u); RECOMP_ABI_CALL(0x00535BC0u, sub_00535BC0); /* call 0x00535BC0 */

loc_004071E2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00407329; /* jne: not equal / not zero */

loc_004071EB: ;
    ecx = MEM32(0x6C3890);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00407329; /* jne: not equal / not zero */

loc_004071FB: ;
    SET_LO8(eax, MEM8(0x6C2EC1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00407212; /* je: equal / zero */

loc_00407204: ;
    SET_LO8(edx, MEM8(0x6C3300));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(0x6C2EC0)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(0x6C2EC0) (8-bit) */
    _cf = (int)(_fa < _fb);
    _jf_0040724F = (CMP_NE(_fa, _fb)) ? 1 : 0; /* flags of this edge */
    goto loc_0040724F;

loc_00407212: ;
    esi = 0x6C2EE0;
    eax = 0x6C3320;
    /* nop */

loc_00407220: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00407248; /* jne: not equal / not zero */

loc_0040722A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00407244; /* je: equal / zero */

loc_0040722E: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00407248; /* jne: not equal / not zero */

loc_0040723A: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00407220; /* jne: not equal / not zero */

loc_00407244: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0040724D;

loc_00407248: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0040724D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    _jf_0040724F = (CMP_NE(_fa, _fb)) ? 1 : 0; /* flags of this edge */

loc_0040724F: ;
    SET_LO8(eax, _jf_0040724F /* setne */);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = 0x8582C8;
    if (CMP_EQ(_fa, _fb)) goto loc_0040727C; /* je: equal / zero */

loc_0040725B: ;
    PUSH32(esp, 0x62E578);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00407265u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_00407265: ;
    esi = MEM32(eax + 8);
    PUSH32(esp, 0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00407271u); RECOMP_ABI_CALL(0x005E3F20u, sub_005E3F20); /* call 0x005E3F20 */

loc_00407271: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -512;
    PUSH32(esp, eax);
    goto loc_0040729B;

loc_0040727C: ;
    PUSH32(esp, 0x62E560);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00407286u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_00407286: ;
    esi = MEM32(eax + 8);
    PUSH32(esp, 0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00407292u); RECOMP_ABI_CALL(0x005E3F20u, sub_005E3F20); /* call 0x005E3F20 */

loc_00407292: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebp + -512;
    PUSH32(esp, ecx);

loc_0040729B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004072A0u); RECOMP_ABI_CALL(0x00619A4Au, sub_00619A4A); /* call 0x00619A4A */

loc_004072A0: ;
    ecx = MEM32(0x697B90);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004072B0u); RECOMP_ABI_CALL(0x0047DE90u, sub_0047DE90); /* call 0x0047DE90 */

loc_004072B0: ;
    SET_LO8(eax, MEM8(0x6C3421));
    edx = MEM32(0x6C3424);
    ecx = MEM32(0x69585C);
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004072CDu); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_004072CD: ;
    esi = MEM32(eax + 0x50);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004072E8; /* je: equal / zero */

loc_004072D4: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004072DBu); RECOMP_ABI_CALL(0x00499900u, sub_00499900); /* call 0x00499900 */

loc_004072DB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004072E8; /* je: equal / zero */

loc_004072DF: ;
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004072E8u); RECOMP_ABI_CALL(0x004998E0u, sub_004998E0); /* call 0x004998E0 */

loc_004072E8: ;
    edx = ebp + -512;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004072F4u); RECOMP_ABI_CALL(0x00619A34u, sub_00619A34); /* call 0x00619A34 */

loc_004072F4: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(3)) >> 32) & 1);
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00407307u); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_00407307: ;
    ebx = MEM32(edi);
    eax = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = ebp + -512;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0040731Du); RECOMP_ABI_CALL(0x00405700u, sub_00405700); /* call 0x00405700 */

loc_0040731D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0xDC); PUSH32(esp, 0x00407329u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00407323u); } /* indirect call */
    }

loc_00407329: ;
    esp = ebp + -524;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00407340
 * Original: 0x00407340 - 0x004073CE (142 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00407340: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x00407351u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040734Bu); } /* indirect call */
    }

loc_00407351: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00407359u); RECOMP_ABI_CALL(0x00535BC0u, sub_00535BC0); /* call 0x00535BC0 */

loc_00407359: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004073B6; /* jne: not equal / not zero */

loc_0040735E: ;
    eax = MEM32(0x6957A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040738D; /* je: equal / zero */

loc_00407367: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x100); PUSH32(esp, 0x00407371u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040736Bu); } /* indirect call */
    }

loc_00407371: ;
    ecx = MEM32(0x6957A8);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, 0x00407381u); RECOMP_ABI_CALL(0x0041D6B0u, sub_0041D6B0); /* call 0x0041D6B0 */

loc_00407381: ;
    POP32(esp, edi);
    MEM8(esi + 0x2F0) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0040738D: ;
    eax = MEM32(0x8602E0);
    MEM32(esi + 0x2F4) = eax;
    MEM8(esi + 0x2F8) = 1;
    ecx = MEM32(0x6CE2E4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004073AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004073A7u); } /* indirect call */
    }

loc_004073AA: ;
    POP32(esp, edi);
    MEM8(esi + 0x2F0) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_004073B6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004073C2; /* jne: not equal / not zero */

loc_004073BB: ;
    MEM8(esi + 0x2E8) = 0;

loc_004073C2: ;
    POP32(esp, edi);
    MEM8(esi + 0x2F0) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004073D0
 * Original: 0x004073D0 - 0x00407421 (81 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004073D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004073D0: ;
    eax = MEM32(0x6C38B4);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(eax + 0x68));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004073EB; /* je: equal / zero */

loc_004073DF: ;
    MEM32(0x663044) = 0x85;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004073EB: ;
    ecx = esi;
    PUSH32(esp, 0x004073F2u); RECOMP_ABI_CALL(0x005E4230u, sub_005E4230); /* call 0x005E4230 */

loc_004073F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00407403; /* jle: less or equal (signed <=) */

loc_004073F7: ;
    MEM32(0x663044) = 0x63;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00407403: ;
    ecx = esi;
    PUSH32(esp, 0x0040740Au); RECOMP_ABI_CALL(0x005E4230u, sub_005E4230); /* call 0x005E4230 */

loc_0040740A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    SET_LO8(ecx, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    POP32(esp, esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0x21;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x21) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x21;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x663044) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00407430
 * Original: 0x00407430 - 0x0040747A (74 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00407430: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00407440u); RECOMP_ABI_CALL(0x005E4320u, sub_005E4320); /* call 0x005E4320 */

loc_00407440: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00407476; /* je: equal / zero */

loc_00407445: ;
    SET_LO8(edx, MEM8(esi + 0x98));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esi + 0x9C));
    ecx = eax + eax * 2;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x6C2FF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6C2FF4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(LO8(edx));
    SET_LO8(ebx, LO8(ebx) & 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(ecx + 0x2C) = LO8(ebx);
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    SET_LO8(edx, MEM8(esi + 0x99));
    MEM8(ecx + 0x24) = LO8(edx);
    POP32(esp, ebx);

loc_00407476: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00407480
 * Original: 0x00407480 - 0x004074C8 (72 bytes, 22 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00407480: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004074C5; /* jge: greater or equal (signed >=) */

loc_00407487: ;
    _fa = (uint32_t)(MEM8(ecx + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x10), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004074C5; /* jne: not equal / not zero */

loc_0040748D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00407492u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040748Fu); } /* indirect call */
    }

loc_00407492: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(edx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x1C), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004074C5; /* jne: not equal / not zero */

loc_0040749B: ;
    ecx = MEM32(0x6C3890);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004074BA; /* jne: not equal / not zero */

loc_004074A7: ;
    ecx = MEM32(0x6957A8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004074BA; /* je: equal / zero */

loc_004074B1: ;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0041E080(); return; /* tail jmp 0x0041E080 */

loc_004074BA: ;
    PUSH32(esp, 0x62E590);
    PUSH32(esp, 0x004074C4u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_004074C4: ;
    POP32(esp, ecx);

loc_004074C5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004074D0
 * Original: 0x004074D0 - 0x004074D5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004074D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004074D0: ;
    g_seh_ebp = ebp; sub_005E49E0(); return; /* tail jmp 0x005E49E0 */

}

/**
 * sub_004074E0
 * Original: 0x004074E0 - 0x0040753B (91 bytes, 27 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004074E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004074E0: ;
    ecx = MEM32(0x69585C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_00407507; /* je: equal / zero */

loc_004074EE: ;
    edx = MEM32(ecx + eax * 4 + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00407507; /* jne: not equal / not zero */

loc_004074F6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x62E624);
    PUSH32(esp, 0x00407501u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00407501: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00407507: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x6C3424)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x6C3424) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0040751F; /* jne: not equal / not zero */

loc_0040750F: ;
    PUSH32(esp, 0x62E5EC);
    PUSH32(esp, 0x00407519u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_00407519: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0040751F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00407525u); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_00407525: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(eax + 0x10);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x44);
    PUSH32(esp, 0x00407538u); RECOMP_ABI_CALL(0x0046B120u, sub_0046B120); /* call 0x0046B120 */

loc_00407538: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00407540
 * Original: 0x00407540 - 0x00407597 (87 bytes, 26 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00407540: ;
    ecx = MEM32(0x69585C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_00407567; /* je: equal / zero */

loc_0040754E: ;
    edx = MEM32(ecx + eax * 4 + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00407567; /* jne: not equal / not zero */

loc_00407556: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x62E6A4);
    PUSH32(esp, 0x00407561u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_00407561: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00407567: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x6C3424)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x6C3424) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0040757F; /* jne: not equal / not zero */

loc_0040756F: ;
    PUSH32(esp, 0x62E660);
    PUSH32(esp, 0x00407579u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_00407579: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0040757F: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0040758Du); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_0040758D: ;
    ecx = eax;
    PUSH32(esp, 0x00407594u); RECOMP_ABI_CALL(0x00468FA0u, sub_00468FA0); /* call 0x00468FA0 */

loc_00407594: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004075A0
 * Original: 0x004075A0 - 0x00407618 (120 bytes, 40 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004075A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004075A0: ;
    ecx = MEM32(0x69585C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_004075C9; /* je: equal / zero */

loc_004075AF: ;
    eax = MEM32(ecx + esi * 4 + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004075C9; /* jne: not equal / not zero */

loc_004075B7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x62E734);
    PUSH32(esp, 0x004075C2u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_004075C2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_004075C9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x6C3424)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x6C3424) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004075E2; /* jne: not equal / not zero */

loc_004075D1: ;
    PUSH32(esp, 0x62E6E0);
    PUSH32(esp, 0x004075DBu); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_004075DB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_004075E2: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004075F1u); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_004075F1: ;
    ecx = eax;
    PUSH32(esp, 0x004075F8u); RECOMP_ABI_CALL(0x00468FA0u, sub_00468FA0); /* call 0x00468FA0 */

loc_004075F8: ;
    ecx = MEM32(0x69585C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00407604u); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_00407604: ;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0x44);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00407613u); RECOMP_ABI_CALL(0x0046B120u, sub_0046B120); /* call 0x0046B120 */

loc_00407613: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00407620
 * Original: 0x00407620 - 0x0040768A (106 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00407620: ;
    edx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00407658; /* jne: not equal / not zero */

loc_0040762C: ;
    edx = MEM32(ecx);
    MEM8(esp) = LO8(eax);
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    SET_LO8(eax, MEM8(esp + 0x28));
    MEM8(esp + 0x1C) = LO8(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFEu);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM8(esp + 9) = 0x24;
    MEM16(esp + 0xA) = 0x20;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00407658u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00407655u); } /* indirect call */
    }

loc_00407658: ;
    ecx = MEM32(0x6C3890);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00407665u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00407662u); } /* indirect call */
    }

loc_00407665: ;
    eax = MEM32(esp + 0x24);
    ecx = ZX8(MEM8(eax + 0x1C));
    PUSH32(esp, ecx);
    ecx = MEM32(0x697B90);
    PUSH32(esp, 0x00407679u); RECOMP_ABI_CALL(0x00480460u, sub_00480460); /* call 0x00480460 */

loc_00407679: ;
    ecx = MEM32(0x6CE2E4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00407684u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00407681u); } /* indirect call */
    }

loc_00407684: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00407690
 * Original: 0x00407690 - 0x00407733 (163 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00407690: ;
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004076CF; /* jne: not equal / not zero */

loc_0040769A: ;
    SET_LO8(eax, MEM8(esp + 0x28));
    edx = MEM32(ecx);
    MEM8(esp + 0x1C) = LO8(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFEu);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM8(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    MEM8(esp + 9) = 0x25;
    MEM16(esp + 0xA) = 0x20;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004076CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004076CCu); } /* indirect call */
    }

loc_004076CF: ;
    ecx = MEM32(0x6C3890);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004076DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004076D9u); } /* indirect call */
    }

loc_004076DC: ;
    ecx = MEM32(0x697B90);
    MEM32(0x698524) = 0x32;
    MEM32(0x69852C) = 0x3EB33333;
    PUSH32(esp, 0x004076FBu); RECOMP_ABI_CALL(0x0047CD30u, sub_0047CD30); /* call 0x0047CD30 */

loc_004076FB: ;
    ecx = MEM32(0x69585C);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0040770Au); RECOMP_ABI_CALL(0x00467090u, sub_00467090); /* call 0x00467090 */

loc_0040770A: ;
    eax = MEM32(0x6C38A4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00407722; /* jne: not equal / not zero */

loc_00407715: ;
    ecx = MEM32(0x69585C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00407722u); RECOMP_ABI_CALL(0x004670E0u, sub_004670E0); /* call 0x004670E0 */

loc_00407722: ;
    ecx = MEM32(0x6CE2E4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0040772Du); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0040772Au); } /* indirect call */
    }

loc_0040772D: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00407740
 * Original: 0x00407740 - 0x004077DA (154 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00407740: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004077D6; /* jne: not equal / not zero */

loc_0040774E: ;
    edx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = ZX8(MEM8(edi + 0x1C));
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00407778; /* jne: not equal / not zero */

loc_00407765: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x62E7B4);
    PUSH32(esp, 0x00407770u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00407770: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00407778: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    eax = ecx + esi + 0xC4;
    ecx = MEM32(esp + 0x10);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 0x34) = MEM32(eax + 0x34) | edx;
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ZX8(MEM8(edi + 0x1C));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    ecx = eax + esi + 0xC4;
    PUSH32(esp, 0x004077A3u); RECOMP_ABI_CALL(0x00539BF0u, sub_00539BF0); /* call 0x00539BF0 */

loc_004077A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004077D5; /* jl: less (signed <) */

loc_004077A8: ;
    eax = ZX8(MEM8(edi + 0x1C));
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    edx = MEM32(ecx + esi + 0xF8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x62E774);
    PUSH32(esp, 0x004077C4u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_004077C4: ;
    eax = ZX8(MEM8(edi + 0x1C));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xB);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004077D5u); RECOMP_ABI_CALL(0x005E5B10u, sub_005E5B10); /* call 0x005E5B10 */

loc_004077D5: ;
    POP32(esp, edi);

loc_004077D6: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004077E0
 * Original: 0x004077E0 - 0x00407833 (83 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004077E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004077E0: ;
    edx = MEM32(ecx + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    if (CMP_NE(_fa, _fb)) goto loc_0040781C; /* jne: not equal / not zero */

loc_004077F1: ;
    edx = MEM32(ecx);
    MEM8(esp + 4) = LO8(eax);
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    SET_LO8(eax, MEM8(esi + 0x1C));
    MEM8(esp + 0x20) = LO8(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFEu);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM8(esp + 0xD) = 0x29;
    MEM16(esp + 0xE) = 0x20;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0040781Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00407819u); } /* indirect call */
    }

loc_0040781C: ;
    eax = ZX8(MEM8(esi + 0x1C));
    ecx = MEM32(0x6C3890);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0040782Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00407829u); } /* indirect call */
    }

loc_0040782C: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00407840
 * Original: 0x00407840 - 0x00407893 (83 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00407840: ;
    edx = MEM32(ecx + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    if (CMP_NE(_fa, _fb)) goto loc_0040787C; /* jne: not equal / not zero */

loc_00407851: ;
    edx = MEM32(ecx);
    MEM8(esp + 4) = LO8(eax);
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    SET_LO8(eax, MEM8(esi + 0x1C));
    MEM8(esp + 0x20) = LO8(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFEu);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM8(esp + 0xD) = 0x2A;
    MEM16(esp + 0xE) = 0x20;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0040787Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00407879u); } /* indirect call */
    }

loc_0040787C: ;
    eax = ZX8(MEM8(esi + 0x1C));
    ecx = MEM32(0x6C38A4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0040788Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00407889u); } /* indirect call */
    }

loc_0040788C: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004078A0
 * Original: 0x004078A0 - 0x00407945 (165 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004078A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004078A0: ;
    eax = MEM32(0x69585C);
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_004078CE; /* je: equal / zero */

loc_004078B1: ;
    esi = MEM32(eax + edx * 4 + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004078CE; /* jne: not equal / not zero */

loc_004078B9: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x62E7F0);
    PUSH32(esp, 0x004078C4u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_004078C4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_004078CE: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(esp + 0x30);
    if (CMP_NE(_fa, _fb)) goto loc_00407922; /* jne: not equal / not zero */

loc_004078D9: ;
    SET_LO8(eax, MEM8(esi + 0x1D));
    MEM8(esp + 0x21) = LO8(eax);
    eax = MEM32(ecx + 0x288);
    MEM8(esp + 0x20) = LO8(edx);
    edx = MEM32(esi + 0x20);
    MEM32(esp + 0x28) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFEu);
    eax = esp + 8;
    MEM32(esp + 0x28) = edx;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    MEM8(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM8(esp + 0xD) = 0x2C;
    MEM16(esp + 0xE) = 0x28;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00407922u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040791Fu); } /* indirect call */
    }

loc_00407922: ;
    ecx = MEM32(esi + 0x20);
    edx = ZX8(MEM8(esi + 0x1C));
    eax = ZX8(MEM8(esi + 0x1D));
    PUSH32(esp, ecx);
    ecx = MEM32(0x697B88);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0040793Eu); RECOMP_ABI_CALL(0x0048C7D0u, sub_0048C7D0); /* call 0x0048C7D0 */

loc_0040793E: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00407950
 * Original: 0x00407950 - 0x00407A63 (275 bytes, 95 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00407950: ;
    eax = MEM32(0x697B88);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x40);
    ebx = ZX8(MEM8(ebp + 0x1C));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004079D6; /* jne: not equal / not zero */

loc_00407971: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004079C4; /* jne: not equal / not zero */

loc_00407978: ;
    ecx = edi;
    PUSH32(esp, 0x0040797Fu); RECOMP_ABI_CALL(0x00490160u, sub_00490160); /* call 0x00490160 */

loc_0040797F: ;
    ecx = MEM32(ebp + 0x20);
    edx = MEM32(esi + 0x288);
    ebx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x3C) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFEu);
    ecx = esp + 0x20;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(esp + 0x24) = 0;
    MEM8(esp + 0x25) = 0x2D;
    MEM16(esp + 0x26) = 0x28;
    MEM8(esp + 0x40) = LO8(ebx);
    MEM8(esp + 0x41) = 0xFF;
    MEM32(esp + 0x48) = edx;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004079C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004079C1u); } /* indirect call */
    }

loc_004079C4: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x004079CCu); RECOMP_ABI_CALL(0x004900A0u, sub_004900A0); /* call 0x004900A0 */

loc_004079CC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_004079D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00407A59; /* jne: not equal / not zero */

loc_004079DB: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00407A4C; /* jne: not equal / not zero */

loc_004079E4: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x004079EEu); RECOMP_ABI_CALL(0x0048E510u, sub_0048E510); /* call 0x0048E510 */

loc_004079EE: ;
    ebx = eax;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x004079F8u); RECOMP_ABI_CALL(0x0048D610u, sub_0048D610); /* call 0x0048D610 */

loc_004079F8: ;
    ecx = edi;
    PUSH32(esp, 0x004079FFu); RECOMP_ABI_CALL(0x0048E7D0u, sub_0048E7D0); /* call 0x0048E7D0 */

loc_004079FF: ;
    ecx = MEM32(esi + 0x288);
    edx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ebp + 0x20);
    MEM32(esp + 0x3C) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFEu);
    eax = esp + 0x20;
    MEM32(esp + 0x44) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(esp + 0x24) = 0;
    MEM8(esp + 0x25) = 0x2D;
    MEM16(esp + 0x26) = 0x28;
    MEM8(esp + 0x40) = LO8(ebx);
    MEM8(esp + 0x41) = 0xFF;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00407A42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00407A3Fu); } /* indirect call */
    }

loc_00407A42: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00407A4C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00407A52u); RECOMP_ABI_CALL(0x0048D610u, sub_0048D610); /* call 0x0048D610 */

loc_00407A52: ;
    ecx = edi;
    PUSH32(esp, 0x00407A59u); RECOMP_ABI_CALL(0x0048E7D0u, sub_0048E7D0); /* call 0x0048E7D0 */

loc_00407A59: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00407A70
 * Original: 0x00407A70 - 0x00407B89 (281 bytes, 94 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00407A70: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x69585C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00407AC7; /* je: equal / zero */

loc_00407A85: ;
    eax = ZX8(MEM8(esi + 0x1C));
    edx = MEM32(ecx + eax * 4 + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00407AC7; /* jne: not equal / not zero */

loc_00407A91: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x62E82C);
    PUSH32(esp, 0x00407A9Cu); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_00407A9C: ;
    eax = MEM32(edi + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00407B81; /* je: equal / zero */

loc_00407AAA: ;
    eax = MEM32(esp + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00407B81; /* jne: not equal / not zero */

loc_00407AB6: ;
    PUSH32(esp, 0xD);
    ecx = edi;
    PUSH32(esp, 0x00407ABFu); RECOMP_ABI_CALL(0x005E5A30u, sub_005E5A30); /* call 0x005E5A30 */

loc_00407ABF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00407AC7: ;
    eax = MEM32(0x697B88);
    ecx = MEM32(eax + 4);
    edx = MEM32(ecx + 8);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00407AEE; /* jne: not equal / not zero */

loc_00407AD9: ;
    SET_LO8(edx, MEM8(esi + 0x1D));
    eax = ZX8(MEM8(esi + 0x1C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00407AECu); RECOMP_ABI_CALL(0x00490E50u, sub_00490E50); /* call 0x00490E50 */

loc_00407AEC: ;
    goto loc_00407B06;

loc_00407AEE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00407B06; /* jne: not equal / not zero */

loc_00407AF3: ;
    SET_LO8(edx, MEM8(esi + 0x1D));
    eax = ZX8(MEM8(esi + 0x1C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00407B06u); RECOMP_ABI_CALL(0x0048F180u, sub_0048F180); /* call 0x0048F180 */

loc_00407B06: ;
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00407B81; /* jne: not equal / not zero */

loc_00407B0D: ;
    SET_LO8(ecx, MEM8(esp + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0x24) = LO8(ecx);
    ecx = MEM32(esi + 0x20);
    MEM8(esp + 0x25) = LO8(edx);
    edx = MEM32(edi + 0x288);
    MEM8(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    MEM8(esp + 9) = 0x2E;
    MEM16(esp + 0xA) = 0x28;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00407B6A; /* je: equal / zero */

loc_00407B54: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFEu);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00407B62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00407B5Fu); } /* indirect call */
    }

loc_00407B62: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00407B6A: ;
    SET_LO8(ecx, MEM8(esi + 0x1C));
    edx = MEM32(edi);
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00407B81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00407B7Eu); } /* indirect call */
    }

loc_00407B81: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00407B90
 * Original: 0x00407B90 - 0x00407CF7 (359 bytes, 128 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00407B90: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x3C);
    SET_LO8(eax, MEM8(edi + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00407BEF; /* jl: less (signed <) */

loc_00407BA3: ;
    edx = MEM32(0x69585C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00407BEF; /* je: equal / zero */

loc_00407BAD: ;
    ecx = SX8(LO8(eax));
    ebx = MEM32(edx + ecx * 4 + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00407BEF; /* jne: not equal / not zero */

loc_00407BB8: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x62E868);
    PUSH32(esp, 0x00407BC3u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_00407BC3: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00407CEE; /* je: equal / zero */

loc_00407BD1: ;
    eax = MEM32(esp + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00407CEE; /* jne: not equal / not zero */

loc_00407BDD: ;
    PUSH32(esp, 0xD);
    ecx = esi;
    PUSH32(esp, 0x00407BE6u); RECOMP_ABI_CALL(0x005E5A30u, sub_005E5A30); /* call 0x005E5A30 */

loc_00407BE6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00407BEF: ;
    edx = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00407C41; /* jne: not equal / not zero */

loc_00407BF8: ;
    edx = MEM32(edi + 0x24);
    MEM8(esp + 0x28) = LO8(eax);
    eax = MEM32(edi + 0x20);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esi + 0x288);
    MEM8(esp + 0xC) = LO8(ecx);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = ecx;
    SET_LO8(ecx, MEM8(edi + 0x1D));
    MEM32(esp + 0x34) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFEu);
    eax = esp + 0x10;
    MEM8(esp + 0x2D) = LO8(ecx);
    MEM32(esp + 0x34) = edx;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(esp + 0x15) = 0x2F;
    MEM16(esp + 0x16) = 0x2C;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00407C41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00407C3Eu); } /* indirect call */
    }

loc_00407C41: ;
    ecx = MEM32(0x697B88);
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 4);
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    ebx = MEM32(ebp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_00407C99; /* je: equal / zero */

loc_00407C59: ;
    edx = MEM32(0x6C32E8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00407C8C; /* je: equal / zero */

loc_00407C63: ;
    eax = eax + eax * 2;
    edx = ecx + ecx * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + 0x6C345C);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x6C345C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 0x6C345C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00407C8C; /* jne: not equal / not zero */

loc_00407C7D: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x174); PUSH32(esp, 0x00407C8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00407C84u); } /* indirect call */
    }

loc_00407C8A: ;
    goto loc_00407C99;

loc_00407C8C: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x174); PUSH32(esp, 0x00407C99u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00407C93u); } /* indirect call */
    }

loc_00407C99: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00407CCF; /* jne: not equal / not zero */

loc_00407C9E: ;
    ecx = MEM32(edi + 0x20);
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x00407CAEu); RECOMP_ABI_CALL(0x00490EF0u, sub_00490EF0); /* call 0x00490EF0 */

loc_00407CAE: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00407CED; /* jne: not equal / not zero */

loc_00407CB5: ;
    ecx = MEM32(edi + 0x24);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x110); PUSH32(esp, 0x00407CC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00407CBFu); } /* indirect call */
    }

loc_00407CC5: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00407CCF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00407CED; /* jne: not equal / not zero */

loc_00407CD4: ;
    SET_LO8(ebx, MEM8(edi + 0x1D));
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x1C);
    eax = MEM32(edi + 0x20);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00407CEDu); RECOMP_ABI_CALL(0x0048F210u, sub_0048F210); /* call 0x0048F210 */

loc_00407CED: ;
    POP32(esp, ebp);

loc_00407CEE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00407D00
 * Original: 0x00407D00 - 0x00407DA2 (162 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00407D00: ;
    edx = MEM32(0x69585C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00407D22; /* jne: not equal / not zero */

loc_00407D0F: ;
    PUSH32(esp, 0x62E8A4);
    PUSH32(esp, 0x00407D19u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_00407D19: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00407D22: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), eax (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x3C);
    if (CMP_NE(_fa, _fb)) goto loc_00407D7F; /* jne: not equal / not zero */

loc_00407D2C: ;
    MEM8(esp + 4) = LO8(eax);
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    SET_LO8(eax, MEM8(esi + 0x28));
    MEM8(esp + 0x2C) = LO8(eax);
    edx = esi + 0x1C;
    eax = MEM32(edx);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(ecx + 0x288);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esi + 0x2C);
    MEM32(esp + 0x34) = edx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFEu);
    edx = esp + 8;
    MEM32(esp + 0x34) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    MEM8(esp + 0xD) = 0x30;
    MEM16(esp + 0xE) = 0x34;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00407D7Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00407D7Cu); } /* indirect call */
    }

loc_00407D7F: ;
    eax = MEM32(0x697B88);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00407D9B; /* jne: not equal / not zero */

loc_00407D8D: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x28);
    edx = esi + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00407D9Bu); RECOMP_ABI_CALL(0x00491000u, sub_00491000); /* call 0x00491000 */

loc_00407D9B: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00407DB0
 * Original: 0x00407DB0 - 0x00407EA0 (240 bytes, 76 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407DB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00407DB0: ;
    eax = MEM32(0x69585C);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x34);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00407E19; /* je: equal / zero */

loc_00407DC4: ;
    ecx = ZX8(MEM8(esi + 0x1C));
    edx = MEM32(eax + ecx * 4 + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00407DDE; /* je: equal / zero */

loc_00407DD0: ;
    edx = ZX8(MEM8(esi + 0x1D));
    PUSH32(esp, ebp);
    ebp = MEM32(eax + edx * 4 + 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    POP32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_00407E19; /* jne: not equal / not zero */

loc_00407DDE: ;
    eax = ZX8(MEM8(esi + 0x1D));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x62E8DC);
    PUSH32(esp, 0x00407DEEu); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_00407DEE: ;
    eax = MEM32(edi + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00407E98; /* je: equal / zero */

loc_00407DFC: ;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00407E98; /* jne: not equal / not zero */

loc_00407E08: ;
    PUSH32(esp, 0xD);
    ecx = edi;
    PUSH32(esp, 0x00407E11u); RECOMP_ABI_CALL(0x005E5A30u, sub_005E5A30); /* call 0x005E5A30 */

loc_00407E11: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00407E19: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00407E76; /* jne: not equal / not zero */

loc_00407E20: ;
    SET_LO8(ecx, MEM8(esp + 0x3C));
    SET_LO8(edx, MEM8(esi + 0x1D));
    eax = MEM32(esi + 0x20);
    MEM8(esp + 0x24) = LO8(ecx);
    ecx = MEM32(esi + 0x24);
    MEM32(esp + 0x2C) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFEu);
    ecx = esp + 0xC;
    MEM8(esp + 0x29) = LO8(edx);
    edx = MEM32(edi + 0x288);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = edi;
    MEM8(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM8(esp + 0x11) = 0x31;
    MEM16(esp + 0x12) = 0x2C;
    MEM32(esp + 0x38) = edx;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00407E76u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00407E73u); } /* indirect call */
    }

loc_00407E76: ;
    edx = MEM32(0x697B88);
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00407E98; /* jne: not equal / not zero */

loc_00407E85: ;
    eax = MEM32(esi + 0x20);
    edx = ZX8(MEM8(esi + 0x1D));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x1C));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00407E98u); RECOMP_ABI_CALL(0x004911E0u, sub_004911E0); /* call 0x004911E0 */

loc_00407E98: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00407EA0
 * Original: 0x00407EA0 - 0x00407F98 (248 bytes, 78 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00407EA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00407EA0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x69585C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00407F0A; /* je: equal / zero */

loc_00407EB5: ;
    eax = ZX8(MEM8(esi + 0x1C));
    edx = MEM32(ecx + eax * 4 + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00407ECF; /* je: equal / zero */

loc_00407EC1: ;
    edx = ZX8(MEM8(esi + 0x1D));
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + edx * 4 + 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    POP32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_00407F0A; /* jne: not equal / not zero */

loc_00407ECF: ;
    ecx = ZX8(MEM8(esi + 0x1D));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x62E920);
    PUSH32(esp, 0x00407EDFu); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_00407EDF: ;
    eax = MEM32(edi + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00407F90; /* je: equal / zero */

loc_00407EED: ;
    eax = MEM32(esp + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00407F90; /* jne: not equal / not zero */

loc_00407EF9: ;
    PUSH32(esp, 0xD);
    ecx = edi;
    PUSH32(esp, 0x00407F02u); RECOMP_ABI_CALL(0x005E5A30u, sub_005E5A30); /* call 0x005E5A30 */

loc_00407F02: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00407F0A: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00407F6C; /* jne: not equal / not zero */

loc_00407F11: ;
    SET_LO8(eax, MEM8(esi + 0x1D));
    SET_LO8(edx, MEM8(esi + 0x1C));
    SET_LO8(ecx, MEM8(esi + 0x1E));
    MEM8(esp + 0x25) = LO8(eax);
    eax = MEM32(edi + 0x288);
    MEM8(esp + 0x24) = LO8(edx);
    edx = MEM32(esi + 0x20);
    MEM32(esp + 0x2C) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFEu);
    eax = esp + 0xC;
    MEM8(esp + 0x2A) = LO8(ecx);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(edi);
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM8(esp + 0x11) = 0x33;
    MEM16(esp + 0x12) = 0x28;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00407F66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00407F63u); } /* indirect call */
    }

loc_00407F66: ;
    ecx = MEM32(0x69585C);

loc_00407F6C: ;
    edx = ZX8(MEM8(esi + 0x1D));
    PUSH32(esp, edx);
    PUSH32(esp, 0x00407F76u); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_00407F76: ;
    ecx = ZX8(MEM8(esi + 0x1E));
    edx = ZX8(MEM8(esi + 0x1D));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x1C));
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x78);
    PUSH32(esp, 0x00407F90u); RECOMP_ABI_CALL(0x004CF390u, sub_004CF390); /* call 0x004CF390 */

loc_00407F90: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00407FA0
 * Original: 0x00407FA0 - 0x0040814F (431 bytes, 141 insns)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00407FA0(void)
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

loc_00407FA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 8);
    edx = ZX16(MEM16(ecx + 2));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0xCCCCCCCDu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx >> 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_00408147; /* jle: less or equal (signed <=) */

loc_00407FC7: ;
    esi = ecx + 0x2C;
    edi = edx;
    /* nop */

loc_00407FD0: ;
    eax = MEM32(esi + -12);
    ecx = eax + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0040812F; /* ja: above (unsigned >) */

loc_00407FDF: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x408150); /* switch: 8 entries, 6 targets */
    if (_jt == 0x00407FE6u) goto loc_00407FE6;
    if (_jt == 0x00408040u) goto loc_00408040;
    if (_jt == 0x00408080u) goto loc_00408080;
    if (_jt == 0x004080C4u) goto loc_004080C4;
    if (_jt == 0x0040810Fu) goto loc_0040810F;
    if (_jt == 0x0040813Du) goto loc_0040813D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00407FE6: ;
    eax = ZX8(MEM8(esi + -2));
    ecx = MEM32(esi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + -4));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(esi + -6));
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(esi + -8));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x69947C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0040800Au); RECOMP_ABI_CALL(0x004E6BA0u, sub_004E6BA0); /* call 0x004E6BA0 */

loc_0040800A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0040813D; /* jge: greater or equal (signed >=) */

loc_00408012: ;
    edx = ZX16(MEM16(esi + -4));
    fp_push(MEMF(esi)); /* fld float */
    eax = ZX8(MEM8(esi + -2));
    ecx = ZX16(MEM16(esi + -6));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    edx = ZX16(MEM16(esi + -8));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x62EA78);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00408038u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00408038: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0040813D;

loc_00408040: ;
    eax = MEM32(esi + -8);
    fp_push(MEMF(esi + -4)); /* fld float */
    ecx = MEM32(esi);
    MEM32(esp + 0xC) = eax;
    eax = ZX16(MEM16(esi + 4));
    edx = esp + 0xC;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(0x69947C);
    PUSH32(esp, eax);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00408069u); RECOMP_ABI_CALL(0x004E5C30u, sub_004E5C30); /* call 0x004E5C30 */

loc_00408069: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0040813D; /* jne: not equal / not zero */

loc_00408071: ;
    ecx = ZX16(MEM16(esi + 4));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x62EA44);
    goto loc_00408135;

loc_00408080: ;
    ecx = ZX16(MEM16(esi + -8));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + -4));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + -6));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x69947C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0040809Eu); RECOMP_ABI_CALL(0x004E5D80u, sub_004E5D80); /* call 0x004E5D80 */

loc_0040809E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0040813D; /* jne: not equal / not zero */

loc_004080A6: ;
    edx = ZX16(MEM16(esi + -4));
    eax = ZX16(MEM16(esi + -6));
    ecx = ZX16(MEM16(esi + -8));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x62EA08);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004080BFu); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_004080BF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0040813D;

loc_004080C4: ;
    edx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + -4));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + -6));
    PUSH32(esp, edx);
    edx = ZX16(MEM16(esi + -8));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x69947C);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004080E5u); RECOMP_ABI_CALL(0x004E5CD0u, sub_004E5CD0); /* call 0x004E5CD0 */

loc_004080E5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0040813D; /* jne: not equal / not zero */

loc_004080E9: ;
    eax = ZX16(MEM16(esi + -4));
    fp_push(MEMF(esi)); /* fld float */
    ecx = ZX16(MEM16(esi + -6));
    edx = ZX16(MEM16(esi + -8));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x62E9B8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0040810Au); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_0040810A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0040813D;

loc_0040810F: ;
    eax = ZX16(MEM16(esi + -8));
    ecx = MEM32(0x69947C);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0040811Fu); RECOMP_ABI_CALL(0x004E7290u, sub_004E7290); /* call 0x004E7290 */

loc_0040811F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0040813D; /* jne: not equal / not zero */

loc_00408123: ;
    ecx = ZX16(MEM16(esi + -8));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x62E98C);
    goto loc_00408135;

loc_0040812F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x62E96C);

loc_00408135: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0040813Au); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_0040813A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0040813D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00407FD0; /* jne: not equal / not zero */

loc_00408147: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00408170
 * Original: 0x00408170 - 0x00408293 (291 bytes, 115 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00408170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00408170: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = ecx;
    ecx = ZX8(MEM8(edi + 0x1C));
    edx = MEM32(esi + 0x10);
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004081AA; /* jne: not equal / not zero */

loc_00408190: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x62EAF4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0040819Bu); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_0040819B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp + -84;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_004081AA: ;
    eax = MEM32(0x69585C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004081D5; /* je: equal / zero */

loc_004081B5: ;
    _fa = (uint32_t)(MEM32(eax + ecx * 4 + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ecx * 4 + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004081D5; /* jne: not equal / not zero */

loc_004081BB: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x62EAD4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004081C6u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_004081C6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp + -84;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_004081D5: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00408221; /* jne: not equal / not zero */

loc_004081DA: ;
    SET_LO8(eax, MEM8(edi + 0x1E));
    SET_LO8(ecx, MEM8(ebp + 0xC));
    SET_LO8(edx, MEM8(edi + 0x1D));
    MEM8(ebp + -42) = LO8(eax);
    eax = ZX8(LO8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ebp + -44) = LO8(ecx);
    PUSH32(esp, eax);
    ecx = edi + 0x1F;
    MEM8(ebp + -43) = LO8(edx);
    PUSH32(esp, ecx);
    edx = ebp + -41;
    PUSH32(esp, edx);
    MEM8(ebp + -72) = LO8(ebx);
    MEM32(ebp + -68) = ebx;
    MEM32(ebp + -64) = ebx;
    MEM8(ebp + -71) = 0x38;
    MEM16(ebp + -70) = 0x48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00408211u); RECOMP_ABI_CALL(0x00619910u, sub_00619910); /* call 0x00619910 */

loc_00408211: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFEu);
    ecx = ebp + -72;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00408221u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040821Eu); } /* indirect call */
    }

loc_00408221: ;
    edx = ZX8(MEM8(edi + 0x1C));
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0040822Du); RECOMP_ABI_CALL(0x005E3F20u, sub_005E3F20); /* call 0x005E3F20 */

loc_0040822D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00408273; /* je: equal / zero */

loc_00408231: ;
    eax = ZX8(MEM8(edi + 0x1C));
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0040823Du); RECOMP_ABI_CALL(0x005E3F20u, sub_005E3F20); /* call 0x005E3F20 */

loc_0040823D: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00408243u); RECOMP_ABI_CALL(0x00619A34u, sub_00619A34); /* call 0x00619A34 */

loc_00408243: ;
    ebx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebx;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00408256u); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_00408256: ;
    ecx = ZX8(MEM8(edi + 0x1C));
    MEM32(ebp + 8) = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00408266u); RECOMP_ABI_CALL(0x005E3F20u, sub_005E3F20); /* call 0x005E3F20 */

loc_00408266: ;
    edx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00408270u); RECOMP_ABI_CALL(0x00405700u, sub_00405700); /* call 0x00405700 */

loc_00408270: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00408273: ;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(edi + 0x1C));
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1F;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x00408287u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00408281u); } /* indirect call */
    }

loc_00408287: ;
    esp = ebp + -84;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004082A0
 * Original: 0x004082A0 - 0x004082AC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004082A0(void)
{

loc_004082A0: ;
    PUSH32(esp, 0x62EB28);
    PUSH32(esp, 0x004082AAu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_004082AA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004082B0
 * Original: 0x004082B0 - 0x004082BC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004082B0(void)
{

loc_004082B0: ;
    PUSH32(esp, 0x62EB60);
    PUSH32(esp, 0x004082BAu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_004082BA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004082C0
 * Original: 0x004082C0 - 0x004082DE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004082C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004082C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004082C8u); RECOMP_ABI_CALL(0x004069A0u, sub_004069A0); /* call 0x004069A0 */

loc_004082C8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004082D8; /* je: equal / zero */

loc_004082CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004082D5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_004082D5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004082D8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004082E0
 * Original: 0x004082E0 - 0x004083DE (254 bytes, 81 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004082E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004082E0: ;
    eax = MEM32(0x69585C);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00408349; /* je: equal / zero */

loc_004082F4: ;
    ecx = ZX8(MEM8(esi + 0x1C));
    edx = MEM32(eax + ecx * 4 + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040830E; /* je: equal / zero */

loc_00408300: ;
    edx = ZX8(MEM8(esi + 0x1D));
    PUSH32(esp, ebp);
    ebp = MEM32(eax + edx * 4 + 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    POP32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_00408349; /* jne: not equal / not zero */

loc_0040830E: ;
    eax = ZX8(MEM8(esi + 0x1D));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x62EB98);
    PUSH32(esp, 0x0040831Eu); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_0040831E: ;
    eax = MEM32(edi + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004083D6; /* je: equal / zero */

loc_0040832C: ;
    eax = MEM32(esp + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004083D6; /* jne: not equal / not zero */

loc_00408338: ;
    PUSH32(esp, 0xD);
    ecx = edi;
    PUSH32(esp, 0x00408341u); RECOMP_ABI_CALL(0x005E5A30u, sub_005E5A30); /* call 0x005E5A30 */

loc_00408341: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00408349: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004083A6; /* jne: not equal / not zero */

loc_00408350: ;
    SET_LO8(ecx, MEM8(esp + 0x38));
    SET_LO8(edx, MEM8(esi + 0x1D));
    SET_LO8(eax, MEM8(esi + 0x1E));
    MEM8(esp + 0x24) = LO8(ecx);
    ecx = MEM32(esi + 0x20);
    MEM32(esp + 0x28) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFEu);
    ecx = esp + 0xC;
    MEM8(esp + 0x29) = LO8(edx);
    edx = MEM32(edi + 0x288);
    MEM8(esp + 0x2A) = LO8(eax);
    eax = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = edi;
    MEM8(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM8(esp + 0x11) = 0x32;
    MEM16(esp + 0x12) = 0x28;
    MEM32(esp + 0x34) = edx;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004083A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004083A3u); } /* indirect call */
    }

loc_004083A6: ;
    edx = ZX8(MEM8(esi + 0x1C));
    ecx = MEM32(0x696768);
    eax = MEM32(ecx + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = ZX8(MEM8(esi + 0x1D));
    ecx = MEM32(ecx + edx * 4);
    if (CMP_EQ(_fa, _fb)) goto loc_004083D6; /* je: equal / zero */

loc_004083BE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004083D6; /* je: equal / zero */

loc_004083C2: ;
    edx = ZX8(MEM8(esi + 0x1E));
    ecx = MEM32(ecx + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x78);
    PUSH32(esp, 0x004083D6u); RECOMP_ABI_CALL(0x004CEDA0u, sub_004CEDA0); /* call 0x004CEDA0 */

loc_004083D6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004083E0
 * Original: 0x004083E0 - 0x00408537 (343 bytes, 109 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004083E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004083E0: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x44);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x69585C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00408437; /* je: equal / zero */

loc_004083F5: ;
    eax = ZX8(MEM8(ebp + 0x1C));
    edx = MEM32(ecx + eax * 4 + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00408437; /* jne: not equal / not zero */

loc_00408401: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x62EBDC);
    PUSH32(esp, 0x0040840Cu); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_0040840C: ;
    eax = MEM32(edi + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040852F; /* je: equal / zero */

loc_0040841A: ;
    eax = MEM32(esp + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0040852F; /* jne: not equal / not zero */

loc_00408426: ;
    PUSH32(esp, 0xD);
    ecx = edi;
    PUSH32(esp, 0x0040842Fu); RECOMP_ABI_CALL(0x005E5A30u, sub_005E5A30); /* call 0x005E5A30 */

loc_0040842F: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00408437: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0040850C; /* jne: not equal / not zero */

loc_00408442: ;
    ecx = MEM32(esp + 0x4C);
    eax = ebp + 0x20;
    edx = MEM32(eax);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x38) = eax;
    esi = 1;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ebp + 0x30;
    eax = MEM32(edx);
    MEM8(esp + 0x28) = LO8(ecx);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    MEM32(esp + 0x44) = eax;
    eax = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = edi;
    MEM8(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM8(esp + 0x15) = 0x36;
    MEM16(esp + 0x16) = 0x3C;
    MEM32(esp + 0x4C) = edx;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004084B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004084B2u); } /* indirect call */
    }

loc_004084B5: ;
    edx = MEM32(0x697B88);
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004084F9; /* jne: not equal / not zero */

loc_004084C4: ;
    ecx = ZX8(MEM8(esp + 0x28));
    eax = MEM32(eax + 0x1104);
    PUSH32(esp, ecx);
    ecx = MEM32(0x69585C);
    MEM32(esp + 0x54) = eax;
    PUSH32(esp, 0x004084DFu); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_004084DF: ;
    _fa = (uint32_t)(MEM32(esp + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x50), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004084F9; /* jne: not equal / not zero */

loc_004084E5: ;
    edx = MEM32(edi);
    esi = ~esi;
    esi = esi & 0xFFFFFFFEu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004084F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004084F4u); } /* indirect call */
    }

loc_004084F7: ;
    goto loc_0040850B;

loc_004084F9: ;
    esi = ~esi;
    esi = esi & 0xFFFFFFFEu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0040850Bu); RECOMP_ABI_CALL(0x005E5750u, sub_005E5750); /* call 0x005E5750 */

loc_0040850B: ;
    POP32(esp, esi);

loc_0040850C: ;
    edx = ZX8(MEM8(ebp + 0x1C));
    eax = MEM32(0x696768);
    eax = MEM32(eax + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040852F; /* je: equal / zero */

loc_0040851C: ;
    edx = MEM32(eax + 0x10);
    ecx = ebp + 0x30;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x54);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0040852Fu); RECOMP_ABI_CALL(0x004CF770u, sub_004CF770); /* call 0x004CF770 */

loc_0040852F: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00408540
 * Original: 0x00408540 - 0x00408617 (215 bytes, 68 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00408540: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x69585C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00408597; /* je: equal / zero */

loc_00408555: ;
    eax = ZX8(MEM8(esi + 0x1C));
    edx = MEM32(ecx + eax * 4 + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00408597; /* jne: not equal / not zero */

loc_00408561: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x62EC18);
    PUSH32(esp, 0x0040856Cu); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_0040856C: ;
    eax = MEM32(edi + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040860F; /* je: equal / zero */

loc_0040857A: ;
    eax = MEM32(esp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0040860F; /* jne: not equal / not zero */

loc_00408586: ;
    PUSH32(esp, 0xD);
    ecx = edi;
    PUSH32(esp, 0x0040858Fu); RECOMP_ABI_CALL(0x005E5A30u, sub_005E5A30); /* call 0x005E5A30 */

loc_0040858F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00408597: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004085E3; /* jne: not equal / not zero */

loc_0040859E: ;
    SET_LO8(ecx, MEM8(esi + 0x1D));
    SET_LO8(eax, MEM8(esp + 0x34));
    edx = MEM32(esi + 0x20);
    MEM8(esp + 0x25) = LO8(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFEu);
    ecx = esp + 0xC;
    MEM8(esp + 0x28) = LO8(eax);
    eax = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = edi;
    MEM8(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM8(esp + 0x11) = 0x37;
    MEM16(esp + 0x12) = 0x24;
    MEM32(esp + 0x30) = edx;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004085E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004085E0u); } /* indirect call */
    }

loc_004085E3: ;
    edx = ZX8(MEM8(esi + 0x1C));
    eax = MEM32(0x696768);
    eax = MEM32(eax + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040860F; /* je: equal / zero */

loc_004085F3: ;
    ecx = MEM32(esi + 0x20);
    edx = ZX8(MEM8(esi + 0x1D));
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(0x697B88);
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0040860Fu); RECOMP_ABI_CALL(0x005282C0u, sub_005282C0); /* call 0x005282C0 */

loc_0040860F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00408620
 * Original: 0x00408620 - 0x0040863B (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00408620: ;
    eax = MEM32(0x6C5108);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00408637; /* je: equal / zero */

loc_00408632: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00408637u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00408634u); } /* indirect call */
    }

loc_00408637: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00408640
 * Original: 0x00408640 - 0x00408844 (516 bytes, 150 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00408640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00408640: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x10) = LO8(ebx);
    MEM8(esp + 0x11) = 4;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x94) = ebx;
    MEM32(esp + 0x98) = ebx;
    MEM16(esp + 0x9C) = LO16(ebx);
    ecx = 8;
    edi = esp + 0x34;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = 0x10;
    edi = esp + 0x54;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0xA0) = ebx;
    MEM32(esp + 0xA4) = ebx;
    MEM16(esp + 0x12) = 0xA0;
    MEM8(esp + 0xA8) = LO8(ebx);
    MEM8(esp + 0xA9) = LO8(ebx);
    MEM32(esp + 0xAC) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004086CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004086C8u); } /* indirect call */
    }

loc_004086CB: ;
    ecx = MEM32(esi + 0xB4);
    edx = MEM32(ebp + 0xC);
    MEM32(esp + 0x30) = ecx;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    MEM32(esp + 0x30) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004086E6u); RECOMP_ABI_CALL(0x005E6E30u, sub_005E6E30); /* call 0x005E6E30 */

loc_004086E6: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004086F3u); RECOMP_ABI_CALL(0x005E6DF0u, sub_005E6DF0); /* call 0x005E6DF0 */

loc_004086F3: ;
    eax = MEM32(esi + 0x64);
    ecx = eax;
    ecx = ecx & 0xFF0000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = eax;
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = eax;
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x94) = ecx;
    ecx = MEM32(0x674620);
    eax = ecx;
    ecx = ecx & 0xFF00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    SET_LO16(ecx, MEM16(0x674622));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, LO8(ecx));
    ecx = ZX8(HI8(ecx));
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = eax;
    edx = edx & 0xFF0000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = eax;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = eax;
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x98) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(0x67461E));
    SET_HI8(edx, LO8(eax));
    SET_LO16(eax, ZX8(HI8(eax)));
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    SET_LO16(ecx, ZX8(HI8(eax)));
    SET_HI8(ecx, LO8(eax));
    MEM16(esp + 0x9C) = LO16(ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00408797u); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_00408797: ;
    MEM32(esp + 0xA4) = edx;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0xA0) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x004087ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004087A9u); } /* indirect call */
    }

loc_004087AC: ;
    ecx = MEM32(0x6C5108);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esp + 0xAC) = eax;
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004087C4; /* je: equal / zero */

loc_004087BF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004087C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004087C1u); } /* indirect call */
    }

loc_004087C4: ;
    ecx = MEM32(0x662420);
    PUSH32(esp, 0x62E014);
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004087D7u); RECOMP_ABI_CALL(0x0055C720u, sub_0055C720); /* call 0x0055C720 */

loc_004087D7: ;
    ecx = MEM32(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004087DEu); RECOMP_ABI_CALL(0x0055E930u, sub_0055E930); /* call 0x0055E930 */

loc_004087DE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM8(esp + 0xA8) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_004087F0; /* je: equal / zero */

loc_004087E9: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004087F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004087EDu); } /* indirect call */
    }

loc_004087F0: ;
    ecx = MEM32(0x6C5108);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00408801; /* je: equal / zero */

loc_004087FC: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00408801u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004087FEu); } /* indirect call */
    }

loc_00408801: ;
    ecx = MEM32(0x662428);
    PUSH32(esp, 0x62E014);
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00408814u); RECOMP_ABI_CALL(0x0055C720u, sub_0055C720); /* call 0x0055C720 */

loc_00408814: ;
    ecx = MEM32(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0040881Bu); RECOMP_ABI_CALL(0x0055E930u, sub_0055E930); /* call 0x0055E930 */

loc_0040881B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM8(esp + 0xA9) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0040882D; /* je: equal / zero */

loc_00408826: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0040882Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0040882Au); } /* indirect call */
    }

loc_0040882D: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0040883Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00408838u); } /* indirect call */
    }

loc_0040883B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00408850
 * Original: 0x00408850 - 0x004088AC (92 bytes, 32 insns)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00408850: ;
    eax = MEM32(0x6C3890);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x37;
    edi = 0x692EE8;
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
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004088A7; /* jne: not equal / not zero */

loc_00408872: ;
    ecx = MEM32(0x6C5108);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00408883; /* je: equal / zero */

loc_0040887E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00408883u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00408880u); } /* indirect call */
    }

loc_00408883: ;
    eax = MEM32(0x6623D0);
    PUSH32(esp, 0x62E020);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00408895u); RECOMP_ABI_CALL(0x0055C720u, sub_0055C720); /* call 0x0055C720 */

loc_00408895: ;
    ecx = MEM32(eax);
    PUSH32(esp, 0x0040889Cu); RECOMP_ABI_CALL(0x00421650u, sub_00421650); /* call 0x00421650 */

loc_0040889C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004088A7; /* je: equal / zero */

loc_004088A0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004088A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004088A4u); } /* indirect call */
    }

loc_004088A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004088B0
 * Original: 0x004088B0 - 0x0040895E (174 bytes, 64 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004088B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004088B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x004088BEu); RECOMP_ABI_CALL(0x00535AA0u, sub_00535AA0); /* call 0x00535AA0 */

loc_004088BE: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0040894F; /* jne: not equal / not zero */

loc_004088C9: ;
    eax = MEM32(0x6C3890);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00408931; /* jne: not equal / not zero */

loc_004088D4: ;
    eax = MEM32(0x6957A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00408931; /* je: equal / zero */

loc_004088DD: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x54);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004088EF; /* je: equal / zero */

loc_004088E8: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004088EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004088ECu); } /* indirect call */
    }

loc_004088EF: ;
    ecx = edi;
    PUSH32(esp, 0x004088F6u); RECOMP_ABI_CALL(0x004247B0u, sub_004247B0); /* call 0x004247B0 */

loc_004088F6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00408901; /* je: equal / zero */

loc_004088FA: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00408901u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004088FEu); } /* indirect call */
    }

loc_00408901: ;
    SET_LO8(eax, MEM8(0x695704));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00408930; /* je: equal / zero */

loc_0040890A: ;
    edi = MEM32(esi + 0xC);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    PUSH32(esp, 0x00408926u); RECOMP_ABI_CALL(0x005E4230u, sub_005E4230); /* call 0x005E4230 */

loc_00408926: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0040892Du); RECOMP_ABI_CALL(0x00418400u, sub_00418400); /* call 0x00418400 */

loc_0040892D: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00408930: ;
    POP32(esp, edi);

loc_00408931: ;
    ecx = ebx + ebx * 2;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx + 0x6C301C) = 0;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x0040894Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00408949u); } /* indirect call */
    }

loc_0040894F: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1F0); PUSH32(esp, 0x00408959u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00408953u); } /* indirect call */
    }

loc_00408959: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00408960
 * Original: 0x00408960 - 0x004089CC (108 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00408960: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = ZX8(MEM8(ebx + 0x1C));
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004089BA; /* jne: not equal / not zero */

loc_00408971: ;
    eax = MEM32(0x6957A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004089AD; /* je: equal / zero */

loc_0040897A: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x54);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040898C; /* je: equal / zero */

loc_00408985: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0040898Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00408989u); } /* indirect call */
    }

loc_0040898C: ;
    MEM8(esi + 0x1C4) = 1;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0040899Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00408997u); } /* indirect call */
    }

loc_0040899A: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x004089A8u); RECOMP_ABI_CALL(0x005E5250u, sub_005E5250); /* call 0x005E5250 */

loc_004089A8: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_004089AD: ;
    PUSH32(esp, 0x62EC50);
    PUSH32(esp, 0x004089B7u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_004089B7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004089BA: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x004089C7u); RECOMP_ABI_CALL(0x005E5250u, sub_005E5250); /* call 0x005E5250 */

loc_004089C7: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004089D0
 * Original: 0x004089D0 - 0x00408C2C (604 bytes, 180 insns)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004089D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004089D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = ZX8(MEM8(esi + 0x1E));
    MEM32(0x6C2E88) = eax;
    ecx = ZX8(MEM8(esi + 0x1F));
    MEM32(0x6C2E8C) = ecx;
    edx = ZX8(MEM8(esi + 0x20));
    MEM32(0x6C2E90) = edx;
    eax = ZX8(MEM8(esi + 0x21));
    MEM32(0x6C2EA0) = eax;
    SET_LO8(eax, MEM8(esi + 0x22));
    MEM8(0x6C2EC0) = LO8(eax);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(0x6C2EC1) = LO8(ecx);
    edx = ZX8(MEM8(esi + 0x23));
    MEM32(0x6C2EC4) = edx;
    SET_LO8(eax, MEM8(esi + 0x2A));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(0x6C2FE9) = LO8(eax);
    SET_LO8(ecx, MEM8(esi + 0x2A));
    if (1) _cf = (int)(((LO8(ecx)) >> ((1) - 1)) & 1);
    SET_LO8(ecx, LO8(ecx) >> 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(0x6C2FEA) = LO8(ecx);
    SET_LO8(edx, MEM8(esi + 0x2A));
    if (2) _cf = (int)(((LO8(edx)) >> ((2) - 1)) & 1);
    SET_LO8(edx, LO8(edx) >> 2);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(0x6C2FEB) = LO8(edx);
    SET_LO8(eax, MEM8(esi + 0x2A));
    if (3) _cf = (int)(((LO8(eax)) >> ((3) - 1)) & 1);
    SET_LO8(eax, LO8(eax) >> 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(0x6C2FEC) = LO8(eax);
    SET_LO8(ecx, MEM8(esi + 0x2A));
    if (4) _cf = (int)(((LO8(ecx)) >> ((4) - 1)) & 1);
    SET_LO8(ecx, LO8(ecx) >> 4);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(0x6C2FED) = LO8(ecx);
    SET_LO8(edx, MEM8(esi + 0x2A));
    if (5) _cf = (int)(((LO8(edx)) >> ((5) - 1)) & 1);
    SET_LO8(edx, LO8(edx) >> 5);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(0x6C2EC1) = LO8(edx);
    SET_LO8(eax, MEM8(esi + 0x2A));
    if (6) _cf = (int)(((LO8(eax)) >> ((6) - 1)) & 1);
    SET_LO8(eax, LO8(eax) >> 6);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(0x6C2EB4) = LO8(eax);
    ecx = ZX8(MEM8(esi + 0x24));
    MEM32(0x6C2EA8) = ecx;
    edx = ZX8(MEM8(esi + 0x25));
    MEM32(0x6C2EA4) = edx;
    eax = ZX8(MEM8(esi + 0x26));
    MEM32(0x6C2EAC) = eax;
    ecx = ZX8(MEM8(esi + 0x27));
    MEM32(0x6C2EB0) = ecx;
    SET_LO8(edx, MEM8(esi + 0x28));
    PUSH32(esp, edi);
    eax = esi + 0x2E;
    PUSH32(esp, eax);
    ecx = 0x6C2E88;
    MEM8(0x6C2FE8) = LO8(edx);
    PUSH32(esp, 0x00408ABAu); RECOMP_ABI_CALL(0x0053AC40u, sub_0053AC40); /* call 0x0053AC40 */

loc_00408ABA: ;
    ecx = ZX8(MEM8(esi + 0x29));
    MEM32(0x6C2EB8) = ecx;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x6C2FF4;
    goto loc_00408AD0;

    /* nop */

loc_00408AD0: ;
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1C), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00408AF3; /* jne: not equal / not zero */

loc_00408AD6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00408AF3; /* jne: not equal / not zero */

loc_00408ADB: ;
    edx = ZX8(MEM8(esi + ebx + 0x6E));
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00408B16; /* je: equal / zero */

loc_00408AE4: ;
    PUSH32(esp, 0x62EC88);
    PUSH32(esp, 0x00408AEEu); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00408AEE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00408B16;

loc_00408AF3: ;
    eax = ZX8(MEM8(esi + ebx + 0x6E));
    MEM32(edi) = eax;
    MEM32(edi + 4) = eax;
    SET_LO8(eax, MEM8(ebx + esi + 0x76));
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(edi + 0x24) = LO8(eax);
    edx = ZX16(MEM16(esi + 0x2C));
    SET_LO8(ecx, LO8(ebx));
    if (1) _cf = (int)(((LO8(ecx)) >> (8 - (1))) & 1);
    SET_LO8(ecx, LO8(ecx) << 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    if (LO8(ecx)) _cf = (int)(((edx) >> ((LO8(ecx)) - 1)) & 1);
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi + 0x28) = edx;

loc_00408B16: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x30)) >> 32) & 1);
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C3174) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x6C3174 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00408AD0; /* jl: less (signed <) */

loc_00408B22: ;
    eax = MEM32(0x6C2EC4);
    edi = MEM32(0x6C38B4);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00408B63; /* jle: less or equal (signed <=) */

loc_00408B35: ;
    eax = 0x6C3010;
    goto loc_00408B40;

loc_00408B3C: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_00408B40: ;
    MEM32(eax + -8) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00408B4B; /* je: equal / zero */

loc_00408B48: ;
    _cf = 0; /* logical op clears CF */
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00408B4B: ;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + -4) = edx;
    edx = MEM32(0x6C2EC4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00408B3C; /* jl: less (signed <) */

loc_00408B61: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00408B63: ;
    SET_LO8(eax, MEM8(esi + 0x21));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00408B6E; /* je: equal / zero */

loc_00408B6A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00408B7F; /* jne: not equal / not zero */

loc_00408B6E: ;
    SET_LO8(eax, MEM8(esi + 0x2A));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x6C2E98) = eax;

loc_00408B7F: ;
    eax = 1;
    MEM32(0x6C2ECC) = edx;
    MEM32(0x6C2EC8) = eax;
    MEM8(0x6C2FE1) = LO8(eax);
    ecx = MEM32(edi + 8);
    MEM32(0x6C2FE4) = ecx;
    SET_LO8(ecx, MEM8(0x6C2EC1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00408BE8; /* jne: not equal / not zero */

loc_00408BA7: ;
    eax = MEM32(0x6C2E88);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x6C2EE0);
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00408BC4u); RECOMP_ABI_CALL(0x0053D190u, sub_0053D190); /* call 0x0053D190 */

loc_00408BC4: ;
    edx = MEM32(0x6C2E88);
    ecx = MEM32(esp + 0x20);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1278);
    if (5) _cf = (int)(((ecx) >> (32 - (5))) & 1);
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = MEM32(edx + ecx + 0x6634F0);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */

loc_00408BE8: ;
    ecx = MEM32(0x6C3890);
    MEM32(0x6C2C60) = eax;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00408C25; /* jne: not equal / not zero */

loc_00408BF9: ;
    eax = MEM32(0x6957A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00408C25; /* je: equal / zero */

loc_00408C02: ;
    edx = MEM32(eax + 4);
    esi = MEM32(edx + 0x54);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00408C13; /* je: equal / zero */

loc_00408C0C: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00408C13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00408C10u); } /* indirect call */
    }

loc_00408C13: ;
    ecx = esi;
    PUSH32(esp, 0x00408C1Au); RECOMP_ABI_CALL(0x004247B0u, sub_004247B0); /* call 0x004247B0 */

loc_00408C1A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00408C25; /* je: equal / zero */

loc_00408C1E: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00408C25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00408C22u); } /* indirect call */
    }

loc_00408C25: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00408C30
 * Original: 0x00408C30 - 0x00408C81 (81 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00408C30: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00408C7D; /* je: equal / zero */

loc_00408C38: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00408C7D; /* jne: not equal / not zero */

loc_00408C40: ;
    eax = MEM32(0x6957A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00408C70; /* je: equal / zero */

loc_00408C49: ;
    eax = MEM32(eax + 4);
    esi = MEM32(eax + 0x54);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00408C5A; /* je: equal / zero */

loc_00408C53: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00408C5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00408C57u); } /* indirect call */
    }

loc_00408C5A: ;
    ecx = esi;
    PUSH32(esp, 0x00408C61u); RECOMP_ABI_CALL(0x00423770u, sub_00423770); /* call 0x00423770 */

loc_00408C61: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00408C7D; /* je: equal / zero */

loc_00408C65: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00408C6Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00408C69u); } /* indirect call */
    }

loc_00408C6C: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00408C70: ;
    PUSH32(esp, 0x62ECD0);
    PUSH32(esp, 0x00408C7Au); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00408C7A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00408C7D: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00408C90
 * Original: 0x00408C90 - 0x00408CE1 (81 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00408C90: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00408CDD; /* je: equal / zero */

loc_00408C98: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00408CDD; /* jne: not equal / not zero */

loc_00408CA0: ;
    eax = MEM32(0x6957A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00408CD0; /* je: equal / zero */

loc_00408CA9: ;
    eax = MEM32(eax + 4);
    esi = MEM32(eax + 0x54);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00408CBA; /* je: equal / zero */

loc_00408CB3: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00408CBAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00408CB7u); } /* indirect call */
    }

loc_00408CBA: ;
    ecx = esi;
    PUSH32(esp, 0x00408CC1u); RECOMP_ABI_CALL(0x00423890u, sub_00423890); /* call 0x00423890 */

loc_00408CC1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00408CDD; /* je: equal / zero */

loc_00408CC5: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00408CCCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00408CC9u); } /* indirect call */
    }

loc_00408CCC: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00408CD0: ;
    PUSH32(esp, 0x62ED10);
    PUSH32(esp, 0x00408CDAu); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00408CDA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00408CDD: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00408CF0
 * Original: 0x00408CF0 - 0x00408EBC (460 bytes, 161 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408CF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00408CF0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00408E61; /* jne: not equal / not zero */

loc_00408D02: ;
    eax = MEM32(esp + 0x38);
    eax = eax + eax * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x6C2FF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6C2FF4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 8) = eax;
    eax = MEM32(eax + 0x28);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(0x6C38B4);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = edx;
    PUSH32(esp, 0x00408D30u); RECOMP_ABI_CALL(0x005E4230u, sub_005E4230); /* call 0x005E4230 */

loc_00408D30: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00408E17; /* je: equal / zero */

loc_00408D38: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00408E17; /* jle: less or equal (signed <=) */

loc_00408D41: ;
    ecx = MEM32(0x6C2EC4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00408D60; /* jle: less or equal (signed <=) */

loc_00408D4D: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00408D60; /* je: equal / zero */

loc_00408D53: ;
    _fa = (uint32_t)(MEM32(0x6C301C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C301C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00408D60; /* jne: not equal / not zero */

loc_00408D5B: ;
    esi = 1;

loc_00408D60: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00408D74; /* jle: less or equal (signed <=) */

loc_00408D65: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00408D74; /* je: equal / zero */

loc_00408D6B: ;
    _fa = (uint32_t)(MEM32(0x6C304C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C304C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00408D74; /* jne: not equal / not zero */

loc_00408D73: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00408D74: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00408D88; /* jle: less or equal (signed <=) */

loc_00408D79: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00408D88; /* je: equal / zero */

loc_00408D7F: ;
    _fa = (uint32_t)(MEM32(0x6C307C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C307C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00408D88; /* jne: not equal / not zero */

loc_00408D87: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00408D88: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00408D9C; /* jle: less or equal (signed <=) */

loc_00408D8D: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00408D9C; /* je: equal / zero */

loc_00408D93: ;
    _fa = (uint32_t)(MEM32(0x6C30AC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C30AC), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00408D9C; /* jne: not equal / not zero */

loc_00408D9B: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00408D9C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00408DB0; /* jle: less or equal (signed <=) */

loc_00408DA1: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00408DB0; /* je: equal / zero */

loc_00408DA7: ;
    _fa = (uint32_t)(MEM32(0x6C30DC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C30DC), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00408DB0; /* jne: not equal / not zero */

loc_00408DAF: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00408DB0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00408DC4; /* jle: less or equal (signed <=) */

loc_00408DB5: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00408DC4; /* je: equal / zero */

loc_00408DBB: ;
    _fa = (uint32_t)(MEM32(0x6C310C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C310C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00408DC4; /* jne: not equal / not zero */

loc_00408DC3: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00408DC4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00408DD8; /* jle: less or equal (signed <=) */

loc_00408DC9: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00408DD8; /* je: equal / zero */

loc_00408DCF: ;
    _fa = (uint32_t)(MEM32(0x6C313C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C313C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00408DD8; /* jne: not equal / not zero */

loc_00408DD7: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00408DD8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00408DED; /* jle: less or equal (signed <=) */

loc_00408DDD: ;
    SET_LO8(ecx, MEM8(ebp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00408DED; /* jns: not sign (positive) */

loc_00408DE4: ;
    _fa = (uint32_t)(MEM32(0x6C316C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C316C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00408DED; /* jne: not equal / not zero */

loc_00408DEC: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00408DED: ;
    ecx = MEM32(0x6C2EA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00408E00; /* jne: not equal / not zero */

loc_00408DF8: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    goto loc_00408E06;

loc_00408E00: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00408E17; /* jne: not equal / not zero */

loc_00408E05: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00408E06: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00408E17; /* jl: less (signed <) */

loc_00408E0A: ;
    eax = ebx + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebx = edx;

loc_00408E17: ;
    esi = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x10);
    ecx = 9;
    edi = esp + 0x14;
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
    ecx = MEM32(esp + 0x40);
    esi = 1;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = esp + 0x14;
    MEM32(edx + 0x28) = ebx;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM8(esp + 0x38) = LO8(ebx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00408E4Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00408E47u); } /* indirect call */
    }

loc_00408E4A: ;
    edx = MEM32(ebp);
    esi = ~esi;
    esi = esi & 0xFFFFFFFEu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00408E5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00408E57u); } /* indirect call */
    }

loc_00408E5D: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    goto loc_00408E88;

loc_00408E61: ;
    ecx = MEM32(esp + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00408EB4; /* jne: not equal / not zero */

loc_00408E69: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x6C2C4C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x6C2C4C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00408EB4; /* jne: not equal / not zero */

loc_00408E78: ;
    ecx = ZX8(MEM8(ecx + 0x1C));
    edx = eax + eax * 2;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx + 0x6C301C) = ecx;

loc_00408E88: ;
    eax = MEM32(0x6957A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00408EB4; /* je: equal / zero */

loc_00408E91: ;
    eax = MEM32(eax + 4);
    esi = MEM32(eax + 0x54);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00408EA2; /* je: equal / zero */

loc_00408E9B: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00408EA2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00408E9Fu); } /* indirect call */
    }

loc_00408EA2: ;
    ecx = esi;
    PUSH32(esp, 0x00408EA9u); RECOMP_ABI_CALL(0x004247B0u, sub_004247B0); /* call 0x004247B0 */

loc_00408EA9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00408EB4; /* je: equal / zero */

loc_00408EAD: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00408EB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00408EB1u); } /* indirect call */
    }

loc_00408EB4: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00408EC0
 * Original: 0x00408EC0 - 0x00408FAA (234 bytes, 85 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00408EC0: ;
    edx = MEM32(0x69585C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00408F11; /* je: equal / zero */

loc_00408ED2: ;
    eax = ZX8(MEM8(ecx + 0x1D));
    esi = MEM32(edx + eax * 4 + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00408F11; /* jne: not equal / not zero */

loc_00408EDE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x62ED50);
    PUSH32(esp, 0x00408EE9u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_00408EE9: ;
    eax = MEM32(ebx + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00408FA5; /* je: equal / zero */

loc_00408EF7: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00408FA5; /* jne: not equal / not zero */

loc_00408F03: ;
    PUSH32(esp, 0xD);
    ecx = ebx;
    PUSH32(esp, 0x00408F0Cu); RECOMP_ABI_CALL(0x005E5A30u, sub_005E5A30); /* call 0x005E5A30 */

loc_00408F0C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00408F11: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00408FA5; /* jne: not equal / not zero */

loc_00408F1C: ;
    edx = ZX8(MEM8(ecx + 0x1C));
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = edi + edi * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x6C2FF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6C2FF4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00408F54; /* je: equal / zero */

loc_00408F35: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00408F4C; /* je: equal / zero */

loc_00408F38: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00408F5D; /* jne: not equal / not zero */

loc_00408F3B: ;
    edx = ZX8(MEM8(ecx + 0x1E));
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    SET_LO8(ecx, MEM8(ecx + 0x1F));
    MEM8(eax + 0x24) = LO8(ecx);
    goto loc_00408F5D;

loc_00408F4C: ;
    SET_LO8(edx, MEM8(ecx + 0x1F));
    MEM8(eax + 0x24) = LO8(edx);
    goto loc_00408F5D;

loc_00408F54: ;
    ecx = ZX8(MEM8(ecx + 0x1E));
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;

loc_00408F5D: ;
    eax = MEM32(0x6957A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00408F89; /* je: equal / zero */

loc_00408F66: ;
    eax = MEM32(eax + 4);
    esi = MEM32(eax + 0x54);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00408F77; /* je: equal / zero */

loc_00408F70: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00408F77u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00408F74u); } /* indirect call */
    }

loc_00408F77: ;
    ecx = esi;
    PUSH32(esp, 0x00408F7Eu); RECOMP_ABI_CALL(0x004247B0u, sub_004247B0); /* call 0x004247B0 */

loc_00408F7E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00408F89; /* je: equal / zero */

loc_00408F82: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00408F89u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00408F86u); } /* indirect call */
    }

loc_00408F89: ;
    edx = MEM32(ebx);
    ecx = edi;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ebx;
    eax = ~eax;
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00408FA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00408F9Eu); } /* indirect call */
    }

loc_00408FA4: ;
    POP32(esp, edi);

loc_00408FA5: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00408FB0
 * Original: 0x00408FB0 - 0x00408FBB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408FB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00408FB0: ;
    MEM32(ecx) = 0x62ED8C;
    g_seh_ebp = ebp; sub_00614360(); return; /* tail jmp 0x00614360 */

}

/**
 * sub_00408FC0
 * Original: 0x00408FC0 - 0x00408FC4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408FC0(void)
{

loc_00408FC0: ;
    SET_LO8(eax, MEM8(ecx + 4));
    esp += 4; return; /* ret */

}

/**
 * sub_00408FD0
 * Original: 0x00408FD0 - 0x00408FFE (46 bytes, 14 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00408FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00408FD0: ;
    eax = MEM32(0x6622BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00408FF8; /* jle: less or equal (signed <=) */

loc_00408FDC: ;
    PUSH32(esp, 0x62EDC0);
    PUSH32(esp, 0x00408FE6u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00408FE6: ;
    PUSH32(esp, 0x00408FEBu); RECOMP_ABI_CALL(0x00577380u, sub_00577380); /* call 0x00577380 */

loc_00408FEB: ;
    PUSH32(esp, 0x62EDB8);
    PUSH32(esp, 0x00408FF5u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00408FF5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00408FF8: ;
    MEM8(esi + 4) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00409000
 * Original: 0x00409000 - 0x00409079 (121 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00409000: ;
    eax = MEM32(0x6C5258);
    edx = MEM32(eax + 8);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    edx = esp + 8;
    MEM32(esi + 8) = ecx;
    ecx = MEM32(0x6C5258);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00409028u); RECOMP_ABI_CALL(0x00575F00u, sub_00575F00); /* call 0x00575F00 */

loc_00409028: ;
    eax = MEM32(0x6C5258);
    edx = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x62EE0C);
    MEM32(esi + 0x10) = ecx;
    PUSH32(esp, 0x00409046u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_00409046: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00409074; /* je: equal / zero */

loc_0040904D: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x62EDE4);
    PUSH32(esp, 0x0040905Bu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0040905B: ;
    eax = MEM32(0x6C5258);
    ecx = MEM32(eax + 0x1C);
    edx = MEM32(esi + 8);
    MEM32(esi + 0xC) = ecx;
    eax = MEM32(0x6C5258);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x1C) = edx;

loc_00409074: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00409080
 * Original: 0x00409080 - 0x004091A7 (295 bytes, 98 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409080(void)
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

loc_00409080: ;
    eax = MEM32(0x6C5258);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    PUSH32(esp, edi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x62EFDC);
    ebp = ecx;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x004090A2u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_004090A2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00409126; /* jne: not equal / not zero */

loc_004090A9: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004090D0; /* je: equal / zero */

loc_004090B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x62EF60);
    PUSH32(esp, 0x004090BCu); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_004090BC: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x6C5258);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x004090CEu); RECOMP_ABI_CALL(0x00576880u, sub_00576880); /* call 0x00576880 */

loc_004090CE: ;
    goto loc_00409124;

loc_004090D0: ;
    PUSH32(esp, 0);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(0x6C5258);
    PUSH32(esp, 0x004090E2u); RECOMP_ABI_CALL(0x00575F00u, sub_00575F00); /* call 0x00575F00 */

loc_004090E2: ;
    ecx = MEM32(0x6C5258);
    eax = MEM32(ecx + 0xC);
    edi = MEM32(ecx + 0x10);
    esi = MEM32(esp + 0x24);
    ecx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00409126; /* jge: greater or equal (signed >=) */

loc_004090FD: ;
    edx = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62DE14)); /* fmul dword ptr [0x62de14] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x62EE80);
    PUSH32(esp, 0x00409121u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_00409121: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00409124: ;
    SET_LO8(ebx, 1);

loc_00409126: ;
    PUSH32(esp, 0x62EE0C);
    PUSH32(esp, 0x00409130u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_00409130: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00409152; /* je: equal / zero */

loc_00409137: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x6C5258);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00409146u); RECOMP_ABI_CALL(0x00576880u, sub_00576880); /* call 0x00576880 */

loc_00409146: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(0x6C5258);
    MEM32(edx + 0x1C) = ecx;

loc_00409152: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040919F; /* je: equal / zero */

loc_00409156: ;
    PUSH32(esp, 0x62EE6C);
    PUSH32(esp, 0x00409160u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_00409160: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00409192; /* jne: not equal / not zero */

loc_00409167: ;
    PUSH32(esp, 0x62EE58);
    PUSH32(esp, 0x00409171u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_00409171: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040919F; /* je: equal / zero */

loc_00409178: ;
    eax = MEM32(ebp);
    ecx = ebp;
    edi = 0x62EE4C;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00409185u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00409182u); } /* indirect call */
    }

loc_00409185: ;
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
    if ((_flags != 0)) goto loc_0040919F; /* je: equal / zero */

loc_00409192: ;
    PUSH32(esp, 0x62EE18);
    PUSH32(esp, 0x0040919Cu); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_0040919C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0040919F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
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
 * sub_004091B0
 * Original: 0x004091B0 - 0x004091DA (42 bytes, 11 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004091B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004091B0: ;
    MEM8(ecx + 4) = 0;
    eax = MEM32(0x6622BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004091D9; /* jle: less or equal (signed <=) */

loc_004091BD: ;
    PUSH32(esp, 0x62EFE8);
    PUSH32(esp, 0x004091C7u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_004091C7: ;
    PUSH32(esp, 0x004091CCu); RECOMP_ABI_CALL(0x00577380u, sub_00577380); /* call 0x00577380 */

loc_004091CC: ;
    PUSH32(esp, 0x62EDB8);
    PUSH32(esp, 0x004091D6u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_004091D6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004091D9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004091E0
 * Original: 0x004091E0 - 0x004091EC (12 bytes, 4 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004091E0(void)
{

loc_004091E0: ;
    PUSH32(esp, 0x62F00C);
    PUSH32(esp, 0x004091EAu); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_004091EA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004091F0
 * Original: 0x004091F0 - 0x0040942E (574 bytes, 157 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004091F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004091F0: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004091FDu); RECOMP_ABI_CALL(0x005ED4A0u, sub_005ED4A0); /* call 0x005ED4A0 */

loc_004091FD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 8;
    PUSH32(esp, 0x00409209u); RECOMP_ABI_CALL(0x005E1AF0u, sub_005E1AF0); /* call 0x005E1AF0 */

loc_00409209: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x62F0B8);
    MEM32(esp + 0x10) = ebx;
    PUSH32(esp, 0x00409218u); RECOMP_ABI_CALL(0x005E11E0u, sub_005E11E0); /* call 0x005E11E0 */

loc_00409218: ;
    esi = eax;
    SET_LO8(eax, MEM8(esp + 0x54));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00409409; /* je: equal / zero */

loc_00409229: ;
    eax = MEM32(0x6C2C5C);
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 0x62F0A8);
    ecx = 0x8582C8;
    MEM32(0x8582C4) = 0x62F0B8;
    PUSH32(esp, 0x0040924Bu); RECOMP_ABI_CALL(0x005E1500u, sub_005E1500); /* call 0x005E1500 */

loc_0040924B: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x674FB0);
    edx = MEM32(0x674FAC);
    eax = eax & 0xFFFFFFF9u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 8) = eax;
    SET_LO8(eax, MEM8(esp + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    MEM32(esp + 0x40) = 0xFFBFE6F5u;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0040930D; /* jne: not equal / not zero */

loc_00409289: ;
    PUSH32(esp, 0x62F098);
    ecx = 0x8582C8;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x004092A0u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_004092A0: ;
    edx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, 0x439E0000);
    PUSH32(esp, 0x40A00000);
    ecx = esi;
    PUSH32(esp, 0x004092C6u); RECOMP_ABI_CALL(0x005DF5B0u, sub_005DF5B0); /* call 0x005DF5B0 */

loc_004092C6: ;
    PUSH32(esp, 0x62F088);
    ecx = 0x8582C8;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x004092DDu); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_004092DD: ;
    edx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, 0x43A68000);
    PUSH32(esp, 0x40A00000);
    ecx = esi;
    PUSH32(esp, 0x00409303u); RECOMP_ABI_CALL(0x005DF5B0u, sub_005DF5B0); /* call 0x005DF5B0 */

loc_00409303: ;
    PUSH32(esp, 0x62F078);
    goto loc_00409394;

loc_0040930D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004093CC; /* jne: not equal / not zero */

loc_00409315: ;
    PUSH32(esp, 0x62F068);
    ecx = 0x8582C8;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x0040932Cu); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0040932C: ;
    edx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, 0x439E0000);
    PUSH32(esp, 0x40A00000);
    ecx = esi;
    PUSH32(esp, 0x00409352u); RECOMP_ABI_CALL(0x005DF5B0u, sub_005DF5B0); /* call 0x005DF5B0 */

loc_00409352: ;
    PUSH32(esp, 0x62F058);
    ecx = 0x8582C8;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x00409369u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_00409369: ;
    edx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, 0x43A68000);
    PUSH32(esp, 0x40A00000);
    ecx = esi;
    PUSH32(esp, 0x0040938Fu); RECOMP_ABI_CALL(0x005DF5B0u, sub_005DF5B0); /* call 0x005DF5B0 */

loc_0040938F: ;
    PUSH32(esp, 0x62F048);

loc_00409394: ;
    ecx = 0x8582C8;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x10) = ebx;
    PUSH32(esp, 0x004093A6u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_004093A6: ;
    edx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, 0x43AF0000);
    ecx = esi;
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x004093CCu); RECOMP_ABI_CALL(0x005DF5B0u, sub_005DF5B0); /* call 0x005DF5B0 */

loc_004093CC: ;
    PUSH32(esp, 0x62F030);
    ecx = 0x8582C8;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x004093E3u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_004093E3: ;
    edx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, 0x43C30000);
    PUSH32(esp, 0x40A00000);
    ecx = esi;
    PUSH32(esp, 0x00409409u); RECOMP_ABI_CALL(0x005DF5B0u, sub_005DF5B0); /* call 0x005DF5B0 */

loc_00409409: ;
    PUSH32(esp, 0x0040940Eu); RECOMP_ABI_CALL(0x005ED4C0u, sub_005ED4C0); /* call 0x005ED4C0 */

loc_0040940E: ;
    PUSH32(esp, 0x00409413u); RECOMP_ABI_CALL(0x005C3530u, sub_005C3530); /* call 0x005C3530 */

loc_00409413: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00409419u); RECOMP_ABI_CALL(0x005E1010u, sub_005E1010); /* call 0x005E1010 */

loc_00409419: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x8582C8;
    PUSH32(esp, 0x00409426u); RECOMP_ABI_CALL(0x005E1A80u, sub_005E1A80); /* call 0x005E1A80 */

loc_00409426: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00409430
 * Original: 0x00409430 - 0x0040949B (107 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00409430: ;
    ecx = MEM32(0x860220);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x62F12C);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0040944Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00409447u); } /* indirect call */
    }

loc_0040944A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0040945E; /* jne: not equal / not zero */

loc_0040944E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x62F0FC);
    PUSH32(esp, 0x00409459u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00409459: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00409465;

loc_0040945E: ;
    ecx = eax;
    PUSH32(esp, 0x00409465u); RECOMP_ABI_CALL(0x00617FB0u, sub_00617FB0); /* call 0x00617FB0 */

loc_00409465: ;
    ecx = MEM32(0x860220);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x62F0F8);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0040947Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00409477u); } /* indirect call */
    }

loc_0040947A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00409490; /* jne: not equal / not zero */

loc_0040947E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x62F0C8);
    PUSH32(esp, 0x00409489u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00409489: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00409490: ;
    ecx = eax;
    PUSH32(esp, 0x00409497u); RECOMP_ABI_CALL(0x00617FB0u, sub_00617FB0); /* call 0x00617FB0 */

loc_00409497: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004094A0
 * Original: 0x004094A0 - 0x004094AD (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004094A0(void)
{

loc_004094A0: ;
    eax = ecx;
    MEM32(eax) = 0x62ED8C;
    MEM8(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_004094B0
 * Original: 0x004094B0 - 0x004094CE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004094B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004094B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004094B8u); RECOMP_ABI_CALL(0x00408FB0u, sub_00408FB0); /* call 0x00408FB0 */

loc_004094B8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004094C8; /* je: equal / zero */

loc_004094BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004094C5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_004094C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004094C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004094D0
 * Original: 0x004094D0 - 0x00409A63 (1427 bytes, 418 insns)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004094D0(void)
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

loc_004094D0: ;
    _fb = (uint32_t)(0x158) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x158;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x62F0B8);
    ebp = ecx;
    PUSH32(esp, 0x004094E8u); RECOMP_ABI_CALL(0x005E11E0u, sub_005E11E0); /* call 0x005E11E0 */

loc_004094E8: ;
    esi = eax;
    SET_LO8(eax, MEM8(esp + 0x170));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(esp + 0xF) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00409523; /* je: equal / zero */

loc_004094FC: ;
    eax = MEM32(0x6C2C5C);
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 0x62F0A8);
    ecx = 0x8582C8;
    MEM32(0x8582C4) = 0x62F0B8;
    PUSH32(esp, 0x0040951Eu); RECOMP_ABI_CALL(0x005E1500u, sub_005E1500); /* call 0x005E1500 */

loc_0040951E: ;
    MEM8(esp + 0xF) = 1;

loc_00409523: ;
    _fa = (uint32_t)(MEM8(esp + 0x16C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x16C), LO8(ebx) (8-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ebx;
    edi = 0x6C2E88;
    if (CMP_NE(_fa, _fb)) goto loc_0040953B; /* jne: not equal / not zero */

loc_00409536: ;
    edi = 0x6C32C8;

loc_0040953B: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x00409542u); RECOMP_ABI_CALL(0x004025B0u, sub_004025B0); /* call 0x004025B0 */

loc_00409542: ;
    ecx = eax;
    PUSH32(esp, 0x00409549u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00409549: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00409569; /* jne: not equal / not zero */

loc_0040954D: ;
    PUSH32(esp, 0x62F25C);
    ecx = esp + 0x6C;
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00409561u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00409561: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004096E2;

loc_00409569: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x00409570u); RECOMP_ABI_CALL(0x004025B0u, sub_004025B0); /* call 0x004025B0 */

loc_00409570: ;
    ecx = eax;
    PUSH32(esp, 0x00409577u); RECOMP_ABI_CALL(0x004025C0u, sub_004025C0); /* call 0x004025C0 */

loc_00409577: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00409597; /* jne: not equal / not zero */

loc_0040957B: ;
    PUSH32(esp, 0x62F240);
    edx = esp + 0x6C;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0040958Fu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0040958F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004096E2;

loc_00409597: ;
    _fa = (uint32_t)(MEM8(edi + 0x159)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x159), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040962A; /* je: equal / zero */

loc_004095A3: ;
    eax = MEM32(0x8602EC);
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
    ecx = 7;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004095CE; /* jge: greater or equal (signed >=) */

loc_004095CC: ;
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_004095CE: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edx);
    if (CMP_NE(_fa, _fb)) goto loc_004095E6; /* jne: not equal / not zero */

loc_004095D5: ;
    PUSH32(esp, 0x62F228);
    PUSH32(esp, 0x100);
    edx = esp + 0x74;
    PUSH32(esp, edx);
    goto loc_0040960B;

loc_004095E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004095FC; /* jne: not equal / not zero */

loc_004095EB: ;
    PUSH32(esp, 0x62F210);
    PUSH32(esp, 0x100);
    eax = esp + 0x74;
    PUSH32(esp, eax);
    goto loc_0040960B;

loc_004095FC: ;
    PUSH32(esp, 0x62F1F8);
    PUSH32(esp, 0x100);
    ecx = esp + 0x74;
    PUSH32(esp, ecx);

loc_0040960B: ;
    PUSH32(esp, 0x00409610u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00409610: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x68;
    PUSH32(esp, edx);
    PUSH32(esp, 0x62F1E0);
    PUSH32(esp, 0x00409622u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00409622: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004096E2;

loc_0040962A: ;
    ebp = edi + 0xD8;
    eax = ebp;
    edx = eax + 1;

loc_00409635: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00409635; /* jne: not equal / not zero */

loc_0040963C: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x1C) = eax;
    if ((_fa == 0)) goto loc_0040967B; /* je: equal / zero */

loc_00409644: ;
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x62F1C8);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00409651u); RECOMP_ABI_CALL(0x006197E0u, sub_006197E0); /* call 0x006197E0 */

loc_00409651: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00409673; /* je: equal / zero */

loc_00409658: ;
    _fa = (uint32_t)(MEM32(edi + 0x338)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x338), 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00409673; /* jg: greater (signed >) */

loc_00409661: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x62DEF8);
    PUSH32(esp, 0x100);
    eax = esp + 0x74;
    PUSH32(esp, eax);
    goto loc_004096DA;

loc_00409673: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x62DEF8);
    goto loc_004096D0;

loc_0040967B: ;
    edx = edi + 0x58;
    eax = edx;
    ebp = eax + 1;

loc_00409683: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00409683; /* jne: not equal / not zero */

loc_0040968A: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x1C) = eax;
    if ((_fa == 0)) goto loc_004096A4; /* je: equal / zero */

loc_00409692: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x62F1C0);
    PUSH32(esp, 0x100);
    edx = esp + 0x74;
    PUSH32(esp, edx);
    goto loc_004096DA;

loc_004096A4: ;
    eax = MEM32(edi);
    ecx = MEM32(0x6631A8);
    eax = MEM32(eax * 4 + 0x663174);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004096BAu); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_004096BA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004096E2; /* je: equal / zero */

loc_004096C1: ;
    edx = MEM32(edi);
    eax = MEM32(edx * 4 + 0x663174);
    PUSH32(esp, eax);
    PUSH32(esp, 0x62F1C0);

loc_004096D0: ;
    ecx = esp + 0x70;
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);

loc_004096DA: ;
    PUSH32(esp, 0x004096DFu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004096DF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004096E2: ;
    edx = esp + 0x68;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004096EDu); RECOMP_ABI_CALL(0x005F5B20u, sub_005F5B20); /* call 0x005F5B20 */

loc_004096ED: ;
    ebp = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00409708; /* jne: not equal / not zero */

loc_004096F6: ;
    eax = esp + 0x68;
    PUSH32(esp, eax);
    PUSH32(esp, 0x62F184);
    PUSH32(esp, 0x00409705u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00409705: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00409708: ;
    MEM32(esp + 0x1C) = 2;

loc_00409710: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00409717u); RECOMP_ABI_CALL(0x005ED4A0u, sub_005ED4A0); /* call 0x005ED4A0 */

loc_00409717: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0040983A; /* je: equal / zero */

loc_00409722: ;
    ecx = ZX16(MEM16(ebp + 2));
    edx = ZX16(MEM16(ebp));
    MEM32(esp + 0x14) = ecx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEM32(esp + 0x14) = edx;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(0x674FB0)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x20)); /* fdiv dword ptr [esp + 0x20] */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(0x674FAC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x14)); /* fdiv dword ptr [esp + 0x14] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0040976B; /* jne: not equal / not zero */

loc_00409765: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x24)); /* fld float */

loc_0040976B: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, 0x00409776u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00409776: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    edi = eax;
    PUSH32(esp, 0x00409783u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00409783: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62F180)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62f180] */
    ecx = eax;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004097A1; /* je: equal / zero */

loc_00409792: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62F17C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62f17c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004097AC; /* jp: parity */

loc_0040979F: ;
    goto loc_004097A3;

loc_004097A1: ;
    fp_pop(); /* fstp st(0) */

loc_004097A3: ;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x004097ACu); RECOMP_ABI_CALL(0x005F44D0u, sub_005F44D0); /* call 0x005F44D0 */

loc_004097AC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004097BFu); RECOMP_ABI_CALL(0x004016F0u, sub_004016F0); /* call 0x004016F0 */

loc_004097BF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 7);
    PUSH32(esp, 0x004097CAu); RECOMP_ABI_CALL(0x005EF420u, sub_005EF420); /* call 0x005EF420 */

loc_004097CA: ;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004097FE; /* jne: not equal / not zero */

loc_004097D5: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x004097DBu); RECOMP_ABI_CALL(0x005F5000u, sub_005F5000); /* call 0x005F5000 */

loc_004097DB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_004097FA; /* jne: not equal / not zero */

loc_004097E6: ;
    eax = esp + 0x68;
    PUSH32(esp, eax);
    PUSH32(esp, 0x62F130);
    PUSH32(esp, 0x004097F5u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_004097F5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00409825;

loc_004097FA: ;
    eax = MEM32(esp + 0x18);

loc_004097FE: ;
    ecx = ZX16(MEM16(eax + 6));
    edx = MEM32(0x674FB0);
    PUSH32(esp, eax);
    eax = ZX16(MEM16(eax + 4));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x674FAC);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00409822u); RECOMP_ABI_CALL(0x005EFB70u, sub_005EFB70); /* call 0x005EFB70 */

loc_00409822: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00409825: ;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0040983A; /* jne: not equal / not zero */

loc_0040982A: ;
    ecx = ebp;
    PUSH32(esp, 0x00409831u); RECOMP_ABI_CALL(0x005F3E40u, sub_005F3E40); /* call 0x005F3E40 */

loc_00409831: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00409837u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00409837: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0040983A: ;
    ecx = esp + 0x28;
    PUSH32(esp, 0x00409843u); RECOMP_ABI_CALL(0x005E1AF0u, sub_005E1AF0); /* call 0x005E1AF0 */

loc_00409843: ;
    SET_LO8(eax, MEM8(esp + 0x16C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM32(esp + 0x28) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00409A0A; /* je: equal / zero */

loc_00409856: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    edx = MEM32(0x674FB0);
    ecx = MEM32(0x674FAC);
    MEM32(esp + 0x60) = 0xFFBFE6F5u;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x28) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_0040990E; /* jne: not equal / not zero */

loc_0040988A: ;
    PUSH32(esp, 0x62F098);
    ecx = 0x8582C8;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x34) = ebx;
    PUSH32(esp, 0x004098A1u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_004098A1: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x439E0000);
    PUSH32(esp, 0x40A00000);
    ecx = esi;
    PUSH32(esp, 0x004098C7u); RECOMP_ABI_CALL(0x005DF5B0u, sub_005DF5B0); /* call 0x005DF5B0 */

loc_004098C7: ;
    PUSH32(esp, 0x62F088);
    ecx = 0x8582C8;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x34) = ebx;
    PUSH32(esp, 0x004098DEu); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_004098DE: ;
    edx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, 0x43A68000);
    PUSH32(esp, 0x40A00000);
    ecx = esi;
    PUSH32(esp, 0x00409904u); RECOMP_ABI_CALL(0x005DF5B0u, sub_005DF5B0); /* call 0x005DF5B0 */

loc_00409904: ;
    PUSH32(esp, 0x62F078);
    goto loc_00409995;

loc_0040990E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004099CD; /* jne: not equal / not zero */

loc_00409916: ;
    PUSH32(esp, 0x62F068);
    ecx = 0x8582C8;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x34) = ebx;
    PUSH32(esp, 0x0040992Du); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0040992D: ;
    edx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, 0x439E0000);
    PUSH32(esp, 0x40A00000);
    ecx = esi;
    PUSH32(esp, 0x00409953u); RECOMP_ABI_CALL(0x005DF5B0u, sub_005DF5B0); /* call 0x005DF5B0 */

loc_00409953: ;
    PUSH32(esp, 0x62F058);
    ecx = 0x8582C8;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x34) = ebx;
    PUSH32(esp, 0x0040996Au); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0040996A: ;
    edx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, 0x43A68000);
    PUSH32(esp, 0x40A00000);
    ecx = esi;
    PUSH32(esp, 0x00409990u); RECOMP_ABI_CALL(0x005DF5B0u, sub_005DF5B0); /* call 0x005DF5B0 */

loc_00409990: ;
    PUSH32(esp, 0x62F048);

loc_00409995: ;
    ecx = 0x8582C8;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x30) = ebx;
    PUSH32(esp, 0x004099A7u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_004099A7: ;
    edx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, 0x43AF0000);
    ecx = esi;
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x004099CDu); RECOMP_ABI_CALL(0x005DF5B0u, sub_005DF5B0); /* call 0x005DF5B0 */

loc_004099CD: ;
    PUSH32(esp, 0x62F030);
    ecx = 0x8582C8;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x34) = ebx;
    PUSH32(esp, 0x004099E4u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_004099E4: ;
    edx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, 0x43C30000);
    PUSH32(esp, 0x40A00000);
    ecx = esi;
    PUSH32(esp, 0x00409A0Au); RECOMP_ABI_CALL(0x005DF5B0u, sub_005DF5B0); /* call 0x005DF5B0 */

loc_00409A0A: ;
    PUSH32(esp, 0x00409A0Fu); RECOMP_ABI_CALL(0x005ED4C0u, sub_005ED4C0); /* call 0x005ED4C0 */

loc_00409A0F: ;
    PUSH32(esp, 0x00409A14u); RECOMP_ABI_CALL(0x005C3530u, sub_005C3530); /* call 0x005C3530 */

loc_00409A14: ;
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00409710; /* jne: not equal / not zero */

loc_00409A1E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00409A24u); RECOMP_ABI_CALL(0x005E1010u, sub_005E1010); /* call 0x005E1010 */

loc_00409A24: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00409A3A; /* je: equal / zero */

loc_00409A30: ;
    ecx = 0x8582C8;
    PUSH32(esp, 0x00409A3Au); RECOMP_ABI_CALL(0x005E1A80u, sub_005E1A80); /* call 0x005E1A80 */

loc_00409A3A: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00409A57; /* je: equal / zero */

loc_00409A42: ;
    MEM32(esi + 8) = MEM32(esi + 8) - 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00409A57; /* jne: not equal / not zero */

loc_00409A47: ;
    ecx = esi;
    PUSH32(esp, 0x00409A4Eu); RECOMP_ABI_CALL(0x005F4E50u, sub_005F4E50); /* call 0x005F4E50 */

loc_00409A4E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00409A54u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00409A54: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00409A57: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x158) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x158;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00409A70
 * Original: 0x00409A70 - 0x00409A8A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409A70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00409A70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00409A78u); RECOMP_ABI_CALL(0x004094A0u, sub_004094A0); /* call 0x004094A0 */

loc_00409A78: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi) = 0x62F278;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00409A90
 * Original: 0x00409A90 - 0x00409A96 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409A90(void)
{

loc_00409A90: ;
    eax = 0x62EE4C;
    esp += 4; return; /* ret */

}

/**
 * sub_00409AA0
 * Original: 0x00409AA0 - 0x00409ABE (30 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409AA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00409AA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x62F278;
    if (CMP_EQ(_fa, _fb)) goto loc_00409AB6; /* je: equal / zero */

loc_00409AB0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00409AB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00409AB4u); } /* indirect call */
    }

loc_00409AB6: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00408FB0(); return; /* tail jmp 0x00408FB0 */

}

/**
 * sub_00409AC0
 * Original: 0x00409AC0 - 0x00409BC6 (262 bytes, 78 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00409AC0: ;
    SET_LO8(eax, MEM8(0x6622B0));
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00409ADC; /* jne: not equal / not zero */

loc_00409AD3: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00409ADCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00409AD9u); } /* indirect call */
    }

loc_00409ADC: ;
    SET_LO8(eax, MEM8(0x6C342E));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00409B3A; /* je: equal / zero */

loc_00409AE7: ;
    PUSH32(esp, 0x62F2E0);
    PUSH32(esp, 0x00409AF1u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_00409AF1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00409B3A; /* jne: not equal / not zero */

loc_00409AF8: ;
    PUSH32(esp, 0x62F26C);
    PUSH32(esp, 0x62F2D4);
    ecx = esp + 0x10;
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00409B11u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00409B11: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 8;
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00409B20u); RECOMP_ABI_CALL(0x0053CA00u, sub_0053CA00); /* call 0x0053CA00 */

loc_00409B20: ;
    ecx = eax;
    PUSH32(esp, 0x00409B27u); RECOMP_ABI_CALL(0x00614F90u, sub_00614F90); /* call 0x00614F90 */

loc_00409B27: ;
    PUSH32(esp, eax);
    MEM32(esi + 0x18) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00409B35u); RECOMP_ABI_CALL(0x00615070u, sub_00615070); /* call 0x00615070 */

loc_00409B35: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;

loc_00409B3A: ;
    ecx = MEM32(0x6C2C5C);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x62DC80);
    ecx = 0x8582C8;
    MEM32(0x8582C4) = 0x62F2C0;
    PUSH32(esp, 0x00409B5Eu); RECOMP_ABI_CALL(0x005E1500u, sub_005E1500); /* call 0x005E1500 */

loc_00409B5E: ;
    PUSH32(esp, 0x00409B63u); RECOMP_ABI_CALL(0x00418E40u, sub_00418E40); /* call 0x00418E40 */

loc_00409B63: ;
    ecx = MEM32(0x6CE2E4);
    PUSH32(esp, 0x00409B6Eu); RECOMP_ABI_CALL(0x0052B3E0u, sub_0052B3E0); /* call 0x0052B3E0 */

loc_00409B6E: ;
    PUSH32(esp, 0xB5);
    PUSH32(esp, 0x62F2B0);
    PUSH32(esp, 0x58);
    PUSH32(esp, 0x00409B7Fu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00409B7F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00409B8F; /* je: equal / zero */

loc_00409B86: ;
    ecx = eax;
    PUSH32(esp, 0x00409B8Du); RECOMP_ABI_CALL(0x0041FB40u, sub_0041FB40); /* call 0x0041FB40 */

loc_00409B8D: ;
    goto loc_00409B91;

loc_00409B8F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00409B91: ;
    ecx = eax;
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x00409B9Bu); RECOMP_ABI_CALL(0x0041FBB0u, sub_0041FBB0); /* call 0x0041FBB0 */

loc_00409B9B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00409BA6; /* je: equal / zero */

loc_00409B9F: ;
    ecx = edi;
    PUSH32(esp, 0x00409BA6u); RECOMP_ABI_CALL(0x00614D60u, sub_00614D60); /* call 0x00614D60 */

loc_00409BA6: ;
    PUSH32(esp, 0x00409BABu); RECOMP_ABI_CALL(0x005EEC70u, sub_005EEC70); /* call 0x005EEC70 */

loc_00409BAB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x62F2A4);
    { uint32_t _icall_target = MEM32(0x679784); PUSH32(esp, 0x00409BB6u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00409BB0u); } /* indirect call */
    }

loc_00409BB6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM8(esi + 4) = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00409BD0
 * Original: 0x00409BD0 - 0x00409C30 (96 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409BD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00409BD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00409BD8u); RECOMP_ABI_CALL(0x00418FB0u, sub_00418FB0); /* call 0x00418FB0 */

loc_00409BD8: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00409BF8; /* je: equal / zero */

loc_00409BDF: ;
    PUSH32(esp, 0x00409BE4u); RECOMP_ABI_CALL(0x0041CF20u, sub_0041CF20); /* call 0x0041CF20 */

loc_00409BE4: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00409BF1; /* je: equal / zero */

loc_00409BEB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00409BF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00409BEFu); } /* indirect call */
    }

loc_00409BF1: ;
    MEM32(esi + 0x14) = 0;

loc_00409BF8: ;
    ecx = 0x8582C8;
    PUSH32(esp, 0x00409C02u); RECOMP_ABI_CALL(0x005E1A80u, sub_005E1A80); /* call 0x005E1A80 */

loc_00409C02: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00409C19; /* je: equal / zero */

loc_00409C09: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00409C0Fu); RECOMP_ABI_CALL(0x00613EF0u, sub_00613EF0); /* call 0x00613EF0 */

loc_00409C0F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = 0;

loc_00409C19: ;
    PUSH32(esp, 0x00409C1Eu); RECOMP_ABI_CALL(0x005EECA0u, sub_005EECA0); /* call 0x005EECA0 */

loc_00409C1E: ;
    PUSH32(esp, 0x00409C23u); RECOMP_ABI_CALL(0x005F1E40u, sub_005F1E40); /* call 0x005F1E40 */

loc_00409C23: ;
    PUSH32(esp, 0x00409C28u); RECOMP_ABI_CALL(0x005F1A40u, sub_005F1A40); /* call 0x005F1A40 */

loc_00409C28: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004091B0(); return; /* tail jmp 0x004091B0 */

}

/**
 * sub_00409C30
 * Original: 0x00409C30 - 0x00409C4E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00409C30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00409C38u); RECOMP_ABI_CALL(0x00409AA0u, sub_00409AA0); /* call 0x00409AA0 */

loc_00409C38: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00409C48; /* je: equal / zero */

loc_00409C3F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00409C45u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00409C45: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00409C48: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00409C50
 * Original: 0x00409C50 - 0x00409C62 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409C50(void)
{

loc_00409C50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00409C58u); RECOMP_ABI_CALL(0x004094A0u, sub_004094A0); /* call 0x004094A0 */

loc_00409C58: ;
    MEM32(esi) = 0x62F2F0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00409C70
 * Original: 0x00409C70 - 0x00409C76 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409C70(void)
{

loc_00409C70: ;
    eax = 0x62F31C;
    esp += 4; return; /* ret */

}

/**
 * sub_00409C80
 * Original: 0x00409C80 - 0x00409C8B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409C80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00409C80: ;
    MEM32(ecx) = 0x62F2F0;
    g_seh_ebp = ebp; sub_00408FB0(); return; /* tail jmp 0x00408FB0 */

}

/**
 * sub_00409C90
 * Original: 0x00409C90 - 0x00409CB7 (39 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409C90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00409C90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00409C98u); RECOMP_ABI_CALL(0x00419D80u, sub_00419D80); /* call 0x00419D80 */

loc_00409C98: ;
    PUSH32(esp, 0x00409C9Du); RECOMP_ABI_CALL(0x004198F0u, sub_004198F0); /* call 0x004198F0 */

loc_00409C9D: ;
    ecx = eax;
    PUSH32(esp, 0x00409CA4u); RECOMP_ABI_CALL(0x00419900u, sub_00419900); /* call 0x00419900 */

loc_00409CA4: ;
    PUSH32(esp, 0x62F328);
    PUSH32(esp, 0x00409CAEu); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_00409CAE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 4) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00409CC0
 * Original: 0x00409CC0 - 0x00409CD0 (16 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409CC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00409CC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00409CC8u); RECOMP_ABI_CALL(0x004198D0u, sub_004198D0); /* call 0x004198D0 */

loc_00409CC8: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004091B0(); return; /* tail jmp 0x004091B0 */

}

/**
 * sub_00409CD0
 * Original: 0x00409CD0 - 0x00409CEE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00409CD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00409CD8u); RECOMP_ABI_CALL(0x00409C80u, sub_00409C80); /* call 0x00409C80 */

loc_00409CD8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00409CE8; /* je: equal / zero */

loc_00409CDF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00409CE5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00409CE5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00409CE8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00409CF0
 * Original: 0x00409CF0 - 0x00409D02 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409CF0(void)
{

loc_00409CF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00409CF8u); RECOMP_ABI_CALL(0x004094A0u, sub_004094A0); /* call 0x004094A0 */

loc_00409CF8: ;
    MEM32(esi) = 0x62F334;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00409D10
 * Original: 0x00409D10 - 0x00409D16 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409D10(void)
{

loc_00409D10: ;
    eax = 0x62F360;
    esp += 4; return; /* ret */

}

/**
 * sub_00409D20
 * Original: 0x00409D20 - 0x00409D2B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409D20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00409D20: ;
    MEM32(ecx) = 0x62F334;
    g_seh_ebp = ebp; sub_00408FB0(); return; /* tail jmp 0x00408FB0 */

}

/**
 * sub_00409D30
 * Original: 0x00409D30 - 0x00409D93 (99 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409D30(void)
{

loc_00409D30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00409D3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00409D39u); } /* indirect call */
    }

loc_00409D3C: ;
    ecx = MEM32(0x6C2C5C);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x62DC80);
    ecx = 0x8582C8;
    MEM32(0x8582C4) = 0x62D544;
    PUSH32(esp, 0x00409D60u); RECOMP_ABI_CALL(0x005E1500u, sub_005E1500); /* call 0x005E1500 */

loc_00409D60: ;
    ecx = MEM32(0x6CE2E4);
    PUSH32(esp, 0x00409D6Bu); RECOMP_ABI_CALL(0x0052B450u, sub_0052B450); /* call 0x0052B450 */

loc_00409D6B: ;
    ecx = MEM32(0x6CE2F4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x62F36C);
    PUSH32(esp, 0x00409D81u); RECOMP_ABI_CALL(0x005D5060u, sub_005D5060); /* call 0x005D5060 */

loc_00409D81: ;
    PUSH32(esp, 0x00409D86u); RECOMP_ABI_CALL(0x00412550u, sub_00412550); /* call 0x00412550 */

loc_00409D86: ;
    ecx = eax;
    PUSH32(esp, 0x00409D8Du); RECOMP_ABI_CALL(0x00417E50u, sub_00417E50); /* call 0x00417E50 */

loc_00409D8D: ;
    MEM8(esi + 4) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00409DA0
 * Original: 0x00409DA0 - 0x00409DCF (47 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409DA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00409DA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00409DA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00409DA5u); } /* indirect call */
    }

loc_00409DA8: ;
    PUSH32(esp, 0x00409DADu); RECOMP_ABI_CALL(0x0040C120u, sub_0040C120); /* call 0x0040C120 */

loc_00409DAD: ;
    ecx = MEM32(0x6CE2F4);
    PUSH32(esp, 0x62F36C);
    PUSH32(esp, 0x00409DBDu); RECOMP_ABI_CALL(0x005D4DF0u, sub_005D4DF0); /* call 0x005D4DF0 */

loc_00409DBD: ;
    ecx = 0x8582C8;
    PUSH32(esp, 0x00409DC7u); RECOMP_ABI_CALL(0x005E1A80u, sub_005E1A80); /* call 0x005E1A80 */

loc_00409DC7: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004091B0(); return; /* tail jmp 0x004091B0 */

}

/**
 * sub_00409DD0
 * Original: 0x00409DD0 - 0x00409DEE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00409DD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00409DD8u); RECOMP_ABI_CALL(0x00409D20u, sub_00409D20); /* call 0x00409D20 */

loc_00409DD8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00409DE8; /* je: equal / zero */

loc_00409DDF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00409DE5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00409DE5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00409DE8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00409DF0
 * Original: 0x00409DF0 - 0x00409E02 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409DF0(void)
{

loc_00409DF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00409DF8u); RECOMP_ABI_CALL(0x004094A0u, sub_004094A0); /* call 0x004094A0 */

loc_00409DF8: ;
    MEM32(esi) = 0x62F370;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00409E10
 * Original: 0x00409E10 - 0x00409E16 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409E10(void)
{

loc_00409E10: ;
    eax = 0x62D418;
    esp += 4; return; /* ret */

}

/**
 * sub_00409E20
 * Original: 0x00409E20 - 0x00409E2B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409E20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00409E20: ;
    MEM32(ecx) = 0x62F370;
    g_seh_ebp = ebp; sub_00408FB0(); return; /* tail jmp 0x00408FB0 */

}

/**
 * sub_00409E30
 * Original: 0x00409E30 - 0x00409E78 (72 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00409E30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00409E38u); RECOMP_ABI_CALL(0x00421490u, sub_00421490); /* call 0x00421490 */

loc_00409E38: ;
    ecx = MEM32(0x6CE2E4);
    PUSH32(esp, 0x00409E43u); RECOMP_ABI_CALL(0x0052BCA0u, sub_0052BCA0); /* call 0x0052BCA0 */

loc_00409E43: ;
    PUSH32(esp, 0x6C31A0);
    PUSH32(esp, 0x00409E4Du); RECOMP_ABI_CALL(0x00420D00u, sub_00420D00); /* call 0x00420D00 */

loc_00409E4D: ;
    ecx = eax;
    PUSH32(esp, 0x00409E54u); RECOMP_ABI_CALL(0x00420D10u, sub_00420D10); /* call 0x00420D10 */

loc_00409E54: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00409E65; /* jne: not equal / not zero */

loc_00409E58: ;
    ecx = MEM32(0x6C3890);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00409E65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00409E62u); } /* indirect call */
    }

loc_00409E65: ;
    PUSH32(esp, 0x62F328);
    PUSH32(esp, 0x00409E6Fu); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_00409E6F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 4) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00409E80
 * Original: 0x00409E80 - 0x00409EA7 (39 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409E80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00409E80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00409E88u); RECOMP_ABI_CALL(0x00420D00u, sub_00420D00); /* call 0x00420D00 */

loc_00409E88: ;
    ecx = eax;
    PUSH32(esp, 0x00409E8Fu); RECOMP_ABI_CALL(0x00420E80u, sub_00420E80); /* call 0x00420E80 */

loc_00409E8F: ;
    PUSH32(esp, 0x00409E94u); RECOMP_ABI_CALL(0x00420CE0u, sub_00420CE0); /* call 0x00420CE0 */

loc_00409E94: ;
    ecx = MEM32(0x6CE2E4);
    PUSH32(esp, 0x00409E9Fu); RECOMP_ABI_CALL(0x0052B4A0u, sub_0052B4A0); /* call 0x0052B4A0 */

loc_00409E9F: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004091B0(); return; /* tail jmp 0x004091B0 */

}
