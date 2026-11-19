/**
 * Midnight Club II (PC) - Recompiled code chunk 23
 * Functions: 250 (0x005347E0 - 0x0053B680)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_005347E0
 * Original: 0x005347E0 - 0x005347EB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005347E0(void)
{

loc_005347E0: ;
    PUSH32(esp, 0x64BED4);
    PUSH32(esp, 0x005347EAu); RECOMP_ABI_CALL(0x005348E0u, sub_005348E0); /* call 0x005348E0 */

loc_005347EA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005347F0
 * Original: 0x005347F0 - 0x005347FB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005347F0(void)
{

loc_005347F0: ;
    PUSH32(esp, 0x64BEE0);
    PUSH32(esp, 0x005347FAu); RECOMP_ABI_CALL(0x005348E0u, sub_005348E0); /* call 0x005348E0 */

loc_005347FA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00534800
 * Original: 0x00534800 - 0x00534838 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00534800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00534800: ;
    eax = MEM32(0x6C2BA0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(0x6C2BA0) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0053481D; /* jne: not equal / not zero */

loc_00534813: ;
    eax = 1;
    MEM32(0x6C2BA0) = eax;

loc_0053481D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64BE90);
    ecx = esi;
    PUSH32(esp, 0x0053482Au); RECOMP_ABI_CALL(0x00534850u, sub_00534850); /* call 0x00534850 */

loc_0053482A: ;
    PUSH32(esp, 0x64BEEC);
    ecx = esi;
    PUSH32(esp, 0x00534836u); RECOMP_ABI_CALL(0x005348E0u, sub_005348E0); /* call 0x005348E0 */

loc_00534836: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00534840
 * Original: 0x00534840 - 0x0053484B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00534840(void)
{

loc_00534840: ;
    PUSH32(esp, 0x64BF00);
    PUSH32(esp, 0x0053484Au); RECOMP_ABI_CALL(0x005348E0u, sub_005348E0); /* call 0x005348E0 */

loc_0053484A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00534850
 * Original: 0x00534850 - 0x005348D6 (134 bytes, 59 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00534850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00534850: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x830) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x830;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00534876; /* jne: not equal / not zero */

loc_00534865: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp = ebp + -2108;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00534876: ;
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00534881; /* jne: not equal / not zero */

loc_0053487D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_005348AD;

loc_00534881: ;
    eax = edi;
    edx = eax + 1;

loc_00534886: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00534886; /* jne: not equal / not zero */

loc_0053488D: ;
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
    PUSH32(esp, 0x005348A0u); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_005348A0: ;
    eax = esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005348AAu); RECOMP_ABI_CALL(0x004056C0u, sub_004056C0); /* call 0x004056C0 */

loc_005348AA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005348AD: ;
    ecx = MEM32(ebx + 4);
    edx = MEM32(ecx);
    esi = ebp + -2096;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x005348C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005348BFu); } /* indirect call */
    }

loc_005348C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    esp = ebp + -2108;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005348E0
 * Original: 0x005348E0 - 0x0053497C (156 bytes, 62 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005348E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005348E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x830) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x830;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00534906; /* jne: not equal / not zero */

loc_005348F5: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp = ebp + -2108;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00534906: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x20B;
    edi = ebp + -2092;
    MEM32(ebp + -2096) = 0x830;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00534957; /* je: equal / zero */

loc_00534926: ;
    eax = edi;
    edx = eax + 1;
    goto loc_00534930;

    /* nop */

loc_00534930: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00534930; /* jne: not equal / not zero */

loc_00534937: ;
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
    PUSH32(esp, 0x0053494Au); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_0053494A: ;
    eax = esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00534954u); RECOMP_ABI_CALL(0x004056C0u, sub_004056C0); /* call 0x004056C0 */

loc_00534954: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00534957: ;
    ecx = MEM32(ebx + 4);
    edx = MEM32(ecx);
    esi = ebp + -2096;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00534968u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00534965u); } /* indirect call */
    }

loc_00534968: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    esp = ebp + -2108;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00534980
 * Original: 0x00534980 - 0x005349CE (78 bytes, 26 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00534980(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00534980: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    edx = ecx;
    esi = ecx;
    esi = esi >> 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xFF0000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = ecx;
    esi = esi & 0xFF00;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    SET_LO16(ecx, MEM16(esp + 0xC));
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi << 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = edx;
    SET_LO16(edx, ZX8(HI8(ecx)));
    SET_HI8(edx, LO8(ecx));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(eax) = 2;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 8) = ecx;
    POP32(esp, esi);
    MEM16(eax + 2) = LO16(edx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005349D0
 * Original: 0x005349D0 - 0x005349D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005349D0(void)
{

loc_005349D0: ;
    eax = 0x117;
    esp += 4; return; /* ret */

}

/**
 * sub_005349E0
 * Original: 0x005349E0 - 0x00534A38 (88 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005349E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005349E0: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM8(esi) = LO8(ebx);
    MEM8(esi + 1) = 0x22;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM16(esi + 2) = 0x1C;
    PUSH32(esp, edi);
    edi = esi + 0x28;
    ecx = edi;
    MEM16(esi + 0x1C) = LO16(ebx);
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM8(esi + 0x1F) = LO8(ebx);
    MEM8(esi + 0x20) = LO8(ebx);
    MEM8(esi + 0x21) = LO8(ebx);
    MEM8(esi + 0x22) = LO8(ebx);
    MEM8(esi + 0x23) = LO8(ebx);
    MEM8(esi + 0x24) = LO8(ebx);
    MEM8(esi + 0x25) = LO8(ebx);
    PUSH32(esp, 0x00534A1Fu); RECOMP_ABI_CALL(0x0060CB60u, sub_0060CB60); /* call 0x0060CB60 */

loc_00534A1F: ;
    MEM32(edi + 0x24) = ebx;
    MEM32(edi + 0x20) = ebx;
    MEM32(edi + 0x1C) = ebx;
    MEM16(edi + 0x28) = LO16(ebx);
    POP32(esp, edi);
    MEM16(esi + 2) = 0x54;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00534A40
 * Original: 0x00534A40 - 0x00534AA7 (103 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00534A40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00534A40: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x294);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(ebx) = 0x64BF10;
    PUSH32(esp, 0x00534A57u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00534A57: ;
    ecx = MEM32(ebx + 0x284);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00534A6A; /* je: equal / zero */

loc_00534A64: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00534A6Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00534A68u); } /* indirect call */
    }

loc_00534A6A: ;
    _fa = (uint32_t)(MEM32(0x8582DC)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8582DC), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00534A78; /* jne: not equal / not zero */

loc_00534A73: ;
    PUSH32(esp, 0x00534A78u); RECOMP_ABI_CALL(0x005E71A0u, sub_005E71A0); /* call 0x005E71A0 */

loc_00534A78: ;
    PUSH32(esp, 0x00534A7Du); RECOMP_ABI_CALL(0x005C3530u, sub_005C3530); /* call 0x005C3530 */

loc_00534A7D: ;
    esi = ebx + 0x2B0;
    edi = 8;
    goto loc_00534A90;

    /* nop */

loc_00534A90: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x38;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x00534A9Au); RECOMP_ABI_CALL(0x00539C70u, sub_00539C70); /* call 0x00539C70 */

loc_00534A9A: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00534A90; /* jne: not equal / not zero */

loc_00534A9D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ebx;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_005E60F0(); return; /* tail jmp 0x005E60F0 */

}

/**
 * sub_00534AB0
 * Original: 0x00534AB0 - 0x00534AD1 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00534AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00534AB0: ;
    ecx = MEM32(0x6C2BB4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00534AC3; /* je: equal / zero */

loc_00534ABD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00534AC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00534AC1u); } /* indirect call */
    }

loc_00534AC3: ;
    MEM32(0x6C2BB4) = esi;
    MEM32(0x6C38B4) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00534AE0
 * Original: 0x00534AE0 - 0x00534D3C (604 bytes, 230 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00534AE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00534AE0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(eax + 1));
    edx = esi + -32;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00534D2A; /* ja: above (unsigned >) */

loc_00534AF5: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x534D3C); /* switch: 33 entries, 32 targets */
    if (_jt == 0x00534AFCu) goto loc_00534AFC;
    if (_jt == 0x00534B0Eu) goto loc_00534B0E;
    if (_jt == 0x00534B20u) goto loc_00534B20;
    if (_jt == 0x00534B32u) goto loc_00534B32;
    if (_jt == 0x00534B44u) goto loc_00534B44;
    if (_jt == 0x00534B56u) goto loc_00534B56;
    if (_jt == 0x00534B68u) goto loc_00534B68;
    if (_jt == 0x00534B7Au) goto loc_00534B7A;
    if (_jt == 0x00534B8Cu) goto loc_00534B8C;
    if (_jt == 0x00534B9Eu) goto loc_00534B9E;
    if (_jt == 0x00534BB0u) goto loc_00534BB0;
    if (_jt == 0x00534BC2u) goto loc_00534BC2;
    if (_jt == 0x00534BD4u) goto loc_00534BD4;
    if (_jt == 0x00534BE6u) goto loc_00534BE6;
    if (_jt == 0x00534BF8u) goto loc_00534BF8;
    if (_jt == 0x00534C0Au) goto loc_00534C0A;
    if (_jt == 0x00534C1Cu) goto loc_00534C1C;
    if (_jt == 0x00534C2Eu) goto loc_00534C2E;
    if (_jt == 0x00534C40u) goto loc_00534C40;
    if (_jt == 0x00534C52u) goto loc_00534C52;
    if (_jt == 0x00534C64u) goto loc_00534C64;
    if (_jt == 0x00534C76u) goto loc_00534C76;
    if (_jt == 0x00534C88u) goto loc_00534C88;
    if (_jt == 0x00534C9Au) goto loc_00534C9A;
    if (_jt == 0x00534CACu) goto loc_00534CAC;
    if (_jt == 0x00534CBEu) goto loc_00534CBE;
    if (_jt == 0x00534CD0u) goto loc_00534CD0;
    if (_jt == 0x00534CE2u) goto loc_00534CE2;
    if (_jt == 0x00534CF4u) goto loc_00534CF4;
    if (_jt == 0x00534D06u) goto loc_00534D06;
    if (_jt == 0x00534D18u) goto loc_00534D18;
    if (_jt == 0x00534D2Au) goto loc_00534D2A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00534AFC: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x00534B0Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00534B04u); } /* indirect call */
    }

loc_00534B0A: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00534B0E: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x184); PUSH32(esp, 0x00534B1Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00534B16u); } /* indirect call */
    }

loc_00534B1C: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00534B20: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x188); PUSH32(esp, 0x00534B2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00534B28u); } /* indirect call */
    }

loc_00534B2E: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00534B32: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C8); PUSH32(esp, 0x00534B40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00534B3Au); } /* indirect call */
    }

loc_00534B40: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00534B44: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18C); PUSH32(esp, 0x00534B52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00534B4Cu); } /* indirect call */
    }

loc_00534B52: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00534B56: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x190); PUSH32(esp, 0x00534B64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00534B5Eu); } /* indirect call */
    }

loc_00534B64: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00534B68: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x194); PUSH32(esp, 0x00534B76u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00534B70u); } /* indirect call */
    }

loc_00534B76: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00534B7A: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x198); PUSH32(esp, 0x00534B88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00534B82u); } /* indirect call */
    }

loc_00534B88: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00534B8C: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x19C); PUSH32(esp, 0x00534B9Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00534B94u); } /* indirect call */
    }

loc_00534B9A: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00534B9E: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1A0); PUSH32(esp, 0x00534BACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00534BA6u); } /* indirect call */
    }

loc_00534BAC: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00534BB0: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1A4); PUSH32(esp, 0x00534BBEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00534BB8u); } /* indirect call */
    }

loc_00534BBE: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00534BC2: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1A8); PUSH32(esp, 0x00534BD0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00534BCAu); } /* indirect call */
    }

loc_00534BD0: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00534BD4: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1AC); PUSH32(esp, 0x00534BE2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00534BDCu); } /* indirect call */
    }

loc_00534BE2: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00534BE6: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1B0); PUSH32(esp, 0x00534BF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00534BEEu); } /* indirect call */
    }

loc_00534BF4: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00534BF8: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x00534C06u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00534C00u); } /* indirect call */
    }

loc_00534C06: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00534C0A: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1B8); PUSH32(esp, 0x00534C18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00534C12u); } /* indirect call */
    }

loc_00534C18: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00534C1C: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1BC); PUSH32(esp, 0x00534C2Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00534C24u); } /* indirect call */
    }

loc_00534C2A: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00534C2E: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C0); PUSH32(esp, 0x00534C3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00534C36u); } /* indirect call */
    }

loc_00534C3C: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00534C40: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C4); PUSH32(esp, 0x00534C4Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00534C48u); } /* indirect call */
    }

loc_00534C4E: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00534C52: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1CC); PUSH32(esp, 0x00534C60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00534C5Au); } /* indirect call */
    }

loc_00534C60: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00534C64: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1D0); PUSH32(esp, 0x00534C72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00534C6Cu); } /* indirect call */
    }

loc_00534C72: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00534C76: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1D4); PUSH32(esp, 0x00534C84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00534C7Eu); } /* indirect call */
    }

loc_00534C84: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00534C88: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1D8); PUSH32(esp, 0x00534C96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00534C90u); } /* indirect call */
    }

loc_00534C96: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00534C9A: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1DC); PUSH32(esp, 0x00534CA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00534CA2u); } /* indirect call */
    }

loc_00534CA8: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00534CAC: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xF0); PUSH32(esp, 0x00534CBAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00534CB4u); } /* indirect call */
    }

loc_00534CBA: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00534CBE: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x00534CCCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00534CC6u); } /* indirect call */
    }

loc_00534CCC: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00534CD0: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xF4); PUSH32(esp, 0x00534CDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00534CD8u); } /* indirect call */
    }

loc_00534CDE: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00534CE2: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1E0); PUSH32(esp, 0x00534CF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00534CEAu); } /* indirect call */
    }

loc_00534CF0: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00534CF4: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1E4); PUSH32(esp, 0x00534D02u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00534CFCu); } /* indirect call */
    }

loc_00534D02: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00534D06: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1E8); PUSH32(esp, 0x00534D14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00534D0Eu); } /* indirect call */
    }

loc_00534D14: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00534D18: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1EC); PUSH32(esp, 0x00534D26u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00534D20u); } /* indirect call */
    }

loc_00534D26: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00534D2A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x64C100);
    PUSH32(esp, 0x00534D35u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_00534D35: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00534DC0
 * Original: 0x00534DC0 - 0x00534E04 (68 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00534DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00534DC0: ;
    PUSH32(esp, ebx);
    edx = ecx;
    _fa = (uint32_t)(MEM32(edx + 0x2E4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x2E4), 1 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00534DFE; /* jne: not equal / not zero */

loc_00534DCE: ;
    esi = MEM32(edx + 0x10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00534DD5: ;
    edi = 1;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00534DEB; /* je: equal / zero */

loc_00534DE0: ;
    edi = MEM32(edx + 4);
    ebx = MEM32(edi + eax + 0x5C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00534DFE; /* jne: not equal / not zero */

loc_00534DEB: ;
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x780 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00534DD5; /* jl: less (signed <) */

loc_00534DF8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00534DFE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00534E10
 * Original: 0x00534E10 - 0x00534F19 (265 bytes, 73 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00534E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00534E10: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00534F15; /* jne: not equal / not zero */

loc_00534E1F: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00534F15; /* je: equal / zero */

loc_00534E2A: ;
    eax = MEM32(esi + 0x2B0);
    PUSH32(esp, edi);
    edi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00534E4C; /* jne: not equal / not zero */

loc_00534E3A: ;
    PUSH32(esp, 0x64C1A8);
    PUSH32(esp, 0x00534E44u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_00534E44: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00534E4C: ;
    eax = MEM32(esp + 0xC);
    edx = ZX8(MEM8(eax + 0x20));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00534E68; /* jne: not equal / not zero */

loc_00534E58: ;
    MEM32(esi + 0x2A8) = 0;
    ecx = ZX8(MEM8(eax + 0x21));
    goto loc_00534E7E;

loc_00534E68: ;
    edx = ZX8(MEM8(eax + 0x21));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00534F14; /* jne: not equal / not zero */

loc_00534E74: ;
    MEM32(esi + 0x2A8) = edi;
    ecx = ZX8(MEM8(eax + 0x20));

loc_00534E7E: ;
    MEM32(esi + 0x2AC) = ecx;
    edx = MEM32(eax + 0x1C);
    MEM32(esi + 0x2A4) = edx;
    MEM32(esi + 0x2B0) = edi;
    eax = MEM32(0x6C2C40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00534F07; /* je: equal / zero */

loc_00534E9C: ;
    PUSH32(esp, 0x63);
    PUSH32(esp, 0);
    ecx = 0x679680;
    PUSH32(esp, 0x00534EAAu); RECOMP_ABI_CALL(0x004215B0u, sub_004215B0); /* call 0x004215B0 */

loc_00534EAA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x2B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x2B4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00534EDD; /* jge: greater or equal (signed >=) */

loc_00534EB2: ;
    eax = MEM32(esi + 0x2AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x64C174);
    PUSH32(esp, 0x00534EC3u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_00534EC3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x270F);
    PUSH32(esp, 0);
    ecx = 0x679680;
    PUSH32(esp, 0x00534ED7u); RECOMP_ABI_CALL(0x004215B0u, sub_004215B0); /* call 0x004215B0 */

loc_00534ED7: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x2A4) = MEM32(esi + 0x2A4) + eax;
    _fa = (uint32_t)(MEM32(esi + 0x2A4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00534EDD: ;
    eax = MEM32(esi + 0x2A8);
    ecx = MEM32(esi + 0x2AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    eax = MEM32(esi + 0x2A4);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, ecx);
    ecx = MEM32(0x6C2C40);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00534F02u); RECOMP_ABI_CALL(0x00538560u, sub_00538560); /* call 0x00538560 */

loc_00534F02: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00534F07: ;
    PUSH32(esp, 0x64C138);
    PUSH32(esp, 0x00534F11u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_00534F11: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00534F14: ;
    POP32(esp, edi);

loc_00534F15: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00534F20
 * Original: 0x00534F20 - 0x00534F78 (88 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00534F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00534F20: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00534F74; /* je: equal / zero */

loc_00534F2A: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00534F74; /* jne: not equal / not zero */

loc_00534F32: ;
    _fa = (uint32_t)(MEM32(esi + 0x2B0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2B0), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00534F4C; /* je: equal / zero */

loc_00534F3B: ;
    PUSH32(esp, 0x64C1E8);
    PUSH32(esp, 0x00534F45u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00534F45: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00534F4C: ;
    ecx = MEM32(esp + 8);
    edx = ZX8(MEM8(ecx + 0x1C));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00534F74; /* jne: not equal / not zero */

loc_00534F58: ;
    eax = MEM32(esi + 0x2A4);
    ecx = MEM32(0x6C2C40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00534F6Au); RECOMP_ABI_CALL(0x005385A0u, sub_005385A0); /* call 0x005385A0 */

loc_00534F6A: ;
    MEM32(esi + 0x2B0) = 2;

loc_00534F74: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00534F80
 * Original: 0x00534F80 - 0x005352FC (892 bytes, 243 insns)
 * Category: game_debug
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00534F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00534F80: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_005352F4; /* je: equal / zero */

loc_00534F93: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005352F4; /* jne: not equal / not zero */

loc_00534F9E: ;
    eax = MEM32(esi + 0x2E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00534FC9; /* je: equal / zero */

loc_00534FA9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00534FC9; /* je: equal / zero */

loc_00534FAE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00534FC9; /* je: equal / zero */

loc_00534FB3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64C2D0);
    PUSH32(esp, 0x00534FBEu); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00534FBE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00534FC9: ;
    _fa = (uint32_t)(MEM32(esi + 0x2BC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2BC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00534FDD; /* je: equal / zero */

loc_00534FD1: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C0), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005352F4; /* jne: not equal / not zero */

loc_00534FDD: ;
    SET_LO8(eax, MEM8(esi + 0x68));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005352F4; /* je: equal / zero */

loc_00534FE8: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    eax = ZX8(MEM8(edi + 0x1C));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00535020; /* ja: above (unsigned >) */

loc_00534FF7: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x5352FC); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00534FFEu) goto loc_00534FFE;
    if (_jt == 0x00535005u) goto loc_00535005;
    if (_jt == 0x0053500Cu) goto loc_0053500C;
    if (_jt == 0x00535013u) goto loc_00535013;
    if (_jt == 0x00535020u) goto loc_00535020;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00534FFE: ;
    PUSH32(esp, 0x64C2A8);
    goto loc_00535018;

loc_00535005: ;
    PUSH32(esp, 0x64C278);
    goto loc_00535018;

loc_0053500C: ;
    PUSH32(esp, 0x64C248);
    goto loc_00535018;

loc_00535013: ;
    PUSH32(esp, 0x64C214);

loc_00535018: ;
    PUSH32(esp, 0x0053501Du); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0053501D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00535020: ;
    _fa = (uint32_t)(MEM8(edi + 0x1C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x1C), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005351BC; /* jne: not equal / not zero */

loc_0053502A: ;
    SET_LO16(eax, MEM16(edi + 0x2C));
    edx = MEM32(edi + 0x28);
    SET_LO16(ecx, ZX8(HI8(eax)));
    SET_HI8(ecx, LO8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0053503Eu); RECOMP_ABI_CALL(0x004068F0u, sub_004068F0); /* call 0x004068F0 */

loc_0053503E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0053504Bu); RECOMP_ABI_CALL(0x00534980u, sub_00534980); /* call 0x00534980 */

loc_0053504B: ;
    _fa = (uint32_t)(MEM32(esi + 0x2BC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2BC), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005350F7; /* jne: not equal / not zero */

loc_00535057: ;
    SET_LO16(eax, MEM16(esp + 0xE));
    SET_LO16(ecx, ZX8(HI8(eax)));
    SET_HI8(ecx, LO8(eax));
    edi = esi + 0x2D4;
    PUSH32(esp, ecx);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00535072u); RECOMP_ABI_CALL(0x00406920u, sub_00406920); /* call 0x00406920 */

loc_00535072: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0053507Au); RECOMP_ABI_CALL(0x00417F80u, sub_00417F80); /* call 0x00417F80 */

loc_0053507A: ;
    edx = MEM32(esi + 0x2BC);
    eax = MEM32(esi + 4);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xF0);
    ecx = MEM32(esi + 0x2C0);
    ebx = MEM32(edx + eax + 0x58);
    eax = edx + eax + 0x58;
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = ebx;
    eax = MEM32(esi + 0x2E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00535159; /* je: equal / zero */

loc_005350B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005352DF; /* jne: not equal / not zero */

loc_005350BA: ;
    ecx = MEM32(esi + 0x2C0);
    edx = MEM32(esi + 0x2BC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xD4); PUSH32(esp, 0x005350D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005350CDu); } /* indirect call */
    }

loc_005350D3: ;
    edx = MEM32(esi + 0x2BC);
    eax = MEM32(esi);
    ecx = esi + 0x2C4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x2C0);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xD4); PUSH32(esp, 0x005350F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005350ECu); } /* indirect call */
    }

loc_005350F2: ;
    goto loc_005352DF;

loc_005350F7: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C0), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005352E9; /* jne: not equal / not zero */

loc_00535103: ;
    SET_LO16(eax, MEM16(esp + 0xE));
    SET_LO16(edx, ZX8(HI8(eax)));
    SET_HI8(edx, LO8(eax));
    ecx = esp + 0xC;
    edi = esi + 0x2C4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0053511Eu); RECOMP_ABI_CALL(0x00406920u, sub_00406920); /* call 0x00406920 */

loc_0053511E: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00535126u); RECOMP_ABI_CALL(0x00417F80u, sub_00417F80); /* call 0x00417F80 */

loc_00535126: ;
    eax = MEM32(esi + 0x2C0);
    ecx = MEM32(esi + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF0);
    ebx = MEM32(eax + ecx + 0x58);
    eax = eax + ecx + 0x58;
    ecx = MEM32(esi + 0x2BC);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = ebx;
    eax = MEM32(esi + 0x2E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00535176; /* jne: not equal / not zero */

loc_00535159: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM32(esi + 0x2E4) = 3;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0053516Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00535167u); } /* indirect call */
    }

loc_0053516D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00535176: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005352DF; /* jne: not equal / not zero */

loc_0053517F: ;
    edx = MEM32(esi + 0x2C0);
    eax = MEM32(esi);
    ecx = esi + 0x2D4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x2BC);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xD4); PUSH32(esp, 0x0053519Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00535198u); } /* indirect call */
    }

loc_0053519E: ;
    eax = MEM32(esi + 0x2BC);
    ecx = MEM32(esi + 0x2C0);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xD4); PUSH32(esp, 0x005351B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005351B1u); } /* indirect call */
    }

loc_005351B7: ;
    goto loc_005352DF;

loc_005351BC: ;
    eax = MEM32(esi + 0x2E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005352DF; /* je: equal / zero */

loc_005351CB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005351F7; /* jne: not equal / not zero */

loc_005351D0: ;
    eax = MEM32(esi + 0x2BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ecx = MEM32(esi + 0x2C0);
    if (CMP_EQ(_fa, _fb)) goto loc_005351E8; /* je: equal / zero */

loc_005351E0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005352DF; /* jne: not equal / not zero */

loc_005351E8: ;
    edx = MEM32(esi + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF0);
    eax = eax + edx + 0x58;
    goto loc_00535260;

loc_005351F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005352E9; /* jne: not equal / not zero */

loc_00535200: ;
    eax = MEM32(esi + 0x2BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00535230; /* jne: not equal / not zero */

loc_0053520A: ;
    ecx = MEM32(esi + 0x2C0);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xFC); PUSH32(esp, 0x0053521Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00535215u); } /* indirect call */
    }

loc_0053521B: ;
    edx = MEM32(esi + 0x2BC);
    eax = MEM32(esi + 4);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xF0);
    eax = edx + eax + 0x58;
    goto loc_0053525A;

loc_00535230: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C0), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005352DF; /* jne: not equal / not zero */

loc_0053523C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x00535247u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00535241u); } /* indirect call */
    }

loc_00535247: ;
    eax = MEM32(esi + 0x2BC);
    ecx = MEM32(esi + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF0);
    eax = eax + ecx + 0x58;

loc_0053525A: ;
    ecx = MEM32(esi + 0x2C0);

loc_00535260: ;
    ebx = MEM32(eax);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = ebx;
    eax = MEM32(esi + 0x2BC);
    ecx = MEM32(esi + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF0);
    ebx = MEM32(eax + ecx + 0x5C);
    eax = eax + ecx + 0x5C;
    ecx = MEM32(esi + 0x2C0);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = ebx;
    eax = MEM32(esi + 0x2C0);
    ecx = MEM32(esi + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF0);
    ebx = MEM32(eax + ecx + 0x58);
    eax = eax + ecx + 0x58;
    ecx = MEM32(esi + 0x2BC);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = ebx;
    eax = MEM32(esi + 0x2C0);
    ecx = MEM32(esi + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF0);
    eax = eax + ecx + 0x5C;
    ecx = MEM32(esi + 0x2BC);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax) = MEM32(eax) | edx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_005352DF: ;
    MEM32(esi + 0x2E4) = 5;

loc_005352E9: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x005352F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005352EDu); } /* indirect call */
    }

loc_005352F3: ;
    POP32(esp, edi);

loc_005352F4: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00535310
 * Original: 0x00535310 - 0x0053551E (526 bytes, 167 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00535310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00535310: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x28) = eax;
    MEM8(esp + 4) = LO8(eax);
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x30) = eax;
    MEM16(esp + 0x3A) = LO16(eax);
    MEM16(esp + 0x38) = LO16(eax);
    eax = MEM32(esp + 0x48);
    SET_LO8(edx, MEM8(esp + 0x44));
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x48);
    ebp = MEM32(esi + 4);
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF0);
    MEM8(esp + 0x2D) = LO8(edx);
    PUSH32(esp, edi);
    edi = eax + ebp;
    MEM8(esp + 0x11) = 0x3C;
    MEM16(esp + 0x12) = 0x38;
    MEM8(esp + 0x30) = LO8(ecx);
    edx = MEM32(edi + 0x84);
    eax = edx;
    ebx = edx;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFF0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = edx;
    ebx = ebx << 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xFF00;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = eax;
    ebx = eax;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xFF0000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = eax;
    ebx = ebx << 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esp + 0x50);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF0);
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x34) = edx;
    edx = MEM32(ebp + 0x84);
    eax = edx;
    ebx = edx;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFF0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = edx;
    ebx = ebx << 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xFF00;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = eax;
    ebx = eax;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xFF0000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = eax;
    ebx = ebx << 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x38) = edx;
    edx = MEM32(edi + 0x94);
    eax = edx;
    ebx = edx;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFF0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = edx;
    edx = edx & 0xFF00;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx << 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = eax;
    edx = edx & 0xFF0000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = eax;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = eax;
    ebx = ebx << 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(ebp + 0x94);
    eax = edx;
    ebx = edx;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFF0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = edx;
    edx = edx & 0xFF00;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx << 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = eax;
    edx = edx & 0xFF0000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = eax;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = eax;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx << 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x40) = edx;
    SET_LO16(eax, MEM16(edi + 0x92));
    SET_LO16(edx, ZX8(HI8(eax)));
    SET_HI8(edx, LO8(eax));
    edi = 1;
    eax = edx;
    SET_LO16(edx, ZX8(HI8(eax)));
    SET_HI8(edx, LO8(eax));
    MEM16(esp + 0x44) = LO16(edx);
    SET_LO16(eax, MEM16(ebp + 0x92));
    SET_LO16(edx, ZX8(HI8(eax)));
    SET_HI8(edx, LO8(eax));
    eax = edx;
    SET_LO16(edx, ZX8(HI8(eax)));
    SET_HI8(edx, LO8(eax));
    eax = MEM32(esi);
    MEM16(esp + 0x46) = LO16(edx);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0x50);
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = esp + 0x10;
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00535514u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00535511u); } /* indirect call */
    }

loc_00535514: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00535520
 * Original: 0x00535520 - 0x00535563 (67 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00535520(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00535520: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM8(esp + 4) = LO8(ecx);
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esp + 0x28);
    esi = 1;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x20) = LO8(ecx);
    ecx = esp + 4;
    MEM8(esp + 5) = 0x3D;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(esp + 0xE) = 0x20;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0053555Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00535559u); } /* indirect call */
    }

loc_0053555C: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00535570
 * Original: 0x00535570 - 0x0053558B (27 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00535570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00535570: ;
    ecx = MEM32(0x6C2C40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053557F; /* je: equal / zero */

loc_0053557A: ;
    g_seh_ebp = ebp; sub_005385C0(); return; /* tail jmp 0x005385C0 */

loc_0053557F: ;
    PUSH32(esp, 0x64C2FC);
    PUSH32(esp, 0x00535589u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00535589: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00535590
 * Original: 0x00535590 - 0x005355A9 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00535590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00535590: ;
    SET_LO8(eax, MEM8(ecx + 0x2A1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005355A6; /* je: equal / zero */

loc_0053559A: ;
    SET_LO8(eax, MEM8(ecx + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005355A6; /* jne: not equal / not zero */

loc_005355A1: ;
    g_seh_ebp = ebp; sub_005E4280(); return; /* tail jmp 0x005E4280 */

loc_005355A6: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005355B0
 * Original: 0x005355B0 - 0x005355DD (45 bytes, 13 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005355B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005355B0: ;
    eax = MEM32(ecx + 0x2E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005355CA; /* je: equal / zero */

loc_005355BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005355CA; /* je: equal / zero */

loc_005355C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005355CA; /* je: equal / zero */

loc_005355C5: ;
    g_seh_ebp = ebp; sub_005E4320(); return; /* tail jmp 0x005E4320 */

loc_005355CA: ;
    PUSH32(esp, 0x64C330);
    PUSH32(esp, 0x005355D4u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_005355D4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005355E0
 * Original: 0x005355E0 - 0x00535631 (81 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005355E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005355E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    edx = MEM32(eax + 0x74);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = MEM32(edi + 4);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053562A; /* jne: not equal / not zero */

loc_005355F8: ;
    SET_LO16(edx, MEM16(edi + 2));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(eax + 2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(eax + 2) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053562A; /* jne: not equal / not zero */

loc_00535602: ;
    eax = MEM32(esp + 0xC);
    edx = ZX8(MEM8(eax + 0x1C));
    SET_LO8(ecx, MEM8(eax + 0x68));
    edx = edx + edx * 2;
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    MEM8(edx + 0x6C3020) = LO8(ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00535625u); RECOMP_ABI_CALL(0x005E4710u, sub_005E4710); /* call 0x005E4710 */

loc_00535625: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0053562A: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00535640
 * Original: 0x00535640 - 0x00535696 (86 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00535640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00535640: ;
    eax = ecx;
    edx = MEM32(eax + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    PUSH32(esp, edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx + 0x74) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00535691; /* jne: not equal / not zero */

loc_00535653: ;
    SET_LO16(ecx, MEM16(ecx + 2));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edx + 0x72)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(edx + 0x72) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00535691; /* jne: not equal / not zero */

loc_0053565D: ;
    ecx = MEM32(esp + 0xC);
    esi = ecx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xF0);
    edx = esi + edx + 0x70;
    esi = MEM32(esp + 0x14);
    edi = MEM32(esi);
    MEM32(edx) = edi;
    edi = MEM32(esi + 4);
    MEM32(edx + 4) = edi;
    edi = MEM32(esi + 8);
    MEM32(edx + 8) = edi;
    esi = MEM32(esi + 0xC);
    MEM32(edx + 0xC) = esi;
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 0x10) = MEM32(eax + 0x10) | edx;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00535691: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_005356A0
 * Original: 0x005356A0 - 0x005356BE (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005356A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_005356A0: ;
    eax = MEM32(esp + 4);
    ecx = eax + eax * 2;
    if (4) _cf = (int)(((ecx) >> (32 - (4))) & 1);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x6C2FF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x6C2FF4)) >> 32) & 1);
    ecx = ecx + 0x6C2FF4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x005356B5u); RECOMP_ABI_CALL(0x005406E0u, sub_005406E0); /* call 0x005406E0 */

loc_005356B5: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005356C0
 * Original: 0x005356C0 - 0x005357F3 (307 bytes, 90 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005356C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005356C0: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM8(esp + 0x10) = 0;
    MEM16(esp + 0x12) = 0x78;
    ecx = 0x10;
    edi = esp + 0x36;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esp + 0x78) = eax;
    eax = MEM32(esp + 0x94);
    ecx = MEM32(eax + 4);
    eax = ecx;
    edi = ecx;
    edi = edi >> 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFF0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = ecx;
    ecx = ecx & 0xFF00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi << 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esp + 0x90);
    ecx = eax;
    ecx = ecx & 0xFF0000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = eax;
    edi = edi >> 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = eax;
    eax = eax & 0xFF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi << 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esp + 0x94);
    SET_LO16(eax, MEM16(eax + 2));
    ebx = MEM32(esi + 4);
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x30) = ecx;
    SET_LO16(ecx, ZX8(HI8(eax)));
    SET_HI8(ecx, LO8(eax));
    ebp = edx;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0xF0);
    eax = ecx;
    SET_LO16(ecx, ZX8(HI8(eax)));
    SET_HI8(ecx, LO8(eax));
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x15) = 5;
    MEM8(esp + 0x30) = LO8(edx);
    MEM16(esp + 0x38) = LO16(ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xD8); PUSH32(esp, 0x00535788u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00535782u); } /* indirect call */
    }

loc_00535788: ;
    PUSH32(esp, 0x20);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xA0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x3A;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEM32(esp + 0x84) = eax;
    PUSH32(esp, 0x005357A2u); RECOMP_ABI_CALL(0x0061A4E6u, sub_0061A4E6); /* call 0x0061A4E6 */

loc_005357A2: ;
    edx = MEM32(esi + 4);
    MEM16(esp + 0x80) = 0;
    eax = MEM32(edx + ebp + 0xE0);
    MEM32(esp + 0x8C) = eax;
    ecx = MEM32(edx + ebp + 0xE4);
    edx = MEM32(esi);
    MEM32(esp + 0x90) = ecx;
    ecx = MEM32(esp + 0x98);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x005357E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005357E6u); } /* indirect call */
    }

loc_005357E9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00535800
 * Original: 0x00535800 - 0x00535A94 (660 bytes, 196 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00535800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00535800: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 1;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x3C);
    esi = ecx;
    MEM32(esp + 0x10) = ebx;
    ebp = 0xF0;
    goto loc_00535820;

    /* nop */

loc_00535820: ;
    ecx = ebx;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x10), eax (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00535A73; /* je: equal / zero */

loc_00535836: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00535A73; /* je: equal / zero */

loc_0053583E: ;
    eax = MEM32(esi + 4);
    eax = MEM32(eax + ebp + 0x94);
    ecx = eax;
    edx = eax;
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFF0000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = eax;
    edx = edx & 0xFF00;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00535977; /* je: equal / zero */

loc_00535872: ;
    edx = MEM32(esi + 4);
    eax = MEM32(edx + ebp + 0x84);
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xF0);
    MEM32(esp + 0x3C) = ecx;
    ecx = MEM32(ecx + edx + 0x84);
    edx = ecx;
    ebx = ecx;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xFF0000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ecx;
    ebx = ebx & 0xFF00;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = eax;
    ecx = ecx & 0xFF0000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = eax;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = eax;
    ebx = ebx & 0xFF00;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    ebx = MEM32(esp + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_00535A73; /* jne: not equal / not zero */

loc_005358E3: ;
    edx = MEM32(esp + 0x3C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(esp + 0x1A) = LO16(eax);
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esi + 4);
    eax = edx + eax + 0x90;
    MEM16(esp + 0x18) = 2;
    ecx = MEM32(eax);
    MEM32(esp + 0x18) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x1C) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x20) = ecx;
    edx = MEM32(eax + 0xC);
    eax = MEM32(esi);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esp + 0x30) = edx;
    { uint32_t _icall_target = MEM32(eax + 0xD4); PUSH32(esp, 0x00535937u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00535931u); } /* indirect call */
    }

loc_00535937: ;
    edx = MEM32(esi + 4);
    eax = edx + ebp + 0x58;
    ecx = edi;
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax) = MEM32(eax) | edx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi + 4);
    ecx = eax + ebp + 0x90;
    edx = MEM32(ecx);
    MEM32(esp + 0x18) = edx;
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x1C) = eax;
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x20) = edx;
    eax = MEM32(ecx + 0xC);
    MEM32(esp + 0x24) = eax;
    eax = esp + 0x18;
    goto loc_00535A51;

loc_00535977: ;
    SET_LO8(eax, MEM8(esi + 0x68));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00535A73; /* jne: not equal / not zero */

loc_00535982: ;
    ecx = MEM32(esi + 4);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF0);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(eax + ecx + 0x94);
    edx = eax;
    ecx = eax;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xFF0000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = eax;
    ecx = ecx & 0xFF00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_00535A73; /* jne: not equal / not zero */

loc_005359C2: ;
    edx = MEM32(esp + 0x3C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(esp + 0x2A) = LO16(eax);
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esi + 4);
    eax = edx + eax + 0x80;
    MEM16(esp + 0x28) = 2;
    ecx = MEM32(eax);
    MEM32(esp + 0x28) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x2C) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x30) = ecx;
    edx = MEM32(eax + 0xC);
    eax = MEM32(esi);
    ecx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esp + 0x40) = edx;
    { uint32_t _icall_target = MEM32(eax + 0xD4); PUSH32(esp, 0x00535A16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00535A10u); } /* indirect call */
    }

loc_00535A16: ;
    edx = MEM32(esi + 4);
    eax = edx + ebp + 0x58;
    ecx = edi;
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax) = MEM32(eax) | edx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi + 4);
    ecx = eax + ebp + 0x80;
    edx = MEM32(ecx);
    MEM32(esp + 0x28) = edx;
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x2C) = eax;
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x30) = edx;
    eax = MEM32(ecx + 0xC);
    MEM32(esp + 0x34) = eax;
    eax = esp + 0x28;

loc_00535A51: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0xD4); PUSH32(esp, 0x00535A5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00535A58u); } /* indirect call */
    }

loc_00535A5E: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esp + 0x3C);
    eax = edx + ecx + 0x58;
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x14);
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = edx;

loc_00535A73: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xF0;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x780 (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_00535820; /* jl: less (signed <) */

loc_00535A8A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00535AA0
 * Original: 0x00535AA0 - 0x00535B12 (114 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00535AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00535AA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00535AAEu); RECOMP_ABI_CALL(0x005E4BA0u, sub_005E4BA0); /* call 0x005E4BA0 */

loc_00535AAE: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00535ACE; /* jne: not equal / not zero */

loc_00535AB3: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00535ABCu); RECOMP_ABI_CALL(0x005E4E10u, sub_005E4E10); /* call 0x005E4E10 */

loc_00535ABC: ;
    eax = MEM32(esi + 0x288);
    MEM32(esi + 0xD8) = eax;
    MEM32(esi + 0xD4) = eax;

loc_00535ACE: ;
    ecx = MEM32(esi + 0x288);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x38);
    eax = edi + esi;
    MEM32(eax + 0xD8) = ecx;
    edx = MEM32(esi + 0x288);
    MEM32(eax + 0xD4) = edx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00535B0D; /* jne: not equal / not zero */

loc_00535AF3: ;
    SET_LO8(eax, MEM8(esi + 0x68));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00535B0D; /* je: equal / zero */

loc_00535AFA: ;
    _fa = (uint32_t)(MEM32(esi + 0x2E4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2E4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00535B0D; /* jne: not equal / not zero */

loc_00535B03: ;
    MEM32(esi + 0x2E4) = 5;

loc_00535B0D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00535B20
 * Original: 0x00535B20 - 0x00535BBF (159 bytes, 55 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00535B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00535B20: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_00535B87; /* jne: not equal / not zero */

loc_00535B2F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00535B82; /* jle: less or equal (signed <=) */

loc_00535B33: ;
    eax = MEM32(esi + 0x2E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00535B48; /* je: equal / zero */

loc_00535B3E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00535B48; /* je: equal / zero */

loc_00535B43: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00535B82; /* jne: not equal / not zero */

loc_00535B48: ;
    eax = MEM32(esi + 0x2BC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00535B65; /* jne: not equal / not zero */

loc_00535B52: ;
    ecx = MEM32(esi + 0x2C0);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xFC); PUSH32(esp, 0x00535B63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00535B5Du); } /* indirect call */
    }

loc_00535B63: ;
    goto loc_00535B78;

loc_00535B65: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x2C0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x2C0) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00535B82; /* jne: not equal / not zero */

loc_00535B6D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x00535B78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00535B72u); } /* indirect call */
    }

loc_00535B78: ;
    MEM32(esi + 0x2E4) = 5;

loc_00535B82: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */

loc_00535B87: ;
    if (CMP_GE(_fas, _fbs)) goto loc_00535B92; /* jge: greater or equal (signed >=) */

loc_00535B89: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00535B90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00535B8Du); } /* indirect call */
    }

loc_00535B90: ;
    goto loc_00535BA3;

loc_00535B92: ;
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    ecx = ecx + esi + 0xC4;
    PUSH32(esp, 0x00535BA3u); RECOMP_ABI_CALL(0x00539B20u, sub_00539B20); /* call 0x00539B20 */

loc_00535BA3: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00535BBAu); RECOMP_ABI_CALL(0x005E4BD0u, sub_005E4BD0); /* call 0x005E4BD0 */

loc_00535BBA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00535BC0
 * Original: 0x00535BC0 - 0x00535C83 (195 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00535BC0(void)
{

loc_00535BC0: ;
    eax = MEM32(ecx + 0x288);
    MEM32(ecx + 0xD4) = eax;
    edx = MEM32(ecx + 0x288);
    MEM32(ecx + 0xD8) = edx;
    eax = MEM32(ecx + 0x288);
    MEM32(ecx + 0x10C) = eax;
    edx = MEM32(ecx + 0x288);
    MEM32(ecx + 0x110) = edx;
    eax = MEM32(ecx + 0x288);
    MEM32(ecx + 0x144) = eax;
    edx = MEM32(ecx + 0x288);
    MEM32(ecx + 0x148) = edx;
    eax = MEM32(ecx + 0x288);
    MEM32(ecx + 0x17C) = eax;
    edx = MEM32(ecx + 0x288);
    MEM32(ecx + 0x180) = edx;
    eax = MEM32(ecx + 0x288);
    MEM32(ecx + 0x1B4) = eax;
    edx = MEM32(ecx + 0x288);
    MEM32(ecx + 0x1B8) = edx;
    eax = MEM32(ecx + 0x288);
    MEM32(ecx + 0x1EC) = eax;
    edx = MEM32(ecx + 0x288);
    MEM32(ecx + 0x1F0) = edx;
    eax = MEM32(ecx + 0x288);
    MEM32(ecx + 0x224) = eax;
    edx = MEM32(ecx + 0x288);
    MEM32(ecx + 0x228) = edx;
    eax = MEM32(ecx + 0x288);
    MEM32(ecx + 0x25C) = eax;
    edx = MEM32(ecx + 0x288);
    MEM32(ecx + 0x260) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00535C90
 * Original: 0x00535C90 - 0x00535D2D (157 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00535C90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00535C90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x64C374);
    esi = ecx;
    PUSH32(esp, 0x00535C9Eu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00535C9E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00535CA6u); RECOMP_ABI_CALL(0x00618750u, sub_00618750); /* call 0x00618750 */

loc_00535CA6: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x288) = eax;
    MEM16(esi + 0xC0) = LO16(ecx);
    eax = esi + 0xD8;
    edx = 8;

loc_00535CC0: ;
    MEM32(eax + -16) = ecx;
    edi = MEM32(esi + 0x288);
    MEM32(eax) = edi;
    edi = MEM32(esi + 0x288);
    MEM32(eax + -4) = edi;
    MEM32(eax + -12) = ecx;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x38;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00535CC0; /* jne: not equal / not zero */

loc_00535CDD: ;
    eax = MEM32(esi + 0x288);
    MEM32(esi + 0x28C) = eax;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x2A4) = ecx;
    MEM32(esi + 0x2B8) = ecx;
    POP32(esp, edi);
    MEM32(esi + 0x2A8) = eax;
    MEM32(esi + 0x2AC) = eax;
    MEM32(esi + 0x2B0) = 2;
    MEM32(esi + 0x2C0) = eax;
    MEM32(esi + 0x2BC) = eax;
    MEM32(esi + 0x2E4) = 1;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005E3890(); return; /* tail jmp 0x005E3890 */

}

/**
 * sub_00535D30
 * Original: 0x00535D30 - 0x00535D56 (38 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00535D30(void)
{

loc_00535D30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    esi = ecx;
    ecx = eax + esi + 0xC4;
    PUSH32(esp, 0x00535D49u); RECOMP_ABI_CALL(0x00539B20u, sub_00539B20); /* call 0x00539B20 */

loc_00535D49: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00535D51u); RECOMP_ABI_CALL(0x005E3940u, sub_005E3940); /* call 0x005E3940 */

loc_00535D51: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00535D60
 * Original: 0x00535D60 - 0x00535D86 (38 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00535D60(void)
{

loc_00535D60: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00535D83u); RECOMP_ABI_CALL(0x005E41C0u, sub_005E41C0); /* call 0x005E41C0 */

loc_00535D83: ;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00535D90
 * Original: 0x00535D90 - 0x00535D95 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00535D90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00535D90: ;
    g_seh_ebp = ebp; sub_005E3D50(); return; /* tail jmp 0x005E3D50 */

}

/**
 * sub_00535DA0
 * Original: 0x00535DA0 - 0x00535DB5 (21 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00535DA0(void)
{

loc_00535DA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00535DA8u); RECOMP_ABI_CALL(0x005E3EC0u, sub_005E3EC0); /* call 0x005E3EC0 */

loc_00535DA8: ;
    eax = MEM32(0x8602E0);
    MEM32(esi + 0x29C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00535DC0
 * Original: 0x00535DC0 - 0x0053600C (588 bytes, 186 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00535DC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00535DC0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00536005; /* jl: less (signed <) */

loc_00535DD1: ;
    ecx = MEM32(esi + 0x78);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x00535DE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00535DDAu); } /* indirect call */
    }

loc_00535DE0: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x74);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00535DEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00535DE9u); } /* indirect call */
    }

loc_00535DEF: ;
    ebp = MEM32(esp + 0x18);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00535DFFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00535DF9u); } /* indirect call */
    }

loc_00535DFF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64C440);
    PUSH32(esp, 0x00535E0Au); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00535E0A: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00535E14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00535E11u); } /* indirect call */
    }

loc_00535E14: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00536004; /* jl: less (signed <) */

loc_00535E1F: ;
    _fa = (uint32_t)(MEM32(esi + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x74), ebp (32-bit) */
    MEM8(esp + 0x14) = 0;
    MEM32(esp + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00536004; /* je: equal / zero */

loc_00535E35: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00535E98; /* jne: not equal / not zero */

loc_00535E39: ;
    _fa = (uint32_t)(MEM32(esi + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x78), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00535E93; /* je: equal / zero */

loc_00535E3E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 5 (32-bit) */
    eax = 0x2710;
    if (CMP_NE(_fa, _fb)) goto loc_00535E7B; /* jne: not equal / not zero */

loc_00535E48: ;
    PUSH32(esp, 0x64C434);
    PUSH32(esp, 0x00535E52u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_00535E52: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00535E6F; /* jne: not equal / not zero */

loc_00535E59: ;
    PUSH32(esp, 0x64C428);
    PUSH32(esp, 0x00535E63u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_00535E63: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = 0x61A8;
    if (CMP_EQ(_fa, _fb)) goto loc_00535E74; /* je: equal / zero */

loc_00535E6F: ;
    eax = 0x30D40;

loc_00535E74: ;
    _fb = (uint32_t)(0x2710) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2710;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00535E85;

loc_00535E7B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00535E85; /* jne: not equal / not zero */

loc_00535E80: ;
    eax = 0x1388;

loc_00535E85: ;
    PUSH32(esp, 0x1388);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00535E93u); RECOMP_ABI_CALL(0x005E5C50u, sub_005E5C50); /* call 0x005E5C50 */

loc_00535E93: ;
    MEM8(esp + 0x14) = 1;

loc_00535E98: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x64C434);
    PUSH32(esp, 0x00535EA4u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_00535EA4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00535EC1; /* jne: not equal / not zero */

loc_00535EAB: ;
    PUSH32(esp, 0x64C428);
    PUSH32(esp, 0x00535EB5u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_00535EB5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = 0x61A8;
    if (CMP_EQ(_fa, _fb)) goto loc_00535EC6; /* je: equal / zero */

loc_00535EC1: ;
    edi = 0x30D40;

loc_00535EC6: ;
    SET_LO8(eax, MEM8(esi + 0x2E9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00535ED6; /* je: equal / zero */

loc_00535ED0: ;
    _fb = (uint32_t)(0x2710) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x2710;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00535ED6: ;
    PUSH32(esp, 0x00535EDBu); RECOMP_ABI_CALL(0x00618750u, sub_00618750); /* call 0x00618750 */

loc_00535EDB: ;
    ebx = eax;
    SET_LO8(eax, MEM8(0x692E55));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0x13) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00535EF6; /* je: equal / zero */

loc_00535EED: ;
    SET_LO8(eax, MEM8(0x692E60));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00535F10; /* je: equal / zero */

loc_00535EF6: ;
    SET_LO8(eax, MEM8(esi + 0x2E9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00535F10; /* je: equal / zero */

loc_00535F00: ;
    PUSH32(esp, 0x00535F05u); RECOMP_ABI_CALL(0x00401660u, sub_00401660); /* call 0x00401660 */

loc_00535F05: ;
    MEM8(esp + 0x13) = 1;
    /* nop */

loc_00535F10: ;
    eax = MEM32(esi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00535F55; /* je: equal / zero */

loc_00535F17: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00535F40; /* je: equal / zero */

loc_00535F1B: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00535F26u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00535F20u); } /* indirect call */
    }

loc_00535F26: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x00535F32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00535F2Cu); } /* indirect call */
    }

loc_00535F32: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64C404);
    PUSH32(esp, 0x00535F3Du); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_00535F3D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00535F40: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00535F55; /* jne: not equal / not zero */

loc_00535F48: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00535F50u); RECOMP_ABI_CALL(0x005E4CC0u, sub_005E4CC0); /* call 0x005E4CC0 */

loc_00535F50: ;
    MEM8(esp + 0x1C) = 1;

loc_00535F55: ;
    eax = MEM32(esi + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00535FF0; /* je: equal / zero */

loc_00535F60: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00535F81; /* je: equal / zero */

loc_00535F67: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00535F81; /* jne: not equal / not zero */

loc_00535F6C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00535F81; /* jne: not equal / not zero */

loc_00535F71: ;
    PUSH32(esp, 0x00535F76u); RECOMP_ABI_CALL(0x00618750u, sub_00618750); /* call 0x00618750 */

loc_00535F76: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00535FDA; /* ja: above (unsigned >) */

loc_00535F7A: ;
    SET_LO8(eax, MEM8(esi + 0x70));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00535FDA; /* je: equal / zero */

loc_00535F81: ;
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00535F96; /* jne: not equal / not zero */

loc_00535F89: ;
    PUSH32(esp, 0x64C3EC);
    PUSH32(esp, 0x00535F93u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00535F93: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00535F96: ;
    eax = edi + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 0x21);
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x00535FACu); RECOMP_ABI_CALL(0x00611C50u, sub_00611C50); /* call 0x00611C50 */

loc_00535FAC: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00535FB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00535FB3u); } /* indirect call */
    }

loc_00535FB6: ;
    SET_LO8(eax, MEM8(0x692E55));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00535F10; /* je: equal / zero */

loc_00535FC3: ;
    SET_LO8(eax, MEM8(0x692E60));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00535F10; /* jne: not equal / not zero */

loc_00535FD0: ;
    PUSH32(esp, 0x00535FD5u); RECOMP_ABI_CALL(0x00401520u, sub_00401520); /* call 0x00401520 */

loc_00535FD5: ;
    goto loc_00535F10;

loc_00535FDA: ;
    PUSH32(esp, 0x64C3AC);
    PUSH32(esp, 0x00535FE4u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_00535FE4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xB);
    ecx = esi;
    PUSH32(esp, 0x00535FF0u); RECOMP_ABI_CALL(0x005E5A30u, sub_005E5A30); /* call 0x005E5A30 */

loc_00535FF0: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00536004; /* je: equal / zero */

loc_00535FFA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00536001u); RECOMP_ABI_CALL(0x004016A0u, sub_004016A0); /* call 0x004016A0 */

loc_00536001: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00536004: ;
    POP32(esp, ebp);

loc_00536005: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00536010
 * Original: 0x00536010 - 0x00536044 (52 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00536010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00536010: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00536018u); RECOMP_ABI_CALL(0x00618750u, sub_00618750); /* call 0x00618750 */

loc_00536018: ;
    ecx = esi;
    MEM32(esi + 0x288) = eax;
    PUSH32(esp, 0x00536025u); RECOMP_ABI_CALL(0x005E6060u, sub_005E6060); /* call 0x005E6060 */

loc_00536025: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00536039; /* jl: less (signed <) */

loc_0053602C: ;
    _fa = (uint32_t)(MEM32(esi + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x74), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00536039; /* jne: not equal / not zero */

loc_00536032: ;
    MEM16(esi + 0xC0) = MEM16(esi + 0xC0) + 1;
    _fa = (uint32_t)(MEM16(esi + 0xC0)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_00536039: ;
    eax = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xCC)); return; /* indirect tail jmp */

}

/**
 * sub_00536050
 * Original: 0x00536050 - 0x00536055 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00536050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00536050: ;
    g_seh_ebp = ebp; sub_005E3BE0(); return; /* tail jmp 0x005E3BE0 */

}

/**
 * sub_00536060
 * Original: 0x00536060 - 0x00536092 (50 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00536060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00536060: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x0053607Au); RECOMP_ABI_CALL(0x005E3D10u, sub_005E3D10); /* call 0x005E3D10 */

loc_0053607A: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x38);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi + edi + 0xC4;
    PUSH32(esp, 0x0053608Bu); RECOMP_ABI_CALL(0x00539B50u, sub_00539B50); /* call 0x00539B50 */

loc_0053608B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_005360A0
 * Original: 0x005360A0 - 0x005360B4 (20 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005360A0(void)
{

loc_005360A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF0);
    eax = eax + ecx + 0x70;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005360C0
 * Original: 0x005360C0 - 0x005360C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005360C0(void)
{

loc_005360C0: ;
    eax = 0x2160117;
    esp += 4; return; /* ret */

}

/**
 * sub_005360D0
 * Original: 0x005360D0 - 0x00536123 (83 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005360D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005360D0: ;
    PUSH32(esp, esi);
    eax = ecx;
    ecx = MEM32(esp + 8);
    edx = MEM32(eax + 0x10);
    esi = 1;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005360EE; /* jne: not equal / not zero */

loc_005360E5: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_005360EE: ;
    esi = MEM32(eax + 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xF0);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ecx + 0x5C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00536109; /* je: equal / zero */

loc_00536100: ;
    eax = 4;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00536109: ;
    esi = MEM32(eax + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053611A; /* jne: not equal / not zero */

loc_00536110: ;
    _fa = (uint32_t)(MEM32(ecx + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x58), edx (32-bit) */
    eax = 3;
    if (CMP_NE(_fa, _fb)) goto loc_0053611F; /* jne: not equal / not zero */

loc_0053611A: ;
    eax = 2;

loc_0053611F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00536130
 * Original: 0x00536130 - 0x005364A8 (888 bytes, 275 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00536130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00536130: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x68));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_005364A3; /* je: equal / zero */

loc_00536141: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00536464; /* jne: not equal / not zero */

loc_0053614C: ;
    eax = MEM32(esi + 0x2E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00536219; /* ja: above (unsigned >) */

loc_0053615B: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x5364A8); /* switch: 5 entries, 4 targets */
    if (_jt == 0x00536162u) goto loc_00536162;
    if (_jt == 0x0053619Fu) goto loc_0053619F;
    if (_jt == 0x005361DCu) goto loc_005361DC;
    if (_jt == 0x005364A3u) goto loc_005364A3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00536162: ;
    eax = MEM32(0x6C2BC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00536186; /* jne: not equal / not zero */

loc_0053616B: ;
    eax = MEM32(esi + 0x2C0);
    ecx = MEM32(esi + 0x2BC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64C580);
    PUSH32(esp, 0x00536183u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00536183: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00536186: ;
    eax = MEM32(0x6C2BC4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1E;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(0x6C2BC4) = edx;
    esp += 4; return; /* ret */

loc_0053619F: ;
    eax = MEM32(0x6C2BC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005361C3; /* jne: not equal / not zero */

loc_005361A8: ;
    edx = MEM32(esi + 0x2C0);
    eax = MEM32(esi + 0x2BC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x64C538);
    PUSH32(esp, 0x005361C0u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_005361C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005361C3: ;
    eax = MEM32(0x6C2BC0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xF;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(0x6C2BC0) = edx;
    esp += 4; return; /* ret */

loc_005361DC: ;
    eax = MEM32(0x6C2BBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00536200; /* jne: not equal / not zero */

loc_005361E5: ;
    edx = MEM32(esi + 0x2C0);
    eax = MEM32(esi + 0x2BC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x64C4F0);
    PUSH32(esp, 0x005361FDu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_005361FD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00536200: ;
    eax = MEM32(0x6C2BBC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xF;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(0x6C2BBC) = edx;
    esp += 4; return; /* ret */

loc_00536219: ;
    ebp = 1;
    edx = 0xF0;

loc_00536223: ;
    ecx = ebp;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00536260; /* je: equal / zero */

loc_00536233: ;
    eax = MEM32(esi + 4);
    eax = MEM32(eax + edx + 0x58);
    eax = ~eax;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00536260; /* je: equal / zero */

loc_00536240: ;
    edi = 1;

loc_00536245: ;
    ebx = 1;
    ecx = edi;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0053625A; /* je: equal / zero */

loc_00536252: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053636C; /* jne: not equal / not zero */

loc_0053625A: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00536245; /* jl: less (signed <) */

loc_00536260: ;
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xF0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x780 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00536223; /* jl: less (signed <) */

loc_0053626F: ;
    ebp = 1;

loc_00536274: ;
    eax = MEM32(esi + 0x10);
    edx = 1;
    ecx = ebp;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00536353; /* je: equal / zero */

loc_00536288: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005362A8; /* je: equal / zero */

loc_0053628E: ;
    ecx = MEM32(esi + 4);
    ebx = MEM32(ecx + 0x14C);
    ebx = ebx & MEM32(ecx + 0x148);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx & edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005362A8; /* je: equal / zero */

loc_005362A3: ;
    edi = 1;

loc_005362A8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005362C2; /* je: equal / zero */

loc_005362AC: ;
    ecx = MEM32(esi + 4);
    ebx = MEM32(ecx + 0x23C);
    ebx = ebx & MEM32(ecx + 0x238);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx & edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005362C2; /* je: equal / zero */

loc_005362C1: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_005362C2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005362DC; /* je: equal / zero */

loc_005362C6: ;
    ecx = MEM32(esi + 4);
    ebx = MEM32(ecx + 0x32C);
    ebx = ebx & MEM32(ecx + 0x328);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx & edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005362DC; /* je: equal / zero */

loc_005362DB: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_005362DC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005362F6; /* je: equal / zero */

loc_005362E0: ;
    ecx = MEM32(esi + 4);
    ebx = MEM32(ecx + 0x41C);
    ebx = ebx & MEM32(ecx + 0x418);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx & edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005362F6; /* je: equal / zero */

loc_005362F5: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_005362F6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00536310; /* je: equal / zero */

loc_005362FA: ;
    ecx = MEM32(esi + 4);
    ebx = MEM32(ecx + 0x50C);
    ebx = ebx & MEM32(ecx + 0x508);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx & edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00536310; /* je: equal / zero */

loc_0053630F: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00536310: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0053632A; /* je: equal / zero */

loc_00536314: ;
    ecx = MEM32(esi + 4);
    ebx = MEM32(ecx + 0x5FC);
    ebx = ebx & MEM32(ecx + 0x5F8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx & edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0053632A; /* je: equal / zero */

loc_00536329: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0053632A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00536344; /* jns: not sign (positive) */

loc_0053632E: ;
    ecx = MEM32(esi + 4);
    ebx = MEM32(ecx + 0x6EC);
    ebx = ebx & MEM32(ecx + 0x6E8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx & edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00536344; /* je: equal / zero */

loc_00536343: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00536344: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00536353; /* jle: less or equal (signed <=) */

loc_00536349: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00536353u); RECOMP_ABI_CALL(0x005E5B10u, sub_005E5B10); /* call 0x005E5B10 */

loc_00536353: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00536274; /* jl: less (signed <) */

loc_0053635D: ;
    POP32(esp, edi);
    MEM32(esi + 0x2E4) = 1;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0053636C: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x64C4B4);
    PUSH32(esp, 0x00536378u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00536378: ;
    eax = MEM32(0x679680);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x679680) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(0x679682));
    MEM32(0x679680) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(0x679682));
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x679680) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(0x679682));
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x679680) = eax;
    MEM32(esi + 0x2BC) = ebp;
    MEM32(esi + 0x2C0) = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x2B8) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(esi + 0x2C6) = LO16(eax);
    MEM32(esi + 0x2C8) = eax;
    MEM32(esi + 0x2D0) = eax;
    MEM32(esi + 0x2CC) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 2;
    MEM16(esi + 0x2C4) = LO16(edx);
    PUSH32(esp, ecx);
    MEM16(esi + 0x2D4) = LO16(edx);
    MEM16(esi + 0x2D6) = LO16(eax);
    MEM32(esi + 0x2D8) = eax;
    MEM32(esi + 0x2E0) = eax;
    MEM32(esi + 0x2DC) = eax;
    PUSH32(esp, edi);
    MEM32(esi + 0x2E4) = edx;
    edx = MEM32(esi);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xF8); PUSH32(esp, 0x0053645Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00536459u); } /* indirect call */
    }

loc_0053645F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00536464: ;
    eax = MEM32(esi + 0x2B0);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_005364A3; /* je: equal / zero */

loc_0053646F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005364A3; /* jne: not equal / not zero */

loc_00536472: ;
    eax = MEM32(0x6C2BB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053648F; /* jne: not equal / not zero */

loc_0053647B: ;
    eax = MEM32(esi + 0x2AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x64C490);
    PUSH32(esp, 0x0053648Cu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0053648C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0053648F: ;
    eax = MEM32(0x6C2BB8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1E;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(0x6C2BB8) = edx;

loc_005364A3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_005364C0
 * Original: 0x005364C0 - 0x005364DE (30 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005364C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005364C0: ;
    ecx = MEM32(0x6C2C40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005364DB; /* je: equal / zero */

loc_005364CA: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005364DBu); RECOMP_ABI_CALL(0x00538560u, sub_00538560); /* call 0x00538560 */

loc_005364DB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005364E0
 * Original: 0x005364E0 - 0x00536628 (328 bytes, 94 insns)
 * Category: game_debug
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005364E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005364E0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x2B0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2B0), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00536503; /* je: equal / zero */

loc_005364EF: ;
    PUSH32(esp, 0x64C5FC);
    PUSH32(esp, 0x005364F9u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005364F9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00536503: ;
    edx = MEM32(esp + 0x3C);
    ecx = MEM32(esi + 0x2A4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM8(esp + 8) = LO8(eax);
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM8(esp + 0x25) = LO8(eax);
    MEM8(esp + 0x24) = LO8(eax);
    eax = MEM32(esi + 0x10);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(esp + 0x2C) = eax;
    eax = ecx;
    edi = ecx;
    edi = edi >> 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFF0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = ecx;
    edi = edi << 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFF00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = eax;
    edi = eax;
    edi = edi >> 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFF0000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = eax;
    eax = eax & 0xFF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi << 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    SET_LO16(eax, MEM16(edx + 2));
    SET_LO16(edx, ZX8(HI8(eax)));
    SET_HI8(edx, LO8(eax));
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x30) = ecx;
    MEM8(esp + 9) = 0x3E;
    MEM16(esp + 0xA) = 0x30;
    eax = edx;
    SET_LO16(ecx, ZX8(HI8(eax)));
    SET_HI8(ecx, LO8(eax));
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    POP32(esp, edi);
    MEM16(esp + 0x30) = LO16(ecx);
    if (CMP_A(_fa, _fb)) goto loc_00536609; /* ja: above (unsigned >) */

loc_005365A9: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x536628); /* switch: 5 entries, 5 targets */
    if (_jt == 0x005365B0u) goto loc_005365B0;
    if (_jt == 0x005365B7u) goto loc_005365B7;
    if (_jt == 0x005365D5u) goto loc_005365D5;
    if (_jt == 0x005365E6u) goto loc_005365E6;
    if (_jt == 0x005365F7u) goto loc_005365F7;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_005365B0: ;
    MEM8(esp + 0x20) = 1;
    goto loc_00536609;

loc_005365B7: ;
    PUSH32(esp, 0x632B88);
    PUSH32(esp, 0x005365C1u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005365C1: ;
    eax = 2;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x2B0) = eax;
    MEM8(esp + 0x20) = LO8(eax);
    goto loc_00536613;

loc_005365D5: ;
    PUSH32(esp, 0x64C5B8);
    PUSH32(esp, 0x005365DFu); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005365DF: ;
    MEM8(esp + 0x24) = 3;
    goto loc_00536606;

loc_005365E6: ;
    PUSH32(esp, 0x632B2C);
    PUSH32(esp, 0x005365F0u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005365F0: ;
    MEM8(esp + 0x24) = 5;
    goto loc_00536606;

loc_005365F7: ;
    PUSH32(esp, 0x632AFC);
    PUSH32(esp, 0x00536601u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_00536601: ;
    MEM8(esp + 0x24) = 4;

loc_00536606: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00536609: ;
    MEM32(esi + 0x2B0) = 2;

loc_00536613: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00536621u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053661Eu); } /* indirect call */
    }

loc_00536621: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00536640
 * Original: 0x00536640 - 0x00536897 (599 bytes, 145 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00536640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00536640: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(esp + 0x84));
    SET_LO8(edx, MEM8(0x6C2C60));
    MEM8(esp + 0x1C) = LO8(eax);
    SET_LO8(eax, MEM8(0x6C2E88));
    MEM8(esp + 0x1D) = LO8(edx);
    SET_LO8(edx, MEM8(0x6C2E8C));
    MEM8(esp + 0x1E) = LO8(eax);
    SET_LO8(eax, MEM8(0x6C2E90));
    MEM8(esp + 0x1F) = LO8(edx);
    SET_LO8(edx, MEM8(0x6C2EA0));
    MEM8(esp + 0x20) = LO8(eax);
    SET_LO8(eax, MEM8(0x6C2EC0));
    MEM8(esp + 0x21) = LO8(edx);
    SET_LO8(edx, MEM8(0x6C2EC4));
    MEM8(esp + 0x22) = LO8(eax);
    SET_LO8(eax, MEM8(0x6C2EA8));
    MEM8(esp + 0x23) = LO8(edx);
    SET_LO8(edx, MEM8(0x6C2EA4));
    MEM8(esp + 0x24) = LO8(eax);
    SET_LO8(eax, MEM8(0x6C2EAC));
    MEM8(esp + 0x25) = LO8(edx);
    SET_LO8(edx, MEM8(0x6C2EB0));
    MEM8(esp + 0x26) = LO8(eax);
    SET_LO8(eax, MEM8(0x6C2EB8));
    MEM8(esp + 0x27) = LO8(edx);
    SET_LO8(edx, MEM8(0x6C2FE8));
    MEM8(esp + 0x29) = LO8(eax);
    SET_LO8(eax, MEM8(0x6C2EB4));
    MEM8(esp + 0x28) = LO8(edx);
    SET_LO8(edx, MEM8(0x6C2EC1));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(esp + 4) = LO8(ebx);
    MEM32(esp + 8) = ebx;
    MEM32(esp + 0xC) = ebx;
    MEM8(esp + 5) = 0x23;
    MEM16(esp + 6) = 0x80;
    MEM16(esp + 0x30) = LO16(ebx);
    eax = eax & 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) - 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(0x6C2FE9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x6C2FE9), LO8(ebx) (8-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) | LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(0x6C2FEA)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x6C2FEA), LO8(ebx) (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) - 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(0x6C2FEB)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x6C2FEB), LO8(ebx) (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) - 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(0x6C2FEC)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x6C2FEC), LO8(ebx) (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) - 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(0x6C2FED)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x6C2FED), LO8(ebx) (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) - 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esp + 0x2E) = LO8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00536760: ;
    SET_LO8(edx, MEM8(eax + 0x6C2EE0));
    MEM8(esp + eax + 0x32) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00536760; /* jne: not equal / not zero */

loc_0053676F: ;
    SET_LO8(edx, MEM8(0x6C3018));
    SET_LO8(eax, MEM8(0x6C2FF4));
    MEM8(esp + 0x7A) = LO8(edx);
    SET_LO8(edx, MEM8(0x6C3024));
    MEM8(esp + 0x73) = LO8(edx);
    SET_LO8(edx, MEM8(0x6C3048));
    MEM8(esp + 0x7B) = LO8(edx);
    edx = MEM32(0x6C304C);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x72) = LO8(eax);
    SET_LO16(eax, MEM16(esp + 0x30));
    SET_LO16(eax, LO16(eax) | MEM16(0x6C301C));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    SET_LO16(eax, LO16(eax) | LO16(edx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    SET_LO8(edx, MEM8(0x6C3054));
    MEM8(esp + 0x74) = LO8(edx);
    SET_LO8(edx, MEM8(0x6C3078));
    MEM8(esp + 0x7C) = LO8(edx);
    edx = MEM32(0x6C307C);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO16(eax, LO16(eax) | LO16(edx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    SET_LO8(edx, MEM8(0x6C3084));
    MEM8(esp + 0x75) = LO8(edx);
    SET_LO8(edx, MEM8(0x6C30A8));
    MEM8(esp + 0x7D) = LO8(edx);
    edx = MEM32(0x6C30AC);
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO16(eax, LO16(eax) | LO16(edx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    SET_LO8(edx, MEM8(0x6C30B4));
    MEM8(esp + 0x76) = LO8(edx);
    SET_LO8(edx, MEM8(0x6C30D8));
    MEM8(esp + 0x7E) = LO8(edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(0x6C30DC));
    SET_LO16(eax, LO16(eax) | LO16(edx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    SET_LO8(edx, MEM8(0x6C30E4));
    MEM8(esp + 0x77) = LO8(edx);
    SET_LO8(edx, MEM8(0x6C3108));
    MEM8(esp + 0x7F) = LO8(edx);
    edx = MEM32(0x6C310C);
    edx = edx << 0xA;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO16(eax, LO16(eax) | LO16(edx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    SET_LO8(edx, MEM8(0x6C3114));
    MEM8(esp + 0x78) = LO8(edx);
    SET_LO8(edx, MEM8(0x6C3138));
    MEM8(esp + 0x80) = LO8(edx);
    edx = MEM32(0x6C313C);
    edx = edx << 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO16(eax, LO16(eax) | LO16(edx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    SET_LO8(edx, MEM8(0x6C3144));
    MEM8(esp + 0x79) = LO8(edx);
    SET_LO8(edx, MEM8(0x6C3168));
    MEM8(esp + 0x81) = LO8(edx);
    edx = MEM32(0x6C316C);
    edx = edx << 0xE;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO16(eax, LO16(eax) | LO16(edx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    edx = MEM32(esp + 0x8C);
    edx = edx & 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 8;
    MEM16(esp + 0x34) = LO16(eax);
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0053688Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053688Au); } /* indirect call */
    }

loc_0053688D: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005368A0
 * Original: 0x005368A0 - 0x005368D3 (51 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005368A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005368A0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005368BE; /* je: equal / zero */

loc_005368A8: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x62E454);
    PUSH32(esp, 0x005368B8u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_005368B8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_005368BE: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x62DEF8);
    PUSH32(esp, 0x005368CDu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_005368CD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_005368E0
 * Original: 0x005368E0 - 0x00536994 (180 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005368E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005368E0: ;
    eax = MEM32(0x663044);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    PUSH32(esp, ebx);
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0053698D; /* je: equal / zero */

loc_005368F5: ;
    ecx = MEM32(ebx + 0x60);
    eax = MEM32(ebx + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    PUSH32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_00536920; /* jae: above or equal (unsigned >=) */

loc_00536900: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00536920; /* je: equal / zero */

loc_00536904: ;
    esi = MEM32(ebx + 0x290);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x290) = esi;
    ecx = MEM32(0x663044);
    eax = esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00536926; /* jl: less (signed <) */

loc_00536920: ;
    MEM32(ebx + 0x290) = edx;

loc_00536926: ;
    _fa = (uint32_t)(MEM32(ebx + 0x290)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x290), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053698C; /* jne: not equal / not zero */

loc_0053692E: ;
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00536938u); RECOMP_ABI_CALL(0x005349E0u, sub_005349E0); /* call 0x005349E0 */

loc_00536938: ;
    esi = MEM32(esp + 0x68);
    eax = MEM32(esp + 0x6C);
    MEM8(esp + 0xD) = 0x22;
    MEM16(esp + 0xE) = 0x54;
    ecx = 0xB;
    edi = esp + 0x34;
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
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    SET_LO16(eax, MEM16(eax + 8));
    MEM32(esp + 0x2C) = edx;
    MEM16(esp + 0x30) = LO16(eax);
    eax = MEM32(0x6C38B4);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(eax + 8);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = esp + 0xC;
    edx = ~edx;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0053698Bu); RECOMP_ABI_CALL(0x005E5750u, sub_005E5750); /* call 0x005E5750 */

loc_0053698B: ;
    POP32(esp, edi);

loc_0053698C: ;
    POP32(esp, esi);

loc_0053698D: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_005369A0
 * Original: 0x005369A0 - 0x005369E8 (72 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005369A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005369A0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x1C) = LO8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    eax = MEM32(ecx);
    MEM8(esp) = LO8(edx);
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = edx;
    MEM8(esp + 1) = 0x24;
    MEM16(esp + 2) = 0x20;
    if (CMP_NE(_fa, _fb)) goto loc_005369DA; /* jne: not equal / not zero */

loc_005369CA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 4;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x190); PUSH32(esp, 0x005369D6u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x005369D0u); } /* indirect call */
    }

loc_005369D6: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_005369DA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edx = esp + 4;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x005369E4u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x005369E1u); } /* indirect call */
    }

loc_005369E4: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005369F0
 * Original: 0x005369F0 - 0x00536A38 (72 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005369F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005369F0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x1C) = LO8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    eax = MEM32(ecx);
    MEM8(esp) = LO8(edx);
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = edx;
    MEM8(esp + 1) = 0x25;
    MEM16(esp + 2) = 0x20;
    if (CMP_NE(_fa, _fb)) goto loc_00536A2A; /* jne: not equal / not zero */

loc_00536A1A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 4;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x194); PUSH32(esp, 0x00536A26u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00536A20u); } /* indirect call */
    }

loc_00536A26: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00536A2A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edx = esp + 4;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00536A34u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00536A31u); } /* indirect call */
    }

loc_00536A34: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00536A40
 * Original: 0x00536A40 - 0x00536A79 (57 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00536A40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00536A40: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp) = LO8(eax);
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    eax = 0x28;
    MEM8(esp + 1) = LO8(eax);
    MEM16(esp + 2) = LO16(eax);
    SET_LO8(eax, MEM8(esp + 0x2C));
    MEM8(esp + 0x1C) = LO8(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 4;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00536A73u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00536A70u); } /* indirect call */
    }

loc_00536A73: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00536A80
 * Original: 0x00536A80 - 0x00536ACE (78 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00536A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00536A80: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(edx, MEM8(esp + 0x24));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x1C) = LO8(edx);
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), eax (32-bit) */
    edx = MEM32(ecx);
    MEM8(esp) = LO8(eax);
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM8(esp + 1) = 0x29;
    MEM16(esp + 2) = 0x20;
    if (CMP_NE(_fa, _fb)) goto loc_00536ABE; /* jne: not equal / not zero */

loc_00536AAC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x19C); PUSH32(esp, 0x00536AB8u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00536AB2u); } /* indirect call */
    }

loc_00536AB8: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00536ABE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 4;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00536AC8u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00536AC5u); } /* indirect call */
    }

loc_00536AC8: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00536AD0
 * Original: 0x00536AD0 - 0x00536B1E (78 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00536AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00536AD0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(edx, MEM8(esp + 0x24));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x1C) = LO8(edx);
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), eax (32-bit) */
    edx = MEM32(ecx);
    MEM8(esp) = LO8(eax);
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM8(esp + 1) = 0x2A;
    MEM16(esp + 2) = 0x20;
    if (CMP_NE(_fa, _fb)) goto loc_00536B0E; /* jne: not equal / not zero */

loc_00536AFC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1A0); PUSH32(esp, 0x00536B08u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00536B02u); } /* indirect call */
    }

loc_00536B08: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00536B0E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 4;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00536B18u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00536B15u); } /* indirect call */
    }

loc_00536B18: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00536B20
 * Original: 0x00536B20 - 0x00536B92 (114 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00536B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00536B20: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00536B8C; /* jne: not equal / not zero */

loc_00536B2E: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x34));
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x3C);
    MEM32(esp + 0x28) = esi;
    esi = MEM32(ecx + 0x288);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x2C) = esi;
    POP32(esp, esi);
    MEM8(esp + 0x20) = LO8(eax);
    MEM8(esp + 0x21) = LO8(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    eax = MEM32(ecx);
    MEM8(esp + 4) = LO8(edx);
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = edx;
    MEM8(esp + 5) = 0x2C;
    MEM16(esp + 6) = 0x28;
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00536B82; /* jne: not equal / not zero */

loc_00536B70: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 4;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1A4); PUSH32(esp, 0x00536B7Cu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00536B76u); } /* indirect call */
    }

loc_00536B7C: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00536B82: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edx = esp + 4;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00536B8Cu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00536B89u); } /* indirect call */
    }

loc_00536B8C: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00536BA0
 * Original: 0x00536BA0 - 0x00536C04 (100 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00536BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00536BA0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x30);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ecx + 0x288);
    MEM32(esp + 0x24) = edx;
    SET_LO8(edx, MEM8(esp + 0x2C));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x1D) = LO8(edx);
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), eax (32-bit) */
    edx = MEM32(ecx);
    MEM8(esp) = LO8(eax);
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM8(esp + 0x1C) = LO8(eax);
    MEM8(esp + 1) = 0x2D;
    MEM16(esp + 2) = 0x28;
    if (CMP_NE(_fa, _fb)) goto loc_00536BF4; /* jne: not equal / not zero */

loc_00536BE2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1A8); PUSH32(esp, 0x00536BEEu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00536BE8u); } /* indirect call */
    }

loc_00536BEE: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00536BF4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 4;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00536BFEu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00536BFBu); } /* indirect call */
    }

loc_00536BFE: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00536C10
 * Original: 0x00536C10 - 0x00536C7C (108 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00536C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00536C10: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00536C76; /* jne: not equal / not zero */

loc_00536C1E: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x34);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x24) = esi;
    esi = MEM32(ecx + 0x288);
    MEM8(esp + 0x20) = LO8(eax);
    MEM32(esp + 0x28) = esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    eax = MEM32(ecx);
    MEM8(esp + 4) = LO8(edx);
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = edx;
    MEM8(esp + 0x21) = LO8(edx);
    MEM8(esp + 5) = 0x2E;
    MEM16(esp + 6) = 0x28;
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00536C6C; /* jne: not equal / not zero */

loc_00536C5A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 4;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1AC); PUSH32(esp, 0x00536C66u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00536C60u); } /* indirect call */
    }

loc_00536C66: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00536C6C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edx = esp + 4;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00536C76u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00536C73u); } /* indirect call */
    }

loc_00536C76: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00536C80
 * Original: 0x00536C80 - 0x00536D27 (167 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00536C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00536C80: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00536C98; /* je: equal / zero */

loc_00536C8F: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00536D20; /* jne: not equal / not zero */

loc_00536C98: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x3C);
    MEM8(esp + 0x20) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esi + 0x288);
    MEM8(esp + 4) = 0;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    MEM8(esp + 0x21) = LO8(eax);
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = ecx;
    MEM8(esp + 5) = 0x2F;
    MEM16(esp + 6) = 0x2C;
    if (CMP_EQ(_fa, _fb)) goto loc_00536CFB; /* je: equal / zero */

loc_00536CE3: ;
    eax = MEM32(0x697B88);
    ecx = MEM32(eax + 4);
    eax = MEM32(ecx + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0xA);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x174); PUSH32(esp, 0x00536CFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00536CF5u); } /* indirect call */
    }

loc_00536CFB: ;
    eax = MEM32(esi + 8);
    edx = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esi;
    eax = esp + 4;
    if (CMP_NE(_fa, _fb)) goto loc_00536D1A; /* jne: not equal / not zero */

loc_00536D0A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1B0); PUSH32(esp, 0x00536D13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00536D0Du); } /* indirect call */
    }

loc_00536D13: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_00536D1A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00536D20u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00536D1Du); } /* indirect call */
    }

loc_00536D20: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00536D30
 * Original: 0x00536D30 - 0x00536DB8 (136 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00536D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00536D30: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00536D42; /* je: equal / zero */

loc_00536D3E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00536DB2; /* jge: greater or equal (signed >=) */

loc_00536D42: ;
    MEM8(esp + 0x28) = LO8(edx);
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, esi);
    esi = MEM32(edx);
    MEM32(esp + 0x20) = esi;
    esi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(ecx + 0x288);
    MEM32(esp + 0x24) = esi;
    MEM32(esp + 0x34) = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ecx);
    MEM8(esp + 4) = 0;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    MEM8(esp + 5) = 0x30;
    MEM16(esp + 6) = 0x34;
    POP32(esp, esi);
    edx = esp;
    if (CMP_NE(_fa, _fb)) goto loc_00536DAC; /* jne: not equal / not zero */

loc_00536D9D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1B4); PUSH32(esp, 0x00536DA6u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00536DA0u); } /* indirect call */
    }

loc_00536DA6: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00536DAC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00536DB2u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00536DAFu); } /* indirect call */
    }

loc_00536DB2: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00536DC0
 * Original: 0x00536DC0 - 0x00536E3A (122 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00536DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00536DC0: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00536E34; /* jne: not equal / not zero */

loc_00536DCE: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x38));
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x40);
    MEM32(esp + 0x28) = esi;
    esi = MEM32(esp + 0x44);
    MEM32(esp + 0x2C) = esi;
    esi = MEM32(ecx + 0x288);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x30) = esi;
    POP32(esp, esi);
    MEM8(esp + 0x20) = LO8(eax);
    MEM8(esp + 0x21) = LO8(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    eax = MEM32(ecx);
    MEM8(esp + 4) = LO8(edx);
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = edx;
    MEM8(esp + 5) = 0x31;
    MEM16(esp + 6) = 0x2C;
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00536E2A; /* jne: not equal / not zero */

loc_00536E18: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 4;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1B8); PUSH32(esp, 0x00536E24u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00536E1Eu); } /* indirect call */
    }

loc_00536E24: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_00536E2A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edx = esp + 4;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00536E34u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00536E31u); } /* indirect call */
    }

loc_00536E34: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00536E40
 * Original: 0x00536E40 - 0x00536EBA (122 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00536E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00536E40: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00536EB4; /* jne: not equal / not zero */

loc_00536E4E: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x34));
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x40);
    MEM32(esp + 0x28) = esi;
    esi = MEM32(ecx + 0x288);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x25) = LO8(ebx);
    SET_LO8(ebx, MEM8(esp + 0x3C));
    MEM32(esp + 0x2C) = esi;
    POP32(esp, esi);
    MEM8(esp + 0x20) = LO8(eax);
    MEM8(esp + 0x22) = LO8(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    eax = MEM32(ecx);
    MEM8(esp + 4) = LO8(edx);
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = edx;
    MEM8(esp + 5) = 0x32;
    MEM16(esp + 6) = 0x28;
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00536EAA; /* jne: not equal / not zero */

loc_00536E98: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 4;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1BC); PUSH32(esp, 0x00536EA4u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00536E9Eu); } /* indirect call */
    }

loc_00536EA4: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_00536EAA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edx = esp + 4;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00536EB4u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00536EB1u); } /* indirect call */
    }

loc_00536EB4: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00536EC0
 * Original: 0x00536EC0 - 0x00536F3A (122 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00536EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00536EC0: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00536F34; /* jne: not equal / not zero */

loc_00536ECE: ;
    MEM8(esp + 0x1C) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x30));
    MEM8(esp + 0x1D) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x34));
    MEM8(esp + 0x1E) = LO8(edx);
    edx = MEM32(esp + 0x38);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ecx + 0x288);
    MEM32(esp + 0x24) = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ecx);
    MEM8(esp) = 0;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0;
    MEM8(esp + 1) = 0x33;
    MEM16(esp + 2) = 0x28;
    edx = esp;
    if (CMP_NE(_fa, _fb)) goto loc_00536F2E; /* jne: not equal / not zero */

loc_00536F1F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C0); PUSH32(esp, 0x00536F28u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00536F22u); } /* indirect call */
    }

loc_00536F28: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_00536F2E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00536F34u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00536F31u); } /* indirect call */
    }

loc_00536F34: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00536F40
 * Original: 0x00536F40 - 0x00536FCF (143 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00536F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00536F40: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00536FC9; /* jne: not equal / not zero */

loc_00536F4E: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x48);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    MEM32(esp + 0x28) = edi;
    edi = MEM32(esi + 4);
    MEM32(esp + 0x2C) = edi;
    edi = MEM32(esi + 8);
    esi = MEM32(esi + 0xC);
    MEM32(esp + 0x34) = esi;
    esi = MEM32(esp + 0x50);
    MEM32(esp + 0x30) = edi;
    edi = MEM32(esi);
    MEM32(esp + 0x38) = edi;
    edi = MEM32(esi + 4);
    esi = MEM32(esi + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x3C) = edi;
    POP32(esp, edi);
    MEM8(esp + 0x20) = LO8(eax);
    MEM32(esp + 0x3C) = esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    eax = MEM32(ecx);
    MEM8(esp + 4) = LO8(edx);
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = edx;
    MEM8(esp + 5) = 0x36;
    MEM16(esp + 6) = 0x3C;
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00536FBF; /* jne: not equal / not zero */

loc_00536FAD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 4;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1D4); PUSH32(esp, 0x00536FB9u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00536FB3u); } /* indirect call */
    }

loc_00536FB9: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00536FBF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edx = esp + 4;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00536FC9u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00536FC6u); } /* indirect call */
    }

loc_00536FC9: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00536FD0
 * Original: 0x00536FD0 - 0x00537038 (104 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00536FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00536FD0: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00537032; /* jne: not equal / not zero */

loc_00536FDE: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x30));
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x38);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x28) = esi;
    POP32(esp, esi);
    MEM8(esp + 0x20) = LO8(eax);
    MEM8(esp + 0x21) = LO8(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    eax = MEM32(ecx);
    MEM8(esp + 4) = LO8(edx);
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = edx;
    MEM8(esp + 5) = 0x37;
    MEM16(esp + 6) = 0x24;
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00537028; /* jne: not equal / not zero */

loc_00537016: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 4;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1D8); PUSH32(esp, 0x00537022u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0053701Cu); } /* indirect call */
    }

loc_00537022: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00537028: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edx = esp + 4;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00537032u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0053702Fu); } /* indirect call */
    }

loc_00537032: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00537040
 * Original: 0x00537040 - 0x005370B8 (120 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00537040: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(esp + 0x50));
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 8);
    PUSH32(esp, esi);
    MEM8(esp + 0x25) = LO8(eax);
    eax = MEM32(esp + 0x5C);
    esi = esp + 0x27;
    MEM8(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    MEM8(esp + 0x24) = LO8(ebx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00537073: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(esi + eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00537073; /* jne: not equal / not zero */

loc_0053707D: ;
    SET_LO8(edx, MEM8(esp + 0x54));
    eax = MEM32(ecx);
    POP32(esp, esi);
    MEM8(esp + 0x22) = LO8(edx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM8(esp + 5) = 0x38;
    MEM16(esp + 6) = 0x48;
    POP32(esp, ebx);
    edx = esp;
    if (CMP_NE(_fa, _fb)) goto loc_005370AC; /* jne: not equal / not zero */

loc_0053709D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1DC); PUSH32(esp, 0x005370A6u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x005370A0u); } /* indirect call */
    }

loc_005370A6: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_005370AC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x005370B2u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x005370AFu); } /* indirect call */
    }

loc_005370B2: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_005370C0
 * Original: 0x005370C0 - 0x00537110 (80 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005370C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005370C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    MEM8(esp + 8) = LO8(ecx);
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = ecx;
    MEM8(esp + 9) = 0x39;
    MEM16(esp + 0xA) = 0xFC;
    ecx = 0x37;
    edi = esp + 0x24;
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
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFEu);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00537108u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00537105u); } /* indirect call */
    }

loc_00537108: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00537110
 * Original: 0x00537110 - 0x00537144 (52 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00537110: ;
    edx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00537140; /* jne: not equal / not zero */

loc_0053711C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFEu);
    edx = esp + 4;
    MEM8(esp + 4) = LO8(eax);
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    MEM8(esp + 9) = 0x3A;
    MEM16(esp + 0xA) = 0x1C;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00537140u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0053713Du); } /* indirect call */
    }

loc_00537140: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00537150
 * Original: 0x00537150 - 0x00537184 (52 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00537150: ;
    edx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00537180; /* jne: not equal / not zero */

loc_0053715C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFEu);
    edx = esp + 4;
    MEM8(esp + 4) = LO8(eax);
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    MEM8(esp + 9) = 0x3B;
    MEM16(esp + 0xA) = 0x1C;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00537180u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0053717Du); } /* indirect call */
    }

loc_00537180: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00537190
 * Original: 0x00537190 - 0x005371E1 (81 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00537190: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x6C2C4C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x6C2C4C) = eax;
    MEM32(esp + 0x20) = eax;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), edx (32-bit) */
    eax = MEM32(ecx);
    MEM8(esp) = LO8(edx);
    MEM8(esp + 1) = 0x40;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = edx;
    MEM16(esp + 2) = 0x24;
    if (CMP_NE(_fa, _fb)) goto loc_005371D3; /* jne: not equal / not zero */

loc_005371C3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 4;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C8); PUSH32(esp, 0x005371CFu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x005371C9u); } /* indirect call */
    }

loc_005371CF: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_005371D3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edx = esp + 4;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x005371DDu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x005371DAu); } /* indirect call */
    }

loc_005371DD: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005371F0
 * Original: 0x005371F0 - 0x00537256 (102 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005371F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005371F0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(esp + 0x2C));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x28));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x20) = LO8(eax);
    eax = MEM32(ecx + 8);
    MEM8(esp + 0x22) = LO8(ebx);
    SET_LO8(ebx, MEM8(esp + 0x2C));
    MEM8(esp + 0x21) = LO8(eax);
    MEM8(esp + 0x23) = LO8(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    eax = MEM32(ecx);
    MEM8(esp + 4) = LO8(edx);
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = edx;
    MEM8(esp + 5) = 0x2B;
    MEM16(esp + 6) = 0x20;
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00537246; /* jne: not equal / not zero */

loc_00537234: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 4;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C4); PUSH32(esp, 0x00537240u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0053723Au); } /* indirect call */
    }

loc_00537240: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00537246: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edx = esp + 4;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00537250u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0053724Du); } /* indirect call */
    }

loc_00537250: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00537260
 * Original: 0x00537260 - 0x005372DC (124 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00537260: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00537281; /* jne: not equal / not zero */

loc_0053726B: ;
    _fa = (uint32_t)(MEM32(esi + 0x298)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x298), 0x18 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005372D8; /* jl: less (signed <) */

loc_00537274: ;
    PUSH32(esp, 0x64C630);
    PUSH32(esp, 0x0053727Eu); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_0053727E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00537281: ;
    eax = MEM32(esi + 0x298);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005372D8; /* je: equal / zero */

loc_0053728B: ;
    eax = MEM32(esi + 0x294);
    MEM8(eax + 1) = 0x34;
    edx = MEM32(esi + 0x294);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 0x298));
    SET_LO16(ecx, (uint32_t)((int32_t)LO16(ecx) * (int32_t)0x14));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFEu);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edx + 2) = LO16(ecx);
    eax = MEM32(esi + 0x294);
    ecx = MEM32(esi + 0x288);
    MEM32(eax + 0x1C) = ecx;
    eax = MEM32(esi + 0x294);
    edx = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 0x298) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x005372D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005372D5u); } /* indirect call */
    }

loc_005372D8: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005372E0
 * Original: 0x005372E0 - 0x00537335 (85 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005372E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005372E0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;
    edx = MEM32(eax + 0x288);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp) = LO8(ecx);
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(eax + 0x28C);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(esp + 0x1C) = edx;
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = esp;
    MEM8(esp + 1) = 0x35;
    MEM16(esp + 2) = 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0053732Fu); RECOMP_ABI_CALL(0x005E5750u, sub_005E5750); /* call 0x005E5750 */

loc_0053732F: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00537340
 * Original: 0x00537340 - 0x00537349 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537340(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00537340: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_00537350
 * Original: 0x00537350 - 0x005375E8 (664 bytes, 149 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00537350: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00537367u); RECOMP_ABI_CALL(0x005E56D0u, sub_005E56D0); /* call 0x005E56D0 */

loc_00537367: ;
    edi = esi + 0xC4;
    MEM32(esi) = 0x64BF10;
    ebx = edi;
    ebp = 8;
    /* nop */

loc_00537380: ;
    ecx = ebx;
    PUSH32(esp, 0x00537387u); RECOMP_ABI_CALL(0x00539C30u, sub_00539C30); /* call 0x00539C30 */

loc_00537387: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x38;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00537380; /* jne: not equal / not zero */

loc_0053738D: ;
    ebp = esi + 0x2C4;
    MEM32(esi + 0x29C) = 0xC47A0000u;
    eax = ebp;
    ecx = 2;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_005373B0;

    /* nop */
    /* nop */

loc_005373B0: ;
    MEM16(eax) = 2;
    MEM16(eax + 2) = LO16(ebx);
    MEM32(eax + 4) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 8) = ebx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005373B0; /* jne: not equal / not zero */

loc_005373C8: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005373D3u); RECOMP_ABI_CALL(0x005E6EB0u, sub_005E6EB0); /* call 0x005E6EB0 */

loc_005373D3: ;
    PUSH32(esp, 0x64C67C);
    PUSH32(esp, 0x005373DDu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_005373DD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x005373E3u); RECOMP_ABI_CALL(0x005E6F20u, sub_005E6F20); /* call 0x005E6F20 */

loc_005373E3: ;
    PUSH32(esp, 0x7A);
    PUSH32(esp, 0x642E88);
    PUSH32(esp, 0x54);
    PUSH32(esp, 0x005373F1u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005373F1: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00537401; /* je: equal / zero */

loc_005373F8: ;
    ecx = eax;
    PUSH32(esp, 0x005373FFu); RECOMP_ABI_CALL(0x00539C80u, sub_00539C80); /* call 0x00539C80 */

loc_005373FF: ;
    goto loc_00537403;

loc_00537401: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00537403: ;
    MEM32(esi + 0x284) = eax;
    MEM16(esi + 0xC0) = LO16(ebx);
    MEM32(edi) = ebx;
    edx = MEM32(esi + 0x284);
    MEM32(esi + 0xF4) = edx;
    MEM32(esi + 0xFC) = 1;
    eax = MEM32(esi + 0x284);
    MEM32(esi + 0x12C) = eax;
    MEM32(esi + 0x134) = 2;
    ecx = MEM32(esi + 0x284);
    MEM32(esi + 0x164) = ecx;
    MEM32(esi + 0x16C) = 3;
    edx = MEM32(esi + 0x284);
    MEM32(esi + 0x19C) = edx;
    MEM32(esi + 0x1A4) = 4;
    eax = MEM32(esi + 0x284);
    MEM32(esi + 0x1D4) = eax;
    MEM32(esi + 0x1DC) = 5;
    ecx = MEM32(esi + 0x284);
    MEM32(esi + 0x20C) = ecx;
    MEM32(esi + 0x214) = 6;
    edx = MEM32(esi + 0x284);
    MEM32(esi + 0x244) = edx;
    MEM32(esi + 0x24C) = 7;
    eax = MEM32(esi + 0x284);
    PUSH32(esp, 0x8A);
    MEM32(esi + 0x27C) = eax;
    PUSH32(esp, 0x642E88);
    PUSH32(esp, 0x200);
    MEM32(esi + 0x288) = ebx;
    MEM32(esi + 0x28C) = ebx;
    MEM32(esi + 0x290) = ebx;
    PUSH32(esp, 0x005374DEu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005374DE: ;
    edi = eax;
    eax = 0x1010101;
    MEM32(esi + 0x294) = edi;
    ecx = 0x80;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x64C670);
    MEM32(esi + 0x298) = ebx;
    MEM8(esi + 0x2A0) = LO8(ebx);
    MEM8(esi + 0x2E8) = LO8(ebx);
    MEM8(esi + 0x2A1) = 1;
    MEM8(esi + 0x2A2) = 1;
    PUSH32(esp, 0x0053751Cu); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0053751C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00537534; /* jne: not equal / not zero */

loc_00537523: ;
    PUSH32(esp, 0x64C660);
    PUSH32(esp, 0x0053752Du); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0053752D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053753A; /* je: equal / zero */

loc_00537534: ;
    MEM8(esi + 0x2A2) = LO8(ebx);

loc_0053753A: ;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x64C658);
    MEM32(esi + 0x2A4) = ebx;
    MEM32(esi + 0x2A8) = edi;
    MEM32(esi + 0x2AC) = edi;
    MEM32(esi + 0x2B0) = 2;
    PUSH32(esp, 0x00537563u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_00537563: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00537581; /* je: equal / zero */

loc_0053756A: ;
    ecx = esi + 0x2B4;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64C658);
    PUSH32(esp, 0x0053757Cu); RECOMP_ABI_CALL(0x00612E30u, sub_00612E30); /* call 0x00612E30 */

loc_0053757C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00537587;

loc_00537581: ;
    MEM32(esi + 0x2B4) = ebx;

loc_00537587: ;
    MEM32(esi + 0x2B8) = ebx;
    MEM32(esi + 0x2C0) = edi;
    MEM32(esi + 0x2BC) = edi;
    MEM16(ebp + 2) = LO16(ebx);
    MEM32(ebp + 4) = ebx;
    MEM32(ebp + 0xC) = ebx;
    MEM32(ebp + 8) = ebx;
    MEM16(ebp) = 2;
    MEM16(esi + 0x2D6) = LO16(ebx);
    MEM32(esi + 0x2D8) = ebx;
    MEM32(esi + 0x2E0) = ebx;
    MEM32(esi + 0x2DC) = ebx;
    MEM16(esi + 0x2D4) = 2;
    POP32(esp, edi);
    MEM32(esi + 0x2E4) = 1;
    MEM8(esi + 0x2E9) = 1;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005375F0
 * Original: 0x005375F0 - 0x0053760E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005375F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005375F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005375F8u); RECOMP_ABI_CALL(0x00534A40u, sub_00534A40); /* call 0x00534A40 */

loc_005375F8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00537608; /* je: equal / zero */

loc_005375FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00537605u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00537605: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00537608: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00537610
 * Original: 0x00537610 - 0x005376BE (174 bytes, 67 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00537610: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    edi = ecx;
    PUSH32(esp, 0x00537623u); RECOMP_ABI_CALL(0x005E6150u, sub_005E6150); /* call 0x005E6150 */

loc_00537623: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053762E; /* je: equal / zero */

loc_00537627: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0053762E: ;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00537639; /* jne: not equal / not zero */

loc_00537634: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005376B7; /* jne: not equal / not zero */

loc_00537639: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00537640: ;
    eax = MEM32(edi + 0x10);
    edx = 1;
    ecx = esi;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005376B0; /* je: equal / zero */

loc_00537652: ;
    ecx = MEM32(edi + 4);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF0);
    _fa = (uint32_t)(MEM32(eax + ecx + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ecx + 0x64), 0x20 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005376B0; /* jne: not equal / not zero */

loc_00537664: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00537686; /* jne: not equal / not zero */

loc_0053766B: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x64C6DC);
    PUSH32(esp, 0x00537677u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_00537677: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xB);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00537684u); RECOMP_ABI_CALL(0x005E5B10u, sub_005E5B10); /* call 0x005E5B10 */

loc_00537684: ;
    goto loc_005376B0;

loc_00537686: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005376A2; /* jne: not equal / not zero */

loc_0053768A: ;
    PUSH32(esp, 0x64C6B4);
    PUSH32(esp, 0x00537694u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_00537694: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xB);
    ecx = edi;
    PUSH32(esp, 0x005376A0u); RECOMP_ABI_CALL(0x005E5A30u, sub_005E5A30); /* call 0x005E5A30 */

loc_005376A0: ;
    goto loc_005376B0;

loc_005376A2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x64C690);
    PUSH32(esp, 0x005376ADu); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005376AD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005376B0: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00537640; /* jl: less (signed <) */

loc_005376B6: ;
    POP32(esp, esi);

loc_005376B7: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005376C0
 * Original: 0x005376C0 - 0x00537768 (168 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005376C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005376C0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x20);
    edx = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00537716; /* je: equal / zero */

loc_005376D3: ;
    esi = MEM32(esp + 0x34);
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x24);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0xCC) = edi;
    eax = MEM32(eax + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x288);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005376F9u); RECOMP_ABI_CALL(0x00537340u, sub_00537340); /* call 0x00537340 */

loc_005376F9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0xD0) = eax;
    edx = MEM32(edx + 0x288);
    POP32(esp, edi);
    MEM32(ecx + 0xD8) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00537716: ;
    eax = MEM32(eax + 0x1C);
    MEM8(esp + 4) = LO8(ecx);
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(edx + 0x28C);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(edx + 0x288);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(esp + 0x34);
    MEM32(esp + 0x20) = eax;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = esp + 4;
    MEM8(esp + 5) = 0x35;
    MEM16(esp + 6) = 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edx;
    PUSH32(esp, 0x00537761u); RECOMP_ABI_CALL(0x005E5750u, sub_005E5750); /* call 0x005E5750 */

loc_00537761: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00537770
 * Original: 0x00537770 - 0x00537904 (404 bytes, 129 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00537770: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x2A2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00537902; /* je: equal / zero */

loc_00537781: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00537902; /* jl: less (signed <) */

loc_0053778C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00537791: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005378F5; /* je: equal / zero */

loc_0053779A: ;
    ecx = edi;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x10), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005378F5; /* je: equal / zero */

loc_005377AC: ;
    eax = MEM32(esi + 0x78);
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = ecx + esi;
    if (CMP_NE(_fa, _fb)) goto loc_005378F5; /* jne: not equal / not zero */

loc_005377BF: ;
    eax = MEM32(esi + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005377D0; /* je: equal / zero */

loc_005377C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005378F5; /* jne: not equal / not zero */

loc_005377D0: ;
    edx = MEM32(0x6C2BC8);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx & 0x80000003u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_005377E4; /* jns: not sign (positive) */

loc_005377DF: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx | 0xFFFFFFFCu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_005377E4: ;
    ebp = MEM32(ebx + 0xD4);
    ecx = MEM32(esi + 0x288);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    MEM32(0x6C2BC8) = edx;
    PUSH32(esp, 0x005377FEu); RECOMP_ABI_CALL(0x00537340u, sub_00537340); /* call 0x00537340 */

loc_005377FE: ;
    edx = MEM32(0x663080);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005378F5; /* jle: less or equal (signed <=) */

loc_0053780F: ;
    edx = MEM32(ebx + 0xD8);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0053781Du); RECOMP_ABI_CALL(0x00537340u, sub_00537340); /* call 0x00537340 */

loc_0053781D: ;
    ebp = MEM32(0x66307C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0053783D; /* jg: greater (signed >) */

loc_0053782A: ;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00537832u); RECOMP_ABI_CALL(0x00537340u, sub_00537340); /* call 0x00537340 */

loc_00537832: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005378F5; /* jle: less or equal (signed <=) */

loc_0053783D: ;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00537845u); RECOMP_ABI_CALL(0x00537340u, sub_00537340); /* call 0x00537340 */

loc_00537845: ;
    ecx = MEM32(0x663084);
    edx = MEM32(0x66307C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00537876; /* jge: greater or equal (signed >=) */

loc_0053785A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x170); PUSH32(esp, 0x00537865u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053785Fu); } /* indirect call */
    }

loc_00537865: ;
    ecx = MEM32(esi + 0x288);
    MEM32(ebx + 0xD4) = ecx;
    goto loc_005378F5;

loc_00537876: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00537897; /* jne: not equal / not zero */

loc_0053787D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x64C774);
    PUSH32(esp, 0x00537888u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00537888: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xB);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00537895u); RECOMP_ABI_CALL(0x005E5B10u, sub_005E5B10); /* call 0x005E5B10 */

loc_00537895: ;
    goto loc_005378F5;

loc_00537897: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005378B3; /* jne: not equal / not zero */

loc_0053789B: ;
    PUSH32(esp, 0x64C748);
    PUSH32(esp, 0x005378A5u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_005378A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xB);
    ecx = esi;
    PUSH32(esp, 0x005378B1u); RECOMP_ABI_CALL(0x005E5A30u, sub_005E5A30); /* call 0x005E5A30 */

loc_005378B1: ;
    goto loc_005378F5;

loc_005378B3: ;
    eax = MEM32(ebx + 0xF8);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005378F5; /* jne: not equal / not zero */

loc_005378C4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x64C710);
    PUSH32(esp, 0x005378CFu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_005378CF: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x150); PUSH32(esp, 0x005378DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005378D7u); } /* indirect call */
    }

loc_005378DD: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ebx + 0xF8);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 0xF8) = eax;

loc_005378F5: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00537791; /* jl: less (signed <) */

loc_005378FF: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00537902: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00537910
 * Original: 0x00537910 - 0x0053795B (75 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537910(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00537910: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x0053791Au); RECOMP_ABI_CALL(0x00537260u, sub_00537260); /* call 0x00537260 */

loc_0053791A: ;
    eax = MEM32(esi + 0x298);
    ecx = MEM32(esi + 0x294);
    SET_LO16(edx, MEM16(esp + 8));
    eax = eax + eax * 4;
    eax = ecx + eax * 4 + 0x20;
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = 5;
    MEM16(eax + 0x10) = LO16(edx);
    edx = MEM32(ecx);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0xC) = ecx;
    MEM32(esi + 0x298) = MEM32(esi + 0x298) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x298)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00537960
 * Original: 0x00537960 - 0x005379BA (90 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537960(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00537960: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x0053796Au); RECOMP_ABI_CALL(0x00537260u, sub_00537260); /* call 0x00537260 */

loc_0053796A: ;
    eax = MEM32(esi + 0x298);
    ecx = MEM32(esi + 0x294);
    SET_LO16(edx, MEM16(esp + 8));
    eax = eax + eax * 4;
    eax = ecx + eax * 4 + 0x20;
    SET_LO16(ecx, MEM16(esp + 0xC));
    MEM16(eax + 4) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 0x14));
    MEM16(eax + 6) = LO16(ecx);
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM16(eax + 8) = LO16(edx);
    edx = MEM32(esp + 0x18);
    MEM32(eax) = 1;
    MEM8(eax + 0xA) = LO8(ecx);
    MEM8(eax + 0xB) = 0;
    MEM32(eax + 0xC) = edx;
    MEM32(esi + 0x298) = MEM32(esi + 0x298) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x298)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_005379C0
 * Original: 0x005379C0 - 0x00537A0F (79 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005379C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005379C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x005379CAu); RECOMP_ABI_CALL(0x00537260u, sub_00537260); /* call 0x00537260 */

loc_005379CA: ;
    eax = MEM32(esi + 0x298);
    ecx = MEM32(esi + 0x294);
    SET_LO16(edx, MEM16(esp + 8));
    eax = eax + eax * 4;
    eax = ecx + eax * 4 + 0x20;
    SET_LO16(ecx, MEM16(esp + 0xC));
    MEM16(eax + 4) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 0x10));
    MEM16(eax + 6) = LO16(ecx);
    ecx = MEM32(esp + 0x14);
    MEM32(eax) = 7;
    MEM16(eax + 8) = LO16(edx);
    MEM32(eax + 0xC) = ecx;
    MEM32(esi + 0x298) = MEM32(esi + 0x298) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x298)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00537A10
 * Original: 0x00537A10 - 0x00537A46 (54 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537A10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00537A10: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x00537A1Au); RECOMP_ABI_CALL(0x00537260u, sub_00537260); /* call 0x00537260 */

loc_00537A1A: ;
    eax = MEM32(esi + 0x298);
    ecx = MEM32(esi + 0x294);
    SET_LO16(edx, MEM16(esp + 8));
    eax = eax + eax * 4;
    eax = ecx + eax * 4 + 0x20;
    MEM32(eax) = 8;
    MEM16(eax + 4) = LO16(edx);
    MEM32(esi + 0x298) = MEM32(esi + 0x298) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x298)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00537A50
 * Original: 0x00537A50 - 0x00537A82 (50 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00537A50: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    MEM32(esi) = 0x64C814;
    PUSH32(esp, 0x00537A62u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00537A62: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x00537A6Cu); RECOMP_ABI_CALL(0x00614360u, sub_00614360); /* call 0x00614360 */

loc_00537A6C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00537A7C; /* je: equal / zero */

loc_00537A73: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00537A79u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00537A79: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00537A7C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00537A90
 * Original: 0x00537A90 - 0x00537AB9 (41 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00537A90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    PUSH32(esp, edi);
    MEM16(ecx + 4) = 0;
    edi = eax + 1;

loc_00537AA4: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00537AA4; /* jne: not equal / not zero */

loc_00537AAB: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00537AB4u); RECOMP_ABI_CALL(0x00606340u, sub_00606340); /* call 0x00606340 */

loc_00537AB4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00537AC0
 * Original: 0x00537AC0 - 0x00537AF2 (50 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00537AC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    MEM32(esi) = 0x64C818;
    PUSH32(esp, 0x00537AD2u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00537AD2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x00537ADCu); RECOMP_ABI_CALL(0x00614360u, sub_00614360); /* call 0x00614360 */

loc_00537ADC: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00537AEC; /* je: equal / zero */

loc_00537AE3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00537AE9u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00537AE9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00537AEC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00537B00
 * Original: 0x00537B00 - 0x00537B32 (50 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00537B00: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    MEM32(esi) = 0x64C81C;
    PUSH32(esp, 0x00537B12u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00537B12: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x00537B1Cu); RECOMP_ABI_CALL(0x00614360u, sub_00614360); /* call 0x00614360 */

loc_00537B1C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00537B2C; /* je: equal / zero */

loc_00537B23: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00537B29u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00537B29: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00537B2C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00537B40
 * Original: 0x00537B40 - 0x00537B75 (53 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00537B40: ;
    edx = ecx;
    SET_LO8(ecx, MEM8(ecx));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00537B74; /* je: equal / zero */

loc_00537B4A: ;
    PUSH32(esp, esi);
    goto loc_00537B50;

    /* nop */

loc_00537B50: ;
    ecx = SX8(LO8(ecx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    ecx = ecx & 0xF0000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00537B6B; /* je: equal / zero */

loc_00537B62: ;
    esi = ecx;
    esi = esi >> 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi ^ ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax ^ esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00537B6B: ;
    SET_LO8(ecx, MEM8(edx + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00537B50; /* jne: not equal / not zero */

loc_00537B73: ;
    POP32(esp, esi);

loc_00537B74: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00537B80
 * Original: 0x00537B80 - 0x00537B9B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00537B80: ;
    ecx = MEM32(0x6C2C40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00537B90; /* je: equal / zero */

loc_00537B8A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00537B90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00537B8Eu); } /* indirect call */
    }

loc_00537B90: ;
    MEM32(0x6C2C40) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00537BA0
 * Original: 0x00537BA0 - 0x00537BAB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537BA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00537BA0: ;
    MEM32(ecx) = 0x64C820;
    g_seh_ebp = ebp; sub_00614360(); return; /* tail jmp 0x00614360 */

}

/**
 * sub_00537BB0
 * Original: 0x00537BB0 - 0x00537BD8 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537BB0(void)
{

loc_00537BB0: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00537BD7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00537BD4u); } /* indirect call */
    }

loc_00537BD7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00537BE0
 * Original: 0x00537BE0 - 0x00537C0D (45 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537BE0(void)
{

loc_00537BE0: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00537C0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00537C09u); } /* indirect call */
    }

loc_00537C0C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00537C10
 * Original: 0x00537C10 - 0x00537C24 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537C10(void)
{

loc_00537C10: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00537C23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00537C20u); } /* indirect call */
    }

loc_00537C23: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00537C30
 * Original: 0x00537C30 - 0x00537C53 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537C30(void)
{

loc_00537C30: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00537C52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00537C4Fu); } /* indirect call */
    }

loc_00537C52: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00537C60
 * Original: 0x00537C60 - 0x00537C88 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537C60(void)
{

loc_00537C60: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00537C87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00537C84u); } /* indirect call */
    }

loc_00537C87: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00537C90
 * Original: 0x00537C90 - 0x00537CA4 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537C90(void)
{

loc_00537C90: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x00537CA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00537CA0u); } /* indirect call */
    }

loc_00537CA3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00537CB0
 * Original: 0x00537CB0 - 0x00537CC9 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537CB0(void)
{

loc_00537CB0: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x00537CC8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00537CC5u); } /* indirect call */
    }

loc_00537CC8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00537CD0
 * Original: 0x00537CD0 - 0x00537CEE (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537CD0(void)
{

loc_00537CD0: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00537CEDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00537CEAu); } /* indirect call */
    }

loc_00537CED: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00537CF0
 * Original: 0x00537CF0 - 0x00537D13 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537CF0(void)
{

loc_00537CF0: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00537D12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00537D0Fu); } /* indirect call */
    }

loc_00537D12: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00537D20
 * Original: 0x00537D20 - 0x00537D3F (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00537D20: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00537D3Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00537D3Bu); } /* indirect call */
    }

loc_00537D3E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00537D40
 * Original: 0x00537D40 - 0x00537D59 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537D40(void)
{

loc_00537D40: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x00537D58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00537D55u); } /* indirect call */
    }

loc_00537D58: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00537D60
 * Original: 0x00537D60 - 0x00537D79 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537D60(void)
{

loc_00537D60: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x00537D78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00537D75u); } /* indirect call */
    }

loc_00537D78: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00537D80
 * Original: 0x00537D80 - 0x00537D9E (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537D80(void)
{

loc_00537D80: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x00537D9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00537D9Au); } /* indirect call */
    }

loc_00537D9D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00537DA0
 * Original: 0x00537DA0 - 0x00537DBE (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537DA0(void)
{

loc_00537DA0: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x00537DBDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00537DBAu); } /* indirect call */
    }

loc_00537DBD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00537DC0
 * Original: 0x00537DC0 - 0x00537DD4 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537DC0(void)
{

loc_00537DC0: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00537DD3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00537DD0u); } /* indirect call */
    }

loc_00537DD3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00537DE0
 * Original: 0x00537DE0 - 0x00537DFE (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537DE0(void)
{

loc_00537DE0: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00537DFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00537DFAu); } /* indirect call */
    }

loc_00537DFD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00537E00
 * Original: 0x00537E00 - 0x00537E23 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537E00(void)
{

loc_00537E00: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00537E22u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00537E1Fu); } /* indirect call */
    }

loc_00537E22: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00537E30
 * Original: 0x00537E30 - 0x00537E53 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537E30(void)
{

loc_00537E30: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00537E52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00537E4Fu); } /* indirect call */
    }

loc_00537E52: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00537E60
 * Original: 0x00537E60 - 0x00537E79 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537E60(void)
{

loc_00537E60: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x00537E78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00537E75u); } /* indirect call */
    }

loc_00537E78: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00537E80
 * Original: 0x00537E80 - 0x00537E9E (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537E80(void)
{

loc_00537E80: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x00537E9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00537E9Au); } /* indirect call */
    }

loc_00537E9D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00537EA0
 * Original: 0x00537EA0 - 0x00537EBE (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537EA0(void)
{

loc_00537EA0: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x00537EBDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00537EBAu); } /* indirect call */
    }

loc_00537EBD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00537EC0
 * Original: 0x00537EC0 - 0x00537EE3 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537EC0(void)
{

loc_00537EC0: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x00537EE2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00537EDFu); } /* indirect call */
    }

loc_00537EE2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00537EF0
 * Original: 0x00537EF0 - 0x00537F09 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537EF0(void)
{

loc_00537EF0: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x00537F08u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00537F05u); } /* indirect call */
    }

loc_00537F08: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00537F10
 * Original: 0x00537F10 - 0x00537F2E (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537F10(void)
{

loc_00537F10: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x00537F2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00537F2Au); } /* indirect call */
    }

loc_00537F2D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00537F30
 * Original: 0x00537F30 - 0x00537F4E (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537F30(void)
{

loc_00537F30: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00537F4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00537F4Au); } /* indirect call */
    }

loc_00537F4D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00537F50
 * Original: 0x00537F50 - 0x00537F69 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537F50(void)
{

loc_00537F50: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x00537F68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00537F65u); } /* indirect call */
    }

loc_00537F68: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00537F70
 * Original: 0x00537F70 - 0x00537F87 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537F70(void)
{

loc_00537F70: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x80); PUSH32(esp, 0x00537F86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00537F80u); } /* indirect call */
    }

loc_00537F86: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00537F90
 * Original: 0x00537F90 - 0x00537FAC (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537F90(void)
{

loc_00537F90: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00537FABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00537FA5u); } /* indirect call */
    }

loc_00537FAB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00537FB0
 * Original: 0x00537FB0 - 0x00537FEC (60 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00537FB0: ;
    ecx = MEM32(0x6C2C40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_00537FD7; /* je: equal / zero */

loc_00537FBE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00537FD7; /* jne: not equal / not zero */

loc_00537FC2: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00537FD6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00537FD0u); } /* indirect call */
    }

loc_00537FD6: ;
    esp += 4; return; /* ret */

loc_00537FD7: ;
    ecx = MEM32(0x6C38B4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xE0); PUSH32(esp, 0x00537FEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00537FE5u); } /* indirect call */
    }

loc_00537FEB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00537FF0
 * Original: 0x00537FF0 - 0x00538027 (55 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00537FF0: ;
    ecx = MEM32(0x6C2C40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_00538012; /* je: equal / zero */

loc_00537FFE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00538012; /* jne: not equal / not zero */

loc_00538002: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00538011u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053800Bu); } /* indirect call */
    }

loc_00538011: ;
    esp += 4; return; /* ret */

loc_00538012: ;
    ecx = MEM32(0x6C38B4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xE4); PUSH32(esp, 0x00538026u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00538020u); } /* indirect call */
    }

loc_00538026: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00538030
 * Original: 0x00538030 - 0x00538122 (242 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00538030: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x64C8C8);
    PUSH32(esp, 0x0053804Fu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0053804F: ;
    eax = MEM32(0x6C2C40);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00538079; /* je: equal / zero */

loc_0053805D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00538079; /* jne: not equal / not zero */

loc_00538061: ;
    ecx = MEM32(esp + 0x28);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x00538072u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053806Cu); } /* indirect call */
    }

loc_00538072: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00538079: ;
    ecx = MEM32(esp + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    edi = 2;
    MEM16(esp + 0xC) = LO16(edi);
    MEM16(esp + 0xE) = LO16(edx);
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x14) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00538106; /* je: equal / zero */

loc_0053809C: ;
    SET_LO16(eax, MEM16(ecx + 2));
    ecx = MEM32(ecx + 4);
    SET_LO16(edx, ZX8(HI8(eax)));
    PUSH32(esp, ebx);
    SET_HI8(edx, LO8(eax));
    eax = ecx;
    ebx = ecx;
    eax = eax & 0xFF0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ecx;
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx & 0xFF00;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(esp + 0x10) = LO16(edi);
    ecx = eax;
    edi = eax;
    edi = edi >> 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFF0000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = eax;
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 0xFF00;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    SET_LO16(eax, ZX8(HI8(edx)));
    SET_HI8(eax, LO8(edx));
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ecx;
    POP32(esp, ebx);
    MEM16(esp + 0xE) = LO16(eax);

loc_00538106: ;
    ecx = MEM32(0x6C38B4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0xE8); PUSH32(esp, 0x0053811Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00538115u); } /* indirect call */
    }

loc_0053811B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00538130
 * Original: 0x00538130 - 0x00538181 (81 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00538130: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    esi = ecx;
    edx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x64C924);
    MEM32(esi + 0x2F8) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x0053814Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00538148u); } /* indirect call */
    }

loc_0053814E: ;
    eax = MEM32(esi + 0x2F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00538173; /* jne: not equal / not zero */

loc_00538158: ;
    PUSH32(esp, 0x64C910);
    MEM32(esi + 0x2E8) = 1;
    PUSH32(esp, 0x0053816Cu); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_0053816C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00538173: ;
    MEM32(esi + 0x2E8) = 4;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00538190
 * Original: 0x00538190 - 0x00538215 (133 bytes, 50 insns)
 * Category: game_debug
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00538190: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = esi + 8;
    PUSH32(esp, edi);
    PUSH32(esp, 0x64C938);
    PUSH32(esp, 0x005381A3u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005381A3: ;
    eax = edi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 1;
    goto loc_005381B0;

    /* nop */

loc_005381B0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005381B0; /* jne: not equal / not zero */

loc_005381B7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_005381C0; /* jbe: below or equal (unsigned <=) */

loc_005381BE: ;
    MEM8(edi) = LO8(ecx);

loc_005381C0: ;
    MEM32(esi + 0x108) = MEM32(esi + 0x108) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x108)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x005381CBu); RECOMP_ABI_CALL(0x00557190u, sub_00557190); /* call 0x00557190 */

loc_005381CB: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = edi;
    ebx = eax + 1;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi;

loc_005381F0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005381F0; /* jne: not equal / not zero */

loc_005381F7: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(eax + esi + 8) = LO8(edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    MEM8(eax + esi + 9) = LO8(ecx);
    PUSH32(esp, 0x0053820Cu); RECOMP_ABI_CALL(0x00546EB0u, sub_00546EB0); /* call 0x00546EB0 */

loc_0053820C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00538220
 * Original: 0x00538220 - 0x005382D4 (180 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00538220: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x118);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x114);
    eax = MEM32(ebp * 4 + 0x663088);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x120);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x64C970);
    esi = ecx;
    ecx = esp + 0x24;
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0053825Fu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0053825F: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x00538271u); RECOMP_ABI_CALL(0x00537B40u, sub_00537B40); /* call 0x00537B40 */

loc_00538271: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x00538283u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053827Du); } /* indirect call */
    }

loc_00538283: ;
    eax = ebx;
    edx = eax + 1;

loc_00538288: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00538288; /* jne: not equal / not zero */

loc_0053828F: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_005382C7; /* jbe: below or equal (unsigned <=) */

loc_00538296: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x64C968);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x005382A3u); RECOMP_ABI_CALL(0x006299B6u, sub_006299B6); /* call 0x006299B6 */

loc_005382A3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005382C7; /* jne: not equal / not zero */

loc_005382AA: ;
    eax = MEM32(esp + 0x128);
    ecx = MEM32(esp + 0x118);
    PUSH32(esp, eax);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 5;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005382C4u); RECOMP_ABI_CALL(0x00547220u, sub_00547220); /* call 0x00547220 */

loc_005382C4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005382C7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_005382E0
 * Original: 0x005382E0 - 0x005382E3 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005382E0(void)
{

loc_005382E0: ;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_005382F0
 * Original: 0x005382F0 - 0x00538344 (84 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005382F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005382F0: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x114);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x64C97C);
    esi = ecx;
    ecx = esp + 0x18;
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0053831Cu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0053831C: ;
    ebx = MEM32(esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0053832Au); RECOMP_ABI_CALL(0x00537B40u, sub_00537B40); /* call 0x00537B40 */

loc_0053832A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x94); PUSH32(esp, 0x00538338u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00538332u); } /* indirect call */
    }

loc_00538338: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00538350
 * Original: 0x00538350 - 0x005383B4 (100 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00538350: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0053836B; /* je: equal / zero */

loc_00538361: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    ecx = 0x631CD4;
    if (CMP_NE(_fa, _fb)) goto loc_00538370; /* jne: not equal / not zero */

loc_0053836B: ;
    ecx = 0x62DF21;

loc_00538370: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x110);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053837Fu); RECOMP_ABI_CALL(0x00627E20u, sub_00627E20); /* call 0x00627E20 */

loc_0053837F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64C990);
    ecx = esp + 0x14;
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00538394u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00538394: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x005383AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005383A4u); } /* indirect call */
    }

loc_005383AA: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_005383C0
 * Original: 0x005383C0 - 0x005383C3 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005383C0(void)
{

loc_005383C0: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_005383D0
 * Original: 0x005383D0 - 0x0053841E (78 bytes, 20 insns)
 * Category: game_debug
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005383D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005383D0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0053841B; /* ja: above (unsigned >) */

loc_005383D9: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x538420); /* switch: 5 entries, 5 targets */
    if (_jt == 0x005383E0u) goto loc_005383E0;
    if (_jt == 0x005383F0u) goto loc_005383F0;
    if (_jt == 0x00538400u) goto loc_00538400;
    if (_jt == 0x00538410u) goto loc_00538410;
    if (_jt == 0x0053841Bu) goto loc_0053841B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_005383E0: ;
    PUSH32(esp, 0x632B88);
    PUSH32(esp, 0x005383EAu); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005383EA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_005383F0: ;
    PUSH32(esp, 0x64C9B0);
    PUSH32(esp, 0x005383FAu); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005383FA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00538400: ;
    PUSH32(esp, 0x632B2C);
    PUSH32(esp, 0x0053840Au); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_0053840A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00538410: ;
    PUSH32(esp, 0x632AFC);
    PUSH32(esp, 0x0053841Au); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_0053841A: ;
    POP32(esp, ecx);

loc_0053841B: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00538440
 * Original: 0x00538440 - 0x0053844E (14 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538440(void)
{

loc_00538440: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053844Au); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0053844A: ;
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00538450
 * Original: 0x00538450 - 0x0053846E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538450(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00538450: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00538468u); RECOMP_ABI_CALL(0x00547220u, sub_00547220); /* call 0x00547220 */

loc_00538468: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00538470
 * Original: 0x00538470 - 0x0053848E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538470(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00538470: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00538488u); RECOMP_ABI_CALL(0x005470E0u, sub_005470E0); /* call 0x005470E0 */

loc_00538488: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00538490
 * Original: 0x00538490 - 0x005384AA (26 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538490(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00538490: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005384A4u); RECOMP_ABI_CALL(0x00555B10u, sub_00555B10); /* call 0x00555B10 */

loc_005384A4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_005384B0
 * Original: 0x005384B0 - 0x005384E0 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005384B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005384B0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005384B9u); RECOMP_ABI_CALL(0x005470D0u, sub_005470D0); /* call 0x005470D0 */

loc_005384B9: ;
    ecx = eax;
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
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_005384E0
 * Original: 0x005384E0 - 0x00538554 (116 bytes, 43 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005384E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005384E0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 4);
    PUSH32(esp, ebx);
    SET_LO16(ebx, MEM16(eax + 2));
    eax = edx;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = edx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFF0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = edx;
    ecx = ecx & 0xFF00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esp + 0x10);
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    SET_LO16(ecx, ZX8(HI8(ebx)));
    SET_HI8(ecx, LO8(ebx));
    PUSH32(esp, edx);
    edx = eax;
    edx = edx & 0xFF0000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = eax;
    ecx = ecx & 0xFF00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edx);
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0053854Cu); RECOMP_ABI_CALL(0x00547100u, sub_00547100); /* call 0x00547100 */

loc_0053854C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00538560
 * Original: 0x00538560 - 0x00538599 (57 bytes, 17 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538560(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00538560: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    ecx = ZX8(MEM8(esp + 0x10));
    PUSH32(esp, 0x538030);
    PUSH32(esp, 0x537FF0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00538582u); RECOMP_ABI_CALL(0x005E7300u, sub_005E7300); /* call 0x005E7300 */

loc_00538582: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00538588u); RECOMP_ABI_CALL(0x00555830u, sub_00555830); /* call 0x00555830 */

loc_00538588: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1A0) = 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_005385A0
 * Original: 0x005385A0 - 0x005385B8 (24 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005385A0(void)
{

loc_005385A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    MEM32(ecx + 0x1A0) = 0x1F4;
    PUSH32(esp, 0x005385B4u); RECOMP_ABI_CALL(0x005558C0u, sub_005558C0); /* call 0x005558C0 */

loc_005385B4: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005385C0
 * Original: 0x005385C0 - 0x005385C5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005385C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005385C0: ;
    g_seh_ebp = ebp; sub_005554C0(); return; /* tail jmp 0x005554C0 */

}

/**
 * sub_005385D0
 * Original: 0x005385D0 - 0x00538608 (56 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005385D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_005385D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x2E8) = 2;
    SET_LO16(eax, MEM16(0x67461E));
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, ZX8(HI8(eax)));
    SET_HI8(ecx, LO8(eax));
    _cf = 0; /* logical op clears CF */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005385F3u); RECOMP_ABI_CALL(0x005E7300u, sub_005E7300); /* call 0x005E7300 */

loc_005385F3: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005385FDu); RECOMP_ABI_CALL(0x00547310u, sub_00547310); /* call 0x00547310 */

loc_005385FD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00538610
 * Original: 0x00538610 - 0x0053861B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538610(void)
{

loc_00538610: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00538619u); RECOMP_ABI_CALL(0x005473A0u, sub_005473A0); /* call 0x005473A0 */

loc_00538619: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00538620
 * Original: 0x00538620 - 0x0053862C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538620(void)
{

loc_00538620: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x6739B8);
    esp += 4; return; /* ret */

}

/**
 * sub_00538630
 * Original: 0x00538630 - 0x00538657 (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00538630: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00538651; /* je: equal / zero */

loc_00538639: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0053864B; /* je: equal / zero */

loc_0053863C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00538645; /* je: equal / zero */

loc_0053863F: ;
    eax = 0x64C9F8;
    esp += 4; return; /* ret */

loc_00538645: ;
    eax = 0x630CD8;
    esp += 4; return; /* ret */

loc_0053864B: ;
    eax = 0x64C9F0;
    esp += 4; return; /* ret */

loc_00538651: ;
    eax = 0x64C9E8;
    esp += 4; return; /* ret */

}

/**
 * sub_00538660
 * Original: 0x00538660 - 0x0053867F (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538660(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00538660: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x64C818;
    MEM32(eax + 4) = ecx;
    MEM16(eax + 8) = LO16(ecx);
    MEM16(eax + 0xA) = LO16(ecx);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00538680
 * Original: 0x00538680 - 0x0053876F (239 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00538680: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x64C820;
    MEM32(eax + 0x2AC) = ecx;
    MEM32(eax + 0x2B0) = ecx;
    MEM32(eax + 0x2B4) = ecx;
    PUSH32(esp, esi);
    MEM32(eax + 0x2B8) = ecx;
    MEM32(eax + 0x2BC) = ecx;
    MEM32(eax + 0x2C0) = ecx;
    edx = eax + 0x2C4;
    esi = 3;
    /* nop */

loc_005386C0: ;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005386C0; /* jne: not equal / not zero */

loc_005386CE: ;
    MEM32(eax + 4) = ecx;
    MEM8(eax + 8) = LO8(ecx);
    MEM32(eax + 0x10C) = ecx;
    MEM8(eax + 0x110) = LO8(ecx);
    MEM8(eax + 0x130) = LO8(ecx);
    MEM8(eax + 0x140) = LO8(ecx);
    MEM8(eax + 0x160) = LO8(ecx);
    MEM32(eax + 0x170) = 0x14;
    edx = eax + 0x184;
    esi = 3;

loc_00538707: ;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00538707; /* jne: not equal / not zero */

loc_00538712: ;
    edx = 1;
    MEM32(eax + 0x2A8) = edx;
    MEM32(eax + 0x2E8) = edx;
    MEM32(eax + 0x1A4) = ecx;
    MEM8(eax + 0x1A8) = LO8(ecx);
    MEM32(eax + 0x19C) = ecx;
    MEM32(eax + 0x1A0) = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x2EC) = edx;
    MEM32(eax + 0x2F0) = edx;
    MEM32(eax + 0x2F4) = edx;
    MEM32(eax + 0x2F8) = ecx;
    MEM8(eax + 0x2FC) = LO8(ecx);
    MEM8(eax + 0x2FD) = LO8(ecx);
    MEM32(eax + 0x300) = ecx;
    MEM32(eax + 0x304) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00538770
 * Original: 0x00538770 - 0x0053878E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00538770: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00538778u); RECOMP_ABI_CALL(0x00537BA0u, sub_00537BA0); /* call 0x00537BA0 */

loc_00538778: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00538788; /* je: equal / zero */

loc_0053877F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00538785u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00538785: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00538788: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00538790
 * Original: 0x00538790 - 0x00538ABC (812 bytes, 194 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00538790: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    edx = esi + 8;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_005387A0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005387A0; /* jne: not equal / not zero */

loc_005387AA: ;
    eax = MEM32(0x66304C);
    edx = esi + 0x110;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_005387B7: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005387B7; /* jne: not equal / not zero */

loc_005387C1: ;
    eax = MEM32(0x663050);
    edx = esi + 0x130;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edi;

loc_005387D0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005387D0; /* jne: not equal / not zero */

loc_005387DA: ;
    eax = MEM32(0x663054);
    edx = esi + 0x140;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_005387E7: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005387E7; /* jne: not equal / not zero */

loc_005387F1: ;
    eax = MEM32(0x663058);
    ebp = esi + 0x160;
    edx = ebp;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00538800: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00538800; /* jne: not equal / not zero */

loc_0053880A: ;
    eax = MEM32(0x66305C);
    edx = esi + 0x174;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00538817: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00538817; /* jne: not equal / not zero */

loc_00538821: ;
    eax = MEM32(esp + 0xC);
    edx = esi + 0x1A8;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00538830: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00538830; /* jne: not equal / not zero */

loc_0053883A: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x1C;
    edi = 0x6C2BD0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x630D58);
    PUSH32(esp, 0xA);
    MEM32(0x6C2BD0) = 0x537C10;
    MEM32(0x6C2BD4) = 0x537C30;
    MEM32(0x6C2BD8) = 0x537C60;
    MEM32(0x6C2BDC) = 0x537C90;
    MEM32(0x6C2BE0) = 0x537CB0;
    MEM32(0x6C2BE4) = 0x537CD0;
    MEM32(0x6C2BE8) = 0x537CF0;
    MEM32(0x6C2BEC) = 0x537D20;
    MEM32(0x6C2BF0) = 0x537D40;
    MEM32(0x6C2BF4) = 0x537D60;
    MEM32(0x6C2BF8) = 0x537D80;
    MEM32(0x6C2BFC) = 0x537DA0;
    MEM32(0x6C2C00) = 0x537DC0;
    MEM32(0x6C2C04) = 0x537DE0;
    MEM32(0x6C2C08) = 0x537E00;
    MEM32(0x6C2C0C) = 0x537E30;
    MEM32(0x6C2C10) = 0x537E60;
    MEM32(0x6C2C14) = 0x537E80;
    MEM32(0x6C2C18) = 0x537EA0;
    MEM32(0x6C2C1C) = 0x537EC0;
    MEM32(0x6C2C20) = 0x537EF0;
    MEM32(0x6C2C24) = 0x537F10;
    MEM32(0x6C2C28) = 0x537F30;
    MEM32(0x6C2C2C) = 0x537F50;
    MEM32(0x6C2C30) = 0x537F70;
    MEM32(0x6C2C34) = 0x537F90;
    MEM32(0x6C2C38) = 0x537FB0;
    MEM32(0x6C2C3C) = esi;
    PUSH32(esp, 0x00538969u); RECOMP_ABI_CALL(0x00557170u, sub_00557170); /* call 0x00557170 */

loc_00538969: ;
    PUSH32(esp, 0x630D4C);
    PUSH32(esp, 8);
    PUSH32(esp, 0x00538975u); RECOMP_ABI_CALL(0x00557170u, sub_00557170); /* call 0x00557170 */

loc_00538975: ;
    PUSH32(esp, 0x62D830);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x00538981u); RECOMP_ABI_CALL(0x00557170u, sub_00557170); /* call 0x00557170 */

loc_00538981: ;
    PUSH32(esp, 0x630CC8);
    PUSH32(esp, 0x33);
    PUSH32(esp, 0x0053898Du); RECOMP_ABI_CALL(0x00557170u, sub_00557170); /* call 0x00557170 */

loc_0053898D: ;
    PUSH32(esp, 0x630CD0);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x00538999u); RECOMP_ABI_CALL(0x00557170u, sub_00557170); /* call 0x00557170 */

loc_00538999: ;
    PUSH32(esp, 0x62D808);
    PUSH32(esp, 0x35);
    PUSH32(esp, 0x005389A5u); RECOMP_ABI_CALL(0x00557170u, sub_00557170); /* call 0x00557170 */

loc_005389A5: ;
    PUSH32(esp, 0x630CD8);
    PUSH32(esp, 0x36);
    PUSH32(esp, 0x005389B1u); RECOMP_ABI_CALL(0x00557170u, sub_00557170); /* call 0x00557170 */

loc_005389B1: ;
    PUSH32(esp, 0x630CE0);
    PUSH32(esp, 0x37);
    PUSH32(esp, 0x005389BDu); RECOMP_ABI_CALL(0x00557170u, sub_00557170); /* call 0x00557170 */

loc_005389BD: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x630CE4);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x005389CCu); RECOMP_ABI_CALL(0x00557170u, sub_00557170); /* call 0x00557170 */

loc_005389CC: ;
    PUSH32(esp, 0x630CEC);
    PUSH32(esp, 0x39);
    PUSH32(esp, 0x005389D8u); RECOMP_ABI_CALL(0x00557170u, sub_00557170); /* call 0x00557170 */

loc_005389D8: ;
    PUSH32(esp, 0x630CF8);
    PUSH32(esp, 0x3A);
    PUSH32(esp, 0x005389E4u); RECOMP_ABI_CALL(0x00557170u, sub_00557170); /* call 0x00557170 */

loc_005389E4: ;
    PUSH32(esp, 0x630D00);
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0x005389F0u); RECOMP_ABI_CALL(0x00557170u, sub_00557170); /* call 0x00557170 */

loc_005389F0: ;
    PUSH32(esp, 0x64CA28);
    PUSH32(esp, 0x3F);
    PUSH32(esp, 0x005389FCu); RECOMP_ABI_CALL(0x00557170u, sub_00557170); /* call 0x00557170 */

loc_005389FC: ;
    eax = MEM32(0x6C38B4);
    PUSH32(esp, 0x6C2BD0);
    MEM8(eax + 0x2A0) = 1;
    PUSH32(esp, 0x00538A12u); RECOMP_ABI_CALL(0x00547490u, sub_00547490); /* call 0x00547490 */

loc_00538A12: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;
    POP32(esp, edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00538A3E; /* jne: not equal / not zero */

loc_00538A1D: ;
    PUSH32(esp, 0x64CA18);
    PUSH32(esp, 0x00538A27u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_00538A27: ;
    ecx = MEM32(0x6C38B4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM8(ecx + 0x2A0) = 0;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00538A3E: ;
    ecx = MEM32(esi + 0x170);
    edx = esi + 0x190;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    eax = esi + 0x184;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    MEM32(esi + 0x19C) = 1;
    PUSH32(esp, ecx);
    ecx = MEM32(0x6C38B4);
    edx = MEM32(ecx);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00538A6Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00538A67u); } /* indirect call */
    }

loc_00538A6A: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    eax = esi + 0x140;
    PUSH32(esp, eax);
    eax = esi + 0x130;
    PUSH32(esp, eax);
    eax = esi + 0x110;
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00538A8Au); RECOMP_ABI_CALL(0x00547530u, sub_00547530); /* call 0x00547530 */

loc_00538A8A: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00538AB5; /* jne: not equal / not zero */

loc_00538A91: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00538A9Au); RECOMP_ABI_CALL(0x00547700u, sub_00547700); /* call 0x00547700 */

loc_00538A9A: ;
    PUSH32(esp, 0x64CA00);
    PUSH32(esp, 0x00538AA4u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_00538AA4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00538AB5: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00538AC0
 * Original: 0x00538AC0 - 0x00538BCE (270 bytes, 95 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538AC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00538AC0: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x100));
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x114);
    ebx = ecx;
    PUSH32(esp, esi);
    ecx = eax + eax * 2 + 0xB1;
    PUSH32(esp, edi);
    edi = MEM32(ebx + ecx * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00538B33; /* je: equal / zero */

loc_00538AE5: ;
    _fa = (uint32_t)(MEM16(edi + 8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 8), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00538AF1; /* je: equal / zero */

loc_00538AEC: ;
    esi = MEM32(edi + 4);
    goto loc_00538AF6;

loc_00538AF1: ;
    esi = 0x62DF21;

loc_00538AF6: ;
    eax = ebp;

loc_00538AF8: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00538B1C; /* jne: not equal / not zero */

loc_00538B00: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00538B18; /* je: equal / zero */

loc_00538B04: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00538B1C; /* jne: not equal / not zero */

loc_00538B0E: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00538AF8; /* jne: not equal / not zero */

loc_00538B18: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00538B21;

loc_00538B1C: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00538B21: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00538B56; /* je: equal / zero */

loc_00538B25: ;
    edi = MEM32(edi + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00538AE5; /* jne: not equal / not zero */

loc_00538B2C: ;
    eax = MEM32(esp + 0x118);

loc_00538B33: ;
    ecx = MEM32(eax * 4 + 0x663088);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x64CA54);
    PUSH32(esp, 0x00538B46u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_00538B46: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x100)) >> 32) & 1);
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_00538B56: ;
    esi = MEM32(esp + 0x120);
    ecx = edi + 4;
    eax = esi;
    MEM16(ecx + 4) = 0;
    edi = eax + 1;
    goto loc_00538B70;

    /* nop */

loc_00538B70: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00538B70; /* jne: not equal / not zero */

loc_00538B77: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00538B80u); RECOMP_ABI_CALL(0x00606340u, sub_00606340); /* call 0x00606340 */

loc_00538B80: ;
    eax = MEM32(esp + 0x118);
    ecx = MEM32(eax * 4 + 0x663088);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x64CA34);
    edx = esp + 0x20;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00538BA5u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00538BA5: ;
    esi = MEM32(ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ecx = ebp;
    PUSH32(esp, 0x00538BB3u); RECOMP_ABI_CALL(0x00537B40u, sub_00537B40); /* call 0x00537B40 */

loc_00538BB3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(esi + 0x94); PUSH32(esp, 0x00538BC1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00538BBBu); } /* indirect call */
    }

loc_00538BC1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x100)) >> 32) & 1);
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00538BD0
 * Original: 0x00538BD0 - 0x00538BDE (14 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538BD0(void)
{

loc_00538BD0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00538BDAu); RECOMP_ABI_CALL(0x00538620u, sub_00538620); /* call 0x00538620 */

loc_00538BDA: ;
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00538BE0
 * Original: 0x00538BE0 - 0x00538BEE (14 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538BE0(void)
{

loc_00538BE0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00538BEAu); RECOMP_ABI_CALL(0x00538620u, sub_00538620); /* call 0x00538620 */

loc_00538BEA: ;
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00538BF0
 * Original: 0x00538BF0 - 0x00538C10 (32 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538BF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00538BF0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00538BFAu); RECOMP_ABI_CALL(0x00538620u, sub_00538620); /* call 0x00538620 */

loc_00538BFA: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x632AC0);
    PUSH32(esp, 0x00538C0Au); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00538C0A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00538C10
 * Original: 0x00538C10 - 0x00538C20 (16 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538C10(void)
{

loc_00538C10: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00538C1Du); RECOMP_ABI_CALL(0x00538560u, sub_00538560); /* call 0x00538560 */

loc_00538C1D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00538C20
 * Original: 0x00538C20 - 0x00538C7D (93 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00538C20: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00538C33; /* je: equal / zero */

loc_00538C2A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00538C30u); RECOMP_ABI_CALL(0x00547770u, sub_00547770); /* call 0x00547770 */

loc_00538C30: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00538C33: ;
    eax = MEM32(esi + 0x1A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00538C53; /* je: equal / zero */

loc_00538C3D: ;
    PUSH32(esp, 0x00538C42u); RECOMP_ABI_CALL(0x00555D70u, sub_00555D70); /* call 0x00555D70 */

loc_00538C42: ;
    eax = MEM32(esi + 0x1A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00538C53; /* jle: less or equal (signed <=) */

loc_00538C4C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x1A0) = eax;

loc_00538C53: ;
    eax = MEM32(esi + 0x2B4);
    _fa = (uint32_t)(MEM32(esi + 0x300)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x300), eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00538C67; /* jle: less or equal (signed <=) */

loc_00538C61: ;
    MEM32(esi + 0x300) = eax;

loc_00538C67: ;
    eax = MEM32(esi + 0x2C0);
    _fa = (uint32_t)(MEM32(esi + 0x304)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x304), eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00538C7B; /* jle: less or equal (signed <=) */

loc_00538C75: ;
    MEM32(esi + 0x304) = eax;

loc_00538C7B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00538C80
 * Original: 0x00538C80 - 0x00538CA2 (34 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00538C80: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(esp + 4);
    MEM32(ecx + 4) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00538C91; /* je: equal / zero */

loc_00538C8E: ;
    MEM32(eax + 0x24) = edx;

loc_00538C91: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    eax = MEM32(ecx + 8);
    if (CMP_NE(_fa, _fb)) goto loc_00538C9B; /* jne: not equal / not zero */

loc_00538C99: ;
    MEM32(ecx) = edx;

loc_00538C9B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00538CB0
 * Original: 0x00538CB0 - 0x00538CCE (30 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00538CB0: ;
    eax = MEM32(ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00538CCD; /* je: equal / zero */

loc_00538CB8: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x24);
    MEM32(ecx) = esi;
    MEM32(eax + 0x24) = edx;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), eax (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00538CCA; /* jne: not equal / not zero */

loc_00538CC7: ;
    MEM32(ecx + 4) = edx;

loc_00538CCA: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) - 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00538CCD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00538CD0
 * Original: 0x00538CD0 - 0x00538CF2 (34 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00538CD0: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(esp + 4);
    MEM32(ecx + 4) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00538CE1; /* je: equal / zero */

loc_00538CDE: ;
    MEM32(eax + 0x14) = edx;

loc_00538CE1: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    eax = MEM32(ecx + 8);
    if (CMP_NE(_fa, _fb)) goto loc_00538CEB; /* jne: not equal / not zero */

loc_00538CE9: ;
    MEM32(ecx) = edx;

loc_00538CEB: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00538D00
 * Original: 0x00538D00 - 0x00538D1E (30 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00538D00: ;
    eax = MEM32(ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00538D1D; /* je: equal / zero */

loc_00538D08: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    MEM32(ecx) = esi;
    MEM32(eax + 0x14) = edx;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), eax (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00538D1A; /* jne: not equal / not zero */

loc_00538D17: ;
    MEM32(ecx + 4) = edx;

loc_00538D1A: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) - 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00538D1D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00538D20
 * Original: 0x00538D20 - 0x00538D56 (54 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00538D20: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00538D30; /* jne: not equal / not zero */

loc_00538D28: ;
    PUSH32(esp, 0x00538D2Du); RECOMP_ABI_CALL(0x00538D00u, sub_00538D00); /* call 0x00538D00 */

loc_00538D2D: ;
    esp += 8; return; /* ret 4 */

loc_00538D30: ;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00538D53; /* je: equal / zero */

loc_00538D37: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    MEM32(edx + 0x14) = esi;
    MEM32(eax + 0x14) = 0;
    esi = MEM32(edx + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00538D50; /* jne: not equal / not zero */

loc_00538D4D: ;
    MEM32(ecx + 4) = edx;

loc_00538D50: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) - 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00538D53: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00538D60
 * Original: 0x00538D60 - 0x00538D82 (34 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00538D60: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(esp + 4);
    MEM32(ecx + 4) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00538D71; /* je: equal / zero */

loc_00538D6E: ;
    MEM32(eax + 0xC) = edx;

loc_00538D71: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    eax = MEM32(ecx + 8);
    if (CMP_NE(_fa, _fb)) goto loc_00538D7B; /* jne: not equal / not zero */

loc_00538D79: ;
    MEM32(ecx) = edx;

loc_00538D7B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00538D90
 * Original: 0x00538D90 - 0x00538DAE (30 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00538D90: ;
    eax = MEM32(ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00538DAD; /* je: equal / zero */

loc_00538D98: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    MEM32(ecx) = esi;
    MEM32(eax + 0xC) = edx;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), eax (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00538DAA; /* jne: not equal / not zero */

loc_00538DA7: ;
    MEM32(ecx + 4) = edx;

loc_00538DAA: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) - 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00538DAD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00538DB0
 * Original: 0x00538DB0 - 0x00538DDA (42 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00538DB0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00538DD7; /* je: equal / zero */

loc_00538DBB: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = esi;
    MEM32(eax + 0xC) = 0;
    esi = MEM32(edx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00538DD4; /* jne: not equal / not zero */

loc_00538DD1: ;
    MEM32(ecx + 4) = edx;

loc_00538DD4: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) - 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00538DD7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00538DE0
 * Original: 0x00538DE0 - 0x00538E90 (176 bytes, 62 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538DE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00538DE0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00538E0E; /* jne: not equal / not zero */

loc_00538DF0: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax * 4 + 0x663088);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64CA98);
    PUSH32(esp, 0x00538E06u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_00538E06: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 28; return; /* ret 24 */

loc_00538E0E: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00538E8B; /* je: equal / zero */

loc_00538E15: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x258);
    PUSH32(esp, 0x64CA8C);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00538E29u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00538E29: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00538E48; /* je: equal / zero */

loc_00538E30: ;
    MEM32(eax) = 0x64C81C;
    MEM32(eax + 4) = ebx;
    MEM16(eax + 8) = LO16(ebx);
    MEM16(eax + 0xA) = LO16(ebx);
    MEM32(eax + 0xC) = ebx;
    esi = eax;
    goto loc_00538E4A;

loc_00538E48: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00538E4A: ;
    edi = MEM32(esp + 0x28);
    ecx = esi + 4;
    eax = edi;
    MEM16(ecx + 4) = LO16(ebx);
    ebp = eax + 1;
    /* nop */

loc_00538E60: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00538E60; /* jne: not equal / not zero */

loc_00538E67: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00538E70u); RECOMP_ABI_CALL(0x00606340u, sub_00606340); /* call 0x00606340 */

loc_00538E70: ;
    eax = MEM32(esp + 0x20);
    edx = eax + eax * 2 + 0xB1;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    ecx = eax + edx * 4;
    PUSH32(esp, 0x00538E88u); RECOMP_ABI_CALL(0x00538D60u, sub_00538D60); /* call 0x00538D60 */

loc_00538E88: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00538E8B: ;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00538E90
 * Original: 0x00538E90 - 0x00539175 (741 bytes, 245 insns)
 * Category: game_ui
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00538E90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00538E90: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00538EB5; /* jne: not equal / not zero */

loc_00538E9C: ;
    PUSH32(esp, 0x64CB68);
    PUSH32(esp, 0x00538EA6u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_00538EA6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    MEM8(ebx + 0x2FD) = 1;
    POP32(esp, ebx);
    esp += 32; return; /* ret 28 */

loc_00538EB5: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_A(_fa, _fb)) goto loc_00539161; /* ja: above (unsigned >) */

loc_00538EC4: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x539178); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00538ECBu) goto loc_00538ECB;
    if (_jt == 0x00538F18u) goto loc_00538F18;
    if (_jt == 0x00539028u) goto loc_00539028;
    if (_jt == 0x00539096u) goto loc_00539096;
    if (_jt == 0x00539153u) goto loc_00539153;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00538ECB: ;
    _fb = (uint32_t)(0x2B8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x2B8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    PUSH32(esp, 0x00538ED8u); RECOMP_ABI_CALL(0x00538D00u, sub_00538D00); /* call 0x00538D00 */

loc_00538ED8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053916E; /* je: equal / zero */

loc_00538EE2: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    MEM32(esi) = 0x64C818;
    PUSH32(esp, 0x00538EF1u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00538EF1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x00538EFBu); RECOMP_ABI_CALL(0x00614360u, sub_00614360); /* call 0x00614360 */

loc_00538EFB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00538F01u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00538F01: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    PUSH32(esp, 0x00538F0Bu); RECOMP_ABI_CALL(0x00538D00u, sub_00538D00); /* call 0x00538D00 */

loc_00538F0B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00538EE2; /* jne: not equal / not zero */

loc_00538F11: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 32; return; /* ret 28 */

loc_00538F18: ;
    _fa = (uint32_t)(MEM32(ebx + 0x2C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x2C0), 0x32 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00538F37; /* jl: less (signed <) */

loc_00538F21: ;
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x64CB40);
    PUSH32(esp, 0x00538F2Du); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00538F2D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 32; return; /* ret 28 */

loc_00538F37: ;
    PUSH32(esp, 0x284);
    PUSH32(esp, 0x64CA8C);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00538F48u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00538F48: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00538F5A; /* je: equal / zero */

loc_00538F4F: ;
    ecx = eax;
    PUSH32(esp, 0x00538F56u); RECOMP_ABI_CALL(0x00538660u, sub_00538660); /* call 0x00538660 */

loc_00538F56: ;
    edi = eax;
    goto loc_00538F5C;

loc_00538F5A: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00538F5C: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00538F68u); RECOMP_ABI_CALL(0x00537A90u, sub_00537A90); /* call 0x00537A90 */

loc_00538F68: ;
    edx = MEM32(esp + 0x24);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    ecx = ebx + 0x2B8;
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 0x10) = edx;
    PUSH32(esp, 0x00538F82u); RECOMP_ABI_CALL(0x00538CD0u, sub_00538CD0); /* call 0x00538CD0 */

loc_00538F82: ;
    PUSH32(esp, 0x64CB38);
    PUSH32(esp, 0x630CB4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00538F92u); RECOMP_ABI_CALL(0x00552CA0u, sub_00552CA0); /* call 0x00552CA0 */

loc_00538F92: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x630D4C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00538F9Fu); RECOMP_ABI_CALL(0x005531E0u, sub_005531E0); /* call 0x005531E0 */

loc_00538F9F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00538FA5u); RECOMP_ABI_CALL(0x00553080u, sub_00553080); /* call 0x00553080 */

loc_00538FA5: ;
    PUSH32(esp, 0x64CB38);
    PUSH32(esp, 0x630CB4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00538FB5u); RECOMP_ABI_CALL(0x00552CA0u, sub_00552CA0); /* call 0x00552CA0 */

loc_00538FB5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x630D4C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00538FC2u); RECOMP_ABI_CALL(0x005531E0u, sub_005531E0); /* call 0x005531E0 */

loc_00538FC2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x630D58);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00538FCFu); RECOMP_ABI_CALL(0x005531E0u, sub_005531E0); /* call 0x005531E0 */

loc_00538FCF: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x62D830);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00538FDFu); RECOMP_ABI_CALL(0x005531E0u, sub_005531E0); /* call 0x005531E0 */

loc_00538FDF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00538FE5u); RECOMP_ABI_CALL(0x00553080u, sub_00553080); /* call 0x00553080 */

loc_00538FE5: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x62D830);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00538FF2u); RECOMP_ABI_CALL(0x005531E0u, sub_005531E0); /* call 0x005531E0 */

loc_00538FF2: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00539009; /* jne: not equal / not zero */

loc_00538FFA: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00539006u); RECOMP_ABI_CALL(0x00547200u, sub_00547200); /* call 0x00547200 */

loc_00539006: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00539009: ;
    eax = MEM32(ebx + 0x304);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053916E; /* jne: not equal / not zero */

loc_00539017: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 0x304) = 1;
    POP32(esp, ebx);
    esp += 32; return; /* ret 28 */

loc_00539028: ;
    esi = MEM32(ebx + 0x2B8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00539042; /* je: equal / zero */

loc_00539032: ;
    edi = MEM32(esp + 0x20);

loc_00539036: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00539056; /* je: equal / zero */

loc_0053903B: ;
    esi = MEM32(esi + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00539036; /* jne: not equal / not zero */

loc_00539042: ;
    PUSH32(esp, 0x64CB08);
    PUSH32(esp, 0x0053904Cu); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_0053904C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 32; return; /* ret 28 */

loc_00539056: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00539062u); RECOMP_ABI_CALL(0x00537A90u, sub_00537A90); /* call 0x00537A90 */

loc_00539062: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, 0x64CB38);
    PUSH32(esp, 0x630CB4);
    PUSH32(esp, edi);
    MEM32(esi + 0x10) = edx;
    PUSH32(esp, 0x00539079u); RECOMP_ABI_CALL(0x00552CA0u, sub_00552CA0); /* call 0x00552CA0 */

loc_00539079: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x630D4C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00539086u); RECOMP_ABI_CALL(0x005531E0u, sub_005531E0); /* call 0x005531E0 */

loc_00539086: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0053908Cu); RECOMP_ABI_CALL(0x00553080u, sub_00553080); /* call 0x00553080 */

loc_0053908C: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 32; return; /* ret 28 */

loc_00539096: ;
    esi = MEM32(ebx + 0x2B8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebp = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_005390BA; /* je: equal / zero */

loc_005390A7: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005390CE; /* je: equal / zero */

loc_005390B0: ;
    edi = esi;
    esi = MEM32(esi + 0x14);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005390A7; /* jne: not equal / not zero */

loc_005390BA: ;
    PUSH32(esp, 0x64CB08);
    PUSH32(esp, 0x005390C4u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005390C4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 32; return; /* ret 28 */

loc_005390CE: ;
    PUSH32(esp, 0x64CB38);
    PUSH32(esp, 0x630CB4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005390DEu); RECOMP_ABI_CALL(0x00552CA0u, sub_00552CA0); /* call 0x00552CA0 */

loc_005390DE: ;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x630D4C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005390EFu); RECOMP_ABI_CALL(0x005531E0u, sub_005531E0); /* call 0x005531E0 */

loc_005390EF: ;
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005390F9u); RECOMP_ABI_CALL(0x00553080u, sub_00553080); /* call 0x00553080 */

loc_005390F9: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ecx = ebx + 0x2B8;
    if (CMP_NE(_fa, _fb)) goto loc_0053910D; /* jne: not equal / not zero */

loc_00539106: ;
    PUSH32(esp, 0x0053910Bu); RECOMP_ABI_CALL(0x00538D00u, sub_00538D00); /* call 0x00538D00 */

loc_0053910B: ;
    goto loc_00539113;

loc_0053910D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00539113u); RECOMP_ABI_CALL(0x00538D20u, sub_00538D20); /* call 0x00538D20 */

loc_00539113: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    MEM32(esi) = 0x64C818;
    PUSH32(esp, 0x00539122u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00539122: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x0053912Cu); RECOMP_ABI_CALL(0x00614360u, sub_00614360); /* call 0x00614360 */

loc_0053912C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00539132u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00539132: ;
    eax = MEM32(ebx + 0x304);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053916E; /* jne: not equal / not zero */

loc_0053913F: ;
    PUSH32(esp, 0x64CADC);
    PUSH32(esp, 0x00539149u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00539149: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 32; return; /* ret 28 */

loc_00539153: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(ebx + 0x2FD) = 1;
    POP32(esp, ebx);
    esp += 32; return; /* ret 28 */

loc_00539161: ;
    PUSH32(esp, 0x64CAB0);
    PUSH32(esp, 0x0053916Bu); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_0053916B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0053916E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00539190
 * Original: 0x00539190 - 0x00539267 (215 bytes, 75 insns)
 * Category: game_vtable
 * CC: thiscall, 9 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00539190: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_005391B2; /* jne: not equal / not zero */

loc_005391A0: ;
    PUSH32(esp, 0x64CB88);
    PUSH32(esp, 0x005391AAu); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005391AA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 40; return; /* ret 36 */

loc_005391B2: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00539262; /* je: equal / zero */

loc_005391BC: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x305);
    PUSH32(esp, 0x64CA8C);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x005391D0u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005391D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00539201; /* je: equal / zero */

loc_005391D7: ;
    MEM32(eax) = 0x64C814;
    MEM32(eax + 4) = ebx;
    MEM16(eax + 8) = LO16(ebx);
    MEM16(eax + 0xA) = LO16(ebx);
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x20) = ebx;
    MEM32(eax + 0x1C) = ebx;
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x24) = ebx;
    esi = eax;
    goto loc_00539203;

loc_00539201: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00539203: ;
    edx = MEM32(esp + 0x28);
    edi = esi + 4;
    eax = edx;
    MEM16(edi + 4) = LO16(ebx);
    ebp = eax + 1;

loc_00539213: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00539213; /* jne: not equal / not zero */

loc_0053921A: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00539225u); RECOMP_ABI_CALL(0x00606340u, sub_00606340); /* call 0x00606340 */

loc_00539225: ;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x2C);
    MEM32(esi + 0x10) = ecx;
    ecx = MEM32(esp + 0x34);
    MEM32(esi + 0x1C) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esp + 0x30);
    MEM32(esi + 0x14) = edx;
    edx = MEM32(esp + 0x38);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x2AC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2AC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x20) = edx;
    PUSH32(esp, 0x0053925Fu); RECOMP_ABI_CALL(0x00538C80u, sub_00538C80); /* call 0x00538C80 */

loc_0053925F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00539262: ;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 40; return; /* ret 36 */

}

/**
 * sub_00539270
 * Original: 0x00539270 - 0x00539332 (194 bytes, 64 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00539270: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3D2);
    PUSH32(esp, 0x64CA8C);
    PUSH32(esp, 0x10);
    ebp = ecx;
    PUSH32(esp, 0x0053928Du); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0053928D: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005392AE; /* je: equal / zero */

loc_00539296: ;
    MEM32(eax) = 0x64C81C;
    MEM32(eax + 4) = edx;
    MEM16(eax + 8) = LO16(edx);
    MEM16(eax + 0xA) = LO16(edx);
    MEM32(eax + 0xC) = edx;
    edi = eax;
    goto loc_005392B0;

loc_005392AE: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005392B0: ;
    esi = MEM32(esp + 0x11C);
    ecx = edi + 4;
    eax = esi;
    MEM16(ecx + 4) = LO16(edx);
    ebx = eax + 1;

loc_005392C3: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005392C3; /* jne: not equal / not zero */

loc_005392CA: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005392D3u); RECOMP_ABI_CALL(0x00606340u, sub_00606340); /* call 0x00606340 */

loc_005392D3: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x11C);
    eax = edi + edi * 2 + 0xB1;
    ecx = ebp + eax * 4;
    PUSH32(esp, 0x005392EBu); RECOMP_ABI_CALL(0x00538D60u, sub_00538D60); /* call 0x00538D60 */

loc_005392EB: ;
    ecx = MEM32(edi * 4 + 0x663088);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x64CBA8);
    edx = esp + 0x1C;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00539308u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00539308: ;
    edi = MEM32(ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00539317u); RECOMP_ABI_CALL(0x00537B40u, sub_00537B40); /* call 0x00537B40 */

loc_00539317: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edi + 0x94); PUSH32(esp, 0x00539325u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053931Fu); } /* indirect call */
    }

loc_00539325: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00539340
 * Original: 0x00539340 - 0x00539475 (309 bytes, 104 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00539340: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x108));
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x110);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x118);
    PUSH32(esp, ebp);
    edx = eax + eax * 2 + 0xB1;
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = ecx;
    ecx = ecx + edx * 4;
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_005393C2; /* je: equal / zero */

loc_00539372: ;
    _fa = (uint32_t)(MEM16(edi + 8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 8), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0053937E; /* je: equal / zero */

loc_00539379: ;
    esi = MEM32(edi + 4);
    goto loc_00539383;

loc_0053937E: ;
    esi = 0x62DF21;

loc_00539383: ;
    eax = ebx;

loc_00539385: ;
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(edx, LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_005393A9; /* jne: not equal / not zero */

loc_0053938D: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_005393A5; /* je: equal / zero */

loc_00539391: ;
    SET_LO8(ecx, MEM8(eax + 1));
    SET_LO8(edx, LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_005393A9; /* jne: not equal / not zero */

loc_0053939B: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00539385; /* jne: not equal / not zero */

loc_005393A5: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_005393AE;

loc_005393A9: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_005393AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_005393E5; /* je: equal / zero */

loc_005393B2: ;
    ebp = edi;
    edi = MEM32(edi + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00539372; /* jne: not equal / not zero */

loc_005393BB: ;
    eax = MEM32(esp + 0x120);

loc_005393C2: ;
    eax = MEM32(eax * 4 + 0x663088);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64CBE0);
    PUSH32(esp, 0x005393D5u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005393D5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x108)) >> 32) & 1);
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_005393E5: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_005393F5; /* je: equal / zero */

loc_005393ED: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x005393F3u); RECOMP_ABI_CALL(0x00538DB0u, sub_00538DB0); /* call 0x00538DB0 */

loc_005393F3: ;
    goto loc_005393FA;

loc_005393F5: ;
    PUSH32(esp, 0x005393FAu); RECOMP_ABI_CALL(0x00538D90u, sub_00538D90); /* call 0x00538D90 */

loc_005393FA: ;
    eax = MEM32(esp + 0x128);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edx = MEM32(esp + 0x120);
    ecx = esp + 0x18;
    if (CMP_EQ(_fa, _fb)) goto loc_0053942F; /* je: equal / zero */

loc_00539410: ;
    PUSH32(esp, eax);
    eax = MEM32(edx * 4 + 0x663088);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64CBCC);
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0053942Au); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0053942A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0053944B;

loc_0053942F: ;
    eax = MEM32(edx * 4 + 0x663088);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64CBBC);
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00539448u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00539448: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0053944B: ;
    esi = MEM32(esp + 0x14);
    edi = MEM32(esi);
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x0053945Au); RECOMP_ABI_CALL(0x00537B40u, sub_00537B40); /* call 0x00537B40 */

loc_0053945A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x94); PUSH32(esp, 0x00539468u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00539462u); } /* indirect call */
    }

loc_00539468: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x108)) >> 32) & 1);
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00539480
 * Original: 0x00539480 - 0x005394C7 (71 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00539480: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx + 0x2AC;
    ecx = edi;
    PUSH32(esp, 0x0053948Fu); RECOMP_ABI_CALL(0x00538CB0u, sub_00538CB0); /* call 0x00538CB0 */

loc_0053948F: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005394C4; /* je: equal / zero */

loc_00539495: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    MEM32(esi) = 0x64C814;
    PUSH32(esp, 0x005394A4u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005394A4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x005394AEu); RECOMP_ABI_CALL(0x00614360u, sub_00614360); /* call 0x00614360 */

loc_005394AE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005394B4u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005394B4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    PUSH32(esp, 0x005394BEu); RECOMP_ABI_CALL(0x00538CB0u, sub_00538CB0); /* call 0x00538CB0 */

loc_005394BE: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00539495; /* jne: not equal / not zero */

loc_005394C4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005394D0
 * Original: 0x005394D0 - 0x00539521 (81 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005394D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005394D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = eax + eax * 2 + 0xB1;
    PUSH32(esp, edi);
    edi = ecx + eax * 4;
    ecx = edi;
    PUSH32(esp, 0x005394E7u); RECOMP_ABI_CALL(0x00538D90u, sub_00538D90); /* call 0x00538D90 */

loc_005394E7: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053951C; /* je: equal / zero */

loc_005394ED: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    MEM32(esi) = 0x64C81C;
    PUSH32(esp, 0x005394FCu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005394FC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x00539506u); RECOMP_ABI_CALL(0x00614360u, sub_00614360); /* call 0x00614360 */

loc_00539506: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0053950Cu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0053950C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    PUSH32(esp, 0x00539516u); RECOMP_ABI_CALL(0x00538D90u, sub_00538D90); /* call 0x00538D90 */

loc_00539516: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005394ED; /* jne: not equal / not zero */

loc_0053951C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00539530
 * Original: 0x00539530 - 0x00539547 (23 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00539530: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00539536: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0053953Eu); RECOMP_ABI_CALL(0x005394D0u, sub_005394D0); /* call 0x005394D0 */

loc_0053953E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00539536; /* jl: less (signed <) */

loc_00539544: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00539550
 * Original: 0x00539550 - 0x00539597 (71 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00539550: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx + 0x2B8;
    ecx = edi;
    PUSH32(esp, 0x0053955Fu); RECOMP_ABI_CALL(0x00538D00u, sub_00538D00); /* call 0x00538D00 */

loc_0053955F: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00539594; /* je: equal / zero */

loc_00539565: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    MEM32(esi) = 0x64C818;
    PUSH32(esp, 0x00539574u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00539574: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x0053957Eu); RECOMP_ABI_CALL(0x00614360u, sub_00614360); /* call 0x00614360 */

loc_0053957E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00539584u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00539584: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    PUSH32(esp, 0x0053958Eu); RECOMP_ABI_CALL(0x00538D00u, sub_00538D00); /* call 0x00538D00 */

loc_0053958E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00539565; /* jne: not equal / not zero */

loc_00539594: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005395A0
 * Original: 0x005395A0 - 0x005395DD (61 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005395A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005395A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005395A8u); RECOMP_ABI_CALL(0x00539550u, sub_00539550); /* call 0x00539550 */

loc_005395A8: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x663060);
    edx = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x537BE0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64C7E8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005395C8u); RECOMP_ABI_CALL(0x00547170u, sub_00547170); /* call 0x00547170 */

loc_005395C8: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x2FD) = 0;
    MEM8(esi + 0x2FC) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005395E0
 * Original: 0x005395E0 - 0x00539605 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005395E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005395E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005395ECu); RECOMP_ABI_CALL(0x005471E0u, sub_005471E0); /* call 0x005471E0 */

loc_005395EC: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x2FD) = LO8(eax);
    MEM8(esi + 0x2FC) = LO8(eax);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00539550(); return; /* tail jmp 0x00539550 */

}

/**
 * sub_00539610
 * Original: 0x00539610 - 0x00539636 (38 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539610(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00539610: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0053961Eu); RECOMP_ABI_CALL(0x005394D0u, sub_005394D0); /* call 0x005394D0 */

loc_0053961E: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x537BB0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053962Eu); RECOMP_ABI_CALL(0x005472B0u, sub_005472B0); /* call 0x005472B0 */

loc_0053962E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00539640
 * Original: 0x00539640 - 0x00539681 (65 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539640(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00539640: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0x64CC14);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00539653u); RECOMP_ABI_CALL(0x00547110u, sub_00547110); /* call 0x00547110 */

loc_00539653: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0053965Fu); RECOMP_ABI_CALL(0x005394D0u, sub_005394D0); /* call 0x005394D0 */

loc_0053965F: ;
    ecx = MEM32(esi + 0x2F4);
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x2EC) = 0;
    MEM32(esi + 0x2E8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00539690
 * Original: 0x00539690 - 0x005396E7 (87 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00539690: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0x64CC14);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005396A3u); RECOMP_ABI_CALL(0x00547110u, sub_00547110); /* call 0x00547110 */

loc_005396A3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x005396AFu); RECOMP_ABI_CALL(0x005394D0u, sub_005394D0); /* call 0x005394D0 */

loc_005396AF: ;
    eax = MEM32(esi + 0x2F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 0x2F0) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_005396CF; /* je: equal / zero */

loc_005396C3: ;
    MEM32(esi + 0x2E8) = 9;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005396CF: ;
    ecx = MEM32(esi + 0x2EC);
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x2E8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005396F0
 * Original: 0x005396F0 - 0x00539716 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005396F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005396F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005396FCu); RECOMP_ABI_CALL(0x00547350u, sub_00547350); /* call 0x00547350 */

loc_005396FC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x00539708u); RECOMP_ABI_CALL(0x005394D0u, sub_005394D0); /* call 0x005394D0 */

loc_00539708: ;
    MEM32(esi + 0x2F4) = 0;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00539720
 * Original: 0x00539720 - 0x0053977B (91 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00539720: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0x64CC14);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00539733u); RECOMP_ABI_CALL(0x00547110u, sub_00547110); /* call 0x00547110 */

loc_00539733: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x0053973Fu); RECOMP_ABI_CALL(0x005394D0u, sub_005394D0); /* call 0x005394D0 */

loc_0053973F: ;
    eax = MEM32(esi + 0x2EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x2F4) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0053975F; /* je: equal / zero */

loc_00539753: ;
    MEM32(esi + 0x2E8) = 7;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0053975F: ;
    eax = MEM32(esi + 0x2F0);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ecx * 4 + 4;
    MEM32(esi + 0x2E8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00539780
 * Original: 0x00539780 - 0x005397FE (126 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00539780: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053978Du); RECOMP_ABI_CALL(0x005471E0u, sub_005471E0); /* call 0x005471E0 */

loc_0053978D: ;
    eax = MEM32(esi + 0x2EC);
    edi = 1;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005397A6; /* jne: not equal / not zero */

loc_0053979F: ;
    ecx = esi;
    PUSH32(esp, 0x005397A6u); RECOMP_ABI_CALL(0x00539640u, sub_00539640); /* call 0x00539640 */

loc_005397A6: ;
    _fa = (uint32_t)(MEM32(esi + 0x2F0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2F0), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005397B5; /* jne: not equal / not zero */

loc_005397AE: ;
    ecx = esi;
    PUSH32(esp, 0x005397B5u); RECOMP_ABI_CALL(0x00539690u, sub_00539690); /* call 0x00539690 */

loc_005397B5: ;
    _fa = (uint32_t)(MEM32(esi + 0x2F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2F4), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005397C4; /* jne: not equal / not zero */

loc_005397BD: ;
    ecx = esi;
    PUSH32(esp, 0x005397C4u); RECOMP_ABI_CALL(0x00539720u, sub_00539720); /* call 0x00539720 */

loc_005397C4: ;
    ecx = esi;
    PUSH32(esp, 0x005397CBu); RECOMP_ABI_CALL(0x00539480u, sub_00539480); /* call 0x00539480 */

loc_005397CB: ;
    ecx = esi;
    PUSH32(esp, 0x005397D2u); RECOMP_ABI_CALL(0x00539530u, sub_00539530); /* call 0x00539530 */

loc_005397D2: ;
    ecx = esi;
    PUSH32(esp, 0x005397D9u); RECOMP_ABI_CALL(0x00539550u, sub_00539550); /* call 0x00539550 */

loc_005397D9: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005397E2u); RECOMP_ABI_CALL(0x005477A0u, sub_005477A0); /* call 0x005477A0 */

loc_005397E2: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005397EBu); RECOMP_ABI_CALL(0x00547700u, sub_00547700); /* call 0x00547700 */

loc_005397EB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x2E8) = edi;
    POP32(esp, edi);
    MEM32(esi + 4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00539800
 * Original: 0x00539800 - 0x0053987E (126 bytes, 36 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00539800: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0053982B; /* jne: not equal / not zero */

loc_0053980B: ;
    PUSH32(esp, 0x64CC20);
    PUSH32(esp, 0x00539815u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00539815: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + eax * 4 + 0x2EC) = 0;
    POP32(esp, edi);
    esp += 20; return; /* ret 16 */

loc_0053982B: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(edi + esi * 4 + 0x2EC) = 1;
    PUSH32(esp, 0x00539843u); RECOMP_ABI_CALL(0x00539610u, sub_00539610); /* call 0x00539610 */

loc_00539843: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00539856; /* jne: not equal / not zero */

loc_00539847: ;
    POP32(esp, esi);
    MEM32(edi + 0x2E8) = 7;
    POP32(esp, edi);
    esp += 20; return; /* ret 16 */

loc_00539856: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053986A; /* jne: not equal / not zero */

loc_0053985B: ;
    POP32(esp, esi);
    MEM32(edi + 0x2E8) = 8;
    POP32(esp, edi);
    esp += 20; return; /* ret 16 */

loc_0053986A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00539879; /* jne: not equal / not zero */

loc_0053986F: ;
    MEM32(edi + 0x2E8) = 9;

loc_00539879: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00539880
 * Original: 0x00539880 - 0x00539914 (148 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00539880: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_005398B5; /* jne: not equal / not zero */

loc_0053988B: ;
    PUSH32(esp, 0x64CC40);
    MEM32(esi + 0x2E8) = 6;
    PUSH32(esp, 0x0053989Fu); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_0053989F: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + eax * 4 + 0x2EC) = 0;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_005398B5: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005398BFu); RECOMP_ABI_CALL(0x005473A0u, sub_005473A0); /* call 0x005473A0 */

loc_005398BF: ;
    edi = MEM32(esp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esi + edi * 4 + 0x2EC) = 1;
    PUSH32(esp, 0x005398D9u); RECOMP_ABI_CALL(0x00539610u, sub_00539610); /* call 0x00539610 */

loc_005398D9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005398EC; /* jne: not equal / not zero */

loc_005398DD: ;
    POP32(esp, edi);
    MEM32(esi + 0x2E8) = 7;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_005398EC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00539900; /* jne: not equal / not zero */

loc_005398F1: ;
    POP32(esp, edi);
    MEM32(esi + 0x2E8) = 8;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00539900: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053990F; /* jne: not equal / not zero */

loc_00539905: ;
    MEM32(esi + 0x2E8) = 9;

loc_0053990F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00539920
 * Original: 0x00539920 - 0x00539B20 (512 bytes, 176 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539920(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00539920: ;
    edx = MEM32(esp + 4);
    eax = edx + -32;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00539A46; /* ja: above (unsigned >) */

loc_00539930: ;
    eax = ZX8(MEM8(eax + 0x539AD8));
    { uint32_t _jt = MEM32(eax * 4 + 0x539A50); /* switch: 34 entries, 34 targets */
    if (_jt == 0x0053993Eu) goto loc_0053993E;
    if (_jt == 0x00539946u) goto loc_00539946;
    if (_jt == 0x0053994Eu) goto loc_0053994E;
    if (_jt == 0x00539956u) goto loc_00539956;
    if (_jt == 0x0053995Eu) goto loc_0053995E;
    if (_jt == 0x00539966u) goto loc_00539966;
    if (_jt == 0x0053996Eu) goto loc_0053996E;
    if (_jt == 0x00539976u) goto loc_00539976;
    if (_jt == 0x0053997Eu) goto loc_0053997E;
    if (_jt == 0x00539986u) goto loc_00539986;
    if (_jt == 0x0053998Eu) goto loc_0053998E;
    if (_jt == 0x00539996u) goto loc_00539996;
    if (_jt == 0x0053999Eu) goto loc_0053999E;
    if (_jt == 0x005399A6u) goto loc_005399A6;
    if (_jt == 0x005399AEu) goto loc_005399AE;
    if (_jt == 0x005399B6u) goto loc_005399B6;
    if (_jt == 0x005399BEu) goto loc_005399BE;
    if (_jt == 0x005399C6u) goto loc_005399C6;
    if (_jt == 0x005399CEu) goto loc_005399CE;
    if (_jt == 0x005399D6u) goto loc_005399D6;
    if (_jt == 0x005399DEu) goto loc_005399DE;
    if (_jt == 0x005399E6u) goto loc_005399E6;
    if (_jt == 0x005399EEu) goto loc_005399EE;
    if (_jt == 0x005399F6u) goto loc_005399F6;
    if (_jt == 0x005399FEu) goto loc_005399FE;
    if (_jt == 0x00539A06u) goto loc_00539A06;
    if (_jt == 0x00539A0Eu) goto loc_00539A0E;
    if (_jt == 0x00539A16u) goto loc_00539A16;
    if (_jt == 0x00539A1Eu) goto loc_00539A1E;
    if (_jt == 0x00539A26u) goto loc_00539A26;
    if (_jt == 0x00539A2Eu) goto loc_00539A2E;
    if (_jt == 0x00539A36u) goto loc_00539A36;
    if (_jt == 0x00539A3Eu) goto loc_00539A3E;
    if (_jt == 0x00539A46u) goto loc_00539A46;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0053993E: ;
    eax = 0x64CE2C;
    esp += 8; return; /* ret 4 */

loc_00539946: ;
    eax = 0x64CE24;
    esp += 8; return; /* ret 4 */

loc_0053994E: ;
    eax = 0x64CE10;
    esp += 8; return; /* ret 4 */

loc_00539956: ;
    eax = 0x64CE04;
    esp += 8; return; /* ret 4 */

loc_0053995E: ;
    eax = 0x64CDF0;
    esp += 8; return; /* ret 4 */

loc_00539966: ;
    eax = 0x64CDDC;
    esp += 8; return; /* ret 4 */

loc_0053996E: ;
    eax = 0x64CDD0;
    esp += 8; return; /* ret 4 */

loc_00539976: ;
    eax = 0x64CDC8;
    esp += 8; return; /* ret 4 */

loc_0053997E: ;
    eax = 0x64CDBC;
    esp += 8; return; /* ret 4 */

loc_00539986: ;
    eax = 0x64CDB0;
    esp += 8; return; /* ret 4 */

loc_0053998E: ;
    eax = 0x64CDA4;
    esp += 8; return; /* ret 4 */

loc_00539996: ;
    eax = 0x64CD94;
    esp += 8; return; /* ret 4 */

loc_0053999E: ;
    eax = 0x64CD88;
    esp += 8; return; /* ret 4 */

loc_005399A6: ;
    eax = 0x64CD7C;
    esp += 8; return; /* ret 4 */

loc_005399AE: ;
    eax = 0x64CD70;
    esp += 8; return; /* ret 4 */

loc_005399B6: ;
    eax = 0x64CD64;
    esp += 8; return; /* ret 4 */

loc_005399BE: ;
    eax = 0x64CD58;
    esp += 8; return; /* ret 4 */

loc_005399C6: ;
    eax = 0x64CD4C;
    esp += 8; return; /* ret 4 */

loc_005399CE: ;
    eax = 0x64CD3C;
    esp += 8; return; /* ret 4 */

loc_005399D6: ;
    eax = 0x64CD28;
    esp += 8; return; /* ret 4 */

loc_005399DE: ;
    eax = 0x64CD1C;
    esp += 8; return; /* ret 4 */

loc_005399E6: ;
    eax = 0x64CD10;
    esp += 8; return; /* ret 4 */

loc_005399EE: ;
    eax = 0x64CD00;
    esp += 8; return; /* ret 4 */

loc_005399F6: ;
    eax = 0x64CCF8;
    esp += 8; return; /* ret 4 */

loc_005399FE: ;
    eax = 0x64CCF0;
    esp += 8; return; /* ret 4 */

loc_00539A06: ;
    eax = 0x64CCE4;
    esp += 8; return; /* ret 4 */

loc_00539A0E: ;
    eax = 0x64CCCC;
    esp += 8; return; /* ret 4 */

loc_00539A16: ;
    eax = 0x64CCBC;
    esp += 8; return; /* ret 4 */

loc_00539A1E: ;
    eax = 0x64CCAC;
    esp += 8; return; /* ret 4 */

loc_00539A26: ;
    eax = 0x64CC98;
    esp += 8; return; /* ret 4 */

loc_00539A2E: ;
    eax = 0x64CC80;
    esp += 8; return; /* ret 4 */

loc_00539A36: ;
    eax = 0x64CC70;
    esp += 8; return; /* ret 4 */

loc_00539A3E: ;
    eax = 0x64CC68;
    esp += 8; return; /* ret 4 */

loc_00539A46: ;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_005E3A70(); return; /* tail jmp 0x005E3A70 */

    /* nop */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, ebx);
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + -103)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(esi + -103) = MEM8(esi + -103) + LO8(eax);
    _fa = (uint32_t)(MEM8(esi + -103)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + -103)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esi + -103) = MEM8(esi + -103) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esi + -103)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + -103)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(esi + -103) = MEM8(esi + -103) + LO8(edx);
    _fa = (uint32_t)(MEM8(esi + -103)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + -103)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(esi + -103) = MEM8(esi + -103) + LO8(ebx);
    _fa = (uint32_t)(MEM8(esi + -103)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + -103)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(esi + -103) = MEM8(esi + -103) + HI8(eax);
    _fa = (uint32_t)(MEM8(esi + -103)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + -103)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(esi + -103) = MEM8(esi + -103) + HI8(ecx);
    _fa = (uint32_t)(MEM8(esi + -103)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + -103)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(esi + -103) = MEM8(esi + -103) + HI8(edx);
    _fa = (uint32_t)(MEM8(esi + -103)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + -103)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(esi + -103) = MEM8(esi + -103) + HI8(ebx);
    _fa = (uint32_t)(MEM8(esi + -103)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + -1912581223)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(esi + -1912581223) = MEM8(esi + -1912581223) + LO8(eax);
    _fa = (uint32_t)(MEM8(esi + -1912581223)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, ebx);
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + -1644145767)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(esi + -1644145767) = MEM8(esi + -1644145767) + LO8(edx);
    _fa = (uint32_t)(MEM8(esi + -1644145767)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, ebx);
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + -1375710311)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(esi + -1375710311) = MEM8(esi + -1375710311) + HI8(eax);
    _fa = (uint32_t)(MEM8(esi + -1375710311)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, ebx);
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + -1107274855)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(esi + -1107274855) = MEM8(esi + -1107274855) + HI8(edx);
    _fa = (uint32_t)(MEM8(esi + -1107274855)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, ebx);
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(edx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    SET_HI8(edx, HI8(edx) + LO8(eax));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, ebx);
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(edx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_HI8(edx, HI8(edx) + LO8(ecx));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, ebx);
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(edx)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    SET_HI8(edx, HI8(edx) + LO8(edx));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, ebx);
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(edx)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    SET_HI8(edx, HI8(edx) + LO8(ebx));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, ebx);
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(edx)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    SET_HI8(edx, HI8(edx) + HI8(eax));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, ebx);
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(edx)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    SET_HI8(edx, HI8(edx) + HI8(ecx));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, ebx);
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(edx)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    SET_HI8(edx, HI8(edx) + HI8(edx));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, ebx);
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(edx)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    SET_HI8(edx, HI8(edx) + HI8(ebx));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, ebx);
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(esi) = MEM8(esi) + LO8(eax);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("lcall 0x53, 0x9a0e0053", 0x00539AB5u); /* TODO: lcall 0x53, 0x9a0e0053 */
    PUSH32(esp, 0 /* seg:ss */);
    RECOMP_UNIMPL("lcall 0x53, 0x9a1e0053", 0x00539ABDu); /* TODO: lcall 0x53, 0x9a1e0053 */
    RECOMP_UNIMPL("lcall 0x53, 0x9a2e0053", 0x00539AC4u); /* TODO: lcall 0x53, 0x9a2e0053 */
    RECOMP_UNIMPL("lcall 0x53, 0x9a3e0053", 0x00539ACCu); /* TODO: lcall 0x53, 0x9a3e0053 */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    RECOMP_UNIMPL("lcall 0x302, 0x1000053", 0x00539AD5u); /* TODO: lcall 0x302, 0x1000053 */
    _fb = (uint32_t)(5) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(5)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 5);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, 0 /* seg:es */);
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _cf = 0; /* logical op clears CF */
    MEM8(ecx) = MEM8(ecx) | LO8(ecx);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) | MEM8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0xD);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, 0 /* seg:cs */);
    xmm2 = XMM_MEM(ecx); /* movups */
    { uint64_t _t = (uint64_t)(LO8(edx)) + (uint64_t)(MEM8(ebx)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(edx, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x15) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    PUSH32(esp, 0 /* seg:ss */);
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop ss - segment register */
    { uint64_t _t = (uint64_t)(MEM8(ecx)) - (uint64_t)(LO8(ebx)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(ecx) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(HI8(eax)) - (uint64_t)(MEM8(ecx)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_HI8(eax, (uint32_t)_t); }  /* sbb */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(ebx) - (uint64_t)(MEM32(ebx + 0x21211F1E)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    MEM32(ecx) = MEM32(ecx) & esp;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(ecx) = MEM32(ecx) & esp;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(ecx) = MEM32(ecx) & esp;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(ecx) = MEM32(ecx) & esp;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(ecx) = MEM32(ecx) & esp;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(ecx) = MEM32(ecx) & esp;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(ecx) = MEM32(ecx) & esp;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(ecx) = MEM32(ecx) & esp;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(ecx) = MEM32(ecx) & esp;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(ecx) = MEM32(ecx) & esp;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(ecx) = MEM32(ecx) & esp;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(ecx) = MEM32(ecx) & esp;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & esp;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */

    g_seh_ebp = ebp; sub_00539B20(); return; /* fallthrough 0x00539B20 */

}

/**
 * sub_00539B20
 * Original: 0x00539B20 - 0x00539B48 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539B20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00539B20: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x1C) = edx;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = edx;
    MEM32(ecx + 0x28) = edx;
    MEM32(ecx + 0x34) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00539B50
 * Original: 0x00539B50 - 0x00539BED (157 bytes, 50 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00539B50(void)
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

loc_00539B50: ;
    fp_push(MEMF(0x62D57C)); /* fld float */
    eax = MEM32(esp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax)); /* fsub dword ptr [eax] */
    edx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push((double)SMEM32(ecx + 0xC)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00539B6C; /* jge: greater or equal (signed >=) */

loc_00539B66: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_00539B6C: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ecx + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    fp_push((double)SMEM32(ecx + 0xC)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00539B91; /* jge: greater or equal (signed >=) */

loc_00539B8B: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_00539B91: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ecx + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
    fp_push((double)SMEM32(ecx + 0xC)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00539BB7; /* jge: greater or equal (signed >=) */

loc_00539BB1: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_00539BB7: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ecx + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0xC)); /* fsub dword ptr [eax + 0xc] */
    fp_push((double)SMEM32(ecx + 0xC)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00539BDD; /* jge: greater or equal (signed >=) */

loc_00539BD7: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_00539BDD: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ecx + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00539BF0
 * Original: 0x00539BF0 - 0x00539C29 (57 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00539BF0: ;
    ecx = MEM32(ecx + 0x34);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00539BFF; /* je: equal / zero */

loc_00539BFA: ;
    eax = 1;

loc_00539BFF: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00539C05; /* je: equal / zero */

loc_00539C04: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00539C05: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00539C0B; /* je: equal / zero */

loc_00539C0A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00539C0B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00539C11; /* je: equal / zero */

loc_00539C10: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00539C11: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00539C17; /* je: equal / zero */

loc_00539C16: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00539C17: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00539C1D; /* je: equal / zero */

loc_00539C1C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00539C1D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00539C23; /* je: equal / zero */

loc_00539C22: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00539C23: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00539C28; /* jns: not sign (positive) */

loc_00539C27: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00539C28: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00539C30
 * Original: 0x00539C30 - 0x00539C46 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539C30(void)
{

loc_00539C30: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x2C;
    PUSH32(esp, 0x00539C3Bu); RECOMP_ABI_CALL(0x00539C60u, sub_00539C60); /* call 0x00539C60 */

loc_00539C3B: ;
    ecx = esi;
    PUSH32(esp, 0x00539C42u); RECOMP_ABI_CALL(0x00539B20u, sub_00539B20); /* call 0x00539B20 */

loc_00539C42: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00539C50
 * Original: 0x00539C50 - 0x00539C5B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539C50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00539C50: ;
    MEM32(ecx) = 0x64CE34;
    g_seh_ebp = ebp; sub_00614360(); return; /* tail jmp 0x00614360 */

}

/**
 * sub_00539C60
 * Original: 0x00539C60 - 0x00539C70 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539C60(void)
{

loc_00539C60: ;
    eax = ecx;
    MEM32(eax) = 0x64CE38;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00539C70
 * Original: 0x00539C70 - 0x00539C7B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539C70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00539C70: ;
    MEM32(ecx) = 0x64CE38;
    g_seh_ebp = ebp; sub_00614360(); return; /* tail jmp 0x00614360 */

}

/**
 * sub_00539C80
 * Original: 0x00539C80 - 0x00539CF2 (114 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539C80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00539C80: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, 1);
    MEM32(eax) = 0x64CE34;
    MEM32(eax + 4) = 0x40A00000;
    MEM32(eax + 8) = 0x41200000;
    MEM8(eax + 0xC) = LO8(edx);
    MEM8(eax + 0xD) = LO8(edx);
    MEM32(eax + 0x10) = 0x41A00000;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = 0x3CA3D70A;
    MEM32(eax + 0x20) = ecx;
    MEM8(eax + 0x24) = LO8(edx);
    MEM8(eax + 0x25) = LO8(edx);
    MEM32(eax + 0x28) = 0x41A00000;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = 0x3CA3D70A;
    MEM32(eax + 0x38) = ecx;
    MEM8(eax + 0x3C) = LO8(edx);
    MEM8(eax + 0x3D) = LO8(edx);
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = 0x3F800000;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = 0x3F000000;
    MEM32(eax + 0x50) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00539D00
 * Original: 0x00539D00 - 0x00539D1E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00539D00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00539D08u); RECOMP_ABI_CALL(0x00539C50u, sub_00539C50); /* call 0x00539C50 */

loc_00539D08: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00539D18; /* je: equal / zero */

loc_00539D0F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00539D15u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00539D15: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00539D18: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00539D20
 * Original: 0x00539D20 - 0x00539D3E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00539D20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00539D28u); RECOMP_ABI_CALL(0x00539C70u, sub_00539C70); /* call 0x00539C70 */

loc_00539D28: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00539D38; /* je: equal / zero */

loc_00539D2F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00539D35u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00539D35: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00539D38: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00539D40
 * Original: 0x00539D40 - 0x00539D64 (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539D40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00539D40: ;
    ecx = 0x6C3250;
    PUSH32(esp, 0x00539D4Au); RECOMP_ABI_CALL(0x0053B360u, sub_0053B360); /* call 0x0053B360 */

loc_00539D4A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00539D63; /* je: equal / zero */

loc_00539D4E: ;
    SET_LO8(eax, MEM8(0x6C2C65));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00539D63; /* jne: not equal / not zero */

loc_00539D57: ;
    MEM8(0x6C2C65) = 1;
    g_seh_ebp = ebp; sub_005F1070(); return; /* tail jmp 0x005F1070 */

loc_00539D63: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00539D70
 * Original: 0x00539D70 - 0x00539D86 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00539D70: ;
    SET_LO8(eax, MEM8(0x6C2C65));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00539D85; /* je: equal / zero */

loc_00539D79: ;
    PUSH32(esp, 0x00539D7Eu); RECOMP_ABI_CALL(0x005F10F0u, sub_005F10F0); /* call 0x005F10F0 */

loc_00539D7E: ;
    MEM8(0x6C2C65) = 0;

loc_00539D85: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00539D90
 * Original: 0x00539D90 - 0x00539DC6 (54 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539D90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00539D90: ;
    eax = MEM32(0x6C2C58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00539DB3; /* ja: above (unsigned >) */

loc_00539D9A: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x539DC8); /* switch: 4 entries, 3 targets */
    if (_jt == 0x00539DA1u) goto loc_00539DA1;
    if (_jt == 0x00539DA7u) goto loc_00539DA7;
    if (_jt == 0x00539DADu) goto loc_00539DAD;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00539DA1: ;
    eax = 0x64CE88;
    esp += 4; return; /* ret */

loc_00539DA7: ;
    eax = 0x64CE7C;
    esp += 4; return; /* ret */

loc_00539DAD: ;
    eax = 0x64CE70;
    esp += 4; return; /* ret */

loc_00539DB3: ;
    PUSH32(esp, 0x64CE60);
    PUSH32(esp, 0x00539DBDu); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_00539DBD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x62DF21;
    esp += 4; return; /* ret */

}

/**
 * sub_00539DE0
 * Original: 0x00539DE0 - 0x00539E23 (67 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539DE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00539DE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00539DF0;

    /* nop */

loc_00539DF0: ;
    eax = MEM32(esi * 4 + 0x663160);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00539DFEu); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_00539DFE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00539E1A; /* je: equal / zero */

loc_00539E05: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00539DF0; /* jl: less (signed <) */

loc_00539E0B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 4) = 0x64CE94;
    g_seh_ebp = ebp; sub_006186B0(); return; /* tail jmp 0x006186B0 */

loc_00539E1A: ;
    POP32(esp, edi);
    MEM32(0x6C2C60) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00539E30
 * Original: 0x00539E30 - 0x00539E92 (98 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539E30(void)
{

loc_00539E30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x6C2E88;
    PUSH32(esp, 0x00539E3Cu); RECOMP_ABI_CALL(0x0053ACD0u, sub_0053ACD0); /* call 0x0053ACD0 */

loc_00539E3C: ;
    ecx = 0xF1;
    esi = 0x6C2E88;
    edi = 0x6C32C8;
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
    ecx = 0x6C32C8;
    PUSH32(esp, 0x00539E57u); RECOMP_ABI_CALL(0x0053AD50u, sub_0053AD50); /* call 0x0053AD50 */

loc_00539E57: ;
    SET_LO8(eax, MEM8(0x663154));
    SET_LO8(ecx, MEM8(0x663155));
    SET_LO8(edx, MEM8(0x663156));
    MEM8(0x6C2FE9) = LO8(eax);
    SET_LO8(eax, MEM8(0x663157));
    MEM8(0x6C2FEA) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x663158));
    POP32(esp, edi);
    MEM8(0x6C2FEB) = LO8(edx);
    MEM8(0x6C2FEC) = LO8(eax);
    MEM8(0x6C2FED) = LO8(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00539EA0
 * Original: 0x00539EA0 - 0x00539EE5 (69 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539EA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00539EA0: ;
    SET_LO8(eax, MEM8(0x6C3429));
    SET_LO8(ecx, MEM8(0x6C342A));
    SET_LO8(edx, MEM8(0x6C342C));
    MEM8(0x6C2FE9) = LO8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(0x6C2FEA) = LO8(ecx);
    ecx = MEM32(0x6C32E4);
    MEM8(0x6C2FEB) = LO8(eax);
    MEM32(0x6C2EBC) = eax;
    SET_LO8(eax, MEM8(0x6C342D));
    MEM8(0x6C2FEC) = LO8(edx);
    MEM8(0x6C2FED) = LO8(eax);
    MEM32(0x6C2EA4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00539EF0
 * Original: 0x00539EF0 - 0x00539F57 (103 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539EF0(void)
{

loc_00539EF0: ;
    SET_LO8(eax, MEM8(0x6C3429));
    SET_LO8(ecx, MEM8(0x6C342A));
    SET_LO8(edx, MEM8(0x6C342B));
    MEM8(0x6C2FE9) = LO8(eax);
    SET_LO8(eax, MEM8(0x6C342C));
    MEM8(0x6C2FEA) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x6C342D));
    MEM8(0x6C2FEB) = LO8(edx);
    edx = MEM32(0x6C32E4);
    MEM8(0x6C2FEC) = LO8(eax);
    eax = MEM32(0x6C32CC);
    MEM8(0x6C2FED) = LO8(ecx);
    ecx = MEM32(0x6C32D0);
    MEM32(0x6C2EA4) = edx;
    edx = MEM32(0x6C32DC);
    MEM32(0x6C2E8C) = eax;
    MEM32(0x6C2E90) = ecx;
    MEM32(0x6C2E9C) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00539F60
 * Original: 0x00539F60 - 0x00539F77 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539F60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00539F60: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x6C2EBC) = 0x64;
    MEM8(0x6C2FEA) = LO8(eax);
    MEM32(0x6C2EA4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00539F80
 * Original: 0x00539F80 - 0x00539F9E (30 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539F80(void)
{

loc_00539F80: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(0x6C2C66) = LO8(eax);
    MEM8(0x6C2C67) = LO8(eax);
    MEM8(0x6C2C68) = LO8(eax);
    MEM8(0x6C2C69) = LO8(eax);
    MEM8(0x6C2C6A) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00539FA0
 * Original: 0x00539FA0 - 0x00539FD2 (50 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00539FA0: ;
    SET_LO8(eax, MEM8(0x6C2C66));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00539FAC; /* jne: not equal / not zero */

loc_00539FA9: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00539FAC: ;
    SET_LO8(eax, MEM8(0x6C2C67));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00539FA9; /* je: equal / zero */

loc_00539FB5: ;
    SET_LO8(eax, MEM8(0x6C2C68));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00539FA9; /* je: equal / zero */

loc_00539FBE: ;
    SET_LO8(eax, MEM8(0x6C2C69));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00539FA9; /* je: equal / zero */

loc_00539FC7: ;
    SET_LO8(eax, MEM8(0x6C2C6A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00539FE0
 * Original: 0x00539FE0 - 0x00539FFE (30 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00539FE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00539FE0: ;
    MEM32(0x6C2C58) = 0;
    PUSH32(esp, 0x00539FEFu); RECOMP_ABI_CALL(0x00539D90u, sub_00539D90); /* call 0x00539D90 */

loc_00539FEF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64CEB0);
    PUSH32(esp, 0x00539FFAu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00539FFA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0053A000
 * Original: 0x0053A000 - 0x0053A1B0 (432 bytes, 119 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053A000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053A000: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0053A009u); RECOMP_ABI_CALL(0x00539FE0u, sub_00539FE0); /* call 0x00539FE0 */

loc_0053A009: ;
    PUSH32(esp, 0x0053A00Eu); RECOMP_ABI_CALL(0x0053B9B0u, sub_0053B9B0); /* call 0x0053B9B0 */

loc_0053A00E: ;
    PUSH32(esp, 0x64CFA4);
    PUSH32(esp, 0x0053A018u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0053A018: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A044; /* je: equal / zero */

loc_0053A01F: ;
    SET_LO8(ebx, 1);
    MEM8(0x6C2C66) = LO8(ebx);
    MEM8(0x6C2C67) = LO8(ebx);
    MEM8(0x6C2C68) = LO8(ebx);
    MEM8(0x6C2C69) = LO8(ebx);
    MEM8(0x6C2C6A) = LO8(ebx);
    goto loc_0053A0DB;

loc_0053A044: ;
    PUSH32(esp, 0x64CF98);
    PUSH32(esp, 0x0053A04Eu); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0053A04E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(ebx, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_0053A05D; /* je: equal / zero */

loc_0053A057: ;
    MEM8(0x6C2C66) = LO8(ebx);

loc_0053A05D: ;
    PUSH32(esp, 0x64CF88);
    PUSH32(esp, 0x0053A067u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0053A067: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A074; /* je: equal / zero */

loc_0053A06E: ;
    MEM8(0x6C2C67) = LO8(ebx);

loc_0053A074: ;
    PUSH32(esp, 0x64CF78);
    PUSH32(esp, 0x0053A07Eu); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0053A07E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A08B; /* je: equal / zero */

loc_0053A085: ;
    MEM8(0x6C2C68) = LO8(ebx);

loc_0053A08B: ;
    PUSH32(esp, 0x64CF64);
    PUSH32(esp, 0x0053A095u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0053A095: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A0A2; /* je: equal / zero */

loc_0053A09C: ;
    MEM8(0x6C2C69) = LO8(ebx);

loc_0053A0A2: ;
    PUSH32(esp, 0x64CF54);
    PUSH32(esp, 0x0053A0ACu); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0053A0AC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A0B9; /* je: equal / zero */

loc_0053A0B3: ;
    MEM8(0x6C2C6A) = LO8(ebx);

loc_0053A0B9: ;
    PUSH32(esp, 0x64CF44);
    PUSH32(esp, 0x0053A0C3u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0053A0C3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053A0DB; /* jne: not equal / not zero */

loc_0053A0CA: ;
    PUSH32(esp, 0x64CF30);
    PUSH32(esp, 0x0053A0D4u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0053A0D4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A0E1; /* je: equal / zero */

loc_0053A0DB: ;
    MEM8(0x6C2C6B) = LO8(ebx);

loc_0053A0E1: ;
    PUSH32(esp, 0x64CF28);
    PUSH32(esp, 0x0053A0EBu); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0053A0EB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A15D; /* je: equal / zero */

loc_0053A0F2: ;
    PUSH32(esp, 0x64CF28);
    PUSH32(esp, 0x0053A0FCu); RECOMP_ABI_CALL(0x00612EE0u, sub_00612EE0); /* call 0x00612EE0 */

loc_0053A0FC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053A15D; /* jle: less or equal (signed <=) */

loc_0053A103: ;
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x64CF28);
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x0053A11Du); RECOMP_ABI_CALL(0x00612EB0u, sub_00612EB0); /* call 0x00612EB0 */

loc_0053A11D: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0053A127u); RECOMP_ABI_CALL(0x005E1B50u, sub_005E1B50); /* call 0x005E1B50 */

loc_0053A127: ;
    esi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053A13E; /* jne: not equal / not zero */

loc_0053A131: ;
    PUSH32(esp, 0x64CF14);
    PUSH32(esp, 0x0053A13Bu); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_0053A13B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0053A13E: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0053A145u); RECOMP_ABI_CALL(0x005E1B40u, sub_005E1B40); /* call 0x005E1B40 */

loc_0053A145: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x64CEF8);
    PUSH32(esp, 0x0053A153u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0053A153: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6C2C5C) = esi;
    POP32(esp, esi);

loc_0053A15D: ;
    ecx = 0x6C3250;
    PUSH32(esp, 0x0053A167u); RECOMP_ABI_CALL(0x005C3530u, sub_005C3530); /* call 0x005C3530 */

loc_0053A167: ;
    PUSH32(esp, 0x64CEE4);
    PUSH32(esp, 0x0053A171u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0053A171: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A17E; /* je: equal / zero */

loc_0053A178: ;
    MEM8(0x6C2C64) = LO8(ebx);

loc_0053A17E: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x64CEDC);
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x0053A197u); RECOMP_ABI_CALL(0x00612EB0u, sub_00612EB0); /* call 0x00612EB0 */

loc_0053A197: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0053A1AC; /* je: equal / zero */

loc_0053A19F: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053A1A9u); RECOMP_ABI_CALL(0x00539DE0u, sub_00539DE0); /* call 0x00539DE0 */

loc_0053A1A9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0053A1AC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0053A1B0
 * Original: 0x0053A1B0 - 0x0053A7AF (1535 bytes, 469 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053A1B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053A1B0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ecx = 0x6C2C70;
    PUSH32(esp, 0x0053A1BEu); RECOMP_ABI_CALL(0x0053E7E0u, sub_0053E7E0); /* call 0x0053E7E0 */

loc_0053A1BE: ;
    PUSH32(esp, 0x64D0E8);
    PUSH32(esp, 0x0053A1C8u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0053A1C8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A1DD; /* je: equal / zero */

loc_0053A1D1: ;
    MEM8(0x663154) = LO8(ebx);
    MEM8(0x6C2FE9) = LO8(ebx);

loc_0053A1DD: ;
    PUSH32(esp, 0x64D0DC);
    PUSH32(esp, 0x0053A1E7u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0053A1E7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053A1FF; /* jne: not equal / not zero */

loc_0053A1EE: ;
    PUSH32(esp, 0x64D0D0);
    PUSH32(esp, 0x0053A1F8u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0053A1F8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A20B; /* je: equal / zero */

loc_0053A1FF: ;
    MEM8(0x663155) = LO8(ebx);
    MEM8(0x6C2FEA) = LO8(ebx);

loc_0053A20B: ;
    PUSH32(esp, 0x64D0C8);
    PUSH32(esp, 0x0053A215u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0053A215: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A228; /* je: equal / zero */

loc_0053A21C: ;
    MEM8(0x663157) = LO8(ebx);
    MEM8(0x6C2FEB) = LO8(ebx);

loc_0053A228: ;
    PUSH32(esp, 0x64D0C0);
    PUSH32(esp, 0x0053A232u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0053A232: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A245; /* je: equal / zero */

loc_0053A239: ;
    MEM8(0x663157) = LO8(ebx);
    MEM8(0x6C2FEC) = LO8(ebx);

loc_0053A245: ;
    PUSH32(esp, 0x64D0B0);
    PUSH32(esp, 0x0053A24Fu); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0053A24F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A25D; /* je: equal / zero */

loc_0053A256: ;
    MEM8(0x6C2FF0) = 1;

loc_0053A25D: ;
    PUSH32(esp, 0x64D09C);
    PUSH32(esp, 0x0053A267u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0053A267: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A275; /* je: equal / zero */

loc_0053A26E: ;
    MEM8(0x6C2FF1) = 1;

loc_0053A275: ;
    PUSH32(esp, 0x64D090);
    MEM8(0x6C2FEE) = LO8(ebx);
    PUSH32(esp, 0x0053A285u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0053A285: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A293; /* je: equal / zero */

loc_0053A28C: ;
    MEM8(0x6C2FEF) = 1;

loc_0053A293: ;
    PUSH32(esp, 0x64D088);
    PUSH32(esp, 0x0053A29Du); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0053A29D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A2B0; /* je: equal / zero */

loc_0053A2A4: ;
    MEM8(0x663158) = LO8(ebx);
    MEM8(0x6C2FED) = LO8(ebx);

loc_0053A2B0: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64D080);
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x0053A2C4u); RECOMP_ABI_CALL(0x00612EB0u, sub_00612EB0); /* call 0x00612EB0 */

loc_0053A2C4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A2DA; /* je: equal / zero */

loc_0053A2CB: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0053A2D7u); RECOMP_ABI_CALL(0x0053DD30u, sub_0053DD30); /* call 0x0053DD30 */

loc_0053A2D7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0053A2DA: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64D078);
    MEM32(esp + 0x24) = ebx;
    PUSH32(esp, 0x0053A2F0u); RECOMP_ABI_CALL(0x00612EB0u, sub_00612EB0); /* call 0x00612EB0 */

loc_0053A2F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A3E6; /* je: equal / zero */

loc_0053A2FB: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ecx = 0x6C2E88;
    PUSH32(esp, 0x0053A30Au); RECOMP_ABI_CALL(0x0053AA50u, sub_0053AA50); /* call 0x0053AA50 */

loc_0053A30A: ;
    PUSH32(esp, 0x6497DC);
    PUSH32(esp, 0x0053A314u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0053A314: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A385; /* je: equal / zero */

loc_0053A31B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x6C2ED0) = ecx;
    MEM32(0x6C2ED4) = ecx;
    MEM32(0x6C2ED8) = ecx;
    PUSH32(esp, 0x6497DC);
    MEM32(0x6C2EDC) = ecx;
    PUSH32(esp, 0x0053A33Fu); RECOMP_ABI_CALL(0x00612EE0u, sub_00612EE0); /* call 0x00612EE0 */

loc_0053A33F: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053A385; /* jle: less or equal (signed <=) */

loc_0053A34A: ;
    /* nop */

loc_0053A350: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x6497DC);
    MEM32(esp + 0x28) = ebx;
    PUSH32(esp, 0x0053A364u); RECOMP_ABI_CALL(0x00612EB0u, sub_00612EB0); /* call 0x00612EB0 */

loc_0053A364: ;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A380; /* je: equal / zero */

loc_0053A36F: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A380; /* je: equal / zero */

loc_0053A373: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = 0x6C2E88;
    PUSH32(esp, 0x0053A380u); RECOMP_ABI_CALL(0x0053ABC0u, sub_0053ABC0); /* call 0x0053ABC0 */

loc_0053A380: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053A350; /* jl: less (signed <) */

loc_0053A385: ;
    PUSH32(esp, 0x64D070);
    PUSH32(esp, 0x0053A38Fu); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0053A38F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A404; /* je: equal / zero */

loc_0053A396: ;
    PUSH32(esp, 0x64D070);
    PUSH32(esp, 0x0053A3A0u); RECOMP_ABI_CALL(0x00612EE0u, sub_00612EE0); /* call 0x00612EE0 */

loc_0053A3A0: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053A404; /* jle: less or equal (signed <=) */

loc_0053A3AB: ;
    goto loc_0053A3B0;

    /* nop */

loc_0053A3B0: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x64D070);
    MEM32(esp + 0x28) = ebx;
    PUSH32(esp, 0x0053A3C4u); RECOMP_ABI_CALL(0x00612EB0u, sub_00612EB0); /* call 0x00612EB0 */

loc_0053A3C4: ;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A3DF; /* je: equal / zero */

loc_0053A3CF: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A3DF; /* je: equal / zero */

loc_0053A3D3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = 0x6C2E88;
    PUSH32(esp, 0x0053A3DFu); RECOMP_ABI_CALL(0x0053ABC0u, sub_0053ABC0); /* call 0x0053ABC0 */

loc_0053A3DF: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053A3B0; /* jl: less (signed <) */

loc_0053A3E4: ;
    goto loc_0053A404;

loc_0053A3E6: ;
    PUSH32(esp, 0x6497DC);
    PUSH32(esp, 0x0053A3F0u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0053A3F0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A404; /* je: equal / zero */

loc_0053A3F7: ;
    PUSH32(esp, 0x64D048);
    PUSH32(esp, 0x0053A401u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_0053A401: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0053A404: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x62D808);
    MEM32(esp + 0x2C) = ebx;
    PUSH32(esp, 0x0053A418u); RECOMP_ABI_CALL(0x00612EB0u, sub_00612EB0); /* call 0x00612EB0 */

loc_0053A418: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0053A43A; /* je: equal / zero */

loc_0053A421: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    ecx = 0x6C2E88;
    PUSH32(esp, 0x0053A430u); RECOMP_ABI_CALL(0x0053AC40u, sub_0053AC40); /* call 0x0053AC40 */

loc_0053A430: ;
    MEM32(0x6C2C60) = 1;

loc_0053A43A: ;
    ecx = 0x6C2E88;
    PUSH32(esp, 0x0053A444u); RECOMP_ABI_CALL(0x0053B230u, sub_0053B230); /* call 0x0053B230 */

loc_0053A444: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x630CE0);
    MEM32(esp + 0x28) = ebx;
    PUSH32(esp, 0x0053A458u); RECOMP_ABI_CALL(0x00612EB0u, sub_00612EB0); /* call 0x00612EB0 */

loc_0053A458: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A46E; /* je: equal / zero */

loc_0053A45F: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = 0x6C2E88;
    PUSH32(esp, 0x0053A46Eu); RECOMP_ABI_CALL(0x0053A960u, sub_0053A960); /* call 0x0053A960 */

loc_0053A46E: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x630CE4);
    MEM32(esp + 0x2C) = ebx;
    PUSH32(esp, 0x0053A482u); RECOMP_ABI_CALL(0x00612EB0u, sub_00612EB0); /* call 0x00612EB0 */

loc_0053A482: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A498; /* je: equal / zero */

loc_0053A489: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    ecx = 0x6C2E88;
    PUSH32(esp, 0x0053A498u); RECOMP_ABI_CALL(0x0053AA00u, sub_0053AA00); /* call 0x0053AA00 */

loc_0053A498: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64D03C);
    MEM32(esp + 0x30) = ebx;
    PUSH32(esp, 0x0053A4ACu); RECOMP_ABI_CALL(0x00612EB0u, sub_00612EB0); /* call 0x00612EB0 */

loc_0053A4AC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A4C2; /* je: equal / zero */

loc_0053A4B3: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    ecx = 0x6C2E88;
    PUSH32(esp, 0x0053A4C2u); RECOMP_ABI_CALL(0x0053AAA0u, sub_0053AAA0); /* call 0x0053AAA0 */

loc_0053A4C2: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64D030);
    MEM32(esp + 0x34) = ebx;
    PUSH32(esp, 0x0053A4D6u); RECOMP_ABI_CALL(0x00612EB0u, sub_00612EB0); /* call 0x00612EB0 */

loc_0053A4D6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A4EC; /* je: equal / zero */

loc_0053A4DD: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    ecx = 0x6C2E88;
    PUSH32(esp, 0x0053A4ECu); RECOMP_ABI_CALL(0x0053AAF0u, sub_0053AAF0); /* call 0x0053AAF0 */

loc_0053A4EC: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64D028);
    MEM32(esp + 0x14) = 1;
    PUSH32(esp, 0x0053A504u); RECOMP_ABI_CALL(0x00612E30u, sub_00612E30); /* call 0x00612E30 */

loc_0053A504: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A514; /* je: equal / zero */

loc_0053A50B: ;
    eax = MEM32(esp + 8);
    MEM32(0x6C2EC4) = eax;

loc_0053A514: ;
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64D020);
    MEM32(esp + 0x38) = ebx;
    PUSH32(esp, 0x0053A528u); RECOMP_ABI_CALL(0x00612EB0u, sub_00612EB0); /* call 0x00612EB0 */

loc_0053A528: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A540; /* je: equal / zero */

loc_0053A52F: ;
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    ecx = 0x6C2E88;
    PUSH32(esp, 0x0053A53Eu); RECOMP_ABI_CALL(0x0053AB70u, sub_0053AB70); /* call 0x0053AB70 */

loc_0053A53E: ;
    goto loc_0053A569;

loc_0053A540: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053A551; /* jne: not equal / not zero */

loc_0053A549: ;
    MEM32(0x6C2ECC) = ebx;
    goto loc_0053A569;

loc_0053A551: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053A55D; /* jne: not equal / not zero */

loc_0053A556: ;
    MEM32(0x6C2ECC) = eax;
    goto loc_0053A569;

loc_0053A55D: ;
    if (CMP_LE(_fas, _fbs)) goto loc_0053A569; /* jle: less or equal (signed <=) */

loc_0053A55F: ;
    MEM32(0x6C2ECC) = 3;

loc_0053A569: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64D014);
    MEM32(esp + 0x3C) = ebx;
    PUSH32(esp, 0x0053A57Du); RECOMP_ABI_CALL(0x00612E30u, sub_00612E30); /* call 0x00612E30 */

loc_0053A57D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x6C3014;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    /* nop */

loc_0053A590: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C3044) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6C3044 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0053A59C; /* jge: greater or equal (signed >=) */

loc_0053A597: ;
    MEM32(eax + -4) = ecx;
    goto loc_0053A59F;

loc_0053A59C: ;
    MEM32(eax + -4) = edx;

loc_0053A59F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C3044) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6C3044 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0053A5AD; /* jge: greater or equal (signed >=) */

loc_0053A5A6: ;
    MEM32(eax) = ecx;
    MEM32(eax + -8) = ecx;
    goto loc_0053A5B2;

loc_0053A5AD: ;
    MEM32(eax) = edx;
    MEM32(eax + -8) = edx;

loc_0053A5B2: ;
    MEM32(eax + -12) = ecx;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C3194) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6C3194 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053A590; /* jl: less (signed <) */

loc_0053A5C0: ;
    eax = MEM32(esp + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    SET_LO8(ecx, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    MEM32(0x6C2EC8) = 1;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(0x6C2ECC) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_0053A5EA; /* jg: greater (signed >) */

loc_0053A5E5: ;
    MEM32(0x6C2EC8) = eax;

loc_0053A5EA: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64D008);
    MEM32(esp + 0x10) = ebx;
    PUSH32(esp, 0x0053A5FEu); RECOMP_ABI_CALL(0x00612EB0u, sub_00612EB0); /* call 0x00612EB0 */

loc_0053A5FE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A60C; /* je: equal / zero */

loc_0053A605: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    goto loc_0053A646;

loc_0053A60C: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64D000);
    PUSH32(esp, 0x0053A61Cu); RECOMP_ABI_CALL(0x00612EB0u, sub_00612EB0); /* call 0x00612EB0 */

loc_0053A61C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A62A; /* je: equal / zero */

loc_0053A623: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    goto loc_0053A646;

loc_0053A62A: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64CFFC);
    PUSH32(esp, 0x0053A63Au); RECOMP_ABI_CALL(0x00612EB0u, sub_00612EB0); /* call 0x00612EB0 */

loc_0053A63A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A650; /* je: equal / zero */

loc_0053A641: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);

loc_0053A646: ;
    ecx = 0x6C2FF4;
    PUSH32(esp, 0x0053A650u); RECOMP_ABI_CALL(0x005406F0u, sub_005406F0); /* call 0x005406F0 */

loc_0053A650: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64CFF0);
    PUSH32(esp, 0x0053A660u); RECOMP_ABI_CALL(0x00612EB0u, sub_00612EB0); /* call 0x00612EB0 */

loc_0053A660: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A66E; /* je: equal / zero */

loc_0053A667: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    goto loc_0053A6A8;

loc_0053A66E: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64CFE8);
    PUSH32(esp, 0x0053A67Eu); RECOMP_ABI_CALL(0x00612EB0u, sub_00612EB0); /* call 0x00612EB0 */

loc_0053A67E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A68C; /* je: equal / zero */

loc_0053A685: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    goto loc_0053A6A8;

loc_0053A68C: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64CFFC);
    PUSH32(esp, 0x0053A69Cu); RECOMP_ABI_CALL(0x00612EB0u, sub_00612EB0); /* call 0x00612EB0 */

loc_0053A69C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A6B2; /* je: equal / zero */

loc_0053A6A3: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);

loc_0053A6A8: ;
    ecx = 0x6C3024;
    PUSH32(esp, 0x0053A6B2u); RECOMP_ABI_CALL(0x005406F0u, sub_005406F0); /* call 0x005406F0 */

loc_0053A6B2: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64CFDC);
    PUSH32(esp, 0x0053A6C2u); RECOMP_ABI_CALL(0x00612EB0u, sub_00612EB0); /* call 0x00612EB0 */

loc_0053A6C2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A6D0; /* je: equal / zero */

loc_0053A6C9: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    goto loc_0053A70A;

loc_0053A6D0: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64CFD4);
    PUSH32(esp, 0x0053A6E0u); RECOMP_ABI_CALL(0x00612EB0u, sub_00612EB0); /* call 0x00612EB0 */

loc_0053A6E0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A6EE; /* je: equal / zero */

loc_0053A6E7: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    goto loc_0053A70A;

loc_0053A6EE: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64CFFC);
    PUSH32(esp, 0x0053A6FEu); RECOMP_ABI_CALL(0x00612EB0u, sub_00612EB0); /* call 0x00612EB0 */

loc_0053A6FE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A714; /* je: equal / zero */

loc_0053A705: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);

loc_0053A70A: ;
    ecx = 0x6C3054;
    PUSH32(esp, 0x0053A714u); RECOMP_ABI_CALL(0x005406F0u, sub_005406F0); /* call 0x005406F0 */

loc_0053A714: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64CFC8);
    PUSH32(esp, 0x0053A724u); RECOMP_ABI_CALL(0x00612EB0u, sub_00612EB0); /* call 0x00612EB0 */

loc_0053A724: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A732; /* je: equal / zero */

loc_0053A72B: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    goto loc_0053A76C;

loc_0053A732: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64CFC0);
    PUSH32(esp, 0x0053A742u); RECOMP_ABI_CALL(0x00612EB0u, sub_00612EB0); /* call 0x00612EB0 */

loc_0053A742: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A750; /* je: equal / zero */

loc_0053A749: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    goto loc_0053A76C;

loc_0053A750: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64CFFC);
    PUSH32(esp, 0x0053A760u); RECOMP_ABI_CALL(0x00612EB0u, sub_00612EB0); /* call 0x00612EB0 */

loc_0053A760: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A776; /* je: equal / zero */

loc_0053A767: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);

loc_0053A76C: ;
    ecx = 0x6C3084;
    PUSH32(esp, 0x0053A776u); RECOMP_ABI_CALL(0x005406F0u, sub_005406F0); /* call 0x005406F0 */

loc_0053A776: ;
    PUSH32(esp, 0x64CFB0);
    PUSH32(esp, 0x0053A780u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0053A780: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0053A78F; /* je: equal / zero */

loc_0053A788: ;
    MEM8(0x6C3248) = 1;

loc_0053A78F: ;
    PUSH32(esp, 0x63B82C);
    PUSH32(esp, 0x0053A799u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0053A799: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A7A7; /* je: equal / zero */

loc_0053A7A0: ;
    MEM8(0x6C3249) = 1;

loc_0053A7A7: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00539E30(); return; /* tail jmp 0x00539E30 */

}

/**
 * sub_0053A7B0
 * Original: 0x0053A7B0 - 0x0053A7C2 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053A7B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053A7B0: ;
    PUSH32(esp, 0x6C3690);
    PUSH32(esp, 0x0053A7BAu); RECOMP_ABI_CALL(0x00612C70u, sub_00612C70); /* call 0x00612C70 */

loc_0053A7BA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00577390(); return; /* tail jmp 0x00577390 */

}

/**
 * sub_0053A7D0
 * Original: 0x0053A7D0 - 0x0053A7D5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053A7D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053A7D0: ;
    g_seh_ebp = ebp; sub_005774C0(); return; /* tail jmp 0x005774C0 */

}

/**
 * sub_0053A7E0
 * Original: 0x0053A7E0 - 0x0053A864 (132 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053A7E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053A7E0: ;
    PUSH32(esp, 0x6C3690);
    PUSH32(esp, 0x64D138);
    PUSH32(esp, 0x0053A7EFu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0053A7EF: ;
    PUSH32(esp, 0x6C3690);
    PUSH32(esp, 0x0053A7F9u); RECOMP_ABI_CALL(0x00612A80u, sub_00612A80); /* call 0x00612A80 */

loc_0053A7F9: ;
    PUSH32(esp, 0x64D128);
    PUSH32(esp, 0x0053A803u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0053A803: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A822; /* je: equal / zero */

loc_0053A80A: ;
    PUSH32(esp, 0x64D110);
    PUSH32(esp, 0x0053A814u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0053A814: ;
    ecx = MEM32(0x6C5258);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0053A822u); RECOMP_ABI_CALL(0x00575B10u, sub_00575B10); /* call 0x00575B10 */

loc_0053A822: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053A82Cu); RECOMP_ABI_CALL(0x00577480u, sub_00577480); /* call 0x00577480 */

loc_0053A82C: ;
    MEM32(0x6754AC) = 0x64D104;
    MEM32(0x675518) = 0x64D0FC;
    PUSH32(esp, 0x0053A845u); RECOMP_ABI_CALL(0x005F9E20u, sub_005F9E20); /* call 0x005F9E20 */

loc_0053A845: ;
    PUSH32(esp, 0x64D0F0);
    PUSH32(esp, 0x0053A84Fu); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0053A84F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A863; /* je: equal / zero */

loc_0053A856: ;
    MEM32(esp + 4) = 6;
    g_seh_ebp = ebp; sub_005C3530(); return; /* tail jmp 0x005C3530 */

loc_0053A863: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0053A870
 * Original: 0x0053A870 - 0x0053A88C (28 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053A870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053A870: ;
    PUSH32(esp, 0x0053A875u); RECOMP_ABI_CALL(0x005F9E30u, sub_005F9E30); /* call 0x005F9E30 */

loc_0053A875: ;
    PUSH32(esp, 0x6C3690);
    PUSH32(esp, 0x0053A87Fu); RECOMP_ABI_CALL(0x00612C70u, sub_00612C70); /* call 0x00612C70 */

loc_0053A87F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0053A887u); RECOMP_ABI_CALL(0x00612F00u, sub_00612F00); /* call 0x00612F00 */

loc_0053A887: ;
    g_seh_ebp = ebp; sub_005774A0(); return; /* tail jmp 0x005774A0 */

}

/**
 * sub_0053A890
 * Original: 0x0053A890 - 0x0053A8C4 (52 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053A890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053A890: ;
    PUSH32(esp, 0x6C3690);
    PUSH32(esp, 0x0053A89Au); RECOMP_ABI_CALL(0x00612C70u, sub_00612C70); /* call 0x00612C70 */

loc_0053A89A: ;
    eax = MEM32(esp + 8);
    edx = 0x6C3690;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0053A8A8: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053A8A8; /* jne: not equal / not zero */

loc_0053A8B2: ;
    PUSH32(esp, 0x0053A8B7u); RECOMP_ABI_CALL(0x00612F00u, sub_00612F00); /* call 0x00612F00 */

loc_0053A8B7: ;
    MEM32(esp + 4) = 0x6C3690;
    g_seh_ebp = ebp; sub_00612A80(); return; /* tail jmp 0x00612A80 */

}

/**
 * sub_0053A8D0
 * Original: 0x0053A8D0 - 0x0053A8DD (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053A8D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053A8D0: ;
    ecx = MEM32(0x6C5258);
    eax = MEM32(ecx + 0xC);
    _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_0053A8E0
 * Original: 0x0053A8E0 - 0x0053A8EB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053A8E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053A8E0: ;
    MEM32(ecx) = 0x64D2AC;
    g_seh_ebp = ebp; sub_00614360(); return; /* tail jmp 0x00614360 */

}

/**
 * sub_0053A8F0
 * Original: 0x0053A8F0 - 0x0053A911 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053A8F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053A8F0: ;
    ecx = MEM32(0x6C3894);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A903; /* je: equal / zero */

loc_0053A8FD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0053A903u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053A901u); } /* indirect call */
    }

loc_0053A903: ;
    MEM32(0x6C3894) = esi;
    MEM32(0x6C3890) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0053A920
 * Original: 0x0053A920 - 0x0053A93A (26 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053A920(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053A920: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x64D2AC;
    MEM32(eax + 4) = ecx;
    MEM8(eax + 9) = LO8(ecx);
    MEM8(eax + 8) = LO8(ecx);
    MEM8(eax + 0xA) = LO8(ecx);
    MEM8(eax + 0xB) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0053A940
 * Original: 0x0053A940 - 0x0053A95E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053A940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053A940: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0053A948u); RECOMP_ABI_CALL(0x0053A8E0u, sub_0053A8E0); /* call 0x0053A8E0 */

loc_0053A948: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0053A958; /* je: equal / zero */

loc_0053A94F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0053A955u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0053A955: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0053A958: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053A960
 * Original: 0x0053A960 - 0x0053A9A7 (71 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053A960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053A960: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0053A970;

    /* nop */

loc_0053A970: ;
    eax = MEM32(esi * 4 + 0x663270);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053A97Eu); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_0053A97E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A99E; /* je: equal / zero */

loc_0053A985: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053A970; /* jl: less (signed <) */

loc_0053A98B: ;
    PUSH32(esp, 0x64D2C0);
    PUSH32(esp, 0x0053A995u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_0053A995: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0053A99E: ;
    POP32(esp, edi);
    MEM32(ebx + 4) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053A9B0
 * Original: 0x0053A9B0 - 0x0053A9F7 (71 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053A9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053A9B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0053A9C0;

    /* nop */

loc_0053A9C0: ;
    eax = MEM32(esi * 4 + 0x663300);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053A9CEu); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_0053A9CE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053A9EE; /* je: equal / zero */

loc_0053A9D5: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xE (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053A9C0; /* jl: less (signed <) */

loc_0053A9DB: ;
    PUSH32(esp, 0x64D2D8);
    PUSH32(esp, 0x0053A9E5u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_0053A9E5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0053A9EE: ;
    POP32(esp, edi);
    MEM32(ebx + 0x18) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053AA00
 * Original: 0x0053AA00 - 0x0053AA47 (71 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053AA00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053AA00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0053AA10;

    /* nop */

loc_0053AA10: ;
    eax = MEM32(esi * 4 + 0x66327C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053AA1Eu); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_0053AA1E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053AA3E; /* je: equal / zero */

loc_0053AA25: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053AA10; /* jl: less (signed <) */

loc_0053AA2B: ;
    PUSH32(esp, 0x64D2F4);
    PUSH32(esp, 0x0053AA35u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_0053AA35: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0053AA3E: ;
    POP32(esp, edi);
    MEM32(ebx + 8) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053AA50
 * Original: 0x0053AA50 - 0x0053AA96 (70 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053AA50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053AA50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0053AA60;

    /* nop */

loc_0053AA60: ;
    eax = MEM32(esi * 4 + 0x663174);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053AA6Eu); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_0053AA6E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053AA8E; /* je: equal / zero */

loc_0053AA75: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xE (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053AA60; /* jl: less (signed <) */

loc_0053AA7B: ;
    PUSH32(esp, 0x64D310);
    PUSH32(esp, 0x0053AA85u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_0053AA85: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0053AA8E: ;
    POP32(esp, edi);
    MEM32(ebx) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053AAA0
 * Original: 0x0053AAA0 - 0x0053AAE7 (71 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053AAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053AAA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0053AAB0;

    /* nop */

loc_0053AAB0: ;
    eax = MEM32(esi * 4 + 0x6632F0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053AABEu); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_0053AABE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053AADE; /* je: equal / zero */

loc_0053AAC5: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053AAB0; /* jl: less (signed <) */

loc_0053AACB: ;
    PUSH32(esp, 0x64D32C);
    PUSH32(esp, 0x0053AAD5u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_0053AAD5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0053AADE: ;
    POP32(esp, edi);
    MEM32(ebx + 0x1C) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053AAF0
 * Original: 0x0053AAF0 - 0x0053AB37 (71 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053AAF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053AAF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0053AB00;

    /* nop */

loc_0053AB00: ;
    eax = MEM32(esi * 4 + 0x6632E0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053AB0Eu); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_0053AB0E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053AB2E; /* je: equal / zero */

loc_0053AB15: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053AB00; /* jl: less (signed <) */

loc_0053AB1B: ;
    PUSH32(esp, 0x64D348);
    PUSH32(esp, 0x0053AB25u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_0053AB25: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0053AB2E: ;
    POP32(esp, edi);
    MEM32(ebx + 0x20) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053AB40
 * Original: 0x0053AB40 - 0x0053AB68 (40 bytes, 8 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053AB40(void)
{

loc_0053AB40: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + eax * 4 + 0x33C) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(ecx + eax * 4 + 0x368) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + eax * 4 + 0x394) = edx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0053AB70
 * Original: 0x0053AB70 - 0x0053ABB7 (71 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053AB70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053AB70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0053AB80;

    /* nop */

loc_0053AB80: ;
    eax = MEM32(esi * 4 + 0x663338);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053AB8Eu); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_0053AB8E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053ABAE; /* je: equal / zero */

loc_0053AB95: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053AB80; /* jl: less (signed <) */

loc_0053AB9B: ;
    PUSH32(esp, 0x64D370);
    PUSH32(esp, 0x0053ABA5u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_0053ABA5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0053ABAE: ;
    POP32(esp, edi);
    MEM32(ebx + 0x44) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053ABC0
 * Original: 0x0053ABC0 - 0x0053AC34 (116 bytes, 43 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053ABC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053ABC0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1278);
    edx = MEM32(ecx + 0x6633B8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053AC12; /* jle: less or equal (signed <=) */

loc_0053ABDF: ;
    /* nop */

loc_0053ABE0: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x49E);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax * 4 + 0x6633BC);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0053ABF6u); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_0053ABF6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053AC26; /* je: equal / zero */

loc_0053ABFD: ;
    eax = MEM32(edi);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1278);
    edx = MEM32(ecx + 0x6633B8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053ABE0; /* jl: less (signed <) */

loc_0053AC12: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64D388);
    PUSH32(esp, 0x0053AC1Du); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_0053AC1D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0053AC26: ;
    SET_LO8(edx, MEM8(esp + 0x14));
    MEM8(esi + edi + 0x48) = LO8(edx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0053AC40
 * Original: 0x0053AC40 - 0x0053AC5D (29 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053AC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053AC40: ;
    eax = MEM32(esp + 4);
    edx = ecx + 0x58;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0053AC50: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053AC50; /* jne: not equal / not zero */

loc_0053AC5A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053AC60
 * Original: 0x0053AC60 - 0x0053AC72 (18 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053AC60(void)
{

loc_0053AC60: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(ecx + edx * 4 + 0x2EC) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0053AC80
 * Original: 0x0053AC80 - 0x0053AC8E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053AC80(void)
{

loc_0053AC80: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x2EC);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053AC90
 * Original: 0x0053AC90 - 0x0053ACAD (29 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053AC90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053AC90: ;
    eax = MEM32(esp + 4);
    edx = ecx + 0xD8;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0053ACA0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053ACA0; /* jne: not equal / not zero */

loc_0053ACAA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053ACB0
 * Original: 0x0053ACB0 - 0x0053ACCD (29 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053ACB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053ACB0: ;
    eax = MEM32(esp + 4);
    edx = ecx + 0x318;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0053ACC0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053ACC0; /* jne: not equal / not zero */

loc_0053ACCA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053ACD0
 * Original: 0x0053ACD0 - 0x0053AD4E (126 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053ACD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053ACD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053ACF2; /* jle: less or equal (signed <=) */

loc_0053ACDD: ;
    ecx = MEM32(esi + 0x3C);
    eax = esi + 0x188;

loc_0053ACE6: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053ACEC; /* jl: less (signed <) */

loc_0053ACEB: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0053ACEC: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0053ACE6; /* jne: not equal / not zero */

loc_0053ACF2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x40) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053AD08; /* je: equal / zero */

loc_0053ACF7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x64D3D8);
    PUSH32(esp, 0x0053AD02u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_0053AD02: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x40) = edi;

loc_0053AD08: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053AD2C; /* jne: not equal / not zero */

loc_0053AD0F: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053AD2C; /* jle: less or equal (signed <=) */

loc_0053AD15: ;
    PUSH32(esp, 0x64D3B8);
    PUSH32(esp, 0x0053AD1Fu); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_0053AD1F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x44) = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0053AD2C: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053AD4B; /* jle: less or equal (signed <=) */

loc_0053AD32: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053AD4B; /* je: equal / zero */

loc_0053AD37: ;
    PUSH32(esp, 0x64D3A0);
    PUSH32(esp, 0x0053AD41u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_0053AD41: ;
    MEM32(esi + 0x44) = 3;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0053AD4B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0053AD50
 * Original: 0x0053AD50 - 0x0053AEF4 (420 bytes, 134 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053AD50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053AD50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    ecx = MEM32(eax * 4 + 0x66327C);
    edx = MEM32(edi + 4);
    eax = MEM32(edx * 4 + 0x663270);
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    edx = MEM32(ecx * 4 + 0x663174);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x64D52C);
    PUSH32(esp, 0x0053AD80u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0053AD80: ;
    eax = MEM32(edi + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053AD92; /* jne: not equal / not zero */

loc_0053AD8B: ;
    ecx = 0x64D520;
    goto loc_0053ADA1;

loc_0053AD92: ;
    SET_LO8(edx, MEM8(edi + 0x58));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    ecx = edi + 0x58;
    if (CMP_NE(_fa, _fb)) goto loc_0053ADA1; /* jne: not equal / not zero */

loc_0053AD9C: ;
    ecx = 0x64D518;

loc_0053ADA1: ;
    edx = MEM32(edi + 0x1C);
    edx = MEM32(edx * 4 + 0x6632F0);
    eax = MEM32(eax * 4 + 0x663300);
    PUSH32(esp, edx);
    edx = MEM32(edi + 0x20);
    edx = MEM32(edx * 4 + 0x6632E0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64D4E0);
    PUSH32(esp, 0x0053ADCAu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0053ADCA: ;
    ecx = MEM32(edi + 0x44);
    edx = MEM32(ecx * 4 + 0x663338);
    eax = MEM32(edi + 0x14);
    ecx = MEM32(eax * 4 + 0x6632B0);
    eax = MEM32(edi + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(edi + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x64D4B4);
    PUSH32(esp, 0x0053ADF2u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0053ADF2: ;
    SET_LO8(eax, MEM8(edi + 0x166));
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebp = 0x64D4B0;
    if (CMP_NE(_fa, _fb)) goto loc_0053AE09; /* jne: not equal / not zero */

loc_0053AE04: ;
    ebp = 0x64D4AC;

loc_0053AE09: ;
    SET_LO8(eax, MEM8(edi + 0x165));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = 0x64D4B0;
    if (CMP_NE(_fa, _fb)) goto loc_0053AE1D; /* jne: not equal / not zero */

loc_0053AE18: ;
    ebx = 0x64D4AC;

loc_0053AE1D: ;
    SET_LO8(eax, MEM8(edi + 0x164));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = 0x64D4B0;
    if (CMP_NE(_fa, _fb)) goto loc_0053AE31; /* jne: not equal / not zero */

loc_0053AE2C: ;
    esi = 0x64D4AC;

loc_0053AE31: ;
    SET_LO8(eax, MEM8(edi + 0x163));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edx = 0x64D4B0;
    if (CMP_NE(_fa, _fb)) goto loc_0053AE45; /* jne: not equal / not zero */

loc_0053AE40: ;
    edx = 0x64D4AC;

loc_0053AE45: ;
    SET_LO8(eax, MEM8(edi + 0x162));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = 0x64D4B0;
    if (CMP_NE(_fa, _fb)) goto loc_0053AE59; /* jne: not equal / not zero */

loc_0053AE54: ;
    ecx = 0x64D4AC;

loc_0053AE59: ;
    SET_LO8(eax, MEM8(edi + 0x161));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = 0x64D4B0;
    if (CMP_NE(_fa, _fb)) goto loc_0053AE6D; /* jne: not equal / not zero */

loc_0053AE68: ;
    eax = 0x64D4AC;

loc_0053AE6D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x64D46C);
    PUSH32(esp, 0x0053AE7Du); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0053AE7D: ;
    eax = MEM32(edi + 0x3C);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053AEE2; /* jle: less or equal (signed <=) */

loc_0053AE89: ;
    esi = edi + 0x194;
    /* nop */

loc_0053AE90: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053AE9D; /* jne: not equal / not zero */

loc_0053AE96: ;
    eax = 0x64D460;
    goto loc_0053AEAC;

loc_0053AE9D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    eax = 0x62FDC4;
    if (CMP_EQ(_fa, _fb)) goto loc_0053AEAC; /* je: equal / zero */

loc_0053AEA7: ;
    eax = 0x64D458;

loc_0053AEAC: ;
    ecx = MEM32(esi + -12);
    edx = MEM32(esi + -16);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + -20);
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + -4));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(esi + -40);
    ecx = MEM32(eax * 4 + 0x6631F0);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64D400);
    PUSH32(esp, 0x0053AED5u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0053AED5: ;
    eax = MEM32(edi + 0x3C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053AE90; /* jl: less (signed <) */

loc_0053AEE2: ;
    PUSH32(esp, 0x630574);
    PUSH32(esp, 0x0053AEECu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0053AEEC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0053AF00
 * Original: 0x0053AF00 - 0x0053AFE8 (232 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053AF00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053AF00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x16C;
    ebx = 8;

loc_0053AF10: ;
    ecx = edi;
    PUSH32(esp, 0x0053AF17u); RECOMP_ABI_CALL(0x005406B0u, sub_005406B0); /* call 0x005406B0 */

loc_0053AF17: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0053AF10; /* jne: not equal / not zero */

loc_0053AF1D: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 1;
    MEM32(esi + 4) = ebx;
    eax = 4;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x3C) = ebx;
    MEM32(esi + 0x40) = ebx;
    MEM32(esi) = 0xD;
    MEM32(esi + 8) = edx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0x1C) = edx;
    MEM8(esi + 0x38) = 0xFF;
    MEM8(esi + 0x158) = LO8(edx);
    MEM32(esi + 0x34) = 0x64;
    MEM32(esi + 0x44) = edx;
    eax = 0x1010101;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x54) = eax;
    edi = esi + 0x2EC;
    eax = 0x21;
    ecx = 0xB;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    MEM8(esi + 0x161) = LO8(ebx);
    MEM8(esi + 0x162) = LO8(ebx);
    MEM8(esi + 0x163) = LO8(ebx);
    MEM8(esi + 0x164) = LO8(ebx);
    MEM8(esi + 0x165) = LO8(ebx);
    MEM8(esi + 0x58) = LO8(edx);
    MEM8(esi + 0x159) = LO8(edx);
    MEM32(esi + 0x15C) = 0xFFFFFFFFu;
    MEM8(esi + 0x160) = LO8(edx);
    MEM8(esi + 0x166) = LO8(edx);
    MEM8(esi + 0x167) = LO8(edx);
    MEM8(esi + 0x168) = LO8(edx);
    MEM8(esi + 0x169) = LO8(edx);
    MEM8(esi + 0x318) = LO8(edx);
    MEM8(esi + 0x3C0) = LO8(edx);
    MEM8(esi + 0x3C1) = LO8(edx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0053AFF0
 * Original: 0x0053AFF0 - 0x0053B12E (318 bytes, 103 insns)
 * Category: game_physics
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053AFF0(void)
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

loc_0053AFF0: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x88);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x62D830);
    ecx = esi;
    PUSH32(esp, 0x0053B00Du); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_0053B00D: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0053B01Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053B01Bu); } /* indirect call */
    }

loc_0053B01E: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0053B02Au); RECOMP_ABI_CALL(0x0053AA50u, sub_0053AA50); /* call 0x0053AA50 */

loc_0053B02A: ;
    PUSH32(esp, 0x64D574);
    ecx = esi;
    PUSH32(esp, 0x0053B036u); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_0053B036: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0053B047u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053B044u); } /* indirect call */
    }

loc_0053B047: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0053B053u); RECOMP_ABI_CALL(0x0053A960u, sub_0053A960); /* call 0x0053A960 */

loc_0053B053: ;
    PUSH32(esp, 0x630CE4);
    ecx = esi;
    PUSH32(esp, 0x0053B05Fu); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_0053B05F: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0053B070u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053B06Du); } /* indirect call */
    }

loc_0053B070: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0053B07Cu); RECOMP_ABI_CALL(0x0053AA00u, sub_0053AA00); /* call 0x0053AA00 */

loc_0053B07C: ;
    PUSH32(esp, 0x63F948);
    ecx = esi;
    PUSH32(esp, 0x0053B088u); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_0053B088: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0053B099u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053B096u); } /* indirect call */
    }

loc_0053B099: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0053B0A5u); RECOMP_ABI_CALL(0x0053A9B0u, sub_0053A9B0); /* call 0x0053A9B0 */

loc_0053B0A5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x64D564);
    ecx = esi;
    PUSH32(esp, 0x0053B0B3u); RECOMP_ABI_CALL(0x00615580u, sub_00615580); /* call 0x00615580 */

loc_0053B0B3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053B0C0; /* je: equal / zero */

loc_0053B0B7: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0053B0BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053B0BBu); } /* indirect call */
    }

loc_0053B0BE: ;
    fp_pop(); /* fstp st(0) */

loc_0053B0C0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x64D558);
    ecx = esi;
    PUSH32(esp, 0x0053B0CEu); RECOMP_ABI_CALL(0x00615580u, sub_00615580); /* call 0x00615580 */

loc_0053B0CE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053B0DB; /* je: equal / zero */

loc_0053B0D2: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0053B0D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053B0D6u); } /* indirect call */
    }

loc_0053B0D9: ;
    fp_pop(); /* fstp st(0) */

loc_0053B0DB: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x64D54C);
    ecx = esi;
    PUSH32(esp, 0x0053B0E9u); RECOMP_ABI_CALL(0x00615580u, sub_00615580); /* call 0x00615580 */

loc_0053B0E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053B0FE; /* je: equal / zero */

loc_0053B0ED: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0053B0FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053B0FBu); } /* indirect call */
    }

loc_0053B0FE: ;
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    MEM8(edi + 0x38) = 0xFF;
    MEM8(edi + 0x39) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0053B113; /* je: equal / zero */

loc_0053B10E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053B11A; /* jne: not equal / not zero */

loc_0053B113: ;
    MEM32(edi + 0x1C) = 1;

loc_0053B11A: ;
    MEM32(edi + 0x14) = 1;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0053B130
 * Original: 0x0053B130 - 0x0053B1AA (122 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053B130: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    edx = eax;
    MEM32(esi) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x49E);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1278);
    PUSH32(esp, edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax * 4 + 0x663400);
    edi = ecx;
    edi = edi << 5;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    ecx = esi;
    edi = edx + edi + 0x6634F0;
    PUSH32(esp, 0x0053B169u); RECOMP_ABI_CALL(0x0053AC40u, sub_0053AC40); /* call 0x0053AC40 */

loc_0053B169: ;
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0xE);
    MEM32(esi + 4) = ecx;
    edx = (uint32_t)(int32_t)SMEM8(edi + 0xD);
    MEM32(esi + 8) = edx;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x38) = 0xFF;
    MEM8(esi + 0x39) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0053B18E; /* je: equal / zero */

loc_0053B189: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053B19E; /* jne: not equal / not zero */

loc_0053B18E: ;
    eax = 1;
    POP32(esp, edi);
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0053B19E: ;
    POP32(esp, edi);
    MEM32(esi + 0x14) = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0053B1B0
 * Original: 0x0053B1B0 - 0x0053B229 (121 bytes, 40 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B1B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053B1B0: ;
    eax = MEM32(0x8602EC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x679680) = eax;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 7;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    PUSH32(esp, edx);
    if (CMP_NE(_fa, _fb)) goto loc_0053B1EF; /* jne: not equal / not zero */

loc_0053B1E1: ;
    PUSH32(esp, 0x62F228);
    PUSH32(esp, 0x50);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    goto loc_0053B20E;

loc_0053B1EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053B202; /* jne: not equal / not zero */

loc_0053B1F4: ;
    PUSH32(esp, 0x62F210);
    PUSH32(esp, 0x50);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    goto loc_0053B20E;

loc_0053B202: ;
    PUSH32(esp, 0x62F1F8);
    PUSH32(esp, 0x50);
    eax = esp + 0xC;
    PUSH32(esp, eax);

loc_0053B20E: ;
    PUSH32(esp, 0x0053B213u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0053B213: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp;
    PUSH32(esp, ecx);
    ecx = 0x6C2E88;
    PUSH32(esp, 0x0053B225u); RECOMP_ABI_CALL(0x0053AC90u, sub_0053AC90); /* call 0x0053AC90 */

loc_0053B225: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0053B230
 * Original: 0x0053B230 - 0x0053B303 (211 bytes, 68 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053B230: ;
    _fb = (uint32_t)(0x1A4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1A4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    edi = ebx + 0x58;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053B2F7; /* je: equal / zero */

loc_0053B246: ;
    eax = edi;
    edx = eax + 1;
    goto loc_0053B250;

    /* nop */

loc_0053B250: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053B250; /* jne: not equal / not zero */

loc_0053B257: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0xC) = eax;
    if ((_fa == 0)) goto loc_0053B2F7; /* je: equal / zero */

loc_0053B263: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax * 4 + 0x663174);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x630038);
    edx = esp + 0xB8;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0053B284u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0053B284: ;
    ecx = MEM32(0x860220);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x6303C4);
    PUSH32(esp, edi);
    eax = esp + 0xC0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053B2A4u); RECOMP_ABI_CALL(0x006137C0u, sub_006137C0); /* call 0x006137C0 */

loc_0053B2A4: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053B2E9; /* je: equal / zero */

loc_0053B2AA: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0x18;
    MEM32(esp + 0x18) = 0x62FF40;
    MEM32(esp + 0xB4) = 0;
    PUSH32(esp, 0x0053B2C8u); RECOMP_ABI_CALL(0x00615130u, sub_00615130); /* call 0x00615130 */

loc_0053B2C8: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0053B2D4u); RECOMP_ABI_CALL(0x0053AFF0u, sub_0053AFF0); /* call 0x0053AFF0 */

loc_0053B2D4: ;
    ecx = esi;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x0053B2DDu); RECOMP_ABI_CALL(0x00617FB0u, sub_00617FB0); /* call 0x00617FB0 */

loc_0053B2DD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1A4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1A4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0053B2E9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x64D57C);
    PUSH32(esp, 0x0053B2F4u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_0053B2F4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0053B2F7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1A4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1A4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0053B310
 * Original: 0x0053B310 - 0x0053B314 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B310(void)
{

loc_0053B310: ;
    eax = ecx + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_0053B320
 * Original: 0x0053B320 - 0x0053B324 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B320(void)
{

loc_0053B320: ;
    eax = MEM32(ecx + 0x4C);
    esp += 4; return; /* ret */

}

/**
 * sub_0053B330
 * Original: 0x0053B330 - 0x0053B334 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B330(void)
{

loc_0053B330: ;
    eax = MEM32(ecx + 0x64);
    esp += 4; return; /* ret */

}

/**
 * sub_0053B340
 * Original: 0x0053B340 - 0x0053B344 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B340(void)
{

loc_0053B340: ;
    eax = MEM32(ecx + 0x68);
    esp += 4; return; /* ret */

}

/**
 * sub_0053B350
 * Original: 0x0053B350 - 0x0053B354 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B350(void)
{

loc_0053B350: ;
    eax = MEM32(ecx + 0x58);
    esp += 4; return; /* ret */

}

/**
 * sub_0053B360
 * Original: 0x0053B360 - 0x0053B364 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B360(void)
{

loc_0053B360: ;
    eax = MEM32(ecx + 0x60);
    esp += 4; return; /* ret */

}

/**
 * sub_0053B370
 * Original: 0x0053B370 - 0x0053B50F (415 bytes, 131 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053B370: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(0x679810);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    esi = ecx;
    ecx = MEM32(0x860220);
    PUSH32(esp, 0x62DF21);
    MEM32(0x679810) = 0x679884;
    eax = MEM32(ecx);
    PUSH32(esp, 0x64D5B4);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0053B3A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053B39Fu); } /* indirect call */
    }

loc_0053B3A2: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(0x679810) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0053B3BA; /* jne: not equal / not zero */

loc_0053B3AE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0053B3BA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x635D38);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0053B3C9u); RECOMP_ABI_CALL(0x00616420u, sub_00616420); /* call 0x00616420 */

loc_0053B3C9: ;
    ecx = esi;
    PUSH32(esp, 0x0053B3D0u); RECOMP_ABI_CALL(0x0053B310u, sub_0053B310); /* call 0x0053B310 */

loc_0053B3D0: ;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x64D6AC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0053B3E0u); RECOMP_ABI_CALL(0x00615740u, sub_00615740); /* call 0x00615740 */

loc_0053B3E0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x0053B3EAu); RECOMP_ABI_CALL(0x004DBA90u, sub_004DBA90); /* call 0x004DBA90 */

loc_0053B3EA: ;
    PUSH32(esp, eax);
    edx = esp + 0x10;
    PUSH32(esp, 0x64D698);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0053B3FAu); RECOMP_ABI_CALL(0x00615740u, sub_00615740); /* call 0x00615740 */

loc_0053B3FA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x0053B404u); RECOMP_ABI_CALL(0x0055E930u, sub_0055E930); /* call 0x0055E930 */

loc_0053B404: ;
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, 0x64D684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053B414u); RECOMP_ABI_CALL(0x00615740u, sub_00615740); /* call 0x00615740 */

loc_0053B414: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x0053B41Eu); RECOMP_ABI_CALL(0x0053B320u, sub_0053B320); /* call 0x0053B320 */

loc_0053B41E: ;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x64D670);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0053B42Eu); RECOMP_ABI_CALL(0x00615740u, sub_00615740); /* call 0x00615740 */

loc_0053B42E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x0053B438u); RECOMP_ABI_CALL(0x0055E940u, sub_0055E940); /* call 0x0055E940 */

loc_0053B438: ;
    PUSH32(esp, eax);
    edx = esp + 0x10;
    PUSH32(esp, 0x64D65C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0053B448u); RECOMP_ABI_CALL(0x00615740u, sub_00615740); /* call 0x00615740 */

loc_0053B448: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x0053B452u); RECOMP_ABI_CALL(0x005AEBA0u, sub_005AEBA0); /* call 0x005AEBA0 */

loc_0053B452: ;
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, 0x64D644);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053B462u); RECOMP_ABI_CALL(0x00615740u, sub_00615740); /* call 0x00615740 */

loc_0053B462: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x0053B46Cu); RECOMP_ABI_CALL(0x0053B350u, sub_0053B350); /* call 0x0053B350 */

loc_0053B46C: ;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x64D630);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0053B47Cu); RECOMP_ABI_CALL(0x00615740u, sub_00615740); /* call 0x00615740 */

loc_0053B47C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x0053B486u); RECOMP_ABI_CALL(0x0055E920u, sub_0055E920); /* call 0x0055E920 */

loc_0053B486: ;
    PUSH32(esp, eax);
    edx = esp + 0x10;
    PUSH32(esp, 0x64D620);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0053B496u); RECOMP_ABI_CALL(0x00615740u, sub_00615740); /* call 0x00615740 */

loc_0053B496: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x0053B4A0u); RECOMP_ABI_CALL(0x0053B360u, sub_0053B360); /* call 0x0053B360 */

loc_0053B4A0: ;
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, 0x64D608);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053B4B0u); RECOMP_ABI_CALL(0x00615740u, sub_00615740); /* call 0x00615740 */

loc_0053B4B0: ;
    ecx = MEM32(esi + 0x6C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0053B4B9u); RECOMP_ABI_CALL(0x005E1B40u, sub_005E1B40); /* call 0x005E1B40 */

loc_0053B4B9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053B4D3; /* je: equal / zero */

loc_0053B4C0: ;
    PUSH32(esp, eax);
    edx = esp + 0x10;
    PUSH32(esp, 0x64D5F8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0053B4D0u); RECOMP_ABI_CALL(0x00615740u, sub_00615740); /* call 0x00615740 */

loc_0053B4D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0053B4D3: ;
    ecx = esi;
    PUSH32(esp, 0x0053B4DAu); RECOMP_ABI_CALL(0x0053B340u, sub_0053B340); /* call 0x0053B340 */

loc_0053B4DA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053B4E0u); RECOMP_ABI_CALL(0x0053B330u, sub_0053B330); /* call 0x0053B330 */

loc_0053B4E0: ;
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, 0x64D5E4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053B4F0u); RECOMP_ABI_CALL(0x00615740u, sub_00615740); /* call 0x00615740 */

loc_0053B4F0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0053B4FCu); RECOMP_ABI_CALL(0x0049C460u, sub_0049C460); /* call 0x0049C460 */

loc_0053B4FC: ;
    ecx = edi;
    PUSH32(esp, 0x0053B503u); RECOMP_ABI_CALL(0x00617FB0u, sub_00617FB0); /* call 0x00617FB0 */

loc_0053B503: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0053B510
 * Original: 0x0053B510 - 0x0053B51D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053B510: ;
    SET_LO8(eax, MEM8(ecx + 0x70));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053B51C; /* je: equal / zero */

loc_0053B517: ;
    g_seh_ebp = ebp; sub_0053B370(); return; /* tail jmp 0x0053B370 */

loc_0053B51C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0053B520
 * Original: 0x0053B520 - 0x0053B54B (43 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B520(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053B520: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    ecx = esi + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0053B533u); RECOMP_ABI_CALL(0x00619910u, sub_00619910); /* call 0x00619910 */

loc_0053B533: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = esi;
    MEM8(esi + 0x43) = 0;
    MEM8(esi + 0x71) = 1;
    PUSH32(esp, 0x0053B547u); RECOMP_ABI_CALL(0x0049C460u, sub_0049C460); /* call 0x0049C460 */

loc_0053B547: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053B550
 * Original: 0x0053B550 - 0x0053B56C (28 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053B550: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x44), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053B569; /* je: equal / zero */

loc_0053B559: ;
    MEM32(ecx + 0x44) = eax;
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; sub_0049C460(); return; /* tail jmp 0x0049C460 */

loc_0053B569: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053B570
 * Original: 0x0053B570 - 0x0053B58C (28 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053B570: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x48), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053B589; /* je: equal / zero */

loc_0053B579: ;
    MEM32(ecx + 0x48) = eax;
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; sub_0049C460(); return; /* tail jmp 0x0049C460 */

loc_0053B589: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053B590
 * Original: 0x0053B590 - 0x0053B5AC (28 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053B590: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x4C), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053B5A9; /* je: equal / zero */

loc_0053B599: ;
    MEM32(ecx + 0x4C) = eax;
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; sub_0049C460(); return; /* tail jmp 0x0049C460 */

loc_0053B5A9: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053B5B0
 * Original: 0x0053B5B0 - 0x0053B5CC (28 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B5B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053B5B0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x50), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053B5C9; /* je: equal / zero */

loc_0053B5B9: ;
    MEM32(ecx + 0x50) = eax;
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; sub_0049C460(); return; /* tail jmp 0x0049C460 */

loc_0053B5C9: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053B5D0
 * Original: 0x0053B5D0 - 0x0053B5F4 (36 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053B5D0: ;
    edx = MEM32(ecx + 0x64);
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    edx = MEM32(esp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_0053B5E4; /* jne: not equal / not zero */

loc_0053B5DF: ;
    _fa = (uint32_t)(MEM32(ecx + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x68), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053B5F1; /* je: equal / zero */

loc_0053B5E4: ;
    PUSH32(esp, 1);
    MEM32(ecx + 0x64) = eax;
    MEM32(ecx + 0x68) = edx;
    PUSH32(esp, 0x0053B5F1u); RECOMP_ABI_CALL(0x0049C460u, sub_0049C460); /* call 0x0049C460 */

loc_0053B5F1: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0053B600
 * Original: 0x0053B600 - 0x0053B61C (28 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053B600: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x54), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053B619; /* je: equal / zero */

loc_0053B609: ;
    MEM32(ecx + 0x54) = eax;
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; sub_0049C460(); return; /* tail jmp 0x0049C460 */

loc_0053B619: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053B620
 * Original: 0x0053B620 - 0x0053B63C (28 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053B620: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x58), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053B639; /* je: equal / zero */

loc_0053B629: ;
    MEM32(ecx + 0x58) = eax;
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; sub_0049C460(); return; /* tail jmp 0x0049C460 */

loc_0053B639: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053B640
 * Original: 0x0053B640 - 0x0053B65C (28 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053B640: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x5C), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053B659; /* je: equal / zero */

loc_0053B649: ;
    MEM32(ecx + 0x5C) = eax;
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; sub_0049C460(); return; /* tail jmp 0x0049C460 */

loc_0053B659: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053B660
 * Original: 0x0053B660 - 0x0053B67C (28 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053B660: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x60), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053B679; /* je: equal / zero */

loc_0053B669: ;
    MEM32(ecx + 0x60) = eax;
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; sub_0049C460(); return; /* tail jmp 0x0049C460 */

loc_0053B679: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053B680
 * Original: 0x0053B680 - 0x0053B699 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053B680: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x6C) = eax;
    MEM32(0x6C2C5C) = eax;
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; sub_0049C460(); return; /* tail jmp 0x0049C460 */

}
