/**
 * Midnight Club II (PC) - Recompiled code chunk 28
 * Functions: 250 (0x0055EAA0 - 0x005656A0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0055EAA0
 * Original: 0x0055EAA0 - 0x0055EB14 (116 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055EAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0055EAA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0055EAB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055EAADu); } /* indirect call */
    }

loc_0055EAB0: ;
    edx = MEM32(edi);
    ecx = edi;
    ebx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0055EAB9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055EAB6u); } /* indirect call */
    }

loc_0055EAB9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055EB0C; /* jne: not equal / not zero */

loc_0055EABD: ;
    esi = MEM32(esi + 8);
    eax = MEM32(edi + 8);

loc_0055EAC3: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055EAF8; /* jne: not equal / not zero */

loc_0055EACD: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0055EAE7; /* je: equal / zero */

loc_0055EAD1: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055EAF8; /* jne: not equal / not zero */

loc_0055EADD: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0055EAC3; /* jne: not equal / not zero */

loc_0055EAE7: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0055EAF8: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0055EB0C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055EB20
 * Original: 0x0055EB20 - 0x0055EB94 (116 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055EB20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0055EB20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0055EB30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055EB2Du); } /* indirect call */
    }

loc_0055EB30: ;
    edx = MEM32(edi);
    ecx = edi;
    ebx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0055EB39u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055EB36u); } /* indirect call */
    }

loc_0055EB39: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055EB8C; /* jne: not equal / not zero */

loc_0055EB3D: ;
    esi = MEM32(esi + 8);
    eax = MEM32(edi + 8);

loc_0055EB43: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055EB78; /* jne: not equal / not zero */

loc_0055EB4D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0055EB67; /* je: equal / zero */

loc_0055EB51: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055EB78; /* jne: not equal / not zero */

loc_0055EB5D: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0055EB43; /* jne: not equal / not zero */

loc_0055EB67: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    SET_LO8(ecx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    POP32(esp, esi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0055EB78: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    SET_LO8(ecx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    POP32(esp, esi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0055EB8C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055EBA0
 * Original: 0x0055EBA0 - 0x0055EBE7 (71 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055EBA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055EBA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4B);
    PUSH32(esp, 0x64FA00);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x0055EBAFu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0055EBAF: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055EBD0; /* je: equal / zero */

loc_0055EBB8: ;
    ecx = esi;
    PUSH32(esp, 0x0055EBBFu); RECOMP_ABI_CALL(0x00606090u, sub_00606090); /* call 0x00606090 */

loc_0055EBBF: ;
    MEM32(esi) = 0x64F9CC;
    MEM32(esi + 8) = 0;
    ecx = esi;
    goto loc_0055EBD2;

loc_0055EBD0: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055EBD2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = MEM32(esp + 8);
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055EBE1; /* je: equal / zero */

loc_0055EBDC: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0055EBE1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055EBDEu); } /* indirect call */
    }

loc_0055EBE1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055EBF0
 * Original: 0x0055EBF0 - 0x0055EC30 (64 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055EBF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055EBF0: ;
    eax = MEM32(ecx + 0x5C);
    edx = 1;
    PUSH32(esp, esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0055EC0C; /* jne: not equal / not zero */

loc_0055EC02: ;
    esi = MEM32(eax);
    edi = MEM32(ecx + 0x48);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055EC2B; /* je: equal / zero */

loc_0055EC0C: ;
    esi = MEM32(eax);
    esi = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(ecx + 0x5C) = edx;
    edx = esp;
    MEM32(ecx + 0x48) = esi;
    PUSH32(esp, eax);
    MEM32(edx) = 0;
    edx = MEM32(ecx);
    PUSH32(esp, 0xC0002328u);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0055EC2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055EC28u); } /* indirect call */
    }

loc_0055EC2B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055EC30
 * Original: 0x0055EC30 - 0x0055ECA7 (119 bytes, 48 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055EC30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0055EC30: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x5C), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055EC75; /* jne: not equal / not zero */

loc_0055EC3F: ;
    eax = MEM32(ebp);
    esi = MEM32(eax + 8);
    eax = MEM32(edi + 0x50);

loc_0055EC48: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055EC6C; /* jne: not equal / not zero */

loc_0055EC50: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0055EC68; /* je: equal / zero */

loc_0055EC54: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055EC6C; /* jne: not equal / not zero */

loc_0055EC5E: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0055EC48; /* jne: not equal / not zero */

loc_0055EC68: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0055EC71;

loc_0055EC6C: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0055EC71: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0055ECA1; /* je: equal / zero */

loc_0055EC75: ;
    eax = MEM32(ebp);
    ecx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    ecx = edi + 0x4C;
    PUSH32(esp, 0x0055EC84u); RECOMP_ABI_CALL(0x00567030u, sub_00567030); /* call 0x00567030 */

loc_0055EC84: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(edi + 0x5C) = 2;
    PUSH32(esp, ebp);
    MEM32(eax) = 0;
    edx = MEM32(edi);
    PUSH32(esp, 0xC0002332u);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0055ECA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055EC9Eu); } /* indirect call */
    }

loc_0055ECA1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055ECB0
 * Original: 0x0055ECB0 - 0x0055ECEE (62 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055ECB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055ECB0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055ECEC; /* je: equal / zero */

loc_0055ECB8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = esp;
    edx = esp + 4;
    MEM32(ecx + 0x5C) = 0;
    MEM32(esp + 4) = 0;
    PUSH32(esp, edx);
    MEM32(eax) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, 0xC00023F0u);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0055ECDFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055ECDCu); } /* indirect call */
    }

loc_0055ECDF: ;
    ecx = MEM32(esp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055ECEC; /* je: equal / zero */

loc_0055ECE7: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0055ECECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055ECE9u); } /* indirect call */
    }

loc_0055ECEC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0055ECF0
 * Original: 0x0055ECF0 - 0x0055ED21 (49 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055ECF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055ECF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x64FA50;
    ecx = MEM32(esi + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055ED05; /* je: equal / zero */

loc_0055ED00: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0055ED05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055ED02u); } /* indirect call */
    }

loc_0055ED05: ;
    ecx = MEM32(esi + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055ED11; /* je: equal / zero */

loc_0055ED0C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0055ED11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055ED0Eu); } /* indirect call */
    }

loc_0055ED11: ;
    ecx = esi + 0x4C;
    PUSH32(esp, 0x0055ED19u); RECOMP_ABI_CALL(0x00566E70u, sub_00566E70); /* call 0x00566E70 */

loc_0055ED19: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00560CF0(); return; /* tail jmp 0x00560CF0 */

}

/**
 * sub_0055ED30
 * Original: 0x0055ED30 - 0x0055ED36 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055ED30(void)
{

loc_0055ED30: ;
    eax = 0x62E014;
    esp += 4; return; /* ret */

}

/**
 * sub_0055ED40
 * Original: 0x0055ED40 - 0x0055EDB9 (121 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055ED40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0055ED40: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ecx;
    edi = edx;
    esi = 0x62E014;
    ecx = 0xB;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0055ED63; /* jne: not equal / not zero */

loc_0055ED5B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0055ED63: ;
    esi = edx;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0055ED6Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055ED69u); } /* indirect call */
    }

loc_0055ED6F: ;
    /* nop */

loc_0055ED70: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055EDA5; /* jne: not equal / not zero */

loc_0055ED7A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0055ED94; /* je: equal / zero */

loc_0055ED7E: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055EDA5; /* jne: not equal / not zero */

loc_0055ED8A: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0055ED70; /* jne: not equal / not zero */

loc_0055ED94: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0055EDA5: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055EDC0
 * Original: 0x0055EDC0 - 0x0055EE63 (163 bytes, 60 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055EDC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055EDC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x64FAD8);
    PUSH32(esp, 0xC);
    edi = ecx;
    PUSH32(esp, 0x0055EDD2u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0055EDD2: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055EDF1; /* je: equal / zero */

loc_0055EDDB: ;
    ecx = esi;
    PUSH32(esp, 0x0055EDE2u); RECOMP_ABI_CALL(0x00606090u, sub_00606090); /* call 0x00606090 */

loc_0055EDE2: ;
    MEM32(esi) = 0x64F9CC;
    MEM32(esi + 8) = 0;
    goto loc_0055EDF3;

loc_0055EDF1: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055EDF3: ;
    ecx = MEM32(edi + 0x60);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055EE11; /* je: equal / zero */

loc_0055EDFA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055EE03; /* je: equal / zero */

loc_0055EDFE: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0055EE03u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055EE00u); } /* indirect call */
    }

loc_0055EE03: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(edi + 0x60) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0055EE11; /* je: equal / zero */

loc_0055EE0A: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0055EE11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055EE0Eu); } /* indirect call */
    }

loc_0055EE11: ;
    PUSH32(esp, 0x25);
    PUSH32(esp, 0x64FAD8);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x0055EE1Fu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0055EE1F: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055EE3E; /* je: equal / zero */

loc_0055EE28: ;
    ecx = esi;
    PUSH32(esp, 0x0055EE2Fu); RECOMP_ABI_CALL(0x00606090u, sub_00606090); /* call 0x00606090 */

loc_0055EE2F: ;
    MEM32(esi) = 0x64FA14;
    MEM32(esi + 8) = 0x62DF21;
    goto loc_0055EE40;

loc_0055EE3E: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055EE40: ;
    ecx = MEM32(edi + 0x64);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055EE5E; /* je: equal / zero */

loc_0055EE47: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055EE50; /* je: equal / zero */

loc_0055EE4B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0055EE50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055EE4Du); } /* indirect call */
    }

loc_0055EE50: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(edi + 0x64) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0055EE5E; /* je: equal / zero */

loc_0055EE57: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0055EE5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055EE5Bu); } /* indirect call */
    }

loc_0055EE5E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055EE70
 * Original: 0x0055EE70 - 0x0055EED6 (102 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055EE70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055EE70: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x60);
    ecx = MEM32(esp + 8);
    PUSH32(esp, edi);
    MEM32(eax + 8) = ecx;
    edi = MEM32(esi + 0x60);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055EE93; /* je: equal / zero */

loc_0055EE85: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0055EE8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055EE89u); } /* indirect call */
    }

loc_0055EE8C: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0055EE93u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055EE90u); } /* indirect call */
    }

loc_0055EE93: ;
    ecx = MEM32(esi + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055EEA3; /* je: equal / zero */

loc_0055EE9E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0055EEA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055EEA0u); } /* indirect call */
    }

loc_0055EEA3: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0055EEAFu); RECOMP_ABI_CALL(0x0055EBF0u, sub_0055EBF0); /* call 0x0055EBF0 */

loc_0055EEAF: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055EEBC; /* je: equal / zero */

loc_0055EEB7: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0055EEBCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055EEB9u); } /* indirect call */
    }

loc_0055EEBC: ;
    esi = MEM32(esi + 0x60);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055EED1; /* je: equal / zero */

loc_0055EEC3: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0055EECAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055EEC7u); } /* indirect call */
    }

loc_0055EECA: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0055EED1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055EECEu); } /* indirect call */
    }

loc_0055EED1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055EEE0
 * Original: 0x0055EEE0 - 0x0055EF46 (102 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055EEE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055EEE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x64);
    ecx = MEM32(esp + 8);
    PUSH32(esp, edi);
    MEM32(eax + 8) = ecx;
    edi = MEM32(esi + 0x64);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055EF03; /* je: equal / zero */

loc_0055EEF5: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0055EEFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055EEF9u); } /* indirect call */
    }

loc_0055EEFC: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0055EF03u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055EF00u); } /* indirect call */
    }

loc_0055EF03: ;
    ecx = MEM32(esi + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055EF13; /* je: equal / zero */

loc_0055EF0E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0055EF13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055EF10u); } /* indirect call */
    }

loc_0055EF13: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0055EF1Fu); RECOMP_ABI_CALL(0x0055EC30u, sub_0055EC30); /* call 0x0055EC30 */

loc_0055EF1F: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055EF2C; /* je: equal / zero */

loc_0055EF27: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0055EF2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055EF29u); } /* indirect call */
    }

loc_0055EF2C: ;
    esi = MEM32(esi + 0x64);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055EF41; /* je: equal / zero */

loc_0055EF33: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0055EF3Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055EF37u); } /* indirect call */
    }

loc_0055EF3A: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0055EF41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055EF3Eu); } /* indirect call */
    }

loc_0055EF41: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055EF50
 * Original: 0x0055EF50 - 0x0055EF9B (75 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055EF50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055EF50: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    esi = ecx;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0055EF6Au); RECOMP_ABI_CALL(0x00560D90u, sub_00560D90); /* call 0x00560D90 */

loc_0055EF6A: ;
    edi = MEM32(esp + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ecx = esi + 0x4C;
    MEM32(esi) = 0x64FA50;
    MEM32(esi + 0x48) = ebx;
    PUSH32(esp, 0x0055EF82u); RECOMP_ABI_CALL(0x00566E20u, sub_00566E20); /* call 0x00566E20 */

loc_0055EF82: ;
    MEM32(esi + 0x5C) = ebx;
    MEM32(esi + 0x60) = ebx;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esi + 0x64) = ebx;
    PUSH32(esp, 0x0055EF93u); RECOMP_ABI_CALL(0x0055EDC0u, sub_0055EDC0); /* call 0x0055EDC0 */

loc_0055EF93: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055EFA0
 * Original: 0x0055EFA0 - 0x0055EFBE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055EFA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055EFA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0055EFA8u); RECOMP_ABI_CALL(0x0055ECF0u, sub_0055ECF0); /* call 0x0055ECF0 */

loc_0055EFA8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055EFB8; /* je: equal / zero */

loc_0055EFAF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055EFB5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0055EFB5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055EFB8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055EFC0
 * Original: 0x0055EFC0 - 0x0055F075 (181 bytes, 66 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055EFC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055EFC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x44)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x44), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055F05B; /* je: equal / zero */

loc_0055EFCD: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0002328u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA0002328u (32-bit) */
    edx = MEM32(esp + 0x10);
    ecx = MEM32(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_0055F031; /* je: equal / zero */

loc_0055EFDE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0002332u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA0002332u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F007; /* je: equal / zero */

loc_0055EFE5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00023F0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA00023F0u (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0055EFFE; /* je: equal / zero */

loc_0055EFEE: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055EFFAu); RECOMP_ABI_CALL(0x0055F100u, sub_0055F100); /* call 0x0055F100 */

loc_0055EFFA: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0055EFFE: ;
    PUSH32(esp, 0x0055F003u); RECOMP_ABI_CALL(0x0055ECB0u, sub_0055ECB0); /* call 0x0055ECB0 */

loc_0055F003: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0055F007: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F071; /* je: equal / zero */

loc_0055F00B: ;
    MEM32(esp + 0x10) = ecx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0055F014u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F011u); } /* indirect call */
    }

loc_0055F014: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0055F020u); RECOMP_ABI_CALL(0x0055EC30u, sub_0055EC30); /* call 0x0055EC30 */

loc_0055F020: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F071; /* je: equal / zero */

loc_0055F028: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0055F02Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F02Au); } /* indirect call */
    }

loc_0055F02D: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0055F031: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F071; /* je: equal / zero */

loc_0055F035: ;
    MEM32(esp + 0xC) = ecx;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0055F03Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F03Bu); } /* indirect call */
    }

loc_0055F03E: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0055F04Au); RECOMP_ABI_CALL(0x0055EBF0u, sub_0055EBF0); /* call 0x0055EBF0 */

loc_0055F04A: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F071; /* je: equal / zero */

loc_0055F052: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0055F057u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F054u); } /* indirect call */
    }

loc_0055F057: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0055F05B: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0055F071u); RECOMP_ABI_CALL(0x0055F100u, sub_0055F100); /* call 0x0055F100 */

loc_0055F071: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055F080
 * Original: 0x0055F080 - 0x0055F0A4 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F080: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x64FAE4;
    PUSH32(esp, 0x0055F08Eu); RECOMP_ABI_CALL(0x005E3280u, sub_005E3280); /* call 0x005E3280 */

loc_0055F08E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055F09E; /* je: equal / zero */

loc_0055F095: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055F09Bu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0055F09B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055F09E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055F0B0
 * Original: 0x0055F0B0 - 0x0055F0DA (42 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F0B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F0B0: ;
    _fa = (uint32_t)(MEM8(ecx + 0x44)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x44), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055F0BD; /* je: equal / zero */

loc_0055F0B6: ;
    MEM32(ecx + 0x44) = MEM32(ecx + 0x44) | 0x200;
    _fa = (uint32_t)(MEM32(ecx + 0x44)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0055F0BD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ecx + 0x1E));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055F0D9; /* jbe: below or equal (unsigned <=) */

loc_0055F0C8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    MEM16(ecx + 0x1E) = LO16(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0055F0D9; /* jne: not equal / not zero */

loc_0055F0D2: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0055F0D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F0D6u); } /* indirect call */
    }

loc_0055F0D9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055F0E0
 * Original: 0x0055F0E0 - 0x0055F0F6 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F0E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055F0E0: ;
    _fa = (uint32_t)(MEM8(ecx + 0x44)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x44), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055F0F5; /* je: equal / zero */

loc_0055F0E6: ;
    eax = MEM32(ecx + 0x44);
    eax = eax >> 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055F0F5; /* je: equal / zero */

loc_0055F0F0: ;
    edx = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x20)); return; /* indirect tail jmp */

loc_0055F0F5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055F100
 * Original: 0x0055F100 - 0x0055F137 (55 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F100: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0000064u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA0000064u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F12D; /* je: equal / zero */

loc_0055F10B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0000065u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA0000065u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F123; /* je: equal / zero */

loc_0055F112: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0000069u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA0000069u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F134; /* jne: not equal / not zero */

loc_0055F119: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0055F120u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F11Du); } /* indirect call */
    }

loc_0055F120: ;
    esp += 16; return; /* ret 12 */

loc_0055F123: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0055F12Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F127u); } /* indirect call */
    }

loc_0055F12A: ;
    esp += 16; return; /* ret 12 */

loc_0055F12D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0055F134u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F131u); } /* indirect call */
    }

loc_0055F134: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055F140
 * Original: 0x0055F140 - 0x0055F14C (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F140(void)
{

loc_0055F140: ;
    SET_LO16(eax, MEM16(esp + 4));
    MEM16(ecx + 0x1E) = LO16(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055F150
 * Original: 0x0055F150 - 0x0055F183 (51 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F150: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(ecx + 0x44);
    if (CMP_EQ(_fa, _fb)) goto loc_0055F160; /* je: equal / zero */

loc_0055F15B: ;
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0055F163;

loc_0055F160: ;
    eax = eax & 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0055F163: ;
    MEM32(ecx + 0x44) = eax;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(ecx + 0x44);
    if (CMP_EQ(_fa, _fb)) goto loc_0055F17A; /* je: equal / zero */

loc_0055F171: ;
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x44) = eax;
    esp += 12; return; /* ret 8 */

loc_0055F17A: ;
    eax = eax & 0xFFFFFFFBu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x44) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055F190
 * Original: 0x0055F190 - 0x0055F1A4 (20 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055F190: ;
    eax = MEM32(ecx + 0x44);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055F1A3; /* je: equal / zero */

loc_0055F19A: ;
    edx = MEM32(ecx + 0x30);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 8)); return; /* indirect tail jmp */

loc_0055F1A3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055F1B0
 * Original: 0x0055F1B0 - 0x0055F1E0 (48 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F1B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055F1B0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(ecx + 0x44);
    if (CMP_EQ(_fa, _fb)) goto loc_0055F1D5; /* je: equal / zero */

loc_0055F1BB: ;
    eax = eax | 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x44) = eax;
    eax = MEM32(ecx + 8);
    edx = MEM32(eax + 4);
    MEM32(esp + 4) = edx;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_005E3380(); return; /* tail jmp 0x005E3380 */

loc_0055F1D5: ;
    eax = eax & 0xFFFFFEFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x44) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055F1E0
 * Original: 0x0055F1E0 - 0x0055F1E6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F1E0(void)
{

loc_0055F1E0: ;
    eax = 0x62F36C;
    esp += 4; return; /* ret */

}

/**
 * sub_0055F1F0
 * Original: 0x0055F1F0 - 0x0055F20C (28 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F1F0(void)
{

loc_0055F1F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0055F1FEu); RECOMP_ABI_CALL(0x00406990u, sub_00406990); /* call 0x00406990 */

loc_0055F1FE: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x0055F207u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F204u); } /* indirect call */
    }

loc_0055F207: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055F210
 * Original: 0x0055F210 - 0x0055F218 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055F210: ;
    ecx = MEM32(ecx + 0xC);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x2C)); return; /* indirect tail jmp */

}

/**
 * sub_0055F220
 * Original: 0x0055F220 - 0x0055F241 (33 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F220: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(ecx + 0x44);
    if (CMP_EQ(_fa, _fb)) goto loc_0055F236; /* je: equal / zero */

loc_0055F22B: ;
    eax = eax | 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x44) = eax;
    esp += 8; return; /* ret 4 */

loc_0055F236: ;
    eax = eax & 0xFFFFFF7Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x44) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055F250
 * Original: 0x0055F250 - 0x0055F26D (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F250: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 8);
    SET_LO8(edx, MEM8(ecx + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F26C; /* jne: not equal / not zero */

loc_0055F25E: ;
    edi = edi;

loc_0055F260: ;
    eax = ecx;
    ecx = MEM32(eax + 8);
    SET_LO8(edx, MEM8(ecx + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F260; /* je: equal / zero */

loc_0055F26C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055F270
 * Original: 0x0055F270 - 0x0055F28C (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F270: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    SET_LO8(edx, MEM8(ecx + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F28B; /* jne: not equal / not zero */

loc_0055F27D: ;
    /* nop */

loc_0055F280: ;
    eax = ecx;
    ecx = MEM32(eax);
    SET_LO8(edx, MEM8(ecx + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F280; /* je: equal / zero */

loc_0055F28B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055F290
 * Original: 0x0055F290 - 0x0055F2E9 (89 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F290: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    MEM32(edx) = esi;
    esi = MEM32(eax + 8);
    SET_LO8(ebx, MEM8(esi + 0x19));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F2AA; /* jne: not equal / not zero */

loc_0055F2A7: ;
    MEM32(esi + 4) = edx;

loc_0055F2AA: ;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F2C6; /* jne: not equal / not zero */

loc_0055F2B8: ;
    MEM32(ecx + 4) = eax;
    POP32(esp, esi);
    MEM32(eax + 8) = edx;
    MEM32(edx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0055F2C6: ;
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F2DC; /* jne: not equal / not zero */

loc_0055F2CE: ;
    MEM32(ecx + 8) = eax;
    POP32(esp, esi);
    MEM32(eax + 8) = edx;
    MEM32(edx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0055F2DC: ;
    MEM32(ecx) = eax;
    POP32(esp, esi);
    MEM32(eax + 8) = edx;
    MEM32(edx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055F2F0
 * Original: 0x0055F2F0 - 0x0055F34D (93 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F2F0: ;
    eax = MEM32(ecx);
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F2FF; /* je: equal / zero */

loc_0055F2F9: ;
    eax = MEM32(eax + 8);
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

loc_0055F2FF: ;
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x19));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F323; /* jne: not equal / not zero */

loc_0055F309: ;
    eax = MEM32(edx + 8);
    SET_LO8(ebx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F31F; /* jne: not equal / not zero */

loc_0055F313: ;
    edx = eax;
    eax = MEM32(edx + 8);
    SET_LO8(ebx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F313; /* je: equal / zero */

loc_0055F31F: ;
    MEM32(ecx) = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0055F323: ;
    eax = MEM32(eax + 4);
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F34B; /* jne: not equal / not zero */

loc_0055F32D: ;
    /* nop */

loc_0055F330: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F342; /* jne: not equal / not zero */

loc_0055F336: ;
    MEM32(ecx) = eax;
    eax = MEM32(eax + 4);
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F330; /* je: equal / zero */

loc_0055F342: ;
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F34B; /* jne: not equal / not zero */

loc_0055F349: ;
    MEM32(ecx) = eax;

loc_0055F34B: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0055F350
 * Original: 0x0055F350 - 0x0055F3A7 (87 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F350: ;
    eax = MEM32(ecx);
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F3A6; /* jne: not equal / not zero */

loc_0055F359: ;
    edx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x19));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F37F; /* jne: not equal / not zero */

loc_0055F364: ;
    eax = MEM32(edx);
    SET_LO8(ebx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F37B; /* jne: not equal / not zero */

loc_0055F36D: ;
    /* nop */

loc_0055F370: ;
    edx = eax;
    eax = MEM32(edx);
    SET_LO8(ebx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F370; /* je: equal / zero */

loc_0055F37B: ;
    MEM32(ecx) = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0055F37F: ;
    eax = MEM32(eax + 4);
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F3A3; /* jne: not equal / not zero */

loc_0055F389: ;
    /* nop */

loc_0055F390: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F3A3; /* jne: not equal / not zero */

loc_0055F397: ;
    MEM32(ecx) = eax;
    eax = MEM32(eax + 4);
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F390; /* je: equal / zero */

loc_0055F3A3: ;
    MEM32(ecx) = eax;
    POP32(esp, ebx);

loc_0055F3A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055F3B0
 * Original: 0x0055F3B0 - 0x0055F3ED (61 bytes, 21 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F3B0(void)
{

loc_0055F3B0: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    edx = eax + 0xC;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    SET_LO8(edx, MEM8(esp + 0x18));
    MEM8(eax + 0x18) = LO8(edx);
    MEM8(eax + 0x19) = 0;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0055F3F0
 * Original: 0x0055F3F0 - 0x0055F416 (38 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F3F0(void)
{

loc_0055F3F0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(eax);
    eax = MEM32(esp + 0x10);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0055F40Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F408u); } /* indirect call */
    }

loc_0055F40B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x38); PUSH32(esp, 0x0055F411u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F40Eu); } /* indirect call */
    }

loc_0055F411: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055F420
 * Original: 0x0055F420 - 0x0055F441 (33 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F420(void)
{

loc_0055F420: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0055F436u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F433u); } /* indirect call */
    }

loc_0055F436: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x50); PUSH32(esp, 0x0055F43Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F439u); } /* indirect call */
    }

loc_0055F43C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055F450
 * Original: 0x0055F450 - 0x0055F46C (28 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F450(void)
{

loc_0055F450: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0055F461u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F45Eu); } /* indirect call */
    }

loc_0055F461: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x44); PUSH32(esp, 0x0055F467u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F464u); } /* indirect call */
    }

loc_0055F467: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055F470
 * Original: 0x0055F470 - 0x0055F503 (147 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F470: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x44));
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F4F4; /* je: equal / zero */

loc_0055F481: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    MEM32(esp + 0xC) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_0055F4C9; /* jne: not equal / not zero */

loc_0055F48E: ;
    ecx = MEM32(esi + 0x44);
    ecx = ecx & 0xFFFFFDFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(esi + 0x44) = ecx;
    MEM32(eax) = 0;
    edx = MEM32(esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC0000064u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0055F4B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F4B4u); } /* indirect call */
    }

loc_0055F4B7: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F4FE; /* je: equal / zero */

loc_0055F4BF: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0055F4C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F4C1u); } /* indirect call */
    }

loc_0055F4C4: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0055F4C9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = esp;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(eax) = 0;
    eax = MEM32(esi);
    PUSH32(esp, 0xC0000069u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0055F4E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F4E0u); } /* indirect call */
    }

loc_0055F4E3: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F4F0; /* je: equal / zero */

loc_0055F4EB: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0055F4F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F4EDu); } /* indirect call */
    }

loc_0055F4F0: ;
    MEM32(esi + 0x44) = MEM32(esi + 0x44) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0055F4F4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F4FE; /* jne: not equal / not zero */

loc_0055F4F8: ;
    MEM16(esi + 0x1E) = 0;

loc_0055F4FE: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055F510
 * Original: 0x0055F510 - 0x0055F5C5 (181 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F510: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ebx = 0x62DF21;
    PUSH32(esp, 0x0055F522u); RECOMP_ABI_CALL(0x0055B8F0u, sub_0055B8F0); /* call 0x0055B8F0 */

loc_0055F522: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64F0A0);
    eax = esp + 0x14;
    PUSH32(esp, 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055F534u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0055F534: ;
    ecx = MEM32(esi + 0x40);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F545; /* je: equal / zero */

loc_0055F53E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0055F543u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F540u); } /* indirect call */
    }

loc_0055F543: ;
    ebx = eax;

loc_0055F545: ;
    eax = ebx;
    edx = eax + 1;
    /* nop */

loc_0055F550: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F550; /* jne: not equal / not zero */

loc_0055F557: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax;
    eax = esp + 0xC;
    esi = eax + 1;

loc_0055F562: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F562; /* jne: not equal / not zero */

loc_0055F569: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x3E7);
    esi = eax + edx + 3;
    PUSH32(esp, 0x64FB0C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055F57Fu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0055F57F: ;
    edi = eax;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64FB04);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0055F593u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0055F593: ;
    PUSH32(esp, 0x3EB);
    PUSH32(esp, 0x64FB0C);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0055F5A4u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0055F5A4: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F5BC; /* je: equal / zero */

loc_0055F5AB: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x0055F5B5u); RECOMP_ABI_CALL(0x00566FE0u, sub_00566FE0); /* call 0x00566FE0 */

loc_0055F5B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0055F5BC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0055F5D0
 * Original: 0x0055F5D0 - 0x0055F5F7 (39 bytes, 14 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F5D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0x44);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055F5F4; /* je: equal / zero */

loc_0055F5E1: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esp + 0x14); PUSH32(esp, 0x0055F5F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F5F0u); } /* indirect call */
    }

loc_0055F5F4: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0055F600
 * Original: 0x0055F600 - 0x0055F655 (85 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F600: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    MEM32(edx + 8) = esi;
    esi = MEM32(eax);
    SET_LO8(ebx, MEM8(esi + 0x19));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F61A; /* jne: not equal / not zero */

loc_0055F617: ;
    MEM32(esi + 4) = edx;

loc_0055F61A: ;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F635; /* jne: not equal / not zero */

loc_0055F628: ;
    MEM32(ecx + 4) = eax;
    POP32(esp, esi);
    MEM32(eax) = edx;
    MEM32(edx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0055F635: ;
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F648; /* jne: not equal / not zero */

loc_0055F63C: ;
    MEM32(ecx) = eax;
    POP32(esp, esi);
    MEM32(eax) = edx;
    MEM32(edx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0055F648: ;
    MEM32(ecx + 8) = eax;
    POP32(esp, esi);
    MEM32(eax) = edx;
    MEM32(edx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055F660
 * Original: 0x0055F660 - 0x0055F6A7 (71 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F660: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x6C5108);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055F675; /* je: equal / zero */

loc_0055F670: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0055F675u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F672u); } /* indirect call */
    }

loc_0055F675: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0055F690u); RECOMP_ABI_CALL(0x0055E210u, sub_0055E210); /* call 0x0055E210 */

loc_0055F690: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x38); PUSH32(esp, 0x0055F696u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F693u); } /* indirect call */
    }

loc_0055F696: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0055F6A2; /* je: equal / zero */

loc_0055F69B: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0055F6A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F69Fu); } /* indirect call */
    }

loc_0055F6A2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055F6B0
 * Original: 0x0055F6B0 - 0x0055F6F2 (66 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F6B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F6B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x6C5108);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055F6C5; /* je: equal / zero */

loc_0055F6C0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0055F6C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F6C2u); } /* indirect call */
    }

loc_0055F6C5: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0055F6DBu); RECOMP_ABI_CALL(0x0055E210u, sub_0055E210); /* call 0x0055E210 */

loc_0055F6DB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x50); PUSH32(esp, 0x0055F6E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F6DEu); } /* indirect call */
    }

loc_0055F6E1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0055F6ED; /* je: equal / zero */

loc_0055F6E6: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0055F6EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F6EAu); } /* indirect call */
    }

loc_0055F6ED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055F700
 * Original: 0x0055F700 - 0x0055F73D (61 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F700: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x6C5108);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055F715; /* je: equal / zero */

loc_0055F710: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0055F715u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F712u); } /* indirect call */
    }

loc_0055F715: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(edi);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0055F726u); RECOMP_ABI_CALL(0x0055E210u, sub_0055E210); /* call 0x0055E210 */

loc_0055F726: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x44); PUSH32(esp, 0x0055F72Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F729u); } /* indirect call */
    }

loc_0055F72C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0055F738; /* je: equal / zero */

loc_0055F731: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0055F738u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F735u); } /* indirect call */
    }

loc_0055F738: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055F740
 * Original: 0x0055F740 - 0x0055F793 (83 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F740: ;
    eax = MEM32(ecx + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = ecx + 0x40;
    if (CMP_NE(_fa, _fb)) goto loc_0055F78F; /* jne: not equal / not zero */

loc_0055F74B: ;
    ecx = MEM32(0x6C5108);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055F75E; /* je: equal / zero */

loc_0055F759: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0055F75Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F75Bu); } /* indirect call */
    }

loc_0055F75E: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x0055F768u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F762u); } /* indirect call */
    }

loc_0055F768: ;
    esi = MEM32(eax);
    ecx = MEM32(ebx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F786; /* je: equal / zero */

loc_0055F770: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F779; /* je: equal / zero */

loc_0055F774: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0055F779u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F776u); } /* indirect call */
    }

loc_0055F779: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebx) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0055F786; /* je: equal / zero */

loc_0055F77F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0055F786u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F783u); } /* indirect call */
    }

loc_0055F786: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0055F78Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F78Au); } /* indirect call */
    }

loc_0055F78D: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0055F78F: ;
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0055F7A0
 * Original: 0x0055F7A0 - 0x0055F7F7 (87 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F7A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F7A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x44);
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055F7B1; /* je: equal / zero */

loc_0055F7AE: ;
    MEM8(esi + 0x1C) = MEM8(esi + 0x1C) - 1;
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */

loc_0055F7B1: ;
    MEM32(esp + 4) = esi;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0055F7BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F7B9u); } /* indirect call */
    }

loc_0055F7BC: ;
    ecx = esi;
    PUSH32(esp, 0x0055F7C3u); RECOMP_ABI_CALL(0x0055F740u, sub_0055F740); /* call 0x0055F740 */

loc_0055F7C3: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0055F7D4u); RECOMP_ABI_CALL(0x00566D20u, sub_00566D20); /* call 0x00566D20 */

loc_0055F7D4: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F7E1; /* je: equal / zero */

loc_0055F7DC: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0055F7E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F7DEu); } /* indirect call */
    }

loc_0055F7E1: ;
    ecx = MEM32(esi + 0x44);
    SET_LO8(eax, MEM8(esi + 0x1C));
    ecx = ecx | 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x44) = ecx;
    MEM8(esi + 0x1C) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055F800
 * Original: 0x0055F800 - 0x0055F848 (72 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F800: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x44);
    ecx = eax;
    ecx = ecx >> 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055F845; /* je: equal / zero */

loc_0055F811: ;
    eax = eax & 0xFFFFFFF7u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x44) = eax;
    MEM8(esi + 0x1C) = MEM8(esi + 0x1C) - 1;
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 4) = esi;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0055F825u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F822u); } /* indirect call */
    }

loc_0055F825: ;
    ecx = esi;
    PUSH32(esp, 0x0055F82Cu); RECOMP_ABI_CALL(0x0055F740u, sub_0055F740); /* call 0x0055F740 */

loc_0055F82C: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, 0x0055F838u); RECOMP_ABI_CALL(0x00566980u, sub_00566980); /* call 0x00566980 */

loc_0055F838: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F845; /* je: equal / zero */

loc_0055F840: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0055F845u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F842u); } /* indirect call */
    }

loc_0055F845: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0055F850
 * Original: 0x0055F850 - 0x0055F89D (77 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F850: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 4) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0055F861; /* je: equal / zero */

loc_0055F85C: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0055F861u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F85Eu); } /* indirect call */
    }

loc_0055F861: ;
    ecx = esi;
    PUSH32(esp, 0x0055F868u); RECOMP_ABI_CALL(0x0055F740u, sub_0055F740); /* call 0x0055F740 */

loc_0055F868: ;
    eax = MEM32(eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0055F876u); RECOMP_ABI_CALL(0x00566DC0u, sub_00566DC0); /* call 0x00566DC0 */

loc_0055F876: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(esi + 0x1D) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0055F886; /* je: equal / zero */

loc_0055F881: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0055F886u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F883u); } /* indirect call */
    }

loc_0055F886: ;
    SET_LO8(eax, MEM8(esi + 0x1D));
    SET_LO8(ecx, MEM8(esi + 0x1C));
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = MEM32(esi + 0x44);
    eax = eax | 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(esi + 0x1C) = LO8(ecx);
    MEM32(esi + 0x44) = eax;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0055F8A0
 * Original: 0x0055F8A0 - 0x0055F8F4 (84 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F8A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F8A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x44);
    ecx = eax;
    ecx = ecx >> 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055F8F1; /* je: equal / zero */

loc_0055F8B1: ;
    SET_LO8(ecx, MEM8(esi + 0x1C));
    SET_LO8(edx, MEM8(esi + 0x1D));
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    eax = eax & 0xFFFFFFBFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 0x1C) = LO8(ecx);
    MEM32(esi + 0x44) = eax;
    MEM32(esp + 4) = esi;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0055F8CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F8CAu); } /* indirect call */
    }

loc_0055F8CD: ;
    ecx = esi;
    PUSH32(esp, 0x0055F8D4u); RECOMP_ABI_CALL(0x0055F740u, sub_0055F740); /* call 0x0055F740 */

loc_0055F8D4: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, 0x0055F8E0u); RECOMP_ABI_CALL(0x005669F0u, sub_005669F0); /* call 0x005669F0 */

loc_0055F8E0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F8ED; /* je: equal / zero */

loc_0055F8E8: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0055F8EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F8EAu); } /* indirect call */
    }

loc_0055F8ED: ;
    MEM8(esi + 0x1D) = 0;

loc_0055F8F1: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0055F900
 * Original: 0x0055F900 - 0x0055F92C (44 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F900: ;
    ecx = MEM32(0x6C5108);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055F913; /* je: equal / zero */

loc_0055F90E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0055F913u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F910u); } /* indirect call */
    }

loc_0055F913: ;
    ecx = esi;
    PUSH32(esp, 0x0055F91Au); RECOMP_ABI_CALL(0x0055B8B0u, sub_0055B8B0); /* call 0x0055B8B0 */

loc_0055F91A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0055F927; /* je: equal / zero */

loc_0055F920: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0055F927u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F924u); } /* indirect call */
    }

loc_0055F927: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055F930
 * Original: 0x0055F930 - 0x0055F967 (55 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F930: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(edi + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = ecx;
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0055F961; /* jne: not equal / not zero */

loc_0055F942: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0055F94Du); RECOMP_ABI_CALL(0x0055F930u, sub_0055F930); /* call 0x0055F930 */

loc_0055F94D: ;
    esi = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0055F955u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0055F955: ;
    SET_LO8(eax, MEM8(esi + 0x19));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0055F942; /* je: equal / zero */

loc_0055F961: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055F970
 * Original: 0x0055F970 - 0x0055F9FA (138 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055F970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F970: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x629C50);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    PUSH32(esp, 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F998u); RECOMP_ABI_CALL(0x005772A0u, sub_005772A0); /* call 0x005772A0 */

loc_0055F998: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -20) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = edx;
    MEM32(ebp + -24) = edx;
    MEM32(ebp + -28) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F9AF; /* je: equal / zero */

loc_0055F9AD: ;
    MEM32(eax) = edx;

loc_0055F9AF: ;
    ebx = 1;
    MEM32(ebp + -32) = ebx;
    MEM32(ebp + -36) = edx;
    ecx = eax + 4;
    MEM32(ebp + -40) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F9C6; /* je: equal / zero */

loc_0055F9C4: ;
    MEM32(ecx) = edx;

loc_0055F9C6: ;
    MEM32(ebp + -32) = 2;
    MEM32(ebp + -44) = edx;
    ecx = eax + 8;
    MEM32(ebp + -48) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F9DC; /* je: equal / zero */

loc_0055F9DA: ;
    MEM32(ecx) = edx;

loc_0055F9DC: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    MEM8(eax + 0x18) = LO8(ebx);
    MEM8(eax + 0x19) = LO8(edx);
    ecx = MEM32(ebp + -12);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0055F9FA
 * Original: 0x0055F9FA - 0x0055FA10 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F9FA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055F9FA: ;
    eax = MEM32(ebp + -20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055FA03u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0055FA03: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0055FA0Fu); RECOMP_ABI_CALL(0x0061A356u, sub_0061A356); /* call 0x0061A356 */

loc_0055FA0F: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0055FA10
 * Original: 0x0055FA10 - 0x0055FA85 (117 bytes, 43 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055FA10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055FA10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x629C60);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    PUSH32(esp, 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FA38u); RECOMP_ABI_CALL(0x005772A0u, sub_005772A0); /* call 0x005772A0 */

loc_0055FA38: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -24) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055FA69; /* je: equal / zero */

loc_0055FA4E: ;
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, ecx);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FA69u); RECOMP_ABI_CALL(0x0055F3B0u, sub_0055F3B0); /* call 0x0055F3B0 */

loc_0055FA69: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    eax = esi;
    ecx = MEM32(ebp + -12);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0055FA85
 * Original: 0x0055FA85 - 0x0055FAA0 (27 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055FA85(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055FA85: ;
    edx = MEM32(ebp + -20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0055FA8Eu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0055FA8E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0055FA9Au); RECOMP_ABI_CALL(0x0061A356u, sub_0061A356); /* call 0x0061A356 */

loc_0055FA9A: ;
    /* int3: debug-trap slide byte, stepped over */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */

    g_seh_ebp = ebp; sub_0055FAA0(); return; /* fallthrough 0x0055FAA0 */

}

/**
 * sub_0055FAA0
 * Original: 0x0055FAA0 - 0x0055FAE6 (70 bytes, 25 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055FAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055FAA0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = edx;
    ecx = MEM32(eax);
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x10) = edx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x14) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055FAD5; /* je: equal / zero */

loc_0055FAD0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0055FAD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055FAD2u); } /* indirect call */
    }

loc_0055FAD5: ;
    SET_LO8(ecx, MEM8(esp + 0x18));
    MEM8(esi + 0x18) = LO8(ecx);
    MEM8(esi + 0x19) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0055FAF0
 * Original: 0x0055FAF0 - 0x0055FB33 (67 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055FAF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055FAF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x44);
    ecx = eax;
    ecx = ecx >> 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0055FB24; /* jne: not equal / not zero */

loc_0055FB00: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x1C);
    ecx = MEM32(esi + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055FB24; /* jne: not equal / not zero */

loc_0055FB0C: ;
    eax = eax | 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = esi;
    MEM32(esi + 0x44) = eax;
    PUSH32(esp, 0x0055FB19u); RECOMP_ABI_CALL(0x0055F800u, sub_0055F800); /* call 0x0055F800 */

loc_0055FB19: ;
    ecx = esi;
    PUSH32(esp, 0x0055FB20u); RECOMP_ABI_CALL(0x0055F8A0u, sub_0055F8A0); /* call 0x0055F8A0 */

loc_0055FB20: ;
    MEM32(esi + 0x44) = MEM32(esi + 0x44) | 0x10;
    _fa = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0055FB24: ;
    MEM32(esi + 4) = MEM32(esi + 4) - 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0055FB31; /* jne: not equal / not zero */

loc_0055FB29: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0055FB31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055FB2Fu); } /* indirect call */
    }

loc_0055FB31: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055FB40
 * Original: 0x0055FB40 - 0x0055FBAE (110 bytes, 47 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055FB40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055FB40: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 4);
    eax = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    edx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0055FB75; /* jne: not equal / not zero */

loc_0055FB57: ;
    esi = MEM32(edi);
    /* nop */

loc_0055FB60: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0055FB6A; /* jae: above or equal (unsigned >=) */

loc_0055FB65: ;
    eax = MEM32(eax + 8);
    goto loc_0055FB6E;

loc_0055FB6A: ;
    edx = eax;
    eax = MEM32(eax);

loc_0055FB6E: ;
    SET_LO8(ebx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055FB60; /* je: equal / zero */

loc_0055FB75: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esp + 0x18) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055FB97; /* je: equal / zero */

loc_0055FB7D: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055FB97; /* jb: below (unsigned <) */

loc_0055FB84: ;
    eax = esp + 0x18;
    ecx = MEM32(eax);
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0055FB97: ;
    eax = esp + 0xC;
    POP32(esp, edi);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(eax);
    eax = MEM32(esp + 0x10);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055FBB0
 * Original: 0x0055FBB0 - 0x0055FC25 (117 bytes, 43 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055FBB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055FBB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x629C70);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    PUSH32(esp, 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FBD8u); RECOMP_ABI_CALL(0x005772A0u, sub_005772A0); /* call 0x005772A0 */

loc_0055FBD8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -24) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055FC09; /* je: equal / zero */

loc_0055FBEE: ;
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, ecx);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FC09u); RECOMP_ABI_CALL(0x0055FAA0u, sub_0055FAA0); /* call 0x0055FAA0 */

loc_0055FC09: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    eax = esi;
    ecx = MEM32(ebp + -12);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0055FC25
 * Original: 0x0055FC25 - 0x0055FC40 (27 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055FC25(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055FC25: ;
    edx = MEM32(ebp + -20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0055FC2Eu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0055FC2E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0055FC3Au); RECOMP_ABI_CALL(0x0061A356u, sub_0061A356); /* call 0x0061A356 */

loc_0055FC3A: ;
    /* int3: debug-trap slide byte, stepped over */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */

    g_seh_ebp = ebp; sub_0055FC40(); return; /* fallthrough 0x0055FC40 */

}

/**
 * sub_0055FC40
 * Original: 0x0055FC40 - 0x0055FCAC (108 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055FC40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055FC40: ;
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055FC4C; /* je: equal / zero */

loc_0055FC47: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0055FC4Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055FC49u); } /* indirect call */
    }

loc_0055FC4C: ;
    ecx = MEM32(edi + 0x14);
    edx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    esi = edi + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0055FC5Eu); RECOMP_ABI_CALL(0x0055F930u, sub_0055F930); /* call 0x0055F930 */

loc_0055FC5E: ;
    eax = MEM32(esi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 4);
    MEM32(esi + 8) = 0;
    MEM32(eax) = eax;
    esi = MEM32(esi + 4);
    ecx = edi;
    MEM32(esi + 8) = esi;
    PUSH32(esp, 0x0055FC7Du); RECOMP_ABI_CALL(0x0055F800u, sub_0055F800); /* call 0x0055F800 */

loc_0055FC7D: ;
    ecx = edi;
    PUSH32(esp, 0x0055FC84u); RECOMP_ABI_CALL(0x0055F8A0u, sub_0055F8A0); /* call 0x0055F8A0 */

loc_0055FC84: ;
    ecx = MEM32(edi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0055FC98; /* je: equal / zero */

loc_0055FC8C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0055FC91u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055FC8Eu); } /* indirect call */
    }

loc_0055FC91: ;
    MEM32(edi + 0x40) = 0;

loc_0055FC98: ;
    ecx = MEM32(edi + 0x44);
    ecx = ecx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x44) = ecx;
    edx = MEM32(edi);
    ecx = edi;
    POP32(esp, edi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC)); return; /* indirect tail jmp */

}

/**
 * sub_0055FCB0
 * Original: 0x0055FCB0 - 0x0055FE21 (369 bytes, 128 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055FCB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055FCB0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM8(edi + 0x44)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x44), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055FE0D; /* je: equal / zero */

loc_0055FCC0: ;
    eax = MEM32(edi + 0x44);
    ecx = eax;
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055FE0D; /* je: equal / zero */

loc_0055FCD0: ;
    eax = eax >> 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0055FE0D; /* jne: not equal / not zero */

loc_0055FCDB: ;
    ecx = MEM32(0x6C5108);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055FCF6; /* je: equal / zero */

loc_0055FCF1: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0055FCF6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055FCF3u); } /* indirect call */
    }

loc_0055FCF6: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055FD08; /* jne: not equal / not zero */

loc_0055FCFE: ;
    PUSH32(esp, edi);
    ecx = esp + 0x20;
    PUSH32(esp, 0x0055FD08u); RECOMP_ABI_CALL(0x00412250u, sub_00412250); /* call 0x00412250 */

loc_0055FD08: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    ebx = edi + 0x10;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0055FD1Fu); RECOMP_ABI_CALL(0x0055FB40u, sub_0055FB40); /* call 0x0055FB40 */

loc_0055FD1F: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x14) (32-bit) */
    ebp = MEM32(esp + 0x20);
    MEM32(esp + 0x10) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0055FD7C; /* je: equal / zero */

loc_0055FD2E: ;
    edi = edi;

loc_0055FD30: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055FD7C; /* jne: not equal / not zero */

loc_0055FD35: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055FD49u); RECOMP_ABI_CALL(0x0055C760u, sub_0055C760); /* call 0x0055C760 */

loc_0055FD49: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055FD6A; /* je: equal / zero */

loc_0055FD4D: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 0x44);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055FD6A; /* je: equal / zero */

loc_0055FD5C: ;
    eax = MEM32(esp + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esi + 0x10); PUSH32(esp, 0x0055FD6Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055FD67u); } /* indirect call */
    }

loc_0055FD6A: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0055FD73u); RECOMP_ABI_CALL(0x0055F350u, sub_0055F350); /* call 0x0055F350 */

loc_0055FD73: ;
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055FD30; /* jne: not equal / not zero */

loc_0055FD7C: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esp + 0x28) = 0x80000001u;
    PUSH32(esp, 0x0055FD95u); RECOMP_ABI_CALL(0x0055FB40u, sub_0055FB40); /* call 0x0055FB40 */

loc_0055FD95: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x14) (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0055FDF0; /* je: equal / zero */

loc_0055FDA0: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000001u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0x80000001u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055FDF0; /* jne: not equal / not zero */

loc_0055FDA9: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055FDBDu); RECOMP_ABI_CALL(0x0055C760u, sub_0055C760); /* call 0x0055C760 */

loc_0055FDBD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055FDDE; /* je: equal / zero */

loc_0055FDC1: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 0x44);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055FDDE; /* je: equal / zero */

loc_0055FDD0: ;
    eax = MEM32(esp + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esi + 0x10); PUSH32(esp, 0x0055FDDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055FDDBu); } /* indirect call */
    }

loc_0055FDDE: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0055FDE7u); RECOMP_ABI_CALL(0x0055F350u, sub_0055F350); /* call 0x0055F350 */

loc_0055FDE7: ;
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055FDA0; /* jne: not equal / not zero */

loc_0055FDF0: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0055FE00; /* je: equal / zero */

loc_0055FDFB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0055FE00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055FDFDu); } /* indirect call */
    }

loc_0055FE00: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055FE0D; /* je: equal / zero */

loc_0055FE08: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0055FE0Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055FE0Au); } /* indirect call */
    }

loc_0055FE0D: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0055FE1B; /* je: equal / zero */

loc_0055FE16: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0055FE1Bu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0055FE18u); } /* indirect call */
    }

loc_0055FE1B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055FE30
 * Original: 0x0055FE30 - 0x0055FEB3 (131 bytes, 60 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055FE30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055FE30: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x44);
    eax = eax >> 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0055FEAD; /* jne: not equal / not zero */

loc_0055FE41: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi + 0x20;
    PUSH32(esp, 0x0055FE55u); RECOMP_ABI_CALL(0x0055FB40u, sub_0055FB40); /* call 0x0055FB40 */

loc_0055FE55: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x24) (32-bit) */
    ebp = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x18);
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0055FE9D; /* je: equal / zero */

loc_0055FE68: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055FE99; /* jne: not equal / not zero */

loc_0055FE6D: ;
    edx = MEM32(esi);
    ecx = eax + 0x14;
    eax = MEM32(eax + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0055FE7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055FE7Au); } /* indirect call */
    }

loc_0055FE7D: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0055FE86u); RECOMP_ABI_CALL(0x0055F350u, sub_0055F350); /* call 0x0055F350 */

loc_0055FE86: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x24) (32-bit) */
    SET_LO8(ebx, 1);
    if (CMP_NE(_fa, _fb)) goto loc_0055FE68; /* jne: not equal / not zero */

loc_0055FE91: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0055FE99: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055FEAB; /* jne: not equal / not zero */

loc_0055FE9D: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0055FEABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055FEA8u); } /* indirect call */
    }

loc_0055FEAB: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0055FEAD: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055FEC0
 * Original: 0x0055FEC0 - 0x0055FF03 (67 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055FEC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055FEC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(edi + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = ecx;
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0055FEFD; /* jne: not equal / not zero */

loc_0055FED2: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0055FEDDu); RECOMP_ABI_CALL(0x0055FEC0u, sub_0055FEC0); /* call 0x0055FEC0 */

loc_0055FEDD: ;
    ecx = MEM32(edi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = MEM32(esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0055FEEB; /* je: equal / zero */

loc_0055FEE6: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0055FEEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055FEE8u); } /* indirect call */
    }

loc_0055FEEB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0055FEF1u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0055FEF1: ;
    SET_LO8(eax, MEM8(esi + 0x19));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0055FED2; /* je: equal / zero */

loc_0055FEFD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055FF10
 * Original: 0x0055FF10 - 0x005601DD (717 bytes, 257 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055FF10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055FF10: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x5C);
    SET_LO8(eax, MEM8(edi + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055FF9E; /* je: equal / zero */

loc_0055FF24: ;
    edi = 0xF;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x63A52C;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x24) = esi;
    MEM8(esp + 0x14) = 0;
    edx = eax + 1;

loc_0055FF40: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055FF40; /* jne: not equal / not zero */

loc_0055FF47: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x63A52C);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0055FF58u); RECOMP_ABI_CALL(0x0041E9F0u, sub_0041E9F0); /* call 0x0041E9F0 */

loc_0055FF58: ;
    ecx = esp + 0x2C;
    PUSH32(esp, 0x0055FF61u); RECOMP_ABI_CALL(0x0061A390u, sub_0061A390); /* call 0x0061A390 */

loc_0055FF61: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    MEM32(esp + 0x38) = 0x65EB4C;
    MEM32(esp + 0x5C) = edi;
    MEM32(esp + 0x58) = esi;
    MEM8(esp + 0x48) = 0;
    PUSH32(esp, 0x0055FF87u); RECOMP_ABI_CALL(0x0041E940u, sub_0041E940); /* call 0x0041E940 */

loc_0055FF87: ;
    PUSH32(esp, 0x65FBD0);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = 0x65EB64;
    PUSH32(esp, 0x0055FF9Eu); RECOMP_ABI_CALL(0x0061A356u, sub_0061A356); /* call 0x0061A356 */

loc_0055FF9E: ;
    PUSH32(esp, ebx);
    ebx = edi;
    PUSH32(esp, ebp);
    ecx = esp + 0x64;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x0055FFAFu); RECOMP_ABI_CALL(0x0055F350u, sub_0055F350); /* call 0x0055F350 */

loc_0055FFAF: ;
    ebp = MEM32(edi);
    SET_LO8(eax, MEM8(ebp + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = edi + 8;
    if (CMP_NE(_fa, _fb)) goto loc_0055FFCD; /* jne: not equal / not zero */

loc_0055FFBB: ;
    edx = MEM32(eax);
    SET_LO8(ecx, MEM8(edx + 0x19));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055FFCF; /* jne: not equal / not zero */

loc_0055FFC4: ;
    eax = MEM32(esp + 0x64);
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055FFCD: ;
    ebp = MEM32(eax);

loc_0055FFCF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560041; /* jne: not equal / not zero */

loc_0055FFD3: ;
    SET_LO8(eax, MEM8(ebp + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = MEM32(ebx + 4);
    if (CMP_NE(_fa, _fb)) goto loc_0055FFE0; /* jne: not equal / not zero */

loc_0055FFDD: ;
    MEM32(ebp + 4) = esi;

loc_0055FFE0: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055FFF1; /* jne: not equal / not zero */

loc_0055FFEC: ;
    MEM32(eax + 4) = ebp;
    goto loc_0055FFFC;

loc_0055FFF1: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055FFF9; /* jne: not equal / not zero */

loc_0055FFF5: ;
    MEM32(esi) = ebp;
    goto loc_0055FFFC;

loc_0055FFF9: ;
    MEM32(esi + 8) = ebp;

loc_0055FFFC: ;
    edi = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056001D; /* jne: not equal / not zero */

loc_00560003: ;
    SET_LO8(eax, MEM8(ebp + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056000E; /* je: equal / zero */

loc_0056000A: ;
    eax = esi;
    goto loc_0056001B;

loc_0056000E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00560014u); RECOMP_ABI_CALL(0x0055F270u, sub_0055F270); /* call 0x0055F270 */

loc_00560014: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0056001B: ;
    MEM32(edi) = eax;

loc_0056001D: ;
    edi = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056009E; /* jne: not equal / not zero */

loc_00560025: ;
    SET_LO8(eax, MEM8(ebp + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560033; /* je: equal / zero */

loc_0056002C: ;
    eax = esi;
    MEM32(edi + 8) = eax;
    goto loc_0056009E;

loc_00560033: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00560039u); RECOMP_ABI_CALL(0x0055F250u, sub_0055F250); /* call 0x0055F250 */

loc_00560039: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 8) = eax;
    goto loc_0056009E;

loc_00560041: ;
    ecx = MEM32(ebx);
    MEM32(ecx + 4) = edi;
    edx = MEM32(ebx);
    MEM32(edi) = edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560053; /* jne: not equal / not zero */

loc_0056004F: ;
    esi = edi;
    goto loc_0056006D;

loc_00560053: ;
    SET_LO8(ecx, MEM8(ebp + 0x19));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    esi = MEM32(edi + 4);
    if (CMP_NE(_fa, _fb)) goto loc_00560060; /* jne: not equal / not zero */

loc_0056005D: ;
    MEM32(ebp + 4) = esi;

loc_00560060: ;
    MEM32(esi) = ebp;
    ecx = MEM32(ebx + 8);
    MEM32(eax) = ecx;
    edx = MEM32(ebx + 8);
    MEM32(edx + 4) = edi;

loc_0056006D: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056007E; /* jne: not equal / not zero */

loc_00560079: ;
    MEM32(eax + 4) = edi;
    goto loc_0056008C;

loc_0056007E: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560089; /* jne: not equal / not zero */

loc_00560085: ;
    MEM32(eax) = edi;
    goto loc_0056008C;

loc_00560089: ;
    MEM32(eax + 8) = edi;

loc_0056008C: ;
    ecx = MEM32(ebx + 4);
    MEM32(edi + 4) = ecx;
    SET_LO8(edx, MEM8(ebx + 0x18));
    SET_LO8(eax, MEM8(edi + 0x18));
    MEM8(edi + 0x18) = LO8(edx);
    MEM8(ebx + 0x18) = LO8(eax);

loc_0056009E: ;
    eax = MEM32(esp + 0x14);
    SET_LO8(ecx, MEM8(eax + 0x18));
    edi = MEM32(esp + 0x10);
    SET_LO8(ebx, 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005601B1; /* jne: not equal / not zero */

loc_005600B3: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ecx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005601AE; /* je: equal / zero */

loc_005600BF: ;
    /* nop */

loc_005600C0: ;
    _fa = (uint32_t)(MEM8(ebp + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x18), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005601AE; /* jne: not equal / not zero */

loc_005600C9: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560136; /* jne: not equal / not zero */

loc_005600CF: ;
    eax = MEM32(esi + 8);
    SET_LO8(ecx, MEM8(eax + 0x18));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005600EB; /* jne: not equal / not zero */

loc_005600D9: ;
    MEM8(eax + 0x18) = LO8(ebx);
    PUSH32(esp, esi);
    ecx = edi;
    MEM8(esi + 0x18) = 0;
    PUSH32(esp, 0x005600E8u); RECOMP_ABI_CALL(0x0055F600u, sub_0055F600); /* call 0x0055F600 */

loc_005600E8: ;
    eax = MEM32(esi + 8);

loc_005600EB: ;
    SET_LO8(ecx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560168; /* jne: not equal / not zero */

loc_005600F2: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM8(edx + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x18), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560101; /* jne: not equal / not zero */

loc_005600F9: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(MEM8(ecx + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x18), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560164; /* je: equal / zero */

loc_00560101: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(MEM8(ecx + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x18), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056011D; /* jne: not equal / not zero */

loc_00560109: ;
    edx = MEM32(eax);
    MEM8(edx + 0x18) = LO8(ebx);
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(eax + 0x18) = 0;
    PUSH32(esp, 0x0056011Au); RECOMP_ABI_CALL(0x0055F290u, sub_0055F290); /* call 0x0055F290 */

loc_0056011A: ;
    eax = MEM32(esi + 8);

loc_0056011D: ;
    SET_LO8(ecx, MEM8(esi + 0x18));
    MEM8(eax + 0x18) = LO8(ecx);
    MEM8(esi + 0x18) = LO8(ebx);
    edx = MEM32(eax + 8);
    PUSH32(esp, esi);
    ecx = edi;
    MEM8(edx + 0x18) = LO8(ebx);
    PUSH32(esp, 0x00560134u); RECOMP_ABI_CALL(0x0055F600u, sub_0055F600); /* call 0x0055F600 */

loc_00560134: ;
    goto loc_005601AE;

loc_00560136: ;
    SET_LO8(ecx, MEM8(eax + 0x18));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056014E; /* jne: not equal / not zero */

loc_0056013D: ;
    MEM8(eax + 0x18) = LO8(ebx);
    PUSH32(esp, esi);
    ecx = edi;
    MEM8(esi + 0x18) = 0;
    PUSH32(esp, 0x0056014Cu); RECOMP_ABI_CALL(0x0055F290u, sub_0055F290); /* call 0x0055F290 */

loc_0056014C: ;
    eax = MEM32(esi);

loc_0056014E: ;
    SET_LO8(ecx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560168; /* jne: not equal / not zero */

loc_00560155: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(MEM8(edx + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x18), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056017D; /* jne: not equal / not zero */

loc_0056015D: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM8(ecx + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x18), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056017D; /* jne: not equal / not zero */

loc_00560164: ;
    MEM8(eax + 0x18) = 0;

loc_00560168: ;
    edx = MEM32(edi + 4);
    eax = MEM32(edx + 4);
    ebp = esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    esi = MEM32(esi + 4);
    if (CMP_NE(_fa, _fb)) goto loc_005600C0; /* jne: not equal / not zero */

loc_0056017B: ;
    goto loc_005601AE;

loc_0056017D: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM8(ecx + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x18), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560198; /* jne: not equal / not zero */

loc_00560184: ;
    edx = MEM32(eax + 8);
    MEM8(edx + 0x18) = LO8(ebx);
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(eax + 0x18) = 0;
    PUSH32(esp, 0x00560196u); RECOMP_ABI_CALL(0x0055F600u, sub_0055F600); /* call 0x0055F600 */

loc_00560196: ;
    eax = MEM32(esi);

loc_00560198: ;
    SET_LO8(ecx, MEM8(esi + 0x18));
    MEM8(eax + 0x18) = LO8(ecx);
    MEM8(esi + 0x18) = LO8(ebx);
    edx = MEM32(eax);
    PUSH32(esp, esi);
    ecx = edi;
    MEM8(edx + 0x18) = LO8(ebx);
    PUSH32(esp, 0x005601AEu); RECOMP_ABI_CALL(0x0055F290u, sub_0055F290); /* call 0x0055F290 */

loc_005601AE: ;
    MEM8(ebp + 0x18) = LO8(ebx);

loc_005601B1: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005601BBu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005601BB: ;
    eax = MEM32(edi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_BE(_fa, _fb)) goto loc_005601CB; /* jbe: below or equal (unsigned <=) */

loc_005601C7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + 8) = eax;

loc_005601CB: ;
    eax = MEM32(esp + 0x58);
    ecx = MEM32(esp + 0x5C);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005601E0
 * Original: 0x005601E0 - 0x005604BD (733 bytes, 263 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005601E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005601E0: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x5C);
    SET_LO8(eax, MEM8(edi + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0056026E; /* je: equal / zero */

loc_005601F4: ;
    edi = 0xF;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x63A52C;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x24) = esi;
    MEM8(esp + 0x14) = 0;
    edx = eax + 1;

loc_00560210: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560210; /* jne: not equal / not zero */

loc_00560217: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x63A52C);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00560228u); RECOMP_ABI_CALL(0x0041E9F0u, sub_0041E9F0); /* call 0x0041E9F0 */

loc_00560228: ;
    ecx = esp + 0x2C;
    PUSH32(esp, 0x00560231u); RECOMP_ABI_CALL(0x0061A390u, sub_0061A390); /* call 0x0061A390 */

loc_00560231: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    MEM32(esp + 0x38) = 0x65EB4C;
    MEM32(esp + 0x5C) = edi;
    MEM32(esp + 0x58) = esi;
    MEM8(esp + 0x48) = 0;
    PUSH32(esp, 0x00560257u); RECOMP_ABI_CALL(0x0041E940u, sub_0041E940); /* call 0x0041E940 */

loc_00560257: ;
    PUSH32(esp, 0x65FBD0);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = 0x65EB64;
    PUSH32(esp, 0x0056026Eu); RECOMP_ABI_CALL(0x0061A356u, sub_0061A356); /* call 0x0061A356 */

loc_0056026E: ;
    PUSH32(esp, ebx);
    ebx = edi;
    PUSH32(esp, ebp);
    ecx = esp + 0x64;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x0056027Fu); RECOMP_ABI_CALL(0x0055F350u, sub_0055F350); /* call 0x0055F350 */

loc_0056027F: ;
    ebp = MEM32(edi);
    SET_LO8(eax, MEM8(ebp + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = edi + 8;
    if (CMP_NE(_fa, _fb)) goto loc_0056029D; /* jne: not equal / not zero */

loc_0056028B: ;
    edx = MEM32(eax);
    SET_LO8(ecx, MEM8(edx + 0x19));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056029F; /* jne: not equal / not zero */

loc_00560294: ;
    eax = MEM32(esp + 0x64);
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0056029D: ;
    ebp = MEM32(eax);

loc_0056029F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560311; /* jne: not equal / not zero */

loc_005602A3: ;
    SET_LO8(eax, MEM8(ebp + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = MEM32(ebx + 4);
    if (CMP_NE(_fa, _fb)) goto loc_005602B0; /* jne: not equal / not zero */

loc_005602AD: ;
    MEM32(ebp + 4) = esi;

loc_005602B0: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005602C1; /* jne: not equal / not zero */

loc_005602BC: ;
    MEM32(eax + 4) = ebp;
    goto loc_005602CC;

loc_005602C1: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005602C9; /* jne: not equal / not zero */

loc_005602C5: ;
    MEM32(esi) = ebp;
    goto loc_005602CC;

loc_005602C9: ;
    MEM32(esi + 8) = ebp;

loc_005602CC: ;
    edi = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005602ED; /* jne: not equal / not zero */

loc_005602D3: ;
    SET_LO8(eax, MEM8(ebp + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005602DE; /* je: equal / zero */

loc_005602DA: ;
    eax = esi;
    goto loc_005602EB;

loc_005602DE: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x005602E4u); RECOMP_ABI_CALL(0x0055F270u, sub_0055F270); /* call 0x0055F270 */

loc_005602E4: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005602EB: ;
    MEM32(edi) = eax;

loc_005602ED: ;
    edi = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056036E; /* jne: not equal / not zero */

loc_005602F5: ;
    SET_LO8(eax, MEM8(ebp + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560303; /* je: equal / zero */

loc_005602FC: ;
    eax = esi;
    MEM32(edi + 8) = eax;
    goto loc_0056036E;

loc_00560303: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00560309u); RECOMP_ABI_CALL(0x0055F250u, sub_0055F250); /* call 0x0055F250 */

loc_00560309: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 8) = eax;
    goto loc_0056036E;

loc_00560311: ;
    ecx = MEM32(ebx);
    MEM32(ecx + 4) = edi;
    edx = MEM32(ebx);
    MEM32(edi) = edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560323; /* jne: not equal / not zero */

loc_0056031F: ;
    esi = edi;
    goto loc_0056033D;

loc_00560323: ;
    SET_LO8(ecx, MEM8(ebp + 0x19));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    esi = MEM32(edi + 4);
    if (CMP_NE(_fa, _fb)) goto loc_00560330; /* jne: not equal / not zero */

loc_0056032D: ;
    MEM32(ebp + 4) = esi;

loc_00560330: ;
    MEM32(esi) = ebp;
    ecx = MEM32(ebx + 8);
    MEM32(eax) = ecx;
    edx = MEM32(ebx + 8);
    MEM32(edx + 4) = edi;

loc_0056033D: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056034E; /* jne: not equal / not zero */

loc_00560349: ;
    MEM32(eax + 4) = edi;
    goto loc_0056035C;

loc_0056034E: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560359; /* jne: not equal / not zero */

loc_00560355: ;
    MEM32(eax) = edi;
    goto loc_0056035C;

loc_00560359: ;
    MEM32(eax + 8) = edi;

loc_0056035C: ;
    ecx = MEM32(ebx + 4);
    MEM32(edi + 4) = ecx;
    SET_LO8(edx, MEM8(ebx + 0x18));
    SET_LO8(eax, MEM8(edi + 0x18));
    MEM8(edi + 0x18) = LO8(edx);
    MEM8(ebx + 0x18) = LO8(eax);

loc_0056036E: ;
    eax = MEM32(esp + 0x14);
    SET_LO8(ecx, MEM8(eax + 0x18));
    edi = MEM32(esp + 0x10);
    SET_LO8(ebx, 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560481; /* jne: not equal / not zero */

loc_00560383: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ecx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056047E; /* je: equal / zero */

loc_0056038F: ;
    /* nop */

loc_00560390: ;
    _fa = (uint32_t)(MEM8(ebp + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x18), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056047E; /* jne: not equal / not zero */

loc_00560399: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560406; /* jne: not equal / not zero */

loc_0056039F: ;
    eax = MEM32(esi + 8);
    SET_LO8(ecx, MEM8(eax + 0x18));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005603BB; /* jne: not equal / not zero */

loc_005603A9: ;
    MEM8(eax + 0x18) = LO8(ebx);
    PUSH32(esp, esi);
    ecx = edi;
    MEM8(esi + 0x18) = 0;
    PUSH32(esp, 0x005603B8u); RECOMP_ABI_CALL(0x0055F600u, sub_0055F600); /* call 0x0055F600 */

loc_005603B8: ;
    eax = MEM32(esi + 8);

loc_005603BB: ;
    SET_LO8(ecx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560438; /* jne: not equal / not zero */

loc_005603C2: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM8(edx + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x18), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005603D1; /* jne: not equal / not zero */

loc_005603C9: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(MEM8(ecx + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x18), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560434; /* je: equal / zero */

loc_005603D1: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(MEM8(ecx + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x18), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005603ED; /* jne: not equal / not zero */

loc_005603D9: ;
    edx = MEM32(eax);
    MEM8(edx + 0x18) = LO8(ebx);
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(eax + 0x18) = 0;
    PUSH32(esp, 0x005603EAu); RECOMP_ABI_CALL(0x0055F290u, sub_0055F290); /* call 0x0055F290 */

loc_005603EA: ;
    eax = MEM32(esi + 8);

loc_005603ED: ;
    SET_LO8(ecx, MEM8(esi + 0x18));
    MEM8(eax + 0x18) = LO8(ecx);
    MEM8(esi + 0x18) = LO8(ebx);
    edx = MEM32(eax + 8);
    PUSH32(esp, esi);
    ecx = edi;
    MEM8(edx + 0x18) = LO8(ebx);
    PUSH32(esp, 0x00560404u); RECOMP_ABI_CALL(0x0055F600u, sub_0055F600); /* call 0x0055F600 */

loc_00560404: ;
    goto loc_0056047E;

loc_00560406: ;
    SET_LO8(ecx, MEM8(eax + 0x18));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056041E; /* jne: not equal / not zero */

loc_0056040D: ;
    MEM8(eax + 0x18) = LO8(ebx);
    PUSH32(esp, esi);
    ecx = edi;
    MEM8(esi + 0x18) = 0;
    PUSH32(esp, 0x0056041Cu); RECOMP_ABI_CALL(0x0055F290u, sub_0055F290); /* call 0x0055F290 */

loc_0056041C: ;
    eax = MEM32(esi);

loc_0056041E: ;
    SET_LO8(ecx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560438; /* jne: not equal / not zero */

loc_00560425: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(MEM8(edx + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x18), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056044D; /* jne: not equal / not zero */

loc_0056042D: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM8(ecx + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x18), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056044D; /* jne: not equal / not zero */

loc_00560434: ;
    MEM8(eax + 0x18) = 0;

loc_00560438: ;
    edx = MEM32(edi + 4);
    eax = MEM32(edx + 4);
    ebp = esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    esi = MEM32(esi + 4);
    if (CMP_NE(_fa, _fb)) goto loc_00560390; /* jne: not equal / not zero */

loc_0056044B: ;
    goto loc_0056047E;

loc_0056044D: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM8(ecx + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x18), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560468; /* jne: not equal / not zero */

loc_00560454: ;
    edx = MEM32(eax + 8);
    MEM8(edx + 0x18) = LO8(ebx);
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(eax + 0x18) = 0;
    PUSH32(esp, 0x00560466u); RECOMP_ABI_CALL(0x0055F600u, sub_0055F600); /* call 0x0055F600 */

loc_00560466: ;
    eax = MEM32(esi);

loc_00560468: ;
    SET_LO8(ecx, MEM8(esi + 0x18));
    MEM8(eax + 0x18) = LO8(ecx);
    MEM8(esi + 0x18) = LO8(ebx);
    edx = MEM32(eax);
    PUSH32(esp, esi);
    ecx = edi;
    MEM8(edx + 0x18) = LO8(ebx);
    PUSH32(esp, 0x0056047Eu); RECOMP_ABI_CALL(0x0055F290u, sub_0055F290); /* call 0x0055F290 */

loc_0056047E: ;
    MEM8(ebp + 0x18) = LO8(ebx);

loc_00560481: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00560493; /* je: equal / zero */

loc_0056048E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00560493u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00560490u); } /* indirect call */
    }

loc_00560493: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0056049Du); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0056049D: ;
    eax = MEM32(edi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_005604AB; /* jbe: below or equal (unsigned <=) */

loc_005604A7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + 8) = eax;

loc_005604AB: ;
    eax = MEM32(esp + 0x58);
    ecx = MEM32(esp + 0x5C);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005604C0
 * Original: 0x005604C0 - 0x00560577 (183 bytes, 77 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005604C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005604C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056050C; /* jne: not equal / not zero */

loc_005604D4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056050C; /* jne: not equal / not zero */

loc_005604D8: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x005604E3u); RECOMP_ABI_CALL(0x0055F930u, sub_0055F930); /* call 0x0055F930 */

loc_005604E3: ;
    eax = MEM32(edi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(edi + 4);
    MEM32(edi + 8) = 0;
    MEM32(eax) = eax;
    eax = MEM32(edi + 4);
    MEM32(eax + 8) = eax;
    ecx = MEM32(edi + 4);
    edx = MEM32(ecx);
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0056050C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056056B; /* je: equal / zero */

loc_00560510: ;
    SET_LO8(eax, MEM8(esi + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0056055A; /* jne: not equal / not zero */

loc_00560519: ;
    eax = MEM32(esi + 8);
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056053D; /* jne: not equal / not zero */

loc_00560523: ;
    esi = eax;
    eax = MEM32(esi);
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056055A; /* jne: not equal / not zero */

loc_0056052E: ;
    edi = edi;

loc_00560530: ;
    esi = eax;
    eax = MEM32(esi);
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560530; /* je: equal / zero */

loc_0056053B: ;
    goto loc_0056055A;

loc_0056053D: ;
    eax = MEM32(esi + 4);
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560558; /* jne: not equal / not zero */

loc_00560547: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560558; /* jne: not equal / not zero */

loc_0056054C: ;
    esi = eax;
    eax = MEM32(eax + 4);
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560547; /* je: equal / zero */

loc_00560558: ;
    esi = eax;

loc_0056055A: ;
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00560567u); RECOMP_ABI_CALL(0x0055FF10u, sub_0055FF10); /* call 0x0055FF10 */

loc_00560567: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560510; /* jne: not equal / not zero */

loc_0056056B: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(eax) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00560580
 * Original: 0x00560580 - 0x00560637 (183 bytes, 77 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00560580: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005605CC; /* jne: not equal / not zero */

loc_00560594: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005605CC; /* jne: not equal / not zero */

loc_00560598: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x005605A3u); RECOMP_ABI_CALL(0x0055FEC0u, sub_0055FEC0); /* call 0x0055FEC0 */

loc_005605A3: ;
    eax = MEM32(edi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(edi + 4);
    MEM32(edi + 8) = 0;
    MEM32(eax) = eax;
    eax = MEM32(edi + 4);
    MEM32(eax + 8) = eax;
    ecx = MEM32(edi + 4);
    edx = MEM32(ecx);
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_005605CC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056062B; /* je: equal / zero */

loc_005605D0: ;
    SET_LO8(eax, MEM8(esi + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0056061A; /* jne: not equal / not zero */

loc_005605D9: ;
    eax = MEM32(esi + 8);
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005605FD; /* jne: not equal / not zero */

loc_005605E3: ;
    esi = eax;
    eax = MEM32(esi);
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056061A; /* jne: not equal / not zero */

loc_005605EE: ;
    edi = edi;

loc_005605F0: ;
    esi = eax;
    eax = MEM32(esi);
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005605F0; /* je: equal / zero */

loc_005605FB: ;
    goto loc_0056061A;

loc_005605FD: ;
    eax = MEM32(esi + 4);
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560618; /* jne: not equal / not zero */

loc_00560607: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560618; /* jne: not equal / not zero */

loc_0056060C: ;
    esi = eax;
    eax = MEM32(eax + 4);
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560607; /* je: equal / zero */

loc_00560618: ;
    esi = eax;

loc_0056061A: ;
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00560627u); RECOMP_ABI_CALL(0x005601E0u, sub_005601E0); /* call 0x005601E0 */

loc_00560627: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005605D0; /* jne: not equal / not zero */

loc_0056062B: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(eax) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00560640
 * Original: 0x00560640 - 0x00560813 (467 bytes, 162 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00560640: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15555554) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 0x15555554 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_005606CE; /* jb: below (unsigned <) */

loc_00560650: ;
    edi = 0xF;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x63A548;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x1C) = esi;
    MEM8(esp + 0xC) = 0;
    edx = eax + 1;
    /* nop */

loc_00560670: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560670; /* jne: not equal / not zero */

loc_00560677: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x63A548);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00560688u); RECOMP_ABI_CALL(0x0041E9F0u, sub_0041E9F0); /* call 0x0041E9F0 */

loc_00560688: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x00560691u); RECOMP_ABI_CALL(0x0061A390u, sub_0061A390); /* call 0x0061A390 */

loc_00560691: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    MEM32(esp + 0x30) = 0x65EB4C;
    MEM32(esp + 0x54) = edi;
    MEM32(esp + 0x50) = esi;
    MEM8(esp + 0x40) = 0;
    PUSH32(esp, 0x005606B7u); RECOMP_ABI_CALL(0x0041E940u, sub_0041E940); /* call 0x0041E940 */

loc_005606B7: ;
    PUSH32(esp, 0x65F6E8);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0x65EB58;
    PUSH32(esp, 0x005606CEu); RECOMP_ABI_CALL(0x0061A356u, sub_0061A356); /* call 0x0061A356 */

loc_005606CE: ;
    edx = MEM32(esp + 0x5C);
    eax = MEM32(edi + 4);
    esi = MEM32(esp + 0x58);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x005606E7u); RECOMP_ABI_CALL(0x0055FA10u, sub_0055FA10); /* call 0x0055FA10 */

loc_005606E7: ;
    ebx = MEM32(edi + 8);
    ecx = eax;
    eax = MEM32(edi + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x60) = ecx;
    MEM32(edi + 8) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0056070B; /* jne: not equal / not zero */

loc_005606FB: ;
    MEM32(eax + 4) = ecx;
    eax = MEM32(edi + 4);
    MEM32(eax) = ecx;
    edx = MEM32(edi + 4);
    MEM32(edx + 8) = ecx;
    goto loc_0056072E;

loc_0056070B: ;
    SET_LO8(eax, MEM8(esp + 0x58));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560720; /* je: equal / zero */

loc_00560713: ;
    MEM32(esi) = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056072E; /* jne: not equal / not zero */

loc_0056071C: ;
    MEM32(eax) = ecx;
    goto loc_0056072E;

loc_00560720: ;
    MEM32(esi + 8) = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056072E; /* jne: not equal / not zero */

loc_0056072B: ;
    MEM32(eax + 8) = ecx;

loc_0056072E: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM8(edx + 0x18)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x18), 0 (8-bit) */
    eax = ecx + 4;
    esi = ecx;
    SET_LO8(ebx, 1);
    if (CMP_NE(_fa, _fb)) goto loc_005607FB; /* jne: not equal / not zero */

loc_00560742: ;
    PUSH32(esp, ebp);

loc_00560743: ;
    ecx = MEM32(eax);
    ebp = MEM32(ecx + 4);
    edx = MEM32(ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056079D; /* jne: not equal / not zero */

loc_0056074F: ;
    edx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(edx + 0x18)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x18), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056076E; /* jne: not equal / not zero */

loc_00560758: ;
    MEM8(ecx + 0x18) = LO8(ebx);
    MEM8(edx + 0x18) = LO8(ebx);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 4);
    MEM8(edx + 0x18) = 0;
    eax = MEM32(eax);
    esi = MEM32(eax + 4);
    goto loc_005607E5;

loc_0056076E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056077D; /* jne: not equal / not zero */

loc_00560773: ;
    esi = ecx;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0056077Du); RECOMP_ABI_CALL(0x0055F600u, sub_0055F600); /* call 0x0055F600 */

loc_0056077D: ;
    ecx = MEM32(esi + 4);
    MEM8(ecx + 0x18) = LO8(ebx);
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 4);
    MEM8(eax + 0x18) = 0;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0056079Bu); RECOMP_ABI_CALL(0x0055F290u, sub_0055F290); /* call 0x0055F290 */

loc_0056079B: ;
    goto loc_005607E5;

loc_0056079D: ;
    _fa = (uint32_t)(MEM8(edx + 0x18)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x18), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005607B9; /* jne: not equal / not zero */

loc_005607A3: ;
    MEM8(ecx + 0x18) = LO8(ebx);
    MEM8(edx + 0x18) = LO8(ebx);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 4);
    MEM8(edx + 0x18) = 0;
    eax = MEM32(eax);
    esi = MEM32(eax + 4);
    goto loc_005607E5;

loc_005607B9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005607C7; /* jne: not equal / not zero */

loc_005607BD: ;
    esi = ecx;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x005607C7u); RECOMP_ABI_CALL(0x0055F290u, sub_0055F290); /* call 0x0055F290 */

loc_005607C7: ;
    ecx = MEM32(esi + 4);
    MEM8(ecx + 0x18) = LO8(ebx);
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 4);
    MEM8(eax + 0x18) = 0;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x005607E5u); RECOMP_ABI_CALL(0x0055F600u, sub_0055F600); /* call 0x0055F600 */

loc_005607E5: ;
    ecx = MEM32(esi + 4);
    SET_LO8(edx, MEM8(ecx + 0x18));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    eax = esi + 4;
    if (CMP_EQ(_fa, _fb)) goto loc_00560743; /* je: equal / zero */

loc_005607F6: ;
    ecx = MEM32(esp + 0x64);
    POP32(esp, ebp);

loc_005607FB: ;
    edx = MEM32(edi + 4);
    eax = MEM32(edx + 4);
    MEM8(eax + 0x18) = LO8(ebx);
    eax = MEM32(esp + 0x54);
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00560820
 * Original: 0x00560820 - 0x005609F3 (467 bytes, 162 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00560820: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15555554) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 0x15555554 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_005608AE; /* jb: below (unsigned <) */

loc_00560830: ;
    edi = 0xF;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x63A548;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x1C) = esi;
    MEM8(esp + 0xC) = 0;
    edx = eax + 1;
    /* nop */

loc_00560850: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560850; /* jne: not equal / not zero */

loc_00560857: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x63A548);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00560868u); RECOMP_ABI_CALL(0x0041E9F0u, sub_0041E9F0); /* call 0x0041E9F0 */

loc_00560868: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x00560871u); RECOMP_ABI_CALL(0x0061A390u, sub_0061A390); /* call 0x0061A390 */

loc_00560871: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    MEM32(esp + 0x30) = 0x65EB4C;
    MEM32(esp + 0x54) = edi;
    MEM32(esp + 0x50) = esi;
    MEM8(esp + 0x40) = 0;
    PUSH32(esp, 0x00560897u); RECOMP_ABI_CALL(0x0041E940u, sub_0041E940); /* call 0x0041E940 */

loc_00560897: ;
    PUSH32(esp, 0x65F6E8);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0x65EB58;
    PUSH32(esp, 0x005608AEu); RECOMP_ABI_CALL(0x0061A356u, sub_0061A356); /* call 0x0061A356 */

loc_005608AE: ;
    edx = MEM32(esp + 0x5C);
    eax = MEM32(edi + 4);
    esi = MEM32(esp + 0x58);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x005608C7u); RECOMP_ABI_CALL(0x0055FBB0u, sub_0055FBB0); /* call 0x0055FBB0 */

loc_005608C7: ;
    ebx = MEM32(edi + 8);
    ecx = eax;
    eax = MEM32(edi + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x60) = ecx;
    MEM32(edi + 8) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_005608EB; /* jne: not equal / not zero */

loc_005608DB: ;
    MEM32(eax + 4) = ecx;
    eax = MEM32(edi + 4);
    MEM32(eax) = ecx;
    edx = MEM32(edi + 4);
    MEM32(edx + 8) = ecx;
    goto loc_0056090E;

loc_005608EB: ;
    SET_LO8(eax, MEM8(esp + 0x58));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560900; /* je: equal / zero */

loc_005608F3: ;
    MEM32(esi) = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056090E; /* jne: not equal / not zero */

loc_005608FC: ;
    MEM32(eax) = ecx;
    goto loc_0056090E;

loc_00560900: ;
    MEM32(esi + 8) = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056090E; /* jne: not equal / not zero */

loc_0056090B: ;
    MEM32(eax + 8) = ecx;

loc_0056090E: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM8(edx + 0x18)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x18), 0 (8-bit) */
    eax = ecx + 4;
    esi = ecx;
    SET_LO8(ebx, 1);
    if (CMP_NE(_fa, _fb)) goto loc_005609DB; /* jne: not equal / not zero */

loc_00560922: ;
    PUSH32(esp, ebp);

loc_00560923: ;
    ecx = MEM32(eax);
    ebp = MEM32(ecx + 4);
    edx = MEM32(ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056097D; /* jne: not equal / not zero */

loc_0056092F: ;
    edx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(edx + 0x18)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x18), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056094E; /* jne: not equal / not zero */

loc_00560938: ;
    MEM8(ecx + 0x18) = LO8(ebx);
    MEM8(edx + 0x18) = LO8(ebx);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 4);
    MEM8(edx + 0x18) = 0;
    eax = MEM32(eax);
    esi = MEM32(eax + 4);
    goto loc_005609C5;

loc_0056094E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056095D; /* jne: not equal / not zero */

loc_00560953: ;
    esi = ecx;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0056095Du); RECOMP_ABI_CALL(0x0055F600u, sub_0055F600); /* call 0x0055F600 */

loc_0056095D: ;
    ecx = MEM32(esi + 4);
    MEM8(ecx + 0x18) = LO8(ebx);
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 4);
    MEM8(eax + 0x18) = 0;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0056097Bu); RECOMP_ABI_CALL(0x0055F290u, sub_0055F290); /* call 0x0055F290 */

loc_0056097B: ;
    goto loc_005609C5;

loc_0056097D: ;
    _fa = (uint32_t)(MEM8(edx + 0x18)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x18), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560999; /* jne: not equal / not zero */

loc_00560983: ;
    MEM8(ecx + 0x18) = LO8(ebx);
    MEM8(edx + 0x18) = LO8(ebx);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 4);
    MEM8(edx + 0x18) = 0;
    eax = MEM32(eax);
    esi = MEM32(eax + 4);
    goto loc_005609C5;

loc_00560999: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005609A7; /* jne: not equal / not zero */

loc_0056099D: ;
    esi = ecx;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x005609A7u); RECOMP_ABI_CALL(0x0055F290u, sub_0055F290); /* call 0x0055F290 */

loc_005609A7: ;
    ecx = MEM32(esi + 4);
    MEM8(ecx + 0x18) = LO8(ebx);
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 4);
    MEM8(eax + 0x18) = 0;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x005609C5u); RECOMP_ABI_CALL(0x0055F600u, sub_0055F600); /* call 0x0055F600 */

loc_005609C5: ;
    ecx = MEM32(esi + 4);
    SET_LO8(edx, MEM8(ecx + 0x18));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    eax = esi + 4;
    if (CMP_EQ(_fa, _fb)) goto loc_00560923; /* je: equal / zero */

loc_005609D6: ;
    ecx = MEM32(esp + 0x64);
    POP32(esp, ebp);

loc_005609DB: ;
    edx = MEM32(edi + 4);
    eax = MEM32(edx + 4);
    MEM8(eax + 0x18) = LO8(ebx);
    eax = MEM32(esp + 0x54);
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00560A00
 * Original: 0x00560A00 - 0x00560AB9 (185 bytes, 73 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560A00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00560A00: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    ebx = edi + 0x10;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00560A1Cu); RECOMP_ABI_CALL(0x0055FB40u, sub_0055FB40); /* call 0x0055FB40 */

loc_00560A1C: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560AB0; /* je: equal / zero */

loc_00560A27: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    /* nop */

loc_00560A30: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560AAF; /* jne: not equal / not zero */

loc_00560A35: ;
    SET_LO8(eax, MEM8(esi + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = esi + 0x10;
    if (CMP_NE(_fa, _fb)) goto loc_00560A83; /* jne: not equal / not zero */

loc_00560A3F: ;
    eax = MEM32(esi + 8);
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560A61; /* jne: not equal / not zero */

loc_00560A49: ;
    esi = eax;
    eax = MEM32(esi);
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560A83; /* jne: not equal / not zero */

loc_00560A54: ;
    esi = eax;
    eax = MEM32(esi);
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560A54; /* je: equal / zero */

loc_00560A5F: ;
    goto loc_00560A83;

loc_00560A61: ;
    eax = MEM32(esi + 4);
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560A81; /* jne: not equal / not zero */

loc_00560A6B: ;
    goto loc_00560A70;

    /* nop */

loc_00560A70: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560A81; /* jne: not equal / not zero */

loc_00560A75: ;
    esi = eax;
    eax = MEM32(eax + 4);
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560A70; /* je: equal / zero */

loc_00560A81: ;
    esi = eax;

loc_00560A83: ;
    edx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560AAA; /* jne: not equal / not zero */

loc_00560A8C: ;
    ecx = esp + 0x20;
    MEM32(esp + 0x20) = esi;
    PUSH32(esp, 0x00560A99u); RECOMP_ABI_CALL(0x0055F2F0u, sub_0055F2F0); /* call 0x0055F2F0 */

loc_00560A99: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00560AAAu); RECOMP_ABI_CALL(0x0055FF10u, sub_0055FF10); /* call 0x0055FF10 */

loc_00560AAA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560A30; /* jne: not equal / not zero */

loc_00560AAF: ;
    POP32(esp, ebp);

loc_00560AB0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00560AC0
 * Original: 0x00560AC0 - 0x00560B53 (147 bytes, 60 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00560AC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x14);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560B4D; /* je: equal / zero */

loc_00560ACE: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);

loc_00560AD3: ;
    SET_LO8(eax, MEM8(esi + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = esi + 0x10;
    if (CMP_NE(_fa, _fb)) goto loc_00560B23; /* jne: not equal / not zero */

loc_00560ADD: ;
    eax = MEM32(esi + 8);
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560AFF; /* jne: not equal / not zero */

loc_00560AE7: ;
    esi = eax;
    eax = MEM32(esi);
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560B23; /* jne: not equal / not zero */

loc_00560AF2: ;
    esi = eax;
    eax = MEM32(esi);
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560AF2; /* je: equal / zero */

loc_00560AFD: ;
    goto loc_00560B23;

loc_00560AFF: ;
    eax = MEM32(esi + 4);
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560B21; /* jne: not equal / not zero */

loc_00560B09: ;
    /* nop */

loc_00560B10: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560B21; /* jne: not equal / not zero */

loc_00560B15: ;
    esi = eax;
    eax = MEM32(eax + 4);
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560B10; /* je: equal / zero */

loc_00560B21: ;
    esi = eax;

loc_00560B23: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560B47; /* jne: not equal / not zero */

loc_00560B28: ;
    ecx = esp + 0x14;
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0x00560B35u); RECOMP_ABI_CALL(0x0055F2F0u, sub_0055F2F0); /* call 0x0055F2F0 */

loc_00560B35: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = edi + 0x10;
    PUSH32(esp, 0x00560B47u); RECOMP_ABI_CALL(0x0055FF10u, sub_0055FF10); /* call 0x0055FF10 */

loc_00560B47: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560AD3; /* jne: not equal / not zero */

loc_00560B4C: ;
    POP32(esp, ebx);

loc_00560B4D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00560B60
 * Original: 0x00560B60 - 0x00560C01 (161 bytes, 67 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00560B60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    edi = esi + 0x20;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00560B79u); RECOMP_ABI_CALL(0x0055FB40u, sub_0055FB40); /* call 0x0055FB40 */

loc_00560B79: ;
    ecx = MEM32(eax);
    esi = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560BFB; /* je: equal / zero */

loc_00560B82: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    goto loc_00560B90;

    /* nop */

loc_00560B90: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560BFA; /* jne: not equal / not zero */

loc_00560B95: ;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560BED; /* je: equal / zero */

loc_00560B9A: ;
    SET_LO8(eax, MEM8(ecx + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560BE2; /* jne: not equal / not zero */

loc_00560BA1: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM8(eax + 0x19)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x19), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560BC0; /* jne: not equal / not zero */

loc_00560BAA: ;
    ecx = eax;
    eax = MEM32(ecx);
    _fa = (uint32_t)(MEM8(eax + 0x19)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x19), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560BE2; /* jne: not equal / not zero */

loc_00560BB4: ;
    ecx = eax;
    eax = MEM32(ecx);
    _fa = (uint32_t)(MEM8(eax + 0x19)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x19), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560BB4; /* je: equal / zero */

loc_00560BBE: ;
    goto loc_00560BE2;

loc_00560BC0: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM8(eax + 0x19)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x19), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560BE0; /* jne: not equal / not zero */

loc_00560BC9: ;
    /* nop */

loc_00560BD0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560BE0; /* jne: not equal / not zero */

loc_00560BD5: ;
    ecx = eax;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(MEM8(eax + 0x19)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x19), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560BD0; /* je: equal / zero */

loc_00560BE0: ;
    ecx = eax;

loc_00560BE2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560B90; /* jne: not equal / not zero */

loc_00560BE6: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_00560BED: ;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00560BFAu); RECOMP_ABI_CALL(0x005601E0u, sub_005601E0); /* call 0x005601E0 */

loc_00560BFA: ;
    POP32(esp, ebx);

loc_00560BFB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00560C10
 * Original: 0x00560C10 - 0x00560C72 (98 bytes, 42 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560C10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00560C10: ;
    PUSH32(esp, ecx);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = edx;
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    MEM8(esp + 8) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00560C4F; /* jne: not equal / not zero */

loc_00560C2B: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp);
    /* nop */

loc_00560C30: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 0xC) (32-bit) */
    SET_LO8(edx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    esi = eax;
    MEM8(esp + 0xC) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_00560C44; /* je: equal / zero */

loc_00560C40: ;
    eax = MEM32(eax);
    goto loc_00560C47;

loc_00560C44: ;
    eax = MEM32(eax + 8);

loc_00560C47: ;
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560C30; /* je: equal / zero */

loc_00560C4E: ;
    POP32(esp, edi);

loc_00560C4F: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00560C60u); RECOMP_ABI_CALL(0x00560640u, sub_00560640); /* call 0x00560640 */

loc_00560C60: ;
    ecx = MEM32(eax);
    eax = MEM32(esp + 0x10);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    MEM8(eax + 4) = 1;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00560C80
 * Original: 0x00560C80 - 0x00560CE2 (98 bytes, 42 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560C80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00560C80: ;
    PUSH32(esp, ecx);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = edx;
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    MEM8(esp + 8) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00560CBF; /* jne: not equal / not zero */

loc_00560C9B: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp);
    /* nop */

loc_00560CA0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 0xC) (32-bit) */
    SET_LO8(edx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    esi = eax;
    MEM8(esp + 0xC) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_00560CB4; /* je: equal / zero */

loc_00560CB0: ;
    eax = MEM32(eax);
    goto loc_00560CB7;

loc_00560CB4: ;
    eax = MEM32(eax + 8);

loc_00560CB7: ;
    SET_LO8(edx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560CA0; /* je: equal / zero */

loc_00560CBE: ;
    POP32(esp, edi);

loc_00560CBF: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00560CD0u); RECOMP_ABI_CALL(0x00560820u, sub_00560820); /* call 0x00560820 */

loc_00560CD0: ;
    ecx = MEM32(eax);
    eax = MEM32(esp + 0x10);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    MEM8(eax + 4) = 1;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00560CF0
 * Original: 0x00560CF0 - 0x00560D81 (145 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00560CF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(edi) = 0x64FB18;
    if (CMP_EQ(_fa, _fb)) goto loc_00560D0B; /* je: equal / zero */

loc_00560D05: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00560D0Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00560D09u); } /* indirect call */
    }

loc_00560D0B: ;
    ecx = MEM32(edi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560D17; /* je: equal / zero */

loc_00560D12: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00560D17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00560D14u); } /* indirect call */
    }

loc_00560D17: ;
    ecx = edi + 0x30;
    MEM32(ecx) = 0x64FAE4;
    PUSH32(esp, 0x00560D25u); RECOMP_ABI_CALL(0x005E3280u, sub_005E3280); /* call 0x005E3280 */

loc_00560D25: ;
    eax = MEM32(edi + 0x24);
    ecx = MEM32(eax);
    esi = edi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00560D3Bu); RECOMP_ABI_CALL(0x00560580u, sub_00560580); /* call 0x00560580 */

loc_00560D3B: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00560D44u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00560D44: ;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    eax = MEM32(edi + 0x14);
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00560D63u); RECOMP_ABI_CALL(0x005604C0u, sub_005604C0); /* call 0x005604C0 */

loc_00560D63: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00560D6Cu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00560D6C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    PUSH32(esp, 0x00560D7Cu); RECOMP_ABI_CALL(0x00606080u, sub_00606080); /* call 0x00606080 */

loc_00560D7C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00560D90
 * Original: 0x00560D90 - 0x00560EF3 (355 bytes, 127 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560D90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00560D90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00560D9Bu); RECOMP_ABI_CALL(0x00606090u, sub_00606090); /* call 0x00606090 */

loc_00560D9B: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x10;
    MEM32(esi) = 0x64FB18;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    ecx = edi;
    MEM8(edi) = LO8(eax);
    PUSH32(esp, 0x00560DB9u); RECOMP_ABI_CALL(0x0055F970u, sub_0055F970); /* call 0x0055F970 */

loc_00560DB9: ;
    SET_LO8(ecx, MEM8(esp + 0x1C));
    MEM32(edi + 4) = eax;
    MEM8(eax + 0x19) = 1;
    eax = MEM32(edi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(edi + 4);
    MEM32(eax) = eax;
    eax = MEM32(edi + 4);
    MEM32(eax + 8) = eax;
    MEM32(edi + 8) = ebx;
    edi = esi + 0x20;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM8(esi + 0x1D) = LO8(ebx);
    MEM16(esi + 0x1E) = LO16(ebx);
    MEM8(edi) = LO8(ecx);
    ecx = edi;
    PUSH32(esp, 0x00560DEEu); RECOMP_ABI_CALL(0x0055F970u, sub_0055F970); /* call 0x0055F970 */

loc_00560DEE: ;
    MEM32(edi + 4) = eax;
    MEM8(eax + 0x19) = 1;
    eax = MEM32(edi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(edi + 4);
    MEM32(eax) = eax;
    eax = MEM32(edi + 4);
    MEM32(eax + 8) = eax;
    MEM32(edi + 8) = ebx;
    edi = esi + 0x30;
    ecx = edi;
    MEM32(esi + 0x2C) = ebx;
    PUSH32(esp, 0x00560E16u); RECOMP_ABI_CALL(0x005E33D0u, sub_005E33D0); /* call 0x005E33D0 */

loc_00560E16: ;
    ebp = MEM32(esp + 0x18);
    MEM32(edi) = 0x64FAE4;
    MEM32(edi + 0xC) = ebx;
    MEM32(esi + 0x40) = ebx;
    MEM32(esi + 0x44) = 7;
    edi = MEM32(ebp);
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560E4E; /* je: equal / zero */

loc_00560E37: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560E40; /* je: equal / zero */

loc_00560E3B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00560E40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00560E3Du); } /* indirect call */
    }

loc_00560E40: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi + 0x40) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00560E4E; /* je: equal / zero */

loc_00560E47: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00560E4Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00560E4Bu); } /* indirect call */
    }

loc_00560E4E: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560E61; /* jne: not equal / not zero */

loc_00560E53: ;
    _fa = (uint32_t)(MEM8(esp + 0x1C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x1C), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560E61; /* jne: not equal / not zero */

loc_00560E5A: ;
    ecx = esi;
    PUSH32(esp, 0x00560E61u); RECOMP_ABI_CALL(0x0055F740u, sub_0055F740); /* call 0x0055F740 */

loc_00560E61: ;
    ecx = MEM32(esi + 4);
    edi = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi + 4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00560E79; /* jne: not equal / not zero */

loc_00560E70: ;
    ecx = esi;
    PUSH32(esp, 0x00560E77u); RECOMP_ABI_CALL(0x0055F510u, sub_0055F510); /* call 0x0055F510 */

loc_00560E77: ;
    goto loc_00560E9B;

loc_00560E79: ;
    PUSH32(esp, 0x3F);
    PUSH32(esp, 0x64FB0C);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00560E87u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00560E87: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560E99; /* je: equal / zero */

loc_00560E8E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x00560E97u); RECOMP_ABI_CALL(0x00566FE0u, sub_00566FE0); /* call 0x00566FE0 */

loc_00560E97: ;
    goto loc_00560E9B;

loc_00560E99: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00560E9B: ;
    MEM32(esi + 8) = eax;
    _fa = (uint32_t)(MEM8(esp + 0x20)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x20), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560ED2; /* je: equal / zero */

loc_00560EA4: ;
    ecx = MEM32(esi + 8);
    ebp = MEM32(ecx + 4);
    ecx = MEM32(0x6C5108);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00560EBB; /* je: equal / zero */

loc_00560EB6: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00560EBBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00560EB8u); } /* indirect call */
    }

loc_00560EBB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x00560EC4u); RECOMP_ABI_CALL(0x0055E210u, sub_0055E210); /* call 0x0055E210 */

loc_00560EC4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00560ED2; /* je: equal / zero */

loc_00560ECB: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00560ED2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00560ECFu); } /* indirect call */
    }

loc_00560ED2: ;
    _fa = (uint32_t)(MEM8(esp + 0x1C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x1C), 1 (8-bit) */
    MEM32(esi + 0x3C) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00560EE3; /* jne: not equal / not zero */

loc_00560EDC: ;
    ecx = esi;
    PUSH32(esp, 0x00560EE3u); RECOMP_ABI_CALL(0x0055F850u, sub_0055F850); /* call 0x0055F850 */

loc_00560EE3: ;
    eax = MEM32(esi + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 4) = eax;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00560F00
 * Original: 0x00560F00 - 0x00560F1E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00560F00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00560F08u); RECOMP_ABI_CALL(0x00560CF0u, sub_00560CF0); /* call 0x00560CF0 */

loc_00560F08: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00560F18; /* je: equal / zero */

loc_00560F0F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00560F15u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00560F15: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00560F18: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00560F20
 * Original: 0x00560F20 - 0x00560FD7 (183 bytes, 71 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560F20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00560F20: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x24);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x8000000Au (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00560F85; /* je: equal / zero */

loc_00560F3D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000Bu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x8000000Bu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560F85; /* je: equal / zero */

loc_00560F45: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x8000000Cu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560FA1; /* je: equal / zero */

loc_00560F4D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = ecx;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi + 0x10;
    MEM32(esp + 0x20) = edi;
    PUSH32(esp, 0x00560F6Fu); RECOMP_ABI_CALL(0x00560C10u, sub_00560C10); /* call 0x00560C10 */

loc_00560F6F: ;
    eax = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    edx = ebp;
    ecx = ebx;
    POP32(esp, ebp);
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x10) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00560F85: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xC0000064u);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00560F93u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00560F90u); } /* indirect call */
    }

loc_00560F93: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xC0000069u);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00560FA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00560F9Eu); } /* indirect call */
    }

loc_00560FA1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x8000000Au (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560FB1; /* je: equal / zero */

loc_00560FA9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x8000000Cu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560FCD; /* jne: not equal / not zero */

loc_00560FB1: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xA0000064u);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00560FBFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00560FBCu); } /* indirect call */
    }

loc_00560FBF: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xA0000069u);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00560FCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00560FCAu); } /* indirect call */
    }

loc_00560FCD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00560FE0
 * Original: 0x00560FE0 - 0x0056105D (125 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00560FE0: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00561004; /* je: equal / zero */

loc_00560FF4: ;
    edx = MEM32(esi);
    ecx = esi;
    edi = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00560FFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00560FFAu); } /* indirect call */
    }

loc_00560FFD: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00561004u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00561001u); } /* indirect call */
    }

loc_00561004: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x28);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00561023; /* je: equal / zero */

loc_0056101C: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00561023u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00561020u); } /* indirect call */
    }

loc_00561023: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = ebx + 0x20;
    PUSH32(esp, 0x00561035u); RECOMP_ABI_CALL(0x00560C80u, sub_00560C80); /* call 0x00560C80 */

loc_00561035: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00561042; /* je: equal / zero */

loc_0056103D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00561042u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0056103Fu); } /* indirect call */
    }

loc_00561042: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00561054; /* je: equal / zero */

loc_00561046: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0056104Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0056104Au); } /* indirect call */
    }

loc_0056104D: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00561054u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00561051u); } /* indirect call */
    }

loc_00561054: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00561060
 * Original: 0x00561060 - 0x00561123 (195 bytes, 58 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00561060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00561060: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    esi = ecx;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0056107Bu); RECOMP_ABI_CALL(0x00560D90u, sub_00560D90); /* call 0x00560D90 */

loc_0056107B: ;
    MEM32(esi) = 0x64FBA0;
    edx = MEM32(0x673DFC);
    MEM32(esi + 0x48) = edx;
    eax = MEM32(0x673E00);
    MEM32(esi + 0x4C) = eax;
    ecx = MEM32(0x673E0C);
    MEM32(esi + 0xBC) = ecx;
    edx = MEM32(0x673E10);
    MEM32(esi + 0xC0) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 0x154) = LO8(edx);
    ebp = 0x6C5170;
    eax = esi + 0xC4;
    ecx = esi + 0x10C;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x18) = 0xC;
    /* nop */

loc_005610D0: ;
    MEM32(ecx + -48) = edx;
    MEM8(eax + 0xC) = LO8(edx);
    MEM8(eax) = LO8(edx);
    MEM8(eax + 0x78) = LO8(edx);
    MEM32(ecx) = edx;
    ebx = MEM32(edi + 0x6C5110);
    MEM32(ecx + -188) = ebx;
    ebx = MEM32(edi + 0x6C5140);
    MEM32(ecx + -140) = ebx;
    SET_LO8(ebx, MEM8(ebp));
    MEM8(eax + -20) = LO8(ebx);
    ebx = MEM32(esp + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = ebx;
    if ((_fa != 0)) goto loc_005610D0; /* jne: not equal / not zero */

loc_0056110E: ;
    PUSH32(esp, 0x186A0);
    ecx = esi;
    PUSH32(esp, 0x0056111Au); RECOMP_ABI_CALL(0x0055F7A0u, sub_0055F7A0); /* call 0x0055F7A0 */

loc_0056111A: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00561130
 * Original: 0x00561130 - 0x00561136 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00561130(void)
{

loc_00561130: ;
    eax = 0x64FC28;
    esp += 4; return; /* ret */

}

/**
 * sub_00561140
 * Original: 0x00561140 - 0x005611B9 (121 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00561140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00561140: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ecx;
    edi = edx;
    esi = 0x64FC28;
    ecx = 8;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00561163; /* jne: not equal / not zero */

loc_0056115B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00561163: ;
    esi = edx;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0056116Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00561169u); } /* indirect call */
    }

loc_0056116F: ;
    /* nop */

loc_00561170: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_005611A5; /* jne: not equal / not zero */

loc_0056117A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00561194; /* je: equal / zero */

loc_0056117E: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_005611A5; /* jne: not equal / not zero */

loc_0056118A: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00561170; /* jne: not equal / not zero */

loc_00561194: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_005611A5: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005611C0
 * Original: 0x005611C0 - 0x005611CB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005611C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005611C0: ;
    MEM32(ecx) = 0x64FBA0;
    g_seh_ebp = ebp; sub_00560CF0(); return; /* tail jmp 0x00560CF0 */

}

/**
 * sub_005611D0
 * Original: 0x005611D0 - 0x005613EF (543 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005611D0(void)
{

loc_005611D0: ;
    eax = 0x1010101;
    MEM32(0x6C5170) = eax;
    edx = 0x80;
    MEM32(0x6C5174) = eax;
    ecx = 2;
    MEM32(0x6C5178) = eax;
    eax = 1;
    MEM32(0x6C5134) = edx;
    MEM32(0x6C51B8) = edx;
    edx = 8;
    MEM32(0x673DFC) = 0x33331;
    MEM32(0x673E00) = 7;
    MEM32(0x673E04) = 0x3E19999A;
    MEM32(0x673E08) = 0x3F000000;
    MEM32(0x673E0C) = 0x3F333333;
    MEM32(0x673E10) = 0x3F333333;
    MEM32(0x6C5140) = 0x1C;
    MEM32(0x6C5144) = 0xE;
    MEM32(0x6C5150) = 0xC8;
    MEM32(0x6C5154) = 0xD0;
    MEM32(0x6C5158) = 0xCB;
    MEM32(0x6C515C) = 0xCD;
    MEM32(0x6C5148) = 0x39;
    MEM32(0x6C514C) = 0xF;
    MEM32(0x6C5160) = 0x3B;
    MEM32(0x6C5164) = 0x3C;
    MEM32(0x6C5168) = 0x3D;
    MEM32(0x6C516C) = 0x3E;
    MEM32(0x6C5110) = 0x40;
    MEM32(0x6C5114) = 0x10;
    MEM32(0x6C5120) = 0x1000;
    MEM32(0x6C5124) = 0x4000;
    MEM32(0x6C5128) = 0x8000;
    MEM32(0x6C512C) = 0x2000;
    MEM32(0x6C5118) = 0x800;
    MEM32(0x6C511C) = 0x100;
    MEM32(0x6C5130) = 0x20;
    MEM32(0x6C5138) = eax;
    MEM32(0x6C513C) = ecx;
    MEM32(0x6C5184) = 0;
    MEM32(0x6C5180) = 0x2000;
    MEM32(0x6C518C) = eax;
    MEM32(0x6C5188) = 0x8000;
    MEM32(0x6C5194) = ecx;
    MEM32(0x6C5190) = 0x1000;
    MEM32(0x6C519C) = 3;
    MEM32(0x6C5198) = 0x4000;
    MEM32(0x6C51A4) = 4;
    MEM32(0x6C51A0) = 0x10;
    MEM32(0x6C51AC) = 5;
    MEM32(0x6C51A8) = 0x20;
    MEM32(0x6C51B4) = 6;
    MEM32(0x6C51B0) = 0x40;
    MEM32(0x6C51BC) = 7;
    MEM32(0x6C51C4) = edx;
    MEM32(0x6C51C0) = 4;
    MEM32(0x6C51CC) = 9;
    MEM32(0x6C51C8) = edx;
    MEM32(0x6C51D4) = 0xA;
    MEM32(0x6C51D0) = eax;
    MEM32(0x6C51DC) = 0xB;
    MEM32(0x6C51D8) = ecx;
    MEM8(0x6C51E0) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_005613F0
 * Original: 0x005613F0 - 0x005614CE (222 bytes, 81 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005613F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005613F0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000C1Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000C1Cu (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_005614B8; /* jne: not equal / not zero */

loc_00561402: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0xC0000BB8u);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00561418u); RECOMP_ABI_CALL(0x0055F3F0u, sub_0055F3F0); /* call 0x0055F3F0 */

loc_00561418: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0xC0000BB9u);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00561426u); RECOMP_ABI_CALL(0x0055F3F0u, sub_0055F3F0); /* call 0x0055F3F0 */

loc_00561426: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0xC0000BBAu);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00561434u); RECOMP_ABI_CALL(0x0055F3F0u, sub_0055F3F0); /* call 0x0055F3F0 */

loc_00561434: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0xC0000BBBu);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00561442u); RECOMP_ABI_CALL(0x0055F3F0u, sub_0055F3F0); /* call 0x0055F3F0 */

loc_00561442: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0xC0000BBCu);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00561450u); RECOMP_ABI_CALL(0x0055F3F0u, sub_0055F3F0); /* call 0x0055F3F0 */

loc_00561450: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0xC0000BBDu);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0056145Eu); RECOMP_ABI_CALL(0x0055F3F0u, sub_0055F3F0); /* call 0x0055F3F0 */

loc_0056145E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0xC0000BCCu);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0056146Cu); RECOMP_ABI_CALL(0x0055F3F0u, sub_0055F3F0); /* call 0x0055F3F0 */

loc_0056146C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0xC0000BCDu);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0056147Au); RECOMP_ABI_CALL(0x0055F3F0u, sub_0055F3F0); /* call 0x0055F3F0 */

loc_0056147A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0xC0000BEAu);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00561488u); RECOMP_ABI_CALL(0x0055F3F0u, sub_0055F3F0); /* call 0x0055F3F0 */

loc_00561488: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0xC0000BEBu);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00561496u); RECOMP_ABI_CALL(0x0055F3F0u, sub_0055F3F0); /* call 0x0055F3F0 */

loc_00561496: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0xC0000BECu);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x005614A4u); RECOMP_ABI_CALL(0x0055F3F0u, sub_0055F3F0); /* call 0x0055F3F0 */

loc_005614A4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0xC0000BEDu);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x005614B2u); RECOMP_ABI_CALL(0x0055F3F0u, sub_0055F3F0); /* call 0x0055F3F0 */

loc_005614B2: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_005614B8: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x005614CAu); RECOMP_ABI_CALL(0x0055F3F0u, sub_0055F3F0); /* call 0x0055F3F0 */

loc_005614CA: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_005614D0
 * Original: 0x005614D0 - 0x00561595 (197 bytes, 63 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005614D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005614D0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000C1Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000C1Cu (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00561586; /* jne: not equal / not zero */

loc_005614E2: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0xC0000BB8u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x005614F2u); RECOMP_ABI_CALL(0x0055F420u, sub_0055F420); /* call 0x0055F420 */

loc_005614F2: ;
    PUSH32(esp, 0xC0000BB9u);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x005614FFu); RECOMP_ABI_CALL(0x0055F420u, sub_0055F420); /* call 0x0055F420 */

loc_005614FF: ;
    PUSH32(esp, 0xC0000BBAu);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0056150Cu); RECOMP_ABI_CALL(0x0055F420u, sub_0055F420); /* call 0x0055F420 */

loc_0056150C: ;
    PUSH32(esp, 0xC0000BBBu);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00561519u); RECOMP_ABI_CALL(0x0055F420u, sub_0055F420); /* call 0x0055F420 */

loc_00561519: ;
    PUSH32(esp, 0xC0000BBCu);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00561526u); RECOMP_ABI_CALL(0x0055F420u, sub_0055F420); /* call 0x0055F420 */

loc_00561526: ;
    PUSH32(esp, 0xC0000BBDu);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00561533u); RECOMP_ABI_CALL(0x0055F420u, sub_0055F420); /* call 0x0055F420 */

loc_00561533: ;
    PUSH32(esp, 0xC0000BCCu);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00561540u); RECOMP_ABI_CALL(0x0055F420u, sub_0055F420); /* call 0x0055F420 */

loc_00561540: ;
    PUSH32(esp, 0xC0000BCDu);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0056154Du); RECOMP_ABI_CALL(0x0055F420u, sub_0055F420); /* call 0x0055F420 */

loc_0056154D: ;
    PUSH32(esp, 0xC0000BEAu);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0056155Au); RECOMP_ABI_CALL(0x0055F420u, sub_0055F420); /* call 0x0055F420 */

loc_0056155A: ;
    PUSH32(esp, 0xC0000BEBu);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00561567u); RECOMP_ABI_CALL(0x0055F420u, sub_0055F420); /* call 0x0055F420 */

loc_00561567: ;
    PUSH32(esp, 0xC0000BECu);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00561574u); RECOMP_ABI_CALL(0x0055F420u, sub_0055F420); /* call 0x0055F420 */

loc_00561574: ;
    PUSH32(esp, 0xC0000BEDu);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00561581u); RECOMP_ABI_CALL(0x0055F420u, sub_0055F420); /* call 0x0055F420 */

loc_00561581: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00561586: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00561591u); RECOMP_ABI_CALL(0x0055F420u, sub_0055F420); /* call 0x0055F420 */

loc_00561591: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005615A0
 * Original: 0x005615A0 - 0x005615D9 (57 bytes, 21 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_005615A0(void)
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

loc_005615A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005615A9u); RECOMP_ABI_CALL(0x0055B910u, sub_0055B910); /* call 0x0055B910 */

loc_005615A9: ;
    SET_LO8(ebx, 1);
    MEM8(esi + 0x154) = LO8(ebx);
    eax = esi + 0xC4;
    ecx = esi + 0xDC;
    edx = 0xC;

loc_005615C2: ;
    MEMF(ecx) = (float)fp_top(); /* fst */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 0xC) = LO8(ebx);
    MEM8(eax) = 0;
    MEM8(eax + 0x78) = LO8(ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005615C2; /* jne: not equal / not zero */

loc_005615D4: ;
    POP32(esp, esi);
    fp_pop(); /* fstp st(0) */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005615E0
 * Original: 0x005615E0 - 0x00561603 (35 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005615E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005615E0: ;
    _fa = (uint32_t)(MEM8(ecx + 0x44)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x44), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005615FE; /* je: equal / zero */

loc_005615E6: ;
    eax = MEM32(ecx + 0x44);
    eax = eax >> 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005615FE; /* je: equal / zero */

loc_005615F0: ;
    edx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(edx + ecx + 0x148));
    esp += 8; return; /* ret 4 */

loc_005615FE: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00561610
 * Original: 0x00561610 - 0x0056161A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00561610(void)
{

loc_00561610: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x48) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00561620
 * Original: 0x00561620 - 0x0056162A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00561620(void)
{

loc_00561620: ;
    eax = MEM32(esp + 4);
    MEM32(0x673DFC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00561630
 * Original: 0x00561630 - 0x00561642 (18 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00561630(void)
{

loc_00561630: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(ecx + edx * 4 + 0x80) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00561650
 * Original: 0x00561650 - 0x00561660 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00561650(void)
{

loc_00561650: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx * 4 + 0x6C5140) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00561660
 * Original: 0x00561660 - 0x0056166F (15 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00561660(void)
{

loc_00561660: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(ecx + edx * 4 + 0x50) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00561670
 * Original: 0x00561670 - 0x005616F3 (131 bytes, 34 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00561670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00561670: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_005616E0; /* ja: above (unsigned >) */

loc_00561679: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x5616F4); /* switch: 12 entries, 12 targets */
    if (_jt == 0x00561680u) goto loc_00561680;
    if (_jt == 0x00561688u) goto loc_00561688;
    if (_jt == 0x00561690u) goto loc_00561690;
    if (_jt == 0x00561698u) goto loc_00561698;
    if (_jt == 0x005616A0u) goto loc_005616A0;
    if (_jt == 0x005616A8u) goto loc_005616A8;
    if (_jt == 0x005616B0u) goto loc_005616B0;
    if (_jt == 0x005616B8u) goto loc_005616B8;
    if (_jt == 0x005616C0u) goto loc_005616C0;
    if (_jt == 0x005616C8u) goto loc_005616C8;
    if (_jt == 0x005616D0u) goto loc_005616D0;
    if (_jt == 0x005616D8u) goto loc_005616D8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00561680: ;
    eax = 0xC0000BB8u;
    esp += 8; return; /* ret 4 */

loc_00561688: ;
    eax = 0xC0000BB9u;
    esp += 8; return; /* ret 4 */

loc_00561690: ;
    eax = 0xC0000BBAu;
    esp += 8; return; /* ret 4 */

loc_00561698: ;
    eax = 0xC0000BBBu;
    esp += 8; return; /* ret 4 */

loc_005616A0: ;
    eax = 0xC0000BBCu;
    esp += 8; return; /* ret 4 */

loc_005616A8: ;
    eax = 0xC0000BBDu;
    esp += 8; return; /* ret 4 */

loc_005616B0: ;
    eax = 0xC0000BCCu;
    esp += 8; return; /* ret 4 */

loc_005616B8: ;
    eax = 0xC0000BCDu;
    esp += 8; return; /* ret 4 */

loc_005616C0: ;
    eax = 0xC0000BEAu;
    esp += 8; return; /* ret 4 */

loc_005616C8: ;
    eax = 0xC0000BEBu;
    esp += 8; return; /* ret 4 */

loc_005616D0: ;
    eax = 0xC0000BECu;
    esp += 8; return; /* ret 4 */

loc_005616D8: ;
    eax = 0xC0000BEDu;
    esp += 8; return; /* ret 4 */

loc_005616E0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64FC30);
    PUSH32(esp, 0x005616EBu); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_005616EB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00561730
 * Original: 0x00561730 - 0x005617D9 (169 bytes, 56 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00561730(void)
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

loc_00561730: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x44)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x44), 1 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_005617D2; /* je: equal / zero */

loc_0056173E: ;
    eax = MEM32(esi + 0x44);
    eax = eax >> 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005617D2; /* je: equal / zero */

loc_0056174C: ;
    edi = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(edi + esi + 0xC4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005617D2; /* je: equal / zero */

loc_0056175B: ;
    SET_LO8(eax, MEM8(edi + esi + 0xD0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056176D; /* jne: not equal / not zero */

loc_00561766: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0056176D: ;
    SET_LO8(eax, MEM8(edi + esi + 0xB0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005617D2; /* je: equal / zero */

loc_00561778: ;
    PUSH32(esp, 0x0056177Du); RECOMP_ABI_CALL(0x0055B910u, sub_0055B910); /* call 0x0055B910 */

loc_0056177D: ;
    fp_push(MEMF(esi + edi * 4 + 0xDC)); /* fld float */
    SET_LO8(eax, MEM8(edi + esi + 0x13C));
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if (CMP_NE(_fa, _fb)) goto loc_005617B3; /* jne: not equal / not zero */

loc_00561797: ;
    PUSH32(esp, 0x0056179Cu); RECOMP_ABI_CALL(0x004214C0u, sub_004214C0); /* call 0x004214C0 */

loc_0056179C: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x673E08)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x673e08] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005617C8; /* je: equal / zero */

loc_005617AC: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_005617B3: ;
    PUSH32(esp, 0x005617B8u); RECOMP_ABI_CALL(0x004214C0u, sub_004214C0); /* call 0x004214C0 */

loc_005617B8: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x673E04)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x673e04] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005617AC; /* jne: not equal / not zero */

loc_005617C8: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_005617D2: ;
    POP32(esp, edi);
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
 * sub_005617E0
 * Original: 0x005617E0 - 0x005618EA (266 bytes, 83 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005617E0(void)
{
    int _flags = 0; /* fallback flag var */
    int _jf_0056181D = 0; /* per-edge flags of joins */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_005617E0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x44C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_005617F7; /* jne: not equal / not zero */

loc_005617F1: ;
    _fa = (uint32_t)(MEM8(edi + 0x48)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x48), 0x20 (8-bit) */
    _jf_0056181D = (TEST_Z(_fa, _fb)) ? 1 : 0; /* flags of this edge */
    goto loc_0056181D;

loc_005617F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00561804; /* jne: not equal / not zero */

loc_005617FC: ;
    ecx = MEM32(edi + 0x48);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 2 (8-bit) */
    _jf_0056181D = (TEST_Z(_fa, _fb)) ? 1 : 0; /* flags of this edge */
    goto loc_0056181D;

loc_00561804: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00561811; /* jne: not equal / not zero */

loc_00561809: ;
    ecx = MEM32(edi + 0x48);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x20 (8-bit) */
    _jf_0056181D = (TEST_Z(_fa, _fb)) ? 1 : 0; /* flags of this edge */
    goto loc_0056181D;

loc_00561811: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00561823; /* jne: not equal / not zero */

loc_00561816: ;
    _fa = (uint32_t)(MEM32(edi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0x48), 0x20000 (32-bit) */
    _jf_0056181D = (TEST_Z(_fa, _fb)) ? 1 : 0; /* flags of this edge */

loc_0056181D: ;
    if (_jf_0056181D /* je: equal / zero */) goto loc_005618E0;

loc_00561823: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x94);
    ecx = MEM32(eax + 0x85FC90);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    _fb = (uint32_t)(0x85FAA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x85FAA0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005618DE; /* je: equal / zero */

loc_00561846: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = eax + 0x85FC00;
    PUSH32(esp, 0x00561856u); RECOMP_ABI_CALL(0x00604940u, sub_00604940); /* call 0x00604940 */

loc_00561856: ;
    _fa = (uint32_t)(MEM8(esp + 0x30)) & 0xFFu; _fb = (uint32_t)(0x16) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x30), 0x16 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056185F; /* jne: not equal / not zero */

loc_0056185D: ;
    SET_LO8(ebx, 1);

loc_0056185F: ;
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x14), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005618DE; /* jne: not equal / not zero */

loc_00561865: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005618DE; /* jne: not equal / not zero */

loc_0056186B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005618DE; /* jne: not equal / not zero */

loc_0056186F: ;
    ecx = esi;
    PUSH32(esp, 0x00561876u); RECOMP_ABI_CALL(0x0046A290u, sub_0046A290); /* call 0x0046A290 */

loc_00561876: ;
    fp_push(MEMF(edi + 0xBC)); /* fld float */
    ebx = MEM32(esp + 0x460);
    fp_top() = -fp_top(); /* fchs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00561892; /* jne: not equal / not zero */

loc_0056188E: ;
    MEM8(ebx + 4) = 1;

loc_00561892: ;
    ecx = esi;
    PUSH32(esp, 0x00561899u); RECOMP_ABI_CALL(0x0046A290u, sub_0046A290); /* call 0x0046A290 */

loc_00561899: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edi + 0xBC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edi + 0xbc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005618AA; /* jne: not equal / not zero */

loc_005618A6: ;
    MEM8(ebx + 5) = 1;

loc_005618AA: ;
    ecx = esi;
    PUSH32(esp, 0x005618B1u); RECOMP_ABI_CALL(0x0046A240u, sub_0046A240); /* call 0x0046A240 */

loc_005618B1: ;
    fp_push(MEMF(edi + 0xBC)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005618C6; /* jne: not equal / not zero */

loc_005618C2: ;
    MEM8(ebx + 6) = 1;

loc_005618C6: ;
    ecx = esi;
    PUSH32(esp, 0x005618CDu); RECOMP_ABI_CALL(0x0046A240u, sub_0046A240); /* call 0x0046A240 */

loc_005618CD: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edi + 0xBC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edi + 0xbc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005618DE; /* jne: not equal / not zero */

loc_005618DA: ;
    MEM8(ebx + 7) = 1;

loc_005618DE: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_005618E0: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x44C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005618F0
 * Original: 0x005618F0 - 0x005619A6 (182 bytes, 51 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_005618F0(void)
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

loc_005618F0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0056192C; /* jp: parity */

loc_00561901: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x630320)); /* fmul dword ptr [0x630320] */
    fp_push(MEMF(ecx + 0x124)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00561924; /* jne: not equal / not zero */

loc_0056191E: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 4)); /* fld float */

loc_00561924: ;
    MEMF(ecx + 0x124) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00561949;

loc_0056192C: ;
    fp_push(MEMF(ecx + 0x128)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00561943; /* je: equal / zero */

loc_0056193D: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 4)); /* fld float */

loc_00561943: ;
    MEMF(ecx + 0x128) = (float)fp_top(); fp_pop(); /* fstp */

loc_00561949: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00561986; /* jp: parity */

loc_0056195A: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x630320)); /* fmul dword ptr [0x630320] */
    fp_push(MEMF(ecx + 0x11C)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0056197D; /* jne: not equal / not zero */

loc_00561977: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 4)); /* fld float */

loc_0056197D: ;
    MEMF(ecx + 0x11C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

loc_00561986: ;
    fp_push(MEMF(ecx + 0x120)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0056199D; /* je: equal / zero */

loc_00561997: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 8)); /* fld float */

loc_0056199D: ;
    MEMF(ecx + 0x120) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005619B0
 * Original: 0x005619B0 - 0x00561A21 (113 bytes, 32 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_005619B0(void)
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

loc_005619B0: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(0x65E384)); /* fld float */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(0x85FAA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x85FAA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 8), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_005619F6; /* jne: not equal / not zero */

loc_005619D0: ;
    eax = MEM32(ecx + esi * 4 + 0x50);
    fp_pop(); /* fstp st(0) */
    MEM32(esp + 8) = eax;
    eax = 0x6C5188;
    /* nop */

loc_005619E0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C51E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6C51E8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005619E0; /* jl: less (signed <) */

loc_005619EA: ;
    fp_push(MEMF(0x65E384)); /* fld float */
    edx = edx & 0xF00;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_005619F6: ;
    _fa = (uint32_t)(MEM32(ecx + esi * 4 + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + esi * 4 + 0x50), edx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00561A1E; /* je: equal / zero */

loc_005619FD: ;
    ecx = MEM32(ecx + 0xC0);
    fp_push(MEMF(0x65E384)); /* fld float */
    MEM32(esp + 4) = ecx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00561A1E; /* je: equal / zero */

loc_00561A18: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 4)); /* fld float */

loc_00561A1E: ;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00561A30
 * Original: 0x00561A30 - 0x00561AEE (190 bytes, 63 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00561A30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00561A30: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00561AE9; /* ja: above (unsigned >) */

loc_00561A3D: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x561AF0); /* switch: 8 entries, 7 targets */
    if (_jt == 0x00561A44u) goto loc_00561A44;
    if (_jt == 0x00561A6Cu) goto loc_00561A6C;
    if (_jt == 0x00561A81u) goto loc_00561A81;
    if (_jt == 0x00561A9Eu) goto loc_00561A9E;
    if (_jt == 0x00561ABBu) goto loc_00561ABB;
    if (_jt == 0x00561AD2u) goto loc_00561AD2;
    if (_jt == 0x00561AE9u) goto loc_00561AE9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00561A44: ;
    SET_LO8(ecx, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    eax = MEM32(esp + 8);
    if (TEST_Z(_fa, _fb)) goto loc_00561A58; /* je: equal / zero */

loc_00561A51: ;
    SET_LO8(edx, MEM8(eax + 1));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00561A99; /* jne: not equal / not zero */

loc_00561A58: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00561A64; /* je: equal / zero */

loc_00561A5D: ;
    SET_LO8(ecx, MEM8(eax + 2));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00561A99; /* jne: not equal / not zero */

loc_00561A64: ;
    eax = 1;
    esp += 16; return; /* ret 12 */

loc_00561A6C: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00561A64; /* je: equal / zero */

loc_00561A73: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00561A64; /* je: equal / zero */

loc_00561A7C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

loc_00561A81: ;
    SET_LO8(ecx, MEM8(esp + 0xC));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00561AEB; /* je: equal / zero */

loc_00561A8E: ;
    ecx = MEM32(esp + 8);
    SET_LO8(edx, MEM8(ecx + 5));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00561AEB; /* je: equal / zero */

loc_00561A99: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

loc_00561A9E: ;
    SET_LO8(ecx, MEM8(esp + 0xC));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00561AEB; /* je: equal / zero */

loc_00561AAB: ;
    edx = MEM32(esp + 8);
    SET_LO8(ecx, MEM8(edx + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00561AEB; /* je: equal / zero */

loc_00561AB6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

loc_00561ABB: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00561A64; /* je: equal / zero */

loc_00561AC2: ;
    eax = MEM32(esp + 8);
    SET_LO8(ecx, MEM8(eax + 7));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00561A64; /* je: equal / zero */

loc_00561ACD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

loc_00561AD2: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00561A64; /* je: equal / zero */

loc_00561AD9: ;
    ecx = MEM32(esp + 8);
    SET_LO8(eax, MEM8(ecx + 6));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00561A64; /* je: equal / zero */

loc_00561AE4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

loc_00561AE9: ;
    SET_LO8(eax, 1);

loc_00561AEB: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00561B10
 * Original: 0x00561B10 - 0x00561B2E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00561B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00561B10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00561B18u); RECOMP_ABI_CALL(0x005611C0u, sub_005611C0); /* call 0x005611C0 */

loc_00561B18: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00561B28; /* je: equal / zero */

loc_00561B1F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00561B25u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00561B25: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00561B28: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00561B30
 * Original: 0x00561B30 - 0x00561B72 (66 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00561B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00561B30: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x44)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x44), 1 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00561B6B; /* je: equal / zero */

loc_00561B3A: ;
    eax = MEM32(esi + 0x44);
    eax = eax >> 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00561B6B; /* je: equal / zero */

loc_00561B44: ;
    ecx = MEM32(esi + 0x4C);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    edx = esi + 0xC4;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00561B5Bu); RECOMP_ABI_CALL(0x00561A30u, sub_00561A30); /* call 0x00561A30 */

loc_00561B5B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00561B6B; /* je: equal / zero */

loc_00561B5F: ;
    SET_LO8(eax, MEM8(edi + esi + 0xC4));
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00561B6B: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00561B80
 * Original: 0x00561B80 - 0x00561BB3 (51 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00561B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00561B80: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x4C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esi + 0xC4;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00561B9Bu); RECOMP_ABI_CALL(0x00561A30u, sub_00561A30); /* call 0x00561A30 */

loc_00561B9B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00561BAC; /* je: equal / zero */

loc_00561B9F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00561BA7u); RECOMP_ABI_CALL(0x005615E0u, sub_005615E0); /* call 0x005615E0 */

loc_00561BA7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00561BAC: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00561BC0
 * Original: 0x00561BC0 - 0x00561D39 (377 bytes, 120 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00561BC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00561BC0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = MEM32(0x85FAC0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x85FAA4);
    ebx = ecx;
    ecx = 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, esi);
    esi = MEM32(0x85FAAC);
    ebp = MEM32(0x85FAE4);
    PUSH32(esp, edi);
    edi = MEM32(0x85FAC8);
    MEM32(esp + 0x14) = ebx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(0x85FADC);
    MEM32(esp + 0x18) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx = MEM32(0x85FB00);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(0x85FAF8);
    MEM32(esp + 0x1C) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = MEM32(esp + 0x2C);
    MEM32(esp + 0x20) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x24) = eax;
    eax = ebx + 0x50;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = eax;
    goto loc_00561C50;

loc_00561C49: ;
    ecx = 4;
    edi = edi;

loc_00561C50: ;
    MEM8(edi + ebp) = 0;
    _fa = (uint32_t)(MEM8(ebx + 0x48)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x48), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00561C74; /* je: equal / zero */

loc_00561C5A: ;
    edx = MEM32(0x85F888);
    eax = MEM32(eax + 0x30);
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM8(eax + edx + 0x85F898)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + edx + 0x85F898), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00561C74; /* je: equal / zero */

loc_00561C70: ;
    MEM8(edi + ebp) = 1;

loc_00561C74: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00561C8E; /* jge: greater or equal (signed >=) */

loc_00561C78: ;
    eax = 0x70;
    ecx = 0x700;
    edx = 0x7000;
    esi = 0x70000;
    goto loc_00561CBD;

loc_00561C8E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00561CA9; /* jge: greater or equal (signed >=) */

loc_00561C93: ;
    eax = 0x10;
    ecx = 0x100;
    edx = 0x1000;
    esi = 0x10000;
    goto loc_00561CBD;

loc_00561CA9: ;
    eax = 0x40;
    ecx = 0x400;
    edx = 0x4000;
    esi = 0x40000;

loc_00561CBD: ;
    _fa = (uint32_t)(MEM32(ebx + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + 0x48), eax (32-bit) */
    eax = MEM32(esp + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_00561CD6; /* je: equal / zero */

loc_00561CC6: ;
    ebx = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), ebx (32-bit) */
    ebx = MEM32(esp + 0x14);
    if (TEST_Z(_fa, _fb)) goto loc_00561CD6; /* je: equal / zero */

loc_00561CD2: ;
    MEM8(edi + ebp) = 1;

loc_00561CD6: ;
    _fa = (uint32_t)(MEM32(ebx + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + 0x48), ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00561CE7; /* je: equal / zero */

loc_00561CDB: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00561CE7; /* je: equal / zero */

loc_00561CE3: ;
    MEM8(edi + ebp) = 1;

loc_00561CE7: ;
    _fa = (uint32_t)(MEM32(ebx + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + 0x48), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00561CF8; /* je: equal / zero */

loc_00561CEC: ;
    edx = MEM32(esp + 0x20);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00561CF8; /* je: equal / zero */

loc_00561CF4: ;
    MEM8(edi + ebp) = 1;

loc_00561CF8: ;
    _fa = (uint32_t)(MEM32(ebx + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + 0x48), esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00561D09; /* je: equal / zero */

loc_00561CFD: ;
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00561D09; /* je: equal / zero */

loc_00561D05: ;
    MEM8(edi + ebp) = 1;

loc_00561D09: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xC (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00561C49; /* jl: less (signed <) */

loc_00561D1A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00561D20: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x00561D29u); RECOMP_ABI_CALL(0x005617E0u, sub_005617E0); /* call 0x005617E0 */

loc_00561D29: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00561D20; /* jl: less (signed <) */

loc_00561D2F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00561D40
 * Original: 0x00561D40 - 0x00561DB8 (120 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00561D40(void)
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

loc_00561D40: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(eax + 0x85FAB4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00561DB3; /* je: equal / zero */

loc_00561D55: ;
    _fa = (uint32_t)(MEM32(eax + 0x85FAA4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x85FAA4), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00561DB3; /* jne: not equal / not zero */

loc_00561D5E: ;
    PUSH32(esp, edi);
    edi = eax + 0x85FAA0;
    eax = MEM32(esi + 0xBC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00561D73u); RECOMP_ABI_CALL(0x0046A240u, sub_0046A240); /* call 0x0046A240 */

loc_00561D73: ;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00561D7Cu); RECOMP_ABI_CALL(0x006048C0u, sub_006048C0); /* call 0x006048C0 */

loc_00561D7C: ;
    ecx = MEM32(esi + 0xBC);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00561D91u); RECOMP_ABI_CALL(0x0046A290u, sub_0046A290); /* call 0x0046A290 */

loc_00561D91: ;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00561D9Au); RECOMP_ABI_CALL(0x006048C0u, sub_006048C0); /* call 0x006048C0 */

loc_00561D9A: ;
    eax = MEM32(esp + 0x10);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00561DB2u); RECOMP_ABI_CALL(0x005618F0u, sub_005618F0); /* call 0x005618F0 */

loc_00561DB2: ;
    POP32(esp, edi);

loc_00561DB3: ;
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
 * sub_00561DC0
 * Original: 0x00561DC0 - 0x00561E7A (186 bytes, 62 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00561DC0(void)
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

loc_00561DC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00561DD0u); RECOMP_ABI_CALL(0x005619B0u, sub_005619B0); /* call 0x005619B0 */

loc_00561DD0: ;
    fp_push(MEMF(esi + 0x10C)); /* fld float */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00561DE9; /* jne: not equal / not zero */

loc_00561DE3: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */

loc_00561DE9: ;
    PUSH32(esp, 1);
    MEMF(esi + 0x10C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00561DF9u); RECOMP_ABI_CALL(0x005619B0u, sub_005619B0); /* call 0x005619B0 */

loc_00561DF9: ;
    fp_push(MEMF(esi + 0x110)); /* fld float */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00561E12; /* jne: not equal / not zero */

loc_00561E0C: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */

loc_00561E12: ;
    PUSH32(esp, 2);
    MEMF(esi + 0x110) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00561E22u); RECOMP_ABI_CALL(0x005619B0u, sub_005619B0); /* call 0x005619B0 */

loc_00561E22: ;
    fp_push(MEMF(esi + 0x114)); /* fld float */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00561E3B; /* jne: not equal / not zero */

loc_00561E35: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */

loc_00561E3B: ;
    PUSH32(esp, 3);
    MEMF(esi + 0x114) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00561E4Bu); RECOMP_ABI_CALL(0x005619B0u, sub_005619B0); /* call 0x005619B0 */

loc_00561E4B: ;
    fp_push(MEMF(esi + 0x118)); /* fld float */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00561E6F; /* jne: not equal / not zero */

loc_00561E5E: ;
    eax = MEM32(esp + 0xC);
    fp_pop(); /* fstp st(0) */
    POP32(esp, edi);
    MEM32(esi + 0x118) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00561E6F: ;
    POP32(esp, edi);
    MEMF(esi + 0x118) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00561E80
 * Original: 0x00561E80 - 0x00561F95 (277 bytes, 84 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00561E80(void)
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

loc_00561E80: ;
    _fb = (uint32_t)(0x450) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x450;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x460);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x94);
    esi = ecx;
    ecx = MEM32(eax + 0x85FC90);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00561F89; /* je: equal / zero */

loc_00561EAA: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax + 0x85FC00;
    PUSH32(esp, 0x00561EBAu); RECOMP_ABI_CALL(0x00604940u, sub_00604940); /* call 0x00604940 */

loc_00561EBA: ;
    _fa = (uint32_t)(MEM8(esp + 0x34)) & 0xFFu; _fb = (uint32_t)(0x16) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x34), 0x16 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00561EE5; /* jne: not equal / not zero */

loc_00561EC1: ;
    POP32(esp, edi);
    MEM32(esi + 0x124) = ebx;
    MEM32(esi + 0x128) = ebx;
    MEM32(esi + 0x11C) = ebx;
    MEM32(esi + 0x120) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x450) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x450;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00561EE5: ;
    PUSH32(esp, 6);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00561EEFu); RECOMP_ABI_CALL(0x005619B0u, sub_005619B0); /* call 0x005619B0 */

loc_00561EEF: ;
    fp_push(MEMF(esi + 0x124)); /* fld float */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00561F08; /* jne: not equal / not zero */

loc_00561F02: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */

loc_00561F08: ;
    PUSH32(esp, 7);
    MEMF(esi + 0x124) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00561F18u); RECOMP_ABI_CALL(0x005619B0u, sub_005619B0); /* call 0x005619B0 */

loc_00561F18: ;
    fp_push(MEMF(esi + 0x128)); /* fld float */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00561F31; /* jne: not equal / not zero */

loc_00561F2B: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */

loc_00561F31: ;
    PUSH32(esp, 4);
    MEMF(esi + 0x128) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00561F41u); RECOMP_ABI_CALL(0x005619B0u, sub_005619B0); /* call 0x005619B0 */

loc_00561F41: ;
    fp_push(MEMF(esi + 0x11C)); /* fld float */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00561F5A; /* jne: not equal / not zero */

loc_00561F54: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */

loc_00561F5A: ;
    PUSH32(esp, 5);
    MEMF(esi + 0x11C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00561F6Au); RECOMP_ABI_CALL(0x005619B0u, sub_005619B0); /* call 0x005619B0 */

loc_00561F6A: ;
    fp_push(MEMF(esi + 0x120)); /* fld float */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00561F83; /* jne: not equal / not zero */

loc_00561F7D: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */

loc_00561F83: ;
    MEMF(esi + 0x120) = (float)fp_top(); fp_pop(); /* fstp */

loc_00561F89: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x450) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x450;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00561FA0
 * Original: 0x00561FA0 - 0x0056205A (186 bytes, 62 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00561FA0(void)
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

loc_00561FA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00561FB0u); RECOMP_ABI_CALL(0x005619B0u, sub_005619B0); /* call 0x005619B0 */

loc_00561FB0: ;
    fp_push(MEMF(esi + 0x12C)); /* fld float */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00561FC9; /* jne: not equal / not zero */

loc_00561FC3: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */

loc_00561FC9: ;
    PUSH32(esp, 9);
    MEMF(esi + 0x12C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00561FD9u); RECOMP_ABI_CALL(0x005619B0u, sub_005619B0); /* call 0x005619B0 */

loc_00561FD9: ;
    fp_push(MEMF(esi + 0x130)); /* fld float */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00561FF2; /* jne: not equal / not zero */

loc_00561FEC: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */

loc_00561FF2: ;
    PUSH32(esp, 0xA);
    MEMF(esi + 0x130) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00562002u); RECOMP_ABI_CALL(0x005619B0u, sub_005619B0); /* call 0x005619B0 */

loc_00562002: ;
    fp_push(MEMF(esi + 0x134)); /* fld float */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0056201B; /* jne: not equal / not zero */

loc_00562015: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */

loc_0056201B: ;
    PUSH32(esp, 0xB);
    MEMF(esi + 0x134) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0056202Bu); RECOMP_ABI_CALL(0x005619B0u, sub_005619B0); /* call 0x005619B0 */

loc_0056202B: ;
    fp_push(MEMF(esi + 0x138)); /* fld float */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0056204F; /* jne: not equal / not zero */

loc_0056203E: ;
    eax = MEM32(esp + 0xC);
    fp_pop(); /* fstp st(0) */
    POP32(esp, edi);
    MEM32(esi + 0x138) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0056204F: ;
    POP32(esp, edi);
    MEMF(esi + 0x138) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00562060
 * Original: 0x00562060 - 0x005622F0 (656 bytes, 208 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562060(void)
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

loc_00562060: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edx = esi + 0x10C;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xC;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    _fa = (uint32_t)(MEM8(esi + 0x48)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x48), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005621E0; /* je: equal / zero */

loc_00562080: ;
    ecx = edx;
    edx = 2;
    PUSH32(esp, ebx);
    goto loc_00562090;

    /* nop */

loc_00562090: ;
    eax = MEM32(0x85F888);
    edi = MEM32(ecx + -140);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ebx, MEM8(edi + eax + 0x85F898));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005620C6; /* je: equal / zero */

loc_005620A9: ;
    fp_push(MEMF(esi + 0xC0)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005620C4; /* jne: not equal / not zero */

loc_005620BE: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */

loc_005620C4: ;
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */

loc_005620C6: ;
    eax = MEM32(0x85F888);
    edi = MEM32(ecx + -136);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ebx, MEM8(edi + eax + 0x85F898));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005620FE; /* je: equal / zero */

loc_005620DF: ;
    fp_push(MEMF(esi + 0xC0)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005620FB; /* jne: not equal / not zero */

loc_005620F5: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */

loc_005620FB: ;
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_005620FE: ;
    eax = MEM32(0x85F888);
    edi = MEM32(ecx + -132);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ebx, MEM8(edi + eax + 0x85F898));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00562136; /* je: equal / zero */

loc_00562117: ;
    fp_push(MEMF(esi + 0xC0)); /* fld float */
    fp_push(MEMF(ecx + 8)); /* fld float */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00562133; /* jne: not equal / not zero */

loc_0056212D: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */

loc_00562133: ;
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_00562136: ;
    eax = MEM32(0x85F888);
    edi = MEM32(ecx + -128);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ebx, MEM8(edi + eax + 0x85F898));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056216B; /* je: equal / zero */

loc_0056214C: ;
    fp_push(MEMF(esi + 0xC0)); /* fld float */
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00562168; /* jne: not equal / not zero */

loc_00562162: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */

loc_00562168: ;
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_0056216B: ;
    eax = MEM32(0x85F888);
    edi = MEM32(ecx + -124);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ebx, MEM8(edi + eax + 0x85F898));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005621A0; /* je: equal / zero */

loc_00562181: ;
    fp_push(MEMF(esi + 0xC0)); /* fld float */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0056219D; /* jne: not equal / not zero */

loc_00562197: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */

loc_0056219D: ;
    MEMF(ecx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_005621A0: ;
    eax = MEM32(0x85F888);
    edi = MEM32(ecx + -120);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ebx, MEM8(edi + eax + 0x85F898));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005621D5; /* je: equal / zero */

loc_005621B6: ;
    fp_push(MEMF(esi + 0xC0)); /* fld float */
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005621D2; /* jne: not equal / not zero */

loc_005621CC: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */

loc_005621D2: ;
    MEMF(ecx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */

loc_005621D5: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00562090; /* jne: not equal / not zero */

loc_005621DF: ;
    POP32(esp, ebx);

loc_005621E0: ;
    _fa = (uint32_t)(MEM8(esi + 0x48)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x48), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005621EF; /* je: equal / zero */

loc_005621E6: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x005621EFu); RECOMP_ABI_CALL(0x00561D40u, sub_00561D40); /* call 0x00561D40 */

loc_005621EF: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00562200; /* je: equal / zero */

loc_005621F7: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00562200u); RECOMP_ABI_CALL(0x00561D40u, sub_00561D40); /* call 0x00561D40 */

loc_00562200: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00562211; /* je: equal / zero */

loc_00562208: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x00562211u); RECOMP_ABI_CALL(0x00561D40u, sub_00561D40); /* call 0x00561D40 */

loc_00562211: ;
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x48), 0x20000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00562223; /* je: equal / zero */

loc_0056221A: ;
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x00562223u); RECOMP_ABI_CALL(0x00561D40u, sub_00561D40); /* call 0x00561D40 */

loc_00562223: ;
    _fa = (uint32_t)(MEM8(esi + 0x48)) & 0xFFu; _fb = (uint32_t)(0x70) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x48), 0x70 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00562232; /* je: equal / zero */

loc_00562229: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00562232u); RECOMP_ABI_CALL(0x00561DC0u, sub_00561DC0); /* call 0x00561DC0 */

loc_00562232: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00562243; /* je: equal / zero */

loc_0056223A: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00562243u); RECOMP_ABI_CALL(0x00561DC0u, sub_00561DC0); /* call 0x00561DC0 */

loc_00562243: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x70) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x70 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00562254; /* je: equal / zero */

loc_0056224B: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x00562254u); RECOMP_ABI_CALL(0x00561DC0u, sub_00561DC0); /* call 0x00561DC0 */

loc_00562254: ;
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x48), 0x70000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00562266; /* je: equal / zero */

loc_0056225D: ;
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x00562266u); RECOMP_ABI_CALL(0x00561DC0u, sub_00561DC0); /* call 0x00561DC0 */

loc_00562266: ;
    _fa = (uint32_t)(MEM8(esi + 0x48)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x48), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00562275; /* je: equal / zero */

loc_0056226C: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00562275u); RECOMP_ABI_CALL(0x00561E80u, sub_00561E80); /* call 0x00561E80 */

loc_00562275: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00562286; /* je: equal / zero */

loc_0056227D: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00562286u); RECOMP_ABI_CALL(0x00561E80u, sub_00561E80); /* call 0x00561E80 */

loc_00562286: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00562297; /* je: equal / zero */

loc_0056228E: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x00562297u); RECOMP_ABI_CALL(0x00561E80u, sub_00561E80); /* call 0x00561E80 */

loc_00562297: ;
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x48), 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005622A9; /* je: equal / zero */

loc_005622A0: ;
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x005622A9u); RECOMP_ABI_CALL(0x00561E80u, sub_00561E80); /* call 0x00561E80 */

loc_005622A9: ;
    _fa = (uint32_t)(MEM8(esi + 0x48)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x48), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005622B8; /* je: equal / zero */

loc_005622AF: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x005622B8u); RECOMP_ABI_CALL(0x00561FA0u, sub_00561FA0); /* call 0x00561FA0 */

loc_005622B8: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005622C9; /* je: equal / zero */

loc_005622C0: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x005622C9u); RECOMP_ABI_CALL(0x00561FA0u, sub_00561FA0); /* call 0x00561FA0 */

loc_005622C9: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005622DA; /* je: equal / zero */

loc_005622D1: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x005622DAu); RECOMP_ABI_CALL(0x00561FA0u, sub_00561FA0); /* call 0x00561FA0 */

loc_005622DA: ;
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x48), 0x40000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005622EC; /* je: equal / zero */

loc_005622E3: ;
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x005622ECu); RECOMP_ABI_CALL(0x00561FA0u, sub_00561FA0); /* call 0x00561FA0 */

loc_005622EC: ;
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
 * sub_005622F0
 * Original: 0x005622F0 - 0x00562401 (273 bytes, 90 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005622F0(void)
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

loc_005622F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 0x005622FEu); RECOMP_ABI_CALL(0x0055B910u, sub_0055B910); /* call 0x0055B910 */

loc_005622FE: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ebp;
    PUSH32(esp, 0x00562309u); RECOMP_ABI_CALL(0x0055F0B0u, sub_0055F0B0); /* call 0x0055F0B0 */

loc_00562309: ;
    _fa = (uint32_t)(MEM8(ebp + 0x44)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x44), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005623F9; /* je: equal / zero */

loc_00562313: ;
    SET_LO8(eax, MEM8(ebp + 0x154));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = ebp + 0xD0;
    if (CMP_EQ(_fa, _fb)) goto loc_0056233B; /* je: equal / zero */

loc_00562323: ;
    eax = 0x1010101;
    ecx = ebx;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM8(ebp + 0x154) = 0;
    goto loc_0056234A;

loc_0056233B: ;
    esi = ebp + 0xC4;
    ecx = 0xC;
    edi = ebx;
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

loc_0056234A: ;
    ecx = ebp;
    PUSH32(esp, 0x00562351u); RECOMP_ABI_CALL(0x00562060u, sub_00562060); /* call 0x00562060 */

loc_00562351: ;
    eax = ebp + 0xC4;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0056235Fu); RECOMP_ABI_CALL(0x00561BC0u, sub_00561BC0); /* call 0x00561BC0 */

loc_0056235F: ;
    edx = ebp + 0xDC;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = edx;
    goto loc_00562370;

    /* nop */

loc_00562370: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x00562378u); RECOMP_ABI_CALL(0x00561730u, sub_00561730); /* call 0x00561730 */

loc_00562378: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(ebx + esi + 0x78) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_005623E4; /* je: equal / zero */

loc_00562380: ;
    eax = MEM32(ebp + 0x4C);
    PUSH32(esp, eax);
    eax = ebp + 0xC4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x00562393u); RECOMP_ABI_CALL(0x00561A30u, sub_00561A30); /* call 0x00561A30 */

loc_00562393: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005623CB; /* je: equal / zero */

loc_00562397: ;
    PUSH32(esp, ecx);
    eax = esp;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = 0;
    MEM32(eax) = 0;
    edi = MEM32(ebp);
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x005623B8u); RECOMP_ABI_CALL(0x00561670u, sub_00561670); /* call 0x00561670 */

loc_005623B8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edi + 0x5C); PUSH32(esp, 0x005623BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005623BBu); } /* indirect call */
    }

loc_005623BE: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005623CB; /* je: equal / zero */

loc_005623C6: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x005623CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005623C8u); } /* indirect call */
    }

loc_005623CB: ;
    SET_LO8(eax, MEM8(ebx + esi));
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(esi + ebp + 0x13C) = LO8(eax);
    MEM32(edx) = ecx;

loc_005623E4: ;
    ecx = MEM32(esp + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00562370; /* jl: less (signed <) */

loc_005623F9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
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
 * sub_00562410
 * Original: 0x00562410 - 0x00562449 (57 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00562410: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ebx, MEM8(esi + 0x44));
    PUSH32(esp, eax);
    SET_LO8(ebx, LO8(ebx) & 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, 0x00562424u); RECOMP_ABI_CALL(0x0055F470u, sub_0055F470); /* call 0x0055F470 */

loc_00562424: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00562444; /* je: equal / zero */

loc_0056242C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00562444; /* jne: not equal / not zero */

loc_00562430: ;
    _fa = (uint32_t)(MEM8(esi + 0x4C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x4C), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00562444; /* jne: not equal / not zero */

loc_00562436: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00562440u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0056243Au); } /* indirect call */
    }

loc_00562440: ;
    MEM8(esi + 0x4C) = 0;

loc_00562444: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00562450
 * Original: 0x00562450 - 0x005624A0 (80 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00562450: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0001F4Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA0001F4Au (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0056248C; /* je: equal / zero */

loc_0056245E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0001F54u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA0001F54u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056247B; /* je: equal / zero */

loc_00562465: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00562477u); RECOMP_ABI_CALL(0x0055F100u, sub_0055F100); /* call 0x0055F100 */

loc_00562477: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0056247B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x00562484u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562481u); } /* indirect call */
    }

loc_00562484: ;
    MEM8(esi + 0x4C) = 1;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0056248C: ;
    _fa = (uint32_t)(MEM8(esi + 0x44)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x44), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0056249C; /* je: equal / zero */

loc_00562492: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x0056249Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562496u); } /* indirect call */
    }

loc_0056249C: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_005624A0
 * Original: 0x005624A0 - 0x005624B7 (23 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005624A0(void)
{

loc_005624A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x005624AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005624ACu); } /* indirect call */
    }

loc_005624AF: ;
    MEM8(esi + 0x4C) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005624C0
 * Original: 0x005624C0 - 0x005624D4 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005624C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005624C0: ;
    SET_LO8(eax, MEM8(ecx + 0x4D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005624D3; /* je: equal / zero */

loc_005624C7: ;
    eax = MEM32(ecx);
    MEM8(ecx + 0x4D) = 0;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x90)); return; /* indirect tail jmp */

loc_005624D3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005624E0
 * Original: 0x005624E0 - 0x005624FD (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005624E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005624E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x64FC70;
    ecx = MEM32(esi + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005624F5; /* je: equal / zero */

loc_005624F0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x005624F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005624F2u); } /* indirect call */
    }

loc_005624F5: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00560CF0(); return; /* tail jmp 0x00560CF0 */

}

/**
 * sub_00562500
 * Original: 0x00562500 - 0x00562506 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562500(void)
{

loc_00562500: ;
    eax = 0x631DE0;
    esp += 4; return; /* ret */

}

/**
 * sub_00562510
 * Original: 0x00562510 - 0x00562589 (121 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00562510: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ecx;
    edi = edx;
    esi = 0x631DE0;
    ecx = 0xC;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00562533; /* jne: not equal / not zero */

loc_0056252B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00562533: ;
    esi = edx;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0056253Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562539u); } /* indirect call */
    }

loc_0056253F: ;
    /* nop */

loc_00562540: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00562575; /* jne: not equal / not zero */

loc_0056254A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00562564; /* je: equal / zero */

loc_0056254E: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00562575; /* jne: not equal / not zero */

loc_0056255A: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00562540; /* jne: not equal / not zero */

loc_00562564: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00562575: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00562590
 * Original: 0x00562590 - 0x005625A8 (24 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00562590: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00562598u); RECOMP_ABI_CALL(0x005624C0u, sub_005624C0); /* call 0x005624C0 */

loc_00562598: ;
    ecx = MEM32(esi + 0x48);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x005625A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0056259Du); } /* indirect call */
    }

loc_005625A0: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0055FC40(); return; /* tail jmp 0x0055FC40 */

}

/**
 * sub_005625B0
 * Original: 0x005625B0 - 0x005625C1 (17 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005625B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005625B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005625B8u); RECOMP_ABI_CALL(0x0055F190u, sub_0055F190); /* call 0x0055F190 */

loc_005625B8: ;
    ecx = MEM32(esi + 0x48);
    eax = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x28)); return; /* indirect tail jmp */

}

/**
 * sub_005625D0
 * Original: 0x005625D0 - 0x005625D8 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005625D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005625D0: ;
    ecx = MEM32(ecx + 0x48);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x2C)); return; /* indirect tail jmp */

}

/**
 * sub_005625E0
 * Original: 0x005625E0 - 0x005625F9 (25 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005625E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005625E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005625E8u); RECOMP_ABI_CALL(0x0055F0B0u, sub_0055F0B0); /* call 0x0055F0B0 */

loc_005625E8: ;
    _fa = (uint32_t)(MEM8(esi + 0x44)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x44), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005625F7; /* je: equal / zero */

loc_005625EE: ;
    ecx = MEM32(esi + 0x48);
    eax = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x1C)); return; /* indirect tail jmp */

loc_005625F7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00562600
 * Original: 0x00562600 - 0x0056260F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00562600: ;
    _fa = (uint32_t)(MEM8(ecx + 0x44)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x44), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0056260E; /* je: equal / zero */

loc_00562606: ;
    ecx = MEM32(ecx + 0x48);
    g_seh_ebp = ebp; sub_0055F0E0(); return; /* tail jmp 0x0055F0E0 */

loc_0056260E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00562610
 * Original: 0x00562610 - 0x00562618 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00562610: ;
    ecx = MEM32(ecx + 0x48);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x78)); return; /* indirect tail jmp */

}

/**
 * sub_00562620
 * Original: 0x00562620 - 0x00562628 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00562620: ;
    ecx = MEM32(ecx + 0x48);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x7C)); return; /* indirect tail jmp */

}

/**
 * sub_00562630
 * Original: 0x00562630 - 0x0056264E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00562630: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00562638u); RECOMP_ABI_CALL(0x005624E0u, sub_005624E0); /* call 0x005624E0 */

loc_00562638: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00562648; /* je: equal / zero */

loc_0056263F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00562645u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00562645: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00562648: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00562650
 * Original: 0x00562650 - 0x0056269A (74 bytes, 28 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00562650: ;
    PUSH32(esp, 0x118);
    PUSH32(esp, 0x63B754);
    PUSH32(esp, 0x70);
    PUSH32(esp, 0x00562661u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00562661: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00562680; /* je: equal / zero */

loc_00562668: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0056267Eu); RECOMP_ABI_CALL(0x00566B80u, sub_00566B80); /* call 0x00566B80 */

loc_0056267E: ;
    goto loc_00562682;

loc_00562680: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00562682: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00562694; /* je: equal / zero */

loc_0056268D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00562694u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562691u); } /* indirect call */
    }

loc_00562694: ;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_005626A0
 * Original: 0x005626A0 - 0x005626FC (92 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005626A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005626A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x6C5108);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_005626B5; /* je: equal / zero */

loc_005626B0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x005626B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005626B2u); } /* indirect call */
    }

loc_005626B5: ;
    edx = MEM32(edi);
    eax = esi + 0x48;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x005626C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005626BDu); } /* indirect call */
    }

loc_005626C3: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x005626CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005626C7u); } /* indirect call */
    }

loc_005626CA: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x005626D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005626CEu); } /* indirect call */
    }

loc_005626D4: ;
    MEM8(esi + 0x4D) = 1;
    ecx = MEM32(0x6C5108);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_005626E9; /* je: equal / zero */

loc_005626E4: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x005626E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005626E6u); } /* indirect call */
    }

loc_005626E9: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x005626F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005626EDu); } /* indirect call */
    }

loc_005626F3: ;
    edx = MEM32(esi);
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC)); return; /* indirect tail jmp */

}

/**
 * sub_00562700
 * Original: 0x00562700 - 0x005627F6 (246 bytes, 95 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00562700: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x00562719u); RECOMP_ABI_CALL(0x00560D90u, sub_00560D90); /* call 0x00560D90 */

loc_00562719: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(esi) = 0x64FC70;
    MEM32(esi + 0x48) = edi;
    MEM8(esi + 0x4C) = 0;
    MEM8(esi + 0x4D) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00562765; /* je: equal / zero */

loc_00562730: ;
    eax = ebx;
    edx = eax + 1;

loc_00562735: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00562735; /* jne: not equal / not zero */

loc_0056273C: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x6D);
    ebp = eax + 8;
    PUSH32(esp, 0x63B754);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0056274Eu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0056274E: ;
    PUSH32(esp, 0x64FD0C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x6335D8);
    edi = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00562762u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00562762: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00562765: ;
    PUSH32(esp, 0);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x2C) = 0;
    PUSH32(esp, 0x00562781u); RECOMP_ABI_CALL(0x00562650u, sub_00562650); /* call 0x00562650 */

loc_00562781: ;
    ebp = MEM32(eax);
    ecx = MEM32(esi + 0x48);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005627A2; /* je: equal / zero */

loc_0056278A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00562793; /* je: equal / zero */

loc_0056278E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00562793u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562790u); } /* indirect call */
    }

loc_00562793: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esi + 0x48) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_005627A2; /* je: equal / zero */

loc_0056279A: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x005627A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0056279Fu); } /* indirect call */
    }

loc_005627A2: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005627AF; /* je: equal / zero */

loc_005627AA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x005627AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005627ACu); } /* indirect call */
    }

loc_005627AF: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005627BC; /* je: equal / zero */

loc_005627B7: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x005627BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005627B9u); } /* indirect call */
    }

loc_005627BC: ;
    ecx = MEM32(esi + 0x48);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x005627C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005627C3u); } /* indirect call */
    }

loc_005627C6: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x005627D2u); RECOMP_ABI_CALL(0x0055F7A0u, sub_0055F7A0); /* call 0x0055F7A0 */

loc_005627D2: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x005627DBu); RECOMP_ABI_CALL(0x0055F1B0u, sub_0055F1B0); /* call 0x0055F1B0 */

loc_005627DB: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x005627E4u); RECOMP_ABI_CALL(0x0055F220u, sub_0055F220); /* call 0x0055F220 */

loc_005627E4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x005627EAu); RECOMP_ABI_CALL(0x00577350u, sub_00577350); /* call 0x00577350 */

loc_005627EA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00562800
 * Original: 0x00562800 - 0x0056281B (27 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00562800: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00562808u); RECOMP_ABI_CALL(0x005626A0u, sub_005626A0); /* call 0x005626A0 */

loc_00562808: ;
    ecx = MEM32(esi + 0x48);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00562810u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0056280Du); } /* indirect call */
    }

loc_00562810: ;
    edx = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x94)); return; /* indirect tail jmp */

}

/**
 * sub_00562820
 * Original: 0x00562820 - 0x00562845 (37 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562820(void)
{

loc_00562820: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00562839u); RECOMP_ABI_CALL(0x00562700u, sub_00562700); /* call 0x00562700 */

loc_00562839: ;
    MEM32(esi) = 0x64FD18;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00562850
 * Original: 0x00562850 - 0x00562856 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562850(void)
{

loc_00562850: ;
    eax = 0x631DEC;
    esp += 4; return; /* ret */

}

/**
 * sub_00562860
 * Original: 0x00562860 - 0x00562868 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562860(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00562860: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00562870
 * Original: 0x00562870 - 0x00562876 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562870(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00562870: ;
    eax = MEM32(esp + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00562880
 * Original: 0x00562880 - 0x00562885 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562880(void)
{

loc_00562880: ;
    eax = MEM32(esp + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00562890
 * Original: 0x00562890 - 0x00562898 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562890(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00562890: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005628A0
 * Original: 0x005628A0 - 0x005628A4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005628A0(void)
{

loc_005628A0: ;
    SET_LO8(eax, MEM8(ecx + 0x48));
    esp += 4; return; /* ret */

}

/**
 * sub_005628B0
 * Original: 0x005628B0 - 0x00562934 (132 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005628B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005628B0: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64FDDC);
    edx = esp + 0x10;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005628D5u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_005628D5: ;
    edi = MEM32(esp + 0xBC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x4C;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x005628F5u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005628F5: ;
    edx = MEM32(esi + 8);
    eax = MEM32(edx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x64FDD4);
    ecx = esp + 0x10;
    PUSH32(esp, 0xA0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00562910u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00562910: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x00562929u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00562929: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00562940
 * Original: 0x00562940 - 0x005629BC (124 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562940(void)
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

loc_00562940: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ZX8(LO8(eax));
    MEM32(esp) = edx;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    fp_push((double)SMEM32(esp + 4)); /* fild */
    esi = ZX8(HI8(edx));
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D014)); /* fmul dword ptr [0x63d014] */
    MEM32(esp + 0x1C) = esi;
    edx = ZX8(LO8(edx));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(ecx);
    eax = ZX8(HI8(eax));
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D014)); /* fmul dword ptr [0x63d014] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D014)); /* fmul dword ptr [0x63d014] */
    eax = esp + 0xC;
    PUSH32(esp, eax);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D014)); /* fmul dword ptr [0x63d014] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x005629B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005629AFu); } /* indirect call */
    }

loc_005629B5: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005629C0
 * Original: 0x005629C0 - 0x00562A37 (119 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_005629C0(void)
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

loc_005629C0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ZX8(MEM8(esp + 0x14));
    edx = ZX8(MEM8(esp + 0x18));
    MEM32(esp + 0x14) = eax;
    eax = ZX8(MEM8(esp + 0x1C));
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEM32(esp + 0x14) = edx;
    edx = ZX8(MEM8(esp + 0x20));
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D014)); /* fmul dword ptr [0x63d014] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D014)); /* fmul dword ptr [0x63d014] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esp + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D014)); /* fmul dword ptr [0x63d014] */
    edx = esp + 4;
    PUSH32(esp, edx);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D014)); /* fmul dword ptr [0x63d014] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x00562A31u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00562A2Bu); } /* indirect call */
    }

loc_00562A31: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00562A40
 * Original: 0x00562A40 - 0x00562A96 (86 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562A40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00562A40: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xAC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00562A57u); RECOMP_ABI_CALL(0x005628B0u, sub_005628B0); /* call 0x005628B0 */

loc_00562A57: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63B210);
    edx = esp + 0x10;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00562A72u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00562A72: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x58;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x00562A8Bu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00562A8B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00562AA0
 * Original: 0x00562AA0 - 0x00562AEE (78 bytes, 26 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00562AA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x37);
    PUSH32(esp, 0x64FDE4);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00562AAFu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00562AAF: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00562AD7; /* je: equal / zero */

loc_00562AB8: ;
    ecx = esi;
    PUSH32(esp, 0x00562ABFu); RECOMP_ABI_CALL(0x00606090u, sub_00606090); /* call 0x00606090 */

loc_00562ABF: ;
    MEM32(esi) = 0x64FDB4;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    ecx = esi;
    goto loc_00562AD9;

loc_00562AD7: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00562AD9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = MEM32(esp + 8);
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00562AE8; /* je: equal / zero */

loc_00562AE3: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00562AE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562AE5u); } /* indirect call */
    }

loc_00562AE8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00562AF0
 * Original: 0x00562AF0 - 0x00562B41 (81 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00562AF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7B);
    PUSH32(esp, 0x64FDE4);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00562AFFu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00562AFF: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00562B2A; /* je: equal / zero */

loc_00562B08: ;
    ecx = esi;
    PUSH32(esp, 0x00562B0Fu); RECOMP_ABI_CALL(0x00606090u, sub_00606090); /* call 0x00606090 */

loc_00562B0F: ;
    eax = 0x3F800000;
    MEM32(esi) = 0x64FDC4;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    ecx = esi;
    goto loc_00562B2C;

loc_00562B2A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00562B2C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = MEM32(esp + 8);
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00562B3B; /* je: equal / zero */

loc_00562B36: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00562B3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562B38u); } /* indirect call */
    }

loc_00562B3B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00562B50
 * Original: 0x00562B50 - 0x00562B6D (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562B50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00562B50: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x64FDF8;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00562B65; /* je: equal / zero */

loc_00562B60: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00562B65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562B62u); } /* indirect call */
    }

loc_00562B65: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00560CF0(); return; /* tail jmp 0x00560CF0 */

}

/**
 * sub_00562B70
 * Original: 0x00562B70 - 0x00562B76 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562B70(void)
{

loc_00562B70: ;
    eax = 0x631B20;
    esp += 4; return; /* ret */

}

/**
 * sub_00562B80
 * Original: 0x00562B80 - 0x00562BF9 (121 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00562B80: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ecx;
    edi = edx;
    esi = 0x631B20;
    ecx = 9;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00562BA3; /* jne: not equal / not zero */

loc_00562B9B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00562BA3: ;
    esi = edx;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x00562BAFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562BA9u); } /* indirect call */
    }

loc_00562BAF: ;
    /* nop */

loc_00562BB0: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00562BE5; /* jne: not equal / not zero */

loc_00562BBA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00562BD4; /* je: equal / zero */

loc_00562BBE: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00562BE5; /* jne: not equal / not zero */

loc_00562BCA: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00562BB0; /* jne: not equal / not zero */

loc_00562BD4: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00562BE5: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00562C00
 * Original: 0x00562C00 - 0x00562C70 (112 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00562C00: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(esp + 8);
    PUSH32(esp, edi);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    edi = MEM32(esi + 0x54);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00562C2A; /* je: equal / zero */

loc_00562C1C: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00562C23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562C20u); } /* indirect call */
    }

loc_00562C23: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00562C2Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562C27u); } /* indirect call */
    }

loc_00562C2A: ;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00562C3A; /* je: equal / zero */

loc_00562C35: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00562C3Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562C37u); } /* indirect call */
    }

loc_00562C3A: ;
    edx = MEM32(esi);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00562C49u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562C43u); } /* indirect call */
    }

loc_00562C49: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00562C56; /* je: equal / zero */

loc_00562C51: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00562C56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562C53u); } /* indirect call */
    }

loc_00562C56: ;
    esi = MEM32(esi + 0x54);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00562C6B; /* je: equal / zero */

loc_00562C5D: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00562C64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562C61u); } /* indirect call */
    }

loc_00562C64: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00562C6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562C68u); } /* indirect call */
    }

loc_00562C6B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00562C70
 * Original: 0x00562C70 - 0x00562CAC (60 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00562C70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    edx = MEM32(esi + 8);
    PUSH32(esp, edi);
    _fa = (uint32_t)(MEM32(ecx + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x4C), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00562C88; /* jne: not equal / not zero */

loc_00562C80: ;
    edi = MEM32(ecx + 0x50);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00562CA7; /* je: equal / zero */

loc_00562C88: ;
    MEM32(ecx + 0x4C) = edx;
    edx = MEM32(eax);
    edx = MEM32(edx + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(ecx + 0x50) = edx;
    edx = esp;
    PUSH32(esp, eax);
    MEM32(edx) = 0;
    edx = MEM32(ecx);
    PUSH32(esp, 0xC00003E8u);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00562CA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562CA4u); } /* indirect call */
    }

loc_00562CA7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00562CB0
 * Original: 0x00562CB0 - 0x00562D0F (95 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00562CB0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x48)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x48) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00562D0C; /* je: equal / zero */

loc_00562CB9: ;
    MEM8(ecx + 0x48) = LO8(eax);
    PUSH32(esp, ecx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = esp;
    MEM32(esp + 8) = 0;
    MEM32(eax) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00562CF0; /* je: equal / zero */

loc_00562CD1: ;
    eax = MEM32(ecx);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0xC00003FCu);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00562CE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562CDDu); } /* indirect call */
    }

loc_00562CE0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00562D0C; /* je: equal / zero */

loc_00562CE8: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00562CEDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562CEAu); } /* indirect call */
    }

loc_00562CED: ;
    esp += 8; return; /* ret 4 */

loc_00562CF0: ;
    edx = MEM32(ecx);
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC00003FDu);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00562CFFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562CFCu); } /* indirect call */
    }

loc_00562CFF: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00562D0C; /* je: equal / zero */

loc_00562D07: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00562D0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562D09u); } /* indirect call */
    }

loc_00562D0C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00562D10
 * Original: 0x00562D10 - 0x00562D2D (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562D10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00562D10: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x64FE90;
    ecx = MEM32(esi + 0x68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00562D25; /* je: equal / zero */

loc_00562D20: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00562D25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562D22u); } /* indirect call */
    }

loc_00562D25: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00562B50(); return; /* tail jmp 0x00562B50 */

}

/**
 * sub_00562D30
 * Original: 0x00562D30 - 0x00562D36 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562D30(void)
{

loc_00562D30: ;
    eax = 0x64FF38;
    esp += 4; return; /* ret */

}

/**
 * sub_00562D40
 * Original: 0x00562D40 - 0x00562D6E (46 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562D40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00562D40: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    esi = 0x64FF38;
    ecx = 0x17;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if ((_flags == 0)) goto loc_00562D63; /* jne: not equal / not zero */

loc_00562D5E: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_00562D63: ;
    MEM32(esp + 4) = edx;
    ecx = eax;
    g_seh_ebp = ebp; sub_00562B80(); return; /* tail jmp 0x00562B80 */

}

/**
 * sub_00562D70
 * Original: 0x00562D70 - 0x00562DF4 (132 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00562D70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x68);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00562D89; /* je: equal / zero */

loc_00562D7B: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00562D82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562D7Fu); } /* indirect call */
    }

loc_00562D82: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00562D89u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562D86u); } /* indirect call */
    }

loc_00562D89: ;
    eax = MEM32(esi + 0x68);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esi + 0x68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00562DB9; /* je: equal / zero */

loc_00562DB4: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00562DB9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562DB6u); } /* indirect call */
    }

loc_00562DB9: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x98); PUSH32(esp, 0x00562DCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562DC7u); } /* indirect call */
    }

loc_00562DCD: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00562DDA; /* je: equal / zero */

loc_00562DD5: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00562DDAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562DD7u); } /* indirect call */
    }

loc_00562DDA: ;
    esi = MEM32(esi + 0x68);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00562DEF; /* je: equal / zero */

loc_00562DE1: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00562DE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562DE5u); } /* indirect call */
    }

loc_00562DE8: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00562DEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562DECu); } /* indirect call */
    }

loc_00562DEF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00562E00
 * Original: 0x00562E00 - 0x00562E6D (109 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562E00(void)
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

loc_00562E00: ;
    fp_push(MEMF(ecx + 0x58)); /* fld float */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [eax + 8] */
    edx = eax + 8;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00562E3E; /* jp: parity */

loc_00562E17: ;
    fp_push(MEMF(ecx + 0x5C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00562E3E; /* jp: parity */

loc_00562E24: ;
    fp_push(MEMF(ecx + 0x60)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00562E3E; /* jp: parity */

loc_00562E31: ;
    fp_push(MEMF(ecx + 0x64)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00562E69; /* jnp: not parity */

loc_00562E3E: ;
    eax = MEM32(edx);
    MEM32(ecx + 0x58) = eax;
    eax = MEM32(edx + 4);
    MEM32(ecx + 0x5C) = eax;
    eax = MEM32(edx + 8);
    MEM32(ecx + 0x60) = eax;
    edx = MEM32(edx + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ecx + 0x64) = edx;
    PUSH32(esp, esi);
    MEM32(eax) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, 0xC00005DCu);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00562E69u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562E66u); } /* indirect call */
    }

loc_00562E69: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00562E70
 * Original: 0x00562E70 - 0x00562E8E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00562E70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00562E78u); RECOMP_ABI_CALL(0x00562B50u, sub_00562B50); /* call 0x00562B50 */

loc_00562E78: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00562E88; /* je: equal / zero */

loc_00562E7F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00562E85u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00562E85: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00562E88: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00562E90
 * Original: 0x00562E90 - 0x00562EF4 (100 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00562E90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x64FF50);
    PUSH32(esp, 0x10);
    edi = ecx;
    PUSH32(esp, 0x00562EA2u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00562EA2: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00562EC8; /* je: equal / zero */

loc_00562EAB: ;
    ecx = esi;
    PUSH32(esp, 0x00562EB2u); RECOMP_ABI_CALL(0x00606090u, sub_00606090); /* call 0x00606090 */

loc_00562EB2: ;
    MEM32(esi) = 0x64FDB4;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    goto loc_00562ECA;

loc_00562EC8: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00562ECA: ;
    ecx = MEM32(edi + 0x54);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00562EE8; /* je: equal / zero */

loc_00562ED1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00562EDA; /* je: equal / zero */

loc_00562ED5: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00562EDAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562ED7u); } /* indirect call */
    }

loc_00562EDA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(edi + 0x54) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00562EE8; /* je: equal / zero */

loc_00562EE1: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00562EE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562EE5u); } /* indirect call */
    }

loc_00562EE8: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x00562EF1u); RECOMP_ABI_CALL(0x0055F220u, sub_0055F220); /* call 0x0055F220 */

loc_00562EF1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00562F00
 * Original: 0x00562F00 - 0x00562F9D (157 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00562F00: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x44)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x44), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00562F83; /* je: equal / zero */

loc_00562F09: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00003E8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA00003E8u (32-bit) */
    edx = MEM32(esp + 0x10);
    ecx = MEM32(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_00562F56; /* je: equal / zero */

loc_00562F1A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00003FCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA00003FCu (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00562F48; /* je: equal / zero */

loc_00562F23: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00003FDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA00003FDu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00562F3A; /* je: equal / zero */

loc_00562F2A: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00562F36u); RECOMP_ABI_CALL(0x0055F100u, sub_0055F100); /* call 0x0055F100 */

loc_00562F36: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00562F3A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x00562F44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562F3Eu); } /* indirect call */
    }

loc_00562F44: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00562F48: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x00562F52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562F4Cu); } /* indirect call */
    }

loc_00562F52: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00562F56: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00562F99; /* je: equal / zero */

loc_00562F5A: ;
    MEM32(esp + 0x10) = ecx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00562F63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562F60u); } /* indirect call */
    }

loc_00562F63: ;
    eax = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00562F72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562F6Cu); } /* indirect call */
    }

loc_00562F72: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00562F99; /* je: equal / zero */

loc_00562F7A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00562F7Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562F7Cu); } /* indirect call */
    }

loc_00562F7F: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00562F83: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00562F99u); RECOMP_ABI_CALL(0x0055F100u, sub_0055F100); /* call 0x0055F100 */

loc_00562F99: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00562FA0
 * Original: 0x00562FA0 - 0x00562FBE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00562FA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00562FA8u); RECOMP_ABI_CALL(0x00562D10u, sub_00562D10); /* call 0x00562D10 */

loc_00562FA8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00562FB8; /* je: equal / zero */

loc_00562FAF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00562FB5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00562FB5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00562FB8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00562FC0
 * Original: 0x00562FC0 - 0x00563032 (114 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00562FC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x44)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x44), 1 (8-bit) */
    eax = MEM32(esp + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_0056301C; /* je: equal / zero */

loc_00562FCD: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00005DCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA00005DCu (32-bit) */
    ecx = MEM32(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00562FED; /* je: equal / zero */

loc_00562FDB: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00562FE9u); RECOMP_ABI_CALL(0x00562F00u, sub_00562F00); /* call 0x00562F00 */

loc_00562FE9: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00562FED: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056302E; /* je: equal / zero */

loc_00562FF1: ;
    MEM32(esp + 0x10) = ecx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00562FFAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00562FF7u); } /* indirect call */
    }

loc_00562FFA: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x98); PUSH32(esp, 0x0056300Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00563005u); } /* indirect call */
    }

loc_0056300B: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056302E; /* je: equal / zero */

loc_00563013: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00563018u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00563015u); } /* indirect call */
    }

loc_00563018: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0056301C: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0056302Eu); RECOMP_ABI_CALL(0x00562F00u, sub_00562F00); /* call 0x00562F00 */

loc_0056302E: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00563040
 * Original: 0x00563040 - 0x00563084 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563040(void)
{

loc_00563040: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00563058u); RECOMP_ABI_CALL(0x00560D90u, sub_00560D90); /* call 0x00560D90 */

loc_00563058: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    MEM32(esi) = 0x64FDF8;
    MEM8(esi + 0x48) = 1;
    MEM32(esi + 0x4C) = edx;
    MEM32(esi + 0x50) = eax;
    ecx = esi;
    MEM32(esi + 0x54) = 0;
    PUSH32(esp, 0x0056307Eu); RECOMP_ABI_CALL(0x00562E90u, sub_00562E90); /* call 0x00562E90 */

loc_0056307E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00563090
 * Original: 0x00563090 - 0x0056312B (155 bytes, 56 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00563090: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    esi = ecx;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x005630B0u); RECOMP_ABI_CALL(0x00563040u, sub_00563040); /* call 0x00563040 */

loc_005630B0: ;
    MEM32(esi) = 0x64FE90;
    ebx = 0x3F800000;
    PUSH32(esp, 0x115);
    PUSH32(esp, 0x64FF50);
    MEM32(esi + 0x58) = ebx;
    MEM32(esi + 0x5C) = ebx;
    MEM32(esi + 0x60) = ebx;
    MEM32(esi + 0x64) = ebx;
    PUSH32(esp, 0x18);
    MEM32(esi + 0x68) = 0;
    PUSH32(esp, 0x005630DFu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005630DF: ;
    edi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00563103; /* je: equal / zero */

loc_005630E8: ;
    ecx = edi;
    PUSH32(esp, 0x005630EFu); RECOMP_ABI_CALL(0x00606090u, sub_00606090); /* call 0x00606090 */

loc_005630EF: ;
    MEM32(edi) = 0x64FDC4;
    MEM32(edi + 8) = ebx;
    MEM32(edi + 0xC) = ebx;
    MEM32(edi + 0x10) = ebx;
    MEM32(edi + 0x14) = ebx;
    goto loc_00563105;

loc_00563103: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00563105: ;
    ecx = MEM32(esi + 0x68);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00563123; /* je: equal / zero */

loc_0056310C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00563115; /* je: equal / zero */

loc_00563110: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00563115u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00563112u); } /* indirect call */
    }

loc_00563115: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0x68) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00563123; /* je: equal / zero */

loc_0056311C: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00563123u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00563120u); } /* indirect call */
    }

loc_00563123: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00563130
 * Original: 0x00563130 - 0x0056313B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00563130: ;
    MEM32(ecx) = 0x64FF60;
    g_seh_ebp = ebp; sub_00562D10(); return; /* tail jmp 0x00562D10 */

}

/**
 * sub_00563140
 * Original: 0x00563140 - 0x00563146 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563140(void)
{

loc_00563140: ;
    eax = 0x650030;
    esp += 4; return; /* ret */

}

/**
 * sub_00563150
 * Original: 0x00563150 - 0x0056317E (46 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00563150: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    esi = 0x650030;
    ecx = 7;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if ((_flags == 0)) goto loc_00563173; /* jne: not equal / not zero */

loc_0056316E: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_00563173: ;
    MEM32(esp + 4) = edx;
    ecx = eax;
    g_seh_ebp = ebp; sub_00562D40(); return; /* tail jmp 0x00562D40 */

}

/**
 * sub_00563180
 * Original: 0x00563180 - 0x00563185 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00563180: ;
    g_seh_ebp = ebp; sub_00562FC0(); return; /* tail jmp 0x00562FC0 */

}

/**
 * sub_00563190
 * Original: 0x00563190 - 0x005631BA (42 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00563190: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00563198u); RECOMP_ABI_CALL(0x0055F0B0u, sub_0055F0B0); /* call 0x0055F0B0 */

loc_00563198: ;
    _fa = (uint32_t)(MEM8(esi + 0x44)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x44), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005631B8; /* je: equal / zero */

loc_0056319E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x70) = eax;
    MEM32(esi + 0x74) = eax;
    eax = esi + 0x58;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005631AFu); RECOMP_ABI_CALL(0x0044F880u, sub_0044F880); /* call 0x0044F880 */

loc_005631AF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xA4) = eax;

loc_005631B8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005631C0
 * Original: 0x005631C0 - 0x005631E1 (33 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005631C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005631C0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(ecx + 0x6C);
    if (CMP_EQ(_fa, _fb)) goto loc_005631D6; /* je: equal / zero */

loc_005631CB: ;
    eax = eax | 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x6C) = eax;
    esp += 8; return; /* ret 4 */

loc_005631D6: ;
    eax = eax & 0xFFFFFF7Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x6C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005631F0
 * Original: 0x005631F0 - 0x005631FD (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005631F0(void)
{

loc_005631F0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x90) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00563200
 * Original: 0x00563200 - 0x0056320D (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563200(void)
{

loc_00563200: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0xB8) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00563210
 * Original: 0x00563210 - 0x00563227 (23 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563210(void)
{

loc_00563210: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0xCC) = eax;
    MEM32(ecx + 0xD0) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00563230
 * Original: 0x00563230 - 0x00563233 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563230(void)
{

loc_00563230: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00563240
 * Original: 0x00563240 - 0x005632A7 (103 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563240(void)
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

loc_00563240: ;
    eax = MEM32(ecx + 0xB0);
    fp_push(MEMF(ecx + 0xD8)); /* fld float */
    edx = MEM32(ecx + 0xAC);
    fp_push(MEMF(ecx + 0xD4)); /* fld float */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x7C) = eax;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x84) = edx;
    MEMF(ecx + 0x9C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 0xA0) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx + 0xB4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0056329A; /* je: equal / zero */

loc_0056327A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0056328D; /* je: equal / zero */

loc_0056327D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005632A6; /* jne: not equal / not zero */

loc_00563280: ;
    eax = MEM32(ecx + 0x6C);
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x6C) = eax;
    esp += 4; return; /* ret */

loc_0056328D: ;
    edx = MEM32(ecx + 0x6C);
    edx = edx & 0xFFFFFFFAu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x6C) = edx;
    esp += 4; return; /* ret */

loc_0056329A: ;
    eax = MEM32(ecx + 0x6C);
    eax = eax & 0xFFFFFFF9u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x6C) = eax;

loc_005632A6: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005632B0
 * Original: 0x005632B0 - 0x005634C1 (529 bytes, 173 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005632B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005632B0: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xAC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x005632C7u); RECOMP_ABI_CALL(0x00562A40u, sub_00562A40); /* call 0x00562A40 */

loc_005632C7: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x650090);
    edx = esp + 0x10;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005632E2u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_005632E2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0xAC;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x005632FEu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005632FE: ;
    edx = MEM32(esi + 8);
    eax = MEM32(edx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x650080);
    ecx = esp + 0x10;
    PUSH32(esp, 0xA0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00563319u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00563319: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0xB0;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x00563335u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00563335: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x650070);
    eax = esp + 0x10;
    PUSH32(esp, 0xA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00563350u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00563350: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0xB4;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x0056336Cu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0056336C: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x650064);
    edx = esp + 0x10;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00563387u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00563387: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0xD4;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x005633A3u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005633A3: ;
    edx = MEM32(esi + 8);
    eax = MEM32(edx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x650058);
    ecx = esp + 0x10;
    PUSH32(esp, 0xA0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005633BEu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_005633BE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0xD8;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x005633DAu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005633DA: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x650048);
    eax = esp + 0x10;
    PUSH32(esp, 0xA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005633F5u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_005633F5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0xB8;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x00563411u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00563411: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x631914);
    edx = esp + 0x10;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0056342Cu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0056342C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0xCC;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x00563448u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00563448: ;
    edx = MEM32(esi + 8);
    eax = MEM32(edx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x631900);
    ecx = esp + 0x10;
    PUSH32(esp, 0xA0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00563463u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00563463: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0xD0;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x0056347Fu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0056347F: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x650038);
    eax = esp + 0x10;
    PUSH32(esp, 0xA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0056349Au); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0056349A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0xBC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xBC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x005634B6u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005634B6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005634D0
 * Original: 0x005634D0 - 0x005634EE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005634D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005634D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005634D8u); RECOMP_ABI_CALL(0x00563130u, sub_00563130); /* call 0x00563130 */

loc_005634D8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005634E8; /* je: equal / zero */

loc_005634DF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005634E5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005634E5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005634E8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005634F0
 * Original: 0x005634F0 - 0x00563517 (39 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005634F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005634F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x005634FDu); RECOMP_ABI_CALL(0x0055F7A0u, sub_0055F7A0); /* call 0x0055F7A0 */

loc_005634FD: ;
    MEM32(esi + 0x6C) = MEM32(esi + 0x6C) | 8;
    _fa = (uint32_t)(MEM32(esi + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    MEM32(esi + 0x78) = eax;
    MEM32(esi + 0x80) = eax;
    PUSH32(esp, 0x00563513u); RECOMP_ABI_CALL(0x00563240u, sub_00563240); /* call 0x00563240 */

loc_00563513: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00563520
 * Original: 0x00563520 - 0x00563525 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00563520: ;
    g_seh_ebp = ebp; sub_00563240(); return; /* tail jmp 0x00563240 */

}

/**
 * sub_00563530
 * Original: 0x00563530 - 0x0056354C (28 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563530(void)
{

loc_00563530: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0xAC) = eax;
    MEM32(ecx + 0xB0) = edx;
    PUSH32(esp, 0x00563549u); RECOMP_ABI_CALL(0x00563240u, sub_00563240); /* call 0x00563240 */

loc_00563549: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00563550
 * Original: 0x00563550 - 0x00563576 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563550(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00563550: ;
    edx = MEM32(ecx + 0x4C);
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0xAC) = eax;
    _fb = (uint32_t)(MEM32(ecx + 0x50)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ecx + 0x50);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0xB0) = edx;
    PUSH32(esp, 0x00563573u); RECOMP_ABI_CALL(0x00563240u, sub_00563240); /* call 0x00563240 */

loc_00563573: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00563580
 * Original: 0x00563580 - 0x00563592 (18 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563580(void)
{

loc_00563580: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xB4) = eax;
    PUSH32(esp, 0x0056358Fu); RECOMP_ABI_CALL(0x00563240u, sub_00563240); /* call 0x00563240 */

loc_0056358F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005635A0
 * Original: 0x005635A0 - 0x00563625 (133 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005635A0(void)
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

loc_005635A0: ;
    fp_push(MEMF(ecx + 0xBC)); /* fld float */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [eax + 8] */
    edx = eax + 8;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005635EA; /* jp: parity */

loc_005635BA: ;
    fp_push(MEMF(ecx + 0xC0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005635EA; /* jp: parity */

loc_005635CA: ;
    fp_push(MEMF(ecx + 0xC4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005635EA; /* jp: parity */

loc_005635DA: ;
    fp_push(MEMF(ecx + 0xC8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00563621; /* jnp: not parity */

loc_005635EA: ;
    eax = MEM32(edx);
    MEM32(ecx + 0xBC) = eax;
    eax = MEM32(edx + 4);
    MEM32(ecx + 0xC0) = eax;
    eax = MEM32(edx + 8);
    MEM32(ecx + 0xC4) = eax;
    edx = MEM32(edx + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ecx + 0xC8) = edx;
    PUSH32(esp, esi);
    MEM32(eax) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, 0xC00013BAu);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00563621u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0056361Eu); } /* indirect call */
    }

loc_00563621: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00563630
 * Original: 0x00563630 - 0x0056364C (28 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563630(void)
{

loc_00563630: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0xD4) = eax;
    MEM32(ecx + 0xD8) = edx;
    PUSH32(esp, 0x00563649u); RECOMP_ABI_CALL(0x00563240u, sub_00563240); /* call 0x00563240 */

loc_00563649: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00563650
 * Original: 0x00563650 - 0x005636EF (159 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00563650: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0056366Eu); RECOMP_ABI_CALL(0x00563090u, sub_00563090); /* call 0x00563090 */

loc_0056366E: ;
    ecx = esi + 0x6C;
    MEM32(esi) = 0x64FF60;
    PUSH32(esp, 0x0056367Cu); RECOMP_ABI_CALL(0x005E1AF0u, sub_005E1AF0); /* call 0x005E1AF0 */

loc_0056367C: ;
    ecx = MEM32(esp + 0x14);
    eax = 0x7D1;
    MEM32(esi + 0xAC) = eax;
    MEM32(esi + 0xB0) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 0xB8) = LO8(eax);
    MEM32(esi + 0xB4) = 1;
    MEM32(esi + 0xBC) = eax;
    MEM32(esi + 0xC0) = eax;
    MEM32(esi + 0xC4) = eax;
    MEM32(esi + 0xC8) = 0x3F000000;
    eax = 3;
    MEM32(esi + 0xCC) = eax;
    MEM32(esi + 0xD0) = eax;
    eax = 0x3F800000;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esi + 0xD4) = eax;
    MEM32(esi + 0xD8) = eax;
    PUSH32(esp, 0x005636E9u); RECOMP_ABI_CALL(0x005634F0u, sub_005634F0); /* call 0x005634F0 */

loc_005636E9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_005636F0
 * Original: 0x005636F0 - 0x00563774 (132 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005636F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005636F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x68);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00563709; /* je: equal / zero */

loc_005636FB: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00563702u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005636FFu); } /* indirect call */
    }

loc_00563702: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00563709u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00563706u); } /* indirect call */
    }

loc_00563709: ;
    eax = MEM32(esi + 0x68);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esi + 0x68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00563739; /* je: equal / zero */

loc_00563734: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00563739u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00563736u); } /* indirect call */
    }

loc_00563739: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC8); PUSH32(esp, 0x0056374Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00563747u); } /* indirect call */
    }

loc_0056374D: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056375A; /* je: equal / zero */

loc_00563755: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0056375Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00563757u); } /* indirect call */
    }

loc_0056375A: ;
    esi = MEM32(esi + 0x68);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056376F; /* je: equal / zero */

loc_00563761: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00563768u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00563765u); } /* indirect call */
    }

loc_00563768: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0056376Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0056376Cu); } /* indirect call */
    }

loc_0056376F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00563780
 * Original: 0x00563780 - 0x00563890 (272 bytes, 76 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563780(void)
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

loc_00563780: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00563789u); RECOMP_ABI_CALL(0x005C3530u, sub_005C3530); /* call 0x005C3530 */

loc_00563789: ;
    eax = MEM32(esi + 0xE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005637AF; /* jne: not equal / not zero */

loc_00563793: ;
    PUSH32(esp, 0x6500B0);
    PUSH32(esp, 0x0056379Du); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_0056379D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x005637A6u); RECOMP_ABI_CALL(0x005E11E0u, sub_005E11E0); /* call 0x005E11E0 */

loc_005637A6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xE0) = eax;

loc_005637AF: ;
    _fa = (uint32_t)(MEM8(esi + 0x44)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x44), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0056388D; /* je: equal / zero */

loc_005637B9: ;
    SET_LO8(eax, MEM8(esi + 0x48));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056388D; /* je: equal / zero */

loc_005637C4: ;
    SET_LO8(eax, MEM8(esi + 0xB8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00563859; /* je: equal / zero */

loc_005637D2: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0xA4);
    eax = esi + 0xBC;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005637E6u); RECOMP_ABI_CALL(0x0044F880u, sub_0044F880); /* call 0x0044F880 */

loc_005637E6: ;
    edx = MEM32(esi + 0xD0);
    ecx = MEM32(esi + 0xDC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(esi + 0xA4) = eax;
    eax = MEM32(esi + 0x50);
    edi = esi + 0x6C;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3F800000);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xCC);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x4C);
    MEM32(esp + 0x24) = edx;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0xE0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x2C) = eax;
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00563843u); RECOMP_ABI_CALL(0x005DF5B0u, sub_005DF5B0); /* call 0x005DF5B0 */

loc_00563843: ;
    MEM32(esi + 0xA4) = ebp;
    MEM32(edi + 4) = 0;
    MEM32(edi + 8) = 0;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00563859: ;
    edx = MEM32(esi + 0xDC);
    fp_push((double)SMEM32(esi + 0x50)); /* fild */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi + 0x6C;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xE0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esi + 0x4C)); /* fild */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0056388Du); RECOMP_ABI_CALL(0x005DF5B0u, sub_005DF5B0); /* call 0x005DF5B0 */

loc_0056388D: ;
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
 * sub_00563890
 * Original: 0x00563890 - 0x005638B4 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563890(void)
{

loc_00563890: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = 0x8582C8;
    PUSH32(esp, 0x005638A2u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_005638A2: ;
    eax = MEM32(eax + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xD0); PUSH32(esp, 0x005638B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005638AAu); } /* indirect call */
    }

loc_005638B0: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005638C0
 * Original: 0x005638C0 - 0x00563926 (102 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005638C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005638C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x101);
    eax = edi + edi + 2;
    PUSH32(esp, 0x6500E4);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x005638DDu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005638DD: ;
    ebx = eax;
    eax = MEM32(esi + 0xE4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005638F8; /* jle: less or equal (signed <=) */

loc_005638EC: ;
    ecx = MEM32(esi + 0xDC);
    MEM16(ecx + edi * 2) = 0;

loc_005638F8: ;
    edx = MEM32(esi + 0xDC);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00563905u); RECOMP_ABI_CALL(0x00619BC5u, sub_00619BC5); /* call 0x00619BC5 */

loc_00563905: ;
    eax = MEM32(esi + 0xDC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00563911u); RECOMP_ABI_CALL(0x00577350u, sub_00577350); /* call 0x00577350 */

loc_00563911: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xE4) = edi;
    POP32(esp, edi);
    MEM32(esi + 0xDC) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00563930
 * Original: 0x00563930 - 0x00563958 (40 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563930(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00563930: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0056393Fu); RECOMP_ABI_CALL(0x005E1010u, sub_005E1010); /* call 0x005E1010 */

loc_0056393F: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0056394Bu); RECOMP_ABI_CALL(0x005E11E0u, sub_005E11E0); /* call 0x005E11E0 */

loc_0056394B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xE0) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00563960
 * Original: 0x00563960 - 0x005639FA (154 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563960(void)
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

loc_00563960: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 4;
    PUSH32(esp, 0x0056396Fu); RECOMP_ABI_CALL(0x005E1AF0u, sub_005E1AF0); /* call 0x005E1AF0 */

loc_0056396F: ;
    fp_push(MEMF(esi + 0xD8)); /* fld float */
    ecx = MEM32(esi + 0xB0);
    edx = MEM32(esi + 0xAC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esi + 0xD4);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esp + 8);
    PUSH32(esp, 1);
    MEM32(esp + 0x3C) = ecx;
    edx = edx & 0xFFFFFFFAu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xE0);
    PUSH32(esp, 0x3F800000);
    edx = edx | 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x3F800000);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esi + 0xDC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x005639DFu); RECOMP_ABI_CALL(0x005DF5B0u, sub_005DF5B0); /* call 0x005DF5B0 */

loc_005639DF: ;
    eax = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x4C);
    MEM32(eax) = ecx;
    eax = MEM32(esp + 0x30);
    MEM32(edx) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00563A00
 * Original: 0x00563A00 - 0x00563A47 (71 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00563A00: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x3A);
    PUSH32(esp, 0x6500F4);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x00563A0Fu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00563A0F: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00563A30; /* je: equal / zero */

loc_00563A18: ;
    ecx = esi;
    PUSH32(esp, 0x00563A1Fu); RECOMP_ABI_CALL(0x00606090u, sub_00606090); /* call 0x00606090 */

loc_00563A1F: ;
    MEM32(esi) = 0x6500A0;
    MEM32(esi + 8) = 0;
    ecx = esi;
    goto loc_00563A32;

loc_00563A30: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00563A32: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = MEM32(esp + 8);
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00563A41; /* je: equal / zero */

loc_00563A3C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00563A41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00563A3Eu); } /* indirect call */
    }

loc_00563A41: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00563A50
 * Original: 0x00563A50 - 0x00563A8B (59 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00563A50: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xE0);
    PUSH32(esp, eax);
    MEM32(esi) = 0x650108;
    PUSH32(esp, 0x00563A65u); RECOMP_ABI_CALL(0x005E1010u, sub_005E1010); /* call 0x005E1010 */

loc_00563A65: ;
    ecx = MEM32(esi + 0xDC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00563A71u); RECOMP_ABI_CALL(0x00577350u, sub_00577350); /* call 0x00577350 */

loc_00563A71: ;
    ecx = MEM32(esi + 0xE8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00563A83; /* je: equal / zero */

loc_00563A7E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00563A83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00563A80u); } /* indirect call */
    }

loc_00563A83: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00563130(); return; /* tail jmp 0x00563130 */

}

/**
 * sub_00563A90
 * Original: 0x00563A90 - 0x00563A96 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563A90(void)
{

loc_00563A90: ;
    eax = 0x6501F0;
    esp += 4; return; /* ret */

}

/**
 * sub_00563AA0
 * Original: 0x00563AA0 - 0x00563AE3 (67 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563AA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00563AA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = ecx;
    edi = eax;
    esi = 0x6501F0;
    ecx = 0xE;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_00563ACD; /* je: equal / zero */

loc_00563ABB: ;
    edi = eax;
    esi = 0x650030;
    ecx = 7;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00563AD5; /* jne: not equal / not zero */

loc_00563ACD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00563AD5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(esp + 4) = eax;
    ecx = edx;
    g_seh_ebp = ebp; sub_00562D40(); return; /* tail jmp 0x00562D40 */

}

/**
 * sub_00563AF0
 * Original: 0x00563AF0 - 0x00563B99 (169 bytes, 60 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00563AF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00563AF0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    eax = ebp;
    PUSH32(esp, edi);
    esi = ecx;
    edx = eax + 1;
    edi = edi;

loc_00563B00: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00563B00; /* jne: not equal / not zero */

loc_00563B07: ;
    edi = MEM32(esi + 0xDC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00563B34; /* jle: less or equal (signed <=) */

loc_00563B17: ;
    goto loc_00563B20;

    /* nop */

loc_00563B20: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(eax + ebp));
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(edi + eax * 2) = LO16(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00563B20; /* jl: less (signed <) */

loc_00563B34: ;
    eax = ebp;
    edx = eax + 1;
    /* nop */

loc_00563B40: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00563B40; /* jne: not equal / not zero */

loc_00563B47: ;
    ecx = MEM32(esi + 0xDC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(ecx + eax * 2) = 0;
    edx = MEM32(esi + 0xE8);
    eax = MEM32(esi + 0xDC);
    MEM32(edx + 8) = eax;
    ecx = MEM32(esi + 0xE8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00563B77; /* je: equal / zero */

loc_00563B72: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00563B77u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00563B74u); } /* indirect call */
    }

loc_00563B77: ;
    eax = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xD4); PUSH32(esp, 0x00563B86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00563B80u); } /* indirect call */
    }

loc_00563B86: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_00563B96; /* je: equal / zero */

loc_00563B91: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00563B96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00563B93u); } /* indirect call */
    }

loc_00563B96: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00563BA0
 * Original: 0x00563BA0 - 0x00563BE3 (67 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00563BA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi + 0xE8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esi + 0xE8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00563BC3; /* je: equal / zero */

loc_00563BBE: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00563BC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00563BC0u); } /* indirect call */
    }

loc_00563BC3: ;
    eax = MEM32(esi);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xD4); PUSH32(esp, 0x00563BD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00563BCCu); } /* indirect call */
    }

loc_00563BD2: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00563BE0; /* je: equal / zero */

loc_00563BDB: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00563BE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00563BDDu); } /* indirect call */
    }

loc_00563BE0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00563BF0
 * Original: 0x00563BF0 - 0x00563C40 (80 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00563BF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    eax = MEM32(eax + 8);
    esi = ecx;
    ecx = MEM32(esi + 0xDC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00563C0Au); RECOMP_ABI_CALL(0x0061A5E1u, sub_0061A5E1); /* call 0x0061A5E1 */

loc_00563C0A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00563C3B; /* je: equal / zero */

loc_00563C11: ;
    edx = MEM32(edi);
    eax = MEM32(edx + 8);
    ecx = MEM32(esi + 0xDC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00563C23u); RECOMP_ABI_CALL(0x00619BC5u, sub_00619BC5); /* call 0x00619BC5 */

loc_00563C23: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(eax) = 0;
    edx = MEM32(esi);
    PUSH32(esp, 0xC0001392u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00563C3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00563C38u); } /* indirect call */
    }

loc_00563C3B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00563C40
 * Original: 0x00563C40 - 0x00563C5E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00563C40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00563C48u); RECOMP_ABI_CALL(0x00563A50u, sub_00563A50); /* call 0x00563A50 */

loc_00563C48: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00563C58; /* je: equal / zero */

loc_00563C4F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00563C55u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00563C55: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00563C58: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00563C60
 * Original: 0x00563C60 - 0x00563D5A (250 bytes, 86 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00563C60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00563C60: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x6500E4);
    PUSH32(esp, 0xC);
    ebp = ecx;
    PUSH32(esp, 0x00563C72u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00563C72: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00563C91; /* je: equal / zero */

loc_00563C7B: ;
    ecx = esi;
    PUSH32(esp, 0x00563C82u); RECOMP_ABI_CALL(0x00606090u, sub_00606090); /* call 0x00606090 */

loc_00563C82: ;
    MEM32(esi) = 0x6500A0;
    MEM32(esi + 8) = 0;
    goto loc_00563C93;

loc_00563C91: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00563C93: ;
    ecx = MEM32(ebp + 0xE8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00563CB7; /* je: equal / zero */

loc_00563C9D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00563CA6; /* je: equal / zero */

loc_00563CA1: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00563CA6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00563CA3u); } /* indirect call */
    }

loc_00563CA6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebp + 0xE8) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00563CB7; /* je: equal / zero */

loc_00563CB0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00563CB7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00563CB4u); } /* indirect call */
    }

loc_00563CB7: ;
    _fa = (uint32_t)(MEM32(ebp + 0xE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xE4), 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_00563CDF; /* jne: not equal / not zero */

loc_00563CC5: ;
    eax = edi;
    edx = eax + 1;
    /* nop */

loc_00563CD0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00563CD0; /* jne: not equal / not zero */

loc_00563CD7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0xE4) = eax;

loc_00563CDF: ;
    eax = MEM32(ebp + 0xE4);
    PUSH32(esp, 0x45);
    ecx = eax + eax + 2;
    PUSH32(esp, 0x6500E4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00563CF6u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00563CF6: ;
    esi = eax;
    ecx = edi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xDC) = esi;
    edx = ecx + 1;

loc_00563D06: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00563D06; /* jne: not equal / not zero */

loc_00563D0D: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00563D33; /* jle: less or equal (signed <=) */

loc_00563D17: ;
    goto loc_00563D20;

    /* nop */

loc_00563D20: ;
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
    if (CMP_L(_fas, _fbs)) goto loc_00563D20; /* jl: less (signed <) */

loc_00563D33: ;
    eax = edi;
    edx = eax + 1;
    POP32(esp, edi);
    /* nop */

loc_00563D40: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00563D40; /* jne: not equal / not zero */

loc_00563D47: ;
    ecx = MEM32(ebp + 0xDC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);
    MEM16(ecx + eax * 2) = 0;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00563D60
 * Original: 0x00563D60 - 0x00563DD0 (112 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00563D60: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x44)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x44), 1 (8-bit) */
    eax = MEM32(esp + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_00563DBA; /* je: equal / zero */

loc_00563D6D: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0001392u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA0001392u (32-bit) */
    ecx = MEM32(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00563D8D; /* je: equal / zero */

loc_00563D7B: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00563D89u); RECOMP_ABI_CALL(0x00563180u, sub_00563180); /* call 0x00563180 */

loc_00563D89: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00563D8D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00563DCC; /* je: equal / zero */

loc_00563D91: ;
    MEM32(esp + 0x10) = ecx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00563D9Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00563D97u); } /* indirect call */
    }

loc_00563D9A: ;
    eax = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xD4); PUSH32(esp, 0x00563DA9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00563DA3u); } /* indirect call */
    }

loc_00563DA9: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00563DCC; /* je: equal / zero */

loc_00563DB1: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00563DB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00563DB3u); } /* indirect call */
    }

loc_00563DB6: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00563DBA: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00563DCCu); RECOMP_ABI_CALL(0x00563180u, sub_00563180); /* call 0x00563180 */

loc_00563DCC: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00563DD0
 * Original: 0x00563DD0 - 0x00563E29 (89 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563DD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00563DD0: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    esi = ecx;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00563DF3u); RECOMP_ABI_CALL(0x00563650u, sub_00563650); /* call 0x00563650 */

loc_00563DF3: ;
    edx = MEM32(esp + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xDC) = eax;
    MEM32(esi + 0xE0) = eax;
    MEM32(esi) = 0x650108;
    MEM32(esi + 0xE4) = edx;
    MEM32(esi + 0xE8) = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00563E23u); RECOMP_ABI_CALL(0x00563C60u, sub_00563C60); /* call 0x00563C60 */

loc_00563E23: ;
    eax = esi;
    POP32(esp, esi);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00563E30
 * Original: 0x00563E30 - 0x00563E90 (96 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563E30(void)
{

loc_00563E30: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00563E50u); RECOMP_ABI_CALL(0x00563650u, sub_00563650); /* call 0x00563650 */

loc_00563E50: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    MEM32(esi + 0xE4) = ecx;
    MEM32(esi) = 0x650108;
    MEM32(esi + 0xDC) = 0;
    MEM32(esi + 0xE0) = 0;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esi + 0xE8) = 0;
    PUSH32(esp, 0x00563E8Au); RECOMP_ABI_CALL(0x00563C60u, sub_00563C60); /* call 0x00563C60 */

loc_00563E8A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00563E90
 * Original: 0x00563E90 - 0x00563F5E (206 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563E90(void)
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

loc_00563E90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00563E99u); RECOMP_ABI_CALL(0x005C3530u, sub_005C3530); /* call 0x005C3530 */

loc_00563E99: ;
    _fa = (uint32_t)(MEM8(esi + 0x44)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x44), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00563F5B; /* je: equal / zero */

loc_00563EA3: ;
    SET_LO8(eax, MEM8(esi + 0x48));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00563F5B; /* je: equal / zero */

loc_00563EAE: ;
    SET_LO8(eax, MEM8(esi + 0xDC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00563F5B; /* je: equal / zero */

loc_00563EBC: ;
    SET_LO8(eax, MEM8(esi + 0xB8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00563F3A; /* je: equal / zero */

loc_00563EC6: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0xA4);
    eax = esi + 0xBC;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00563EDAu); RECOMP_ABI_CALL(0x0044F880u, sub_0044F880); /* call 0x0044F880 */

loc_00563EDA: ;
    ecx = MEM32(esi + 0xD0);
    edx = MEM32(esi + 0xCC);
    MEM32(esi + 0xA4) = eax;
    eax = MEM32(esi + 0x50);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esi + 0x4C);
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    PUSH32(esp, 0);
    edi = esi + 0x6C;
    PUSH32(esp, edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x1C) = edx;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    ecx = esi + 0x110;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00563F24u); RECOMP_ABI_CALL(0x005E26A0u, sub_005E26A0); /* call 0x005E26A0 */

loc_00563F24: ;
    MEM32(esi + 0xA4) = ebp;
    MEM32(edi + 4) = 0;
    MEM32(edi + 8) = 0;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00563F3A: ;
    fp_push((double)SMEM32(esi + 0x50)); /* fild */
    PUSH32(esp, 0);
    eax = esi + 0x6C;
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi + 0x110;
    fp_push((double)SMEM32(esi + 0x4C)); /* fild */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00563F5Bu); RECOMP_ABI_CALL(0x005E26A0u, sub_005E26A0); /* call 0x005E26A0 */

loc_00563F5B: ;
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
 * sub_00563F60
 * Original: 0x00563F60 - 0x00563F7F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563F60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00563F60: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00563F7C; /* je: equal / zero */

loc_00563F67: ;
    eax = ecx + 0xDC;
    MEM32(esp + 4) = eax;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x110;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_005E2680(); return; /* tail jmp 0x005E2680 */

loc_00563F7C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00563F80
 * Original: 0x00563F80 - 0x00563FFA (122 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563F80(void)
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

loc_00563F80: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 4;
    PUSH32(esp, 0x00563F8Fu); RECOMP_ABI_CALL(0x005E1AF0u, sub_005E1AF0); /* call 0x005E1AF0 */

loc_00563F8F: ;
    fp_push(MEMF(esi + 0xD8)); /* fld float */
    ecx = MEM32(esi + 0xB0);
    edx = MEM32(esi + 0xAC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esi + 0xD4);
    ecx = ecx & 0xFFFFFFFAu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x1C) = edx;
    ecx = ecx | 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = esp + 4;
    MEM32(esp + 0x34) = eax;
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, edx);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi + 0x110;
    PUSH32(esp, 0x00563FF3u); RECOMP_ABI_CALL(0x005E2700u, sub_005E2700); /* call 0x005E2700 */

loc_00563FF3: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00564000
 * Original: 0x00564000 - 0x00564047 (71 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00564000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00564000: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4E);
    PUSH32(esp, 0x6500F4);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x0056400Fu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0056400F: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564030; /* je: equal / zero */

loc_00564018: ;
    ecx = esi;
    PUSH32(esp, 0x0056401Fu); RECOMP_ABI_CALL(0x00606090u, sub_00606090); /* call 0x00606090 */

loc_0056401F: ;
    MEM32(esi) = 0x650200;
    MEM32(esi + 8) = 0x62DF21;
    ecx = esi;
    goto loc_00564032;

loc_00564030: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00564032: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = MEM32(esp + 8);
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00564041; /* je: equal / zero */

loc_0056403C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00564041u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0056403Eu); } /* indirect call */
    }

loc_00564041: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00564050
 * Original: 0x00564050 - 0x00564070 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00564050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00564050: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x650210;
    ecx = MEM32(esi + 0x114);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564068; /* je: equal / zero */

loc_00564063: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00564068u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00564065u); } /* indirect call */
    }

loc_00564068: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00563130(); return; /* tail jmp 0x00563130 */

}

/**
 * sub_00564070
 * Original: 0x00564070 - 0x00564076 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00564070(void)
{

loc_00564070: ;
    eax = 0x6502E8;
    esp += 4; return; /* ret */

}

/**
 * sub_00564080
 * Original: 0x00564080 - 0x005640C3 (67 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00564080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00564080: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = ecx;
    edi = eax;
    esi = 0x6502E8;
    ecx = 0x11;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_005640AD; /* je: equal / zero */

loc_0056409B: ;
    edi = eax;
    esi = 0x650030;
    ecx = 7;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_005640B5; /* jne: not equal / not zero */

loc_005640AD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_005640B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(esp + 4) = eax;
    ecx = edx;
    g_seh_ebp = ebp; sub_00562D40(); return; /* tail jmp 0x00562D40 */

}

/**
 * sub_005640D0
 * Original: 0x005640D0 - 0x00564113 (67 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005640D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005640D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi + 0x114);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esi + 0x114);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_005640F3; /* je: equal / zero */

loc_005640EE: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x005640F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005640F0u); } /* indirect call */
    }

loc_005640F3: ;
    eax = MEM32(esi);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xD0); PUSH32(esp, 0x00564102u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005640FCu); } /* indirect call */
    }

loc_00564102: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00564110; /* je: equal / zero */

loc_0056410B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00564110u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0056410Du); } /* indirect call */
    }

loc_00564110: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00564120
 * Original: 0x00564120 - 0x005641A7 (135 bytes, 57 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00564120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00564120: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax);
    ecx = MEM32(ecx + 8);
    ebp = edi + 0xDC;
    esi = ecx;
    eax = ebp;
    /* nop */

loc_00564140: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00564164; /* jne: not equal / not zero */

loc_00564148: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00564160; /* je: equal / zero */

loc_0056414C: ;
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00564164; /* jne: not equal / not zero */

loc_00564156: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00564140; /* jne: not equal / not zero */

loc_00564160: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00564169;

loc_00564164: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00564169: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_005641A0; /* je: equal / zero */

loc_0056416D: ;
    edx = ebp;
    /* nop */

loc_00564170: ;
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
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00564170; /* jne: not equal / not zero */

loc_0056417A: ;
    PUSH32(esp, ebp);
    ecx = edi + 0x110;
    PUSH32(esp, 0x00564186u); RECOMP_ABI_CALL(0x005E2680u, sub_005E2680); /* call 0x005E2680 */

loc_00564186: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = 0;
    eax = MEM32(esp + 0x18);
    edx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0xC000139Cu);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x005641A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0056419Du); } /* indirect call */
    }

loc_005641A0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005641B0
 * Original: 0x005641B0 - 0x005641CE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005641B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005641B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005641B8u); RECOMP_ABI_CALL(0x00564050u, sub_00564050); /* call 0x00564050 */

loc_005641B8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005641C8; /* je: equal / zero */

loc_005641BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005641C5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005641C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005641C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005641D0
 * Original: 0x005641D0 - 0x00564267 (151 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005641D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005641D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x38);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x6502FC);
    PUSH32(esp, 0xC);
    MEM32(esi + 4) = ecx;
    PUSH32(esp, 0x005641E9u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005641E9: ;
    edi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564208; /* je: equal / zero */

loc_005641F2: ;
    ecx = edi;
    PUSH32(esp, 0x005641F9u); RECOMP_ABI_CALL(0x00606090u, sub_00606090); /* call 0x00606090 */

loc_005641F9: ;
    MEM32(edi) = 0x650200;
    MEM32(edi + 8) = 0x62DF21;
    goto loc_0056420A;

loc_00564208: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0056420A: ;
    ecx = MEM32(esi + 0x114);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056422E; /* je: equal / zero */

loc_00564214: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056421D; /* je: equal / zero */

loc_00564218: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0056421Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0056421Au); } /* indirect call */
    }

loc_0056421D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0x114) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0056422E; /* je: equal / zero */

loc_00564227: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0056422Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0056422Bu); } /* indirect call */
    }

loc_0056422E: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi + 0xDC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00564254; /* je: equal / zero */

loc_0056423D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xD4); PUSH32(esp, 0x00564248u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00564242u); } /* indirect call */
    }

loc_00564248: ;
    eax = MEM32(esi + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00564254: ;
    eax = MEM32(esi + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM8(esi + 0xDC) = 0;
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00564270
 * Original: 0x00564270 - 0x00564300 (144 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00564270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00564270: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x44)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x44), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005642E6; /* je: equal / zero */

loc_00564279: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA000139Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA000139Cu (32-bit) */
    edx = MEM32(esp + 0x10);
    ecx = MEM32(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_005642B9; /* je: equal / zero */

loc_0056428A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0001770u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA0001770u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005642A3; /* je: equal / zero */

loc_00564291: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0056429Fu); RECOMP_ABI_CALL(0x00563180u, sub_00563180); /* call 0x00563180 */

loc_0056429F: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_005642A3: ;
    ecx = esi + 0xDC;
    PUSH32(esp, ecx);
    ecx = esi + 0x110;
    PUSH32(esp, 0x005642B5u); RECOMP_ABI_CALL(0x005E2680u, sub_005E2680); /* call 0x005E2680 */

loc_005642B5: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_005642B9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005642FC; /* je: equal / zero */

loc_005642BD: ;
    MEM32(esp + 0x10) = ecx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x005642C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005642C3u); } /* indirect call */
    }

loc_005642C6: ;
    eax = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xD0); PUSH32(esp, 0x005642D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005642CFu); } /* indirect call */
    }

loc_005642D5: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005642FC; /* je: equal / zero */

loc_005642DD: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x005642E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005642DFu); } /* indirect call */
    }

loc_005642E2: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_005642E6: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x005642FCu); RECOMP_ABI_CALL(0x00563180u, sub_00563180); /* call 0x00563180 */

loc_005642FC: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00564300
 * Original: 0x00564300 - 0x00564350 (80 bytes, 25 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00564300(void)
{

loc_00564300: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    esi = ecx;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00564323u); RECOMP_ABI_CALL(0x00563650u, sub_00563650); /* call 0x00563650 */

loc_00564323: ;
    ecx = esi + 0x110;
    MEM32(esi) = 0x650210;
    PUSH32(esp, 0x00564334u); RECOMP_ABI_CALL(0x005E2670u, sub_005E2670); /* call 0x005E2670 */

loc_00564334: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esi + 0x114) = 0;
    PUSH32(esp, 0x0056434Au); RECOMP_ABI_CALL(0x005641D0u, sub_005641D0); /* call 0x005641D0 */

loc_0056434A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00564350
 * Original: 0x00564350 - 0x00564413 (195 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00564350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00564350: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x4C);
    PUSH32(esp, edi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00564376; /* jle: less or equal (signed <=) */

loc_0056435F: ;
    esi = MEM32(ecx + 0x58);
    PUSH32(esp, ebp);

loc_00564363: ;
    MEM32(esi + eax * 8 + 4) = edx;
    esi = MEM32(ecx + 0x58);
    _fb = (uint32_t)(MEM32(esi + eax * 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esi + eax * 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(ecx + 0x4C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00564363; /* jl: less (signed <) */

loc_00564375: ;
    POP32(esp, ebp);

loc_00564376: ;
    edx = MEM32(ecx + 0x50);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00564394; /* jle: less or equal (signed <=) */

loc_0056437F: ;
    edx = MEM32(ecx + 0x54);

loc_00564382: ;
    MEM32(edx + eax * 8 + 4) = edi;
    edx = MEM32(ecx + 0x54);
    _fb = (uint32_t)(MEM32(edx + eax * 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(edx + eax * 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ecx + 0x50);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00564382; /* jl: less (signed <) */

loc_00564394: ;
    eax = MEM32(ecx + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056440C; /* jne: not equal / not zero */

loc_0056439B: ;
    edx = MEM32(ecx + 0x58);
    eax = MEM32(ecx + 0x8C);
    esi = MEM32(ecx + 0x70);
    eax = edx + eax * 8;
    edx = MEM32(eax + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas >= 0)) goto loc_005643B6; /* jns: not sign (positive) */

loc_005643B1: ;
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ecx + 0x70) = edx;

loc_005643B6: ;
    esi = MEM32(eax);
    edi = MEM32(ecx + 0x70);
    edx = MEM32(eax + 4);
    eax = MEM32(ecx + 0x68);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005643D0; /* jle: less or equal (signed <=) */

loc_005643C9: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx + 0x70) = eax;

loc_005643D0: ;
    edx = MEM32(ecx + 0x54);
    eax = MEM32(ecx + 0x90);
    esi = MEM32(ecx + 0x74);
    eax = edx + eax * 8;
    edx = MEM32(eax + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas >= 0)) goto loc_005643EB; /* jns: not sign (positive) */

loc_005643E6: ;
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ecx + 0x74) = edx;

loc_005643EB: ;
    esi = MEM32(eax);
    edx = MEM32(eax + 4);
    edi = MEM32(ecx + 0x74);
    eax = MEM32(ecx + 0x6C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM8(ecx + 0x5C) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00564410; /* jle: less or equal (signed <=) */

loc_00564402: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    MEM32(ecx + 0x74) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0056440C: ;
    MEM8(ecx + 0x5C) = 0;

loc_00564410: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00564420
 * Original: 0x00564420 - 0x0056446D (77 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00564420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00564420: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x48);
    PUSH32(esp, eax);
    MEM32(esi) = 0x650310;
    PUSH32(esp, 0x00564432u); RECOMP_ABI_CALL(0x00577350u, sub_00577350); /* call 0x00577350 */

loc_00564432: ;
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0056443Bu); RECOMP_ABI_CALL(0x00577350u, sub_00577350); /* call 0x00577350 */

loc_0056443B: ;
    edx = MEM32(esi + 0x58);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00564444u); RECOMP_ABI_CALL(0x00577350u, sub_00577350); /* call 0x00577350 */

loc_00564444: ;
    ecx = MEM32(esi + 0x98);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564456; /* je: equal / zero */

loc_00564451: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00564456u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00564453u); } /* indirect call */
    }

loc_00564456: ;
    ecx = MEM32(esi + 0x94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564465; /* je: equal / zero */

loc_00564460: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00564465u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00564462u); } /* indirect call */
    }

loc_00564465: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00560CF0(); return; /* tail jmp 0x00560CF0 */

}

/**
 * sub_00564470
 * Original: 0x00564470 - 0x00564476 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00564470(void)
{

loc_00564470: ;
    eax = 0x650398;
    esp += 4; return; /* ret */

}

/**
 * sub_00564480
 * Original: 0x00564480 - 0x005644F9 (121 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00564480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00564480: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ecx;
    edi = edx;
    esi = 0x650398;
    ecx = 8;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_005644A3; /* jne: not equal / not zero */

loc_0056449B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_005644A3: ;
    esi = edx;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x005644AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005644A9u); } /* indirect call */
    }

loc_005644AF: ;
    /* nop */

loc_005644B0: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_005644E5; /* jne: not equal / not zero */

loc_005644BA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_005644D4; /* je: equal / zero */

loc_005644BE: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_005644E5; /* jne: not equal / not zero */

loc_005644CA: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_005644B0; /* jne: not equal / not zero */

loc_005644D4: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_005644E5: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00564500
 * Original: 0x00564500 - 0x0056451E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00564500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00564500: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00564508u); RECOMP_ABI_CALL(0x00564420u, sub_00564420); /* call 0x00564420 */

loc_00564508: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00564518; /* je: equal / zero */

loc_0056450F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00564515u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00564515: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00564518: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00564520
 * Original: 0x00564520 - 0x005646AA (394 bytes, 142 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00564520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00564520: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x4C);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0x14));
    PUSH32(esp, 0x4A);
    eax = esi;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x6503A0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0056453Fu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0056453F: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564566; /* je: equal / zero */

loc_00564548: ;
    edx = esi + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00564568; /* jl: less (signed <) */

loc_0056454F: ;
    ecx = eax + 8;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00564553: ;
    MEM32(ecx + -8) = ebx;
    MEM32(ecx + -4) = ebx;
    MEM32(ecx) = ebx;
    MEM32(ecx + 4) = ebx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00564553; /* jne: not equal / not zero */

loc_00564564: ;
    goto loc_00564568;

loc_00564566: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00564568: ;
    esi = MEM32(edi + 0x50);
    PUSH32(esp, 0x4B);
    ecx = esi * 8;
    PUSH32(esp, 0x6503A0);
    PUSH32(esp, ecx);
    MEM32(edi + 0x48) = eax;
    PUSH32(esp, 0x00564582u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00564582: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005645A4; /* je: equal / zero */

loc_00564589: ;
    edx = esi + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    ecx = eax;
    if (CMP_L(_fas, _fbs)) goto loc_005645A6; /* jl: less (signed <) */

loc_00564592: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00564593: ;
    MEM32(ecx) = 0x14;
    MEM32(ecx + 4) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00564593; /* jne: not equal / not zero */

loc_005645A2: ;
    goto loc_005645A6;

loc_005645A4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005645A6: ;
    esi = MEM32(edi + 0x4C);
    PUSH32(esp, 0x4C);
    edx = esi * 8;
    PUSH32(esp, 0x6503A0);
    PUSH32(esp, edx);
    MEM32(edi + 0x54) = eax;
    PUSH32(esp, 0x005645C0u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005645C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005645E2; /* je: equal / zero */

loc_005645C7: ;
    edx = esi + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    ecx = eax;
    if (CMP_L(_fas, _fbs)) goto loc_005645E4; /* jl: less (signed <) */

loc_005645D0: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_005645D1: ;
    MEM32(ecx) = 0x14;
    MEM32(ecx + 4) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005645D1; /* jne: not equal / not zero */

loc_005645E0: ;
    goto loc_005645E4;

loc_005645E2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005645E4: ;
    PUSH32(esp, 0x4E);
    PUSH32(esp, 0x6503A0);
    PUSH32(esp, 0x10);
    MEM32(edi + 0x58) = eax;
    PUSH32(esp, 0x005645F5u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005645F5: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564613; /* je: equal / zero */

loc_005645FE: ;
    ecx = esi;
    PUSH32(esp, 0x00564605u); RECOMP_ABI_CALL(0x00606090u, sub_00606090); /* call 0x00606090 */

loc_00564605: ;
    MEM32(esi) = 0x64FDB4;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    goto loc_00564615;

loc_00564613: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00564615: ;
    ecx = MEM32(edi + 0x94);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564639; /* je: equal / zero */

loc_0056461F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564628; /* je: equal / zero */

loc_00564623: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00564628u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00564625u); } /* indirect call */
    }

loc_00564628: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(edi + 0x94) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00564639; /* je: equal / zero */

loc_00564632: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00564639u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00564636u); } /* indirect call */
    }

loc_00564639: ;
    PUSH32(esp, 0x4F);
    PUSH32(esp, 0x6503A0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00564647u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00564647: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564665; /* je: equal / zero */

loc_00564650: ;
    ecx = esi;
    PUSH32(esp, 0x00564657u); RECOMP_ABI_CALL(0x00606090u, sub_00606090); /* call 0x00606090 */

loc_00564657: ;
    MEM32(esi) = 0x64FDB4;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    goto loc_00564667;

loc_00564665: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00564667: ;
    ecx = MEM32(edi + 0x98);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056468B; /* je: equal / zero */

loc_00564671: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056467A; /* je: equal / zero */

loc_00564675: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0056467Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00564677u); } /* indirect call */
    }

loc_0056467A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(edi + 0x98) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0056468B; /* je: equal / zero */

loc_00564684: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0056468Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00564688u); } /* indirect call */
    }

loc_0056468B: ;
    PUSH32(esp, 0x2710);
    ecx = edi;
    PUSH32(esp, 0x00564697u); RECOMP_ABI_CALL(0x0055F7A0u, sub_0055F7A0); /* call 0x0055F7A0 */

loc_00564697: ;
    PUSH32(esp, 1);
    ecx = edi;
    MEM8(edi + 0x5C) = 1;
    PUSH32(esp, 0x005646A4u); RECOMP_ABI_CALL(0x0055F220u, sub_0055F220); /* call 0x0055F220 */

loc_005646A4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005646B0
 * Original: 0x005646B0 - 0x00564803 (339 bytes, 124 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005646B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005646B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x50);
    ecx = MEM32(esi + 0x48);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebp);
    edx = MEM32(esi + 0x54);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = 0;
    eax = MEM32(edx + ebx * 8 + 4);
    edx = MEM32(ecx + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x74);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi + 0x64);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(esi + 0x58);
    edi = MEM32(edi + ebp * 8 + 4);
    _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ecx + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(esi + 0x70)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esi + 0x70);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x60);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi + 0x94);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 8) = edi;
    MEM32(edx + 0xC) = eax;
    ecx = MEM32(0x6C5108);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0056471C; /* je: equal / zero */

loc_00564717: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0056471Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00564719u); } /* indirect call */
    }

loc_0056471C: ;
    edx = MEM32(esi + 0x50);
    eax = MEM32(esi + 0x48);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebp);
    PUSH32(esp, 0);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(edx + eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0056473Cu); RECOMP_ABI_CALL(0x0055C760u, sub_0055C760); /* call 0x0055C760 */

loc_0056473C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM8(esp + 0x18) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0056474B; /* je: equal / zero */

loc_00564744: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0056474Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00564748u); } /* indirect call */
    }

loc_0056474B: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005647EE; /* je: equal / zero */

loc_00564757: ;
    edi = MEM32(esi + 0x94);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056476F; /* je: equal / zero */

loc_00564761: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00564768u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00564765u); } /* indirect call */
    }

loc_00564768: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0056476Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0056476Cu); } /* indirect call */
    }

loc_0056476F: ;
    ecx = MEM32(esi + 0x94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00564782; /* je: equal / zero */

loc_0056477D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00564782u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0056477Fu); } /* indirect call */
    }

loc_00564782: ;
    MEM32(esp + 0x18) = esi;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0056478Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0056478Au); } /* indirect call */
    }

loc_0056478D: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 0x44);
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005647BC; /* je: equal / zero */

loc_0056479B: ;
    edx = MEM32(esi + 0x50);
    eax = MEM32(esi + 0x48);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebp);
    edi = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xA00003E8u);
    edi = esp + 0x20;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + eax + 0xC); PUSH32(esp, 0x005647BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005647B8u); } /* indirect call */
    }

loc_005647BC: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005647C9; /* je: equal / zero */

loc_005647C4: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x005647C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005647C6u); } /* indirect call */
    }

loc_005647C9: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005647D6; /* je: equal / zero */

loc_005647D1: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x005647D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005647D3u); } /* indirect call */
    }

loc_005647D6: ;
    esi = MEM32(esi + 0x94);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005647EE; /* je: equal / zero */

loc_005647E0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x005647E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005647E4u); } /* indirect call */
    }

loc_005647E7: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x005647EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005647EBu); } /* indirect call */
    }

loc_005647EE: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_005647FF; /* je: equal / zero */

loc_005647FA: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x005647FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005647FCu); } /* indirect call */
    }

loc_005647FF: ;
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00564810
 * Original: 0x00564810 - 0x00564AED (733 bytes, 245 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00564810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00564810: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x6C5108);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x24) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00564836; /* je: equal / zero */

loc_0056482F: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00564836u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00564833u); } /* indirect call */
    }

loc_00564836: ;
    eax = MEM32(esi + 0x4C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00564A9E; /* jle: less or equal (signed <=) */

loc_00564847: ;
    eax = MEM32(esi + 0x50);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00564A8E; /* jle: less or equal (signed <=) */

loc_00564854: ;
    edx = MEM32(esi + 0x58);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edi = MEM32(edx + ecx * 8 + 4);
    edx = MEM32(esi + 0x70);
    ebx = MEM32(esi + 0x60);
    ecx = MEM32(esi + 0x48);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi + 0x54);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 4);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(edx + ebp * 8 + 4);
    _fb = (uint32_t)(MEM32(esi + 0x74)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(esi + 0x74);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(esi + 0x64)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(esi + 0x64);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi + 0x98);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0xC) = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 8) = ecx;
    eax = MEM32(esi + 0x50);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x10));
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, 0);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(eax + ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005648B9u); RECOMP_ABI_CALL(0x0055C760u, sub_0055C760); /* call 0x0055C760 */

loc_005648B9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564A7A; /* je: equal / zero */

loc_005648C1: ;
    ecx = MEM32(esi + 0x98);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x20) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_005648DD; /* je: equal / zero */

loc_005648CF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x005648D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005648D1u); } /* indirect call */
    }

loc_005648D4: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x005648DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005648DAu); } /* indirect call */
    }

loc_005648DD: ;
    ecx = MEM32(esi + 0x98);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_005648F0; /* je: equal / zero */

loc_005648EB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x005648F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005648EDu); } /* indirect call */
    }

loc_005648F0: ;
    MEM32(esp + 0x18) = esi;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x005648FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005648F8u); } /* indirect call */
    }

loc_005648FB: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 0x44);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00564931; /* je: equal / zero */

loc_0056490A: ;
    edx = MEM32(esi + 0x50);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x10));
    eax = MEM32(esi + 0x48);
    ecx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xA00003E8u);
    ecx = esp + 0x20;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _icall_target = MEM32(edx + eax + 0xC); PUSH32(esp, 0x00564931u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0056492Du); } /* indirect call */
    }

loc_00564931: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056493E; /* je: equal / zero */

loc_00564939: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0056493Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0056493Bu); } /* indirect call */
    }

loc_0056493E: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056494B; /* je: equal / zero */

loc_00564946: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0056494Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00564948u); } /* indirect call */
    }

loc_0056494B: ;
    ecx = MEM32(esi + 0x98);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x20) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00564967; /* je: equal / zero */

loc_00564959: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0056495Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0056495Bu); } /* indirect call */
    }

loc_0056495E: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00564967u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00564964u); } /* indirect call */
    }

loc_00564967: ;
    eax = MEM32(esi + 0x60);
    edx = MEM32(esi + 0x7C);
    ecx = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00564A1B; /* jl: less (signed <) */

loc_00564979: ;
    edx = MEM32(esi + 0x64);
    _fb = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(esi + 0x80);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00564A1B; /* jl: less (signed <) */

loc_0056498A: ;
    edx = MEM32(esi + 0x68);
    ecx = MEM32(esi + 0x84);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi + 0x58);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x10);
    edx = MEM32(edx + eax * 8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00564A1B; /* jg: greater (signed >) */

loc_005649A7: ;
    edx = MEM32(esi + 0x6C);
    eax = MEM32(esi + 0x88);
    ecx = MEM32(esi + 0x64);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x54);
    edx = MEM32(ecx + ebp * 8);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00564A1B; /* jg: greater (signed >) */

loc_005649C3: ;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x1C) = esi;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x005649D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005649D3u); } /* indirect call */
    }

loc_005649D6: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 0x44);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00564A08; /* je: equal / zero */

loc_005649E5: ;
    eax = MEM32(esi + 0x50);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x10));
    edx = MEM32(esi + 0x48);
    edi = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xC0002B0Cu);
    edi = esp + 0x24;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + edx + 0xC); PUSH32(esp, 0x00564A08u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00564A04u); } /* indirect call */
    }

loc_00564A08: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564A15; /* je: equal / zero */

loc_00564A10: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00564A15u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00564A12u); } /* indirect call */
    }

loc_00564A15: ;
    ecx = MEM32(esp + 0x20);
    goto loc_00564A71;

loc_00564A1B: ;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = esi;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00564A2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00564A2Bu); } /* indirect call */
    }

loc_00564A2E: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 0x44);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00564A60; /* je: equal / zero */

loc_00564A3D: ;
    eax = MEM32(esi + 0x50);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x10));
    edx = MEM32(esi + 0x48);
    edi = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xC0002B02u);
    edi = esp + 0x28;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + edx + 0xC); PUSH32(esp, 0x00564A60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00564A5Cu); } /* indirect call */
    }

loc_00564A60: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564A6D; /* je: equal / zero */

loc_00564A68: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00564A6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00564A6Au); } /* indirect call */
    }

loc_00564A6D: ;
    ecx = MEM32(esp + 0x1C);

loc_00564A71: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564A7A; /* je: equal / zero */

loc_00564A75: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00564A7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00564A77u); } /* indirect call */
    }

loc_00564A7A: ;
    eax = MEM32(esi + 0x50);
    ecx = MEM32(esp + 0x10);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00564854; /* jl: less (signed <) */

loc_00564A8A: ;
    edi = MEM32(esp + 0x24);

loc_00564A8E: ;
    eax = MEM32(esi + 0x4C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00564847; /* jl: less (signed <) */

loc_00564A9E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = esp;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0;
    MEM32(eax) = 0;
    eax = MEM32(esi);
    PUSH32(esp, 0xC0002AF8u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00564AC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00564ABDu); } /* indirect call */
    }

loc_00564AC0: ;
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564ACD; /* je: equal / zero */

loc_00564AC8: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00564ACDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00564ACAu); } /* indirect call */
    }

loc_00564ACD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564AD8; /* je: equal / zero */

loc_00564AD1: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00564AD8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00564AD5u); } /* indirect call */
    }

loc_00564AD8: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564AE5; /* je: equal / zero */

loc_00564AE0: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00564AE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00564AE2u); } /* indirect call */
    }

loc_00564AE5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00564AF0
 * Original: 0x00564AF0 - 0x00564B8F (159 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00564AF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00564AF0: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00564B09u); RECOMP_ABI_CALL(0x00560D90u, sub_00560D90); /* call 0x00560D90 */

loc_00564B09: ;
    edi = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0x60) = edi;
    edi = MEM32(esp + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x64) = edi;
    edi = 0x270F;
    MEM32(esi + 0x68) = edi;
    MEM32(esi + 0x6C) = edi;
    edi = 0x1388;
    MEM32(esi + 0x4C) = ecx;
    PUSH32(esp, edx);
    MEM32(esi) = 0x650310;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x50) = edx;
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x58) = eax;
    MEM8(esi + 0x5C) = LO8(eax);
    MEM32(esi + 0x70) = eax;
    MEM32(esi + 0x74) = eax;
    MEM32(esi + 0x78) = eax;
    MEM32(esi + 0x7C) = edi;
    MEM32(esi + 0x80) = edi;
    MEM32(esi + 0x84) = edi;
    MEM32(esi + 0x88) = edi;
    MEM32(esi + 0x8C) = eax;
    MEM32(esi + 0x90) = eax;
    PUSH32(esp, ecx);
    MEM32(esi + 0x94) = eax;
    ecx = esi;
    MEM32(esi + 0x98) = eax;
    PUSH32(esp, 0x00564B88u); RECOMP_ABI_CALL(0x00564520u, sub_00564520); /* call 0x00564520 */

loc_00564B88: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00564B90
 * Original: 0x00564B90 - 0x00564BA7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00564B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00564B90: ;
    SET_LO8(eax, MEM8(ecx + 0x5C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564BA4; /* je: equal / zero */

loc_00564B97: ;
    PUSH32(esp, 0x00564B9Cu); RECOMP_ABI_CALL(0x00564350u, sub_00564350); /* call 0x00564350 */

loc_00564B9C: ;
    PUSH32(esp, 0x00564BA1u); RECOMP_ABI_CALL(0x00564810u, sub_00564810); /* call 0x00564810 */

loc_00564BA1: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00564BA4: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00564BB0
 * Original: 0x00564BB0 - 0x00564BD1 (33 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00564BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00564BB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00564BB8u); RECOMP_ABI_CALL(0x00564B90u, sub_00564B90); /* call 0x00564B90 */

loc_00564BB8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00564BCD; /* jne: not equal / not zero */

loc_00564BBC: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00564BCDu); RECOMP_ABI_CALL(0x005646B0u, sub_005646B0); /* call 0x005646B0 */

loc_00564BCD: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00564BE0
 * Original: 0x00564BE0 - 0x00564BF8 (24 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00564BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00564BE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00564BE8u); RECOMP_ABI_CALL(0x0055F0B0u, sub_0055F0B0); /* call 0x0055F0B0 */

loc_00564BE8: ;
    _fa = (uint32_t)(MEM8(esi + 0x44)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x44), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00564BF6; /* je: equal / zero */

loc_00564BEE: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00564B90(); return; /* tail jmp 0x00564B90 */

loc_00564BF6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00564C00
 * Original: 0x00564C00 - 0x00564C4B (75 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00564C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00564C00: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(edx + 8);
    PUSH32(esp, edi);
    _fa = (uint32_t)(MEM32(esi + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x60), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00564C1A; /* jne: not equal / not zero */

loc_00564C12: ;
    edi = MEM32(esi + 0x64);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(edx + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564C46; /* je: equal / zero */

loc_00564C1A: ;
    MEM32(esi + 0x60) = ecx;
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(esi + 0x64) = edx;
    MEM32(ecx) = 0;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0xC00003E8u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00564C3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00564C38u); } /* indirect call */
    }

loc_00564C3B: ;
    ecx = esi;
    MEM8(esi + 0x5C) = 1;
    PUSH32(esp, 0x00564C46u); RECOMP_ABI_CALL(0x00564B90u, sub_00564B90); /* call 0x00564B90 */

loc_00564C46: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00564C50
 * Original: 0x00564C50 - 0x00564CA7 (87 bytes, 36 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00564C50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00564C50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi);
    esi = ecx;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00564C61u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00564C5Eu); } /* indirect call */
    }

loc_00564C61: ;
    ebx = MEM32(esi + 0x50);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    ebp = MEM32(esi + 0x48);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebx + ebp) = eax;
    eax = MEM32(esi + 0x50);
    ebx = MEM32(esi + 0x48);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ebp = MEM32(esp + 0x20);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(eax + ebx + 0xC) = ebp;
    PUSH32(esp, 0x00564C99u); RECOMP_ABI_CALL(0x00564BB0u, sub_00564BB0); /* call 0x00564BB0 */

loc_00564C99: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00564CA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00564C9Du); } /* indirect call */
    }

loc_00564CA0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00564CB0
 * Original: 0x00564CB0 - 0x00564CCB (27 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00564CB0(void)
{

loc_00564CB0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x8C) = eax;
    MEM32(ecx + 0x90) = edx;
    MEM8(ecx + 0x5C) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00564CD0
 * Original: 0x00564CD0 - 0x00564CD9 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00564CD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00564CD0: ;
    MEM8(ecx + 0x5C) = 1;
    g_seh_ebp = ebp; sub_00564B90(); return; /* tail jmp 0x00564B90 */

}

/**
 * sub_00564CE0
 * Original: 0x00564CE0 - 0x00564CE5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00564CE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00564CE0: ;
    g_seh_ebp = ebp; sub_00564CD0(); return; /* tail jmp 0x00564CD0 */

}

/**
 * sub_00564CF0
 * Original: 0x00564CF0 - 0x00564F46 (598 bytes, 212 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00564CF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00564CF0: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64FDDC);
    edx = esp + 0x18;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00564D17u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00564D17: ;
    ebp = MEM32(esp + 0xC4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x60;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = ebp;
    PUSH32(esp, 0x00564D37u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00564D37: ;
    edx = MEM32(esi + 8);
    eax = MEM32(edx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x64FDD4);
    ecx = esp + 0x18;
    PUSH32(esp, 0xA0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00564D52u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00564D52: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x64;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    ecx = ebp;
    PUSH32(esp, 0x00564D6Bu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00564D6B: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x650090);
    eax = esp + 0x18;
    PUSH32(esp, 0xA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00564D86u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00564D86: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x68;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    ecx = ebp;
    PUSH32(esp, 0x00564D9Fu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00564D9F: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x650080);
    edx = esp + 0x18;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00564DBAu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00564DBA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x6C;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = ebp;
    PUSH32(esp, 0x00564DD3u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00564DD3: ;
    eax = MEM32(esi + 0x4C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00564E20; /* jle: less or equal (signed <=) */

loc_00564DDC: ;
    /* nop */

loc_00564DE0: ;
    edx = MEM32(esi + 8);
    eax = MEM32(edx + 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6503F4);
    ecx = esp + 0x1C;
    PUSH32(esp, 0xA0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00564DFCu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00564DFC: ;
    edx = MEM32(esi + 0x58);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = edx + edi * 8;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = ebp;
    PUSH32(esp, 0x00564E18u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00564E18: ;
    eax = MEM32(esi + 0x4C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00564DE0; /* jl: less (signed <) */

loc_00564E20: ;
    eax = MEM32(esi + 0x50);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00564E70; /* jle: less or equal (signed <=) */

loc_00564E29: ;
    /* nop */

loc_00564E30: ;
    edx = MEM32(esi + 8);
    eax = MEM32(edx + 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6503E0);
    ecx = esp + 0x1C;
    PUSH32(esp, 0xA0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00564E4Cu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00564E4C: ;
    edx = MEM32(esi + 0x54);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = edx + edi * 8;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = ebp;
    PUSH32(esp, 0x00564E68u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00564E68: ;
    eax = MEM32(esi + 0x50);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00564E30; /* jl: less (signed <) */

loc_00564E70: ;
    eax = MEM32(esi + 0x50);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00564F32; /* jle: less or equal (signed <=) */

loc_00564E7D: ;
    eax = MEM32(esi + 0x4C);

loc_00564E80: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00564F26; /* jle: less or equal (signed <=) */

loc_00564E8A: ;
    /* nop */

loc_00564E90: ;
    edx = MEM32(esi + 8);
    eax = MEM32(edx + 4);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6503C4);
    ecx = esp + 0x20;
    PUSH32(esp, 0xA0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00564EADu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00564EAD: ;
    edx = MEM32(esi + 0x50);
    eax = MEM32(esi + 0x48);
    edx = (uint32_t)((int32_t)edx * (int32_t)edi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 1);
    ecx = edx + eax + 4;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    ecx = ebp;
    PUSH32(esp, 0x00564ED5u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00564ED5: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6503A8);
    edx = esp + 0x20;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00564EF2u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00564EF2: ;
    eax = MEM32(esi + 0x50);
    ecx = MEM32(esi + 0x48);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 1);
    edx = eax + ecx + 8;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    ecx = ebp;
    PUSH32(esp, 0x00564F1Au); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00564F1A: ;
    eax = MEM32(esi + 0x4C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00564E90; /* jl: less (signed <) */

loc_00564F26: ;
    ecx = MEM32(esi + 0x50);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00564E80; /* jl: less (signed <) */

loc_00564F32: ;
    ecx = esi;
    PUSH32(esp, 0x00564F39u); RECOMP_ABI_CALL(0x00564CD0u, sub_00564CD0); /* call 0x00564CD0 */

loc_00564F39: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00564F50
 * Original: 0x00564F50 - 0x00564FDE (142 bytes, 55 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00564F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00564F50: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x44)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x44), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00564FC4; /* je: equal / zero */

loc_00564F59: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00003E8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA00003E8u (32-bit) */
    edx = MEM32(esp + 0x10);
    ecx = MEM32(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_00564F9A; /* je: equal / zero */

loc_00564F6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0001B58u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0001B58u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564F83; /* je: equal / zero */

loc_00564F71: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00564F7Fu); RECOMP_ABI_CALL(0x0055F100u, sub_0055F100); /* call 0x0055F100 */

loc_00564F7F: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00564F83: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564FDA; /* je: equal / zero */

loc_00564F87: ;
    edx = MEM32(ecx + 0xC);
    eax = MEM32(ecx + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00564F96u); RECOMP_ABI_CALL(0x00564CB0u, sub_00564CB0); /* call 0x00564CB0 */

loc_00564F96: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00564F9A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564FDA; /* je: equal / zero */

loc_00564F9E: ;
    MEM32(esp + 0x10) = ecx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00564FA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00564FA4u); } /* indirect call */
    }

loc_00564FA7: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00564FB3u); RECOMP_ABI_CALL(0x00564C00u, sub_00564C00); /* call 0x00564C00 */

loc_00564FB3: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564FDA; /* je: equal / zero */

loc_00564FBB: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00564FC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00564FBDu); } /* indirect call */
    }

loc_00564FC0: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00564FC4: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00564FDAu); RECOMP_ABI_CALL(0x0055F100u, sub_0055F100); /* call 0x0055F100 */

loc_00564FDA: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00564FE0
 * Original: 0x00564FE0 - 0x0056501A (58 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00564FE0(void)
{

loc_00564FE0: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00564FFEu); RECOMP_ABI_CALL(0x00563090u, sub_00563090); /* call 0x00563090 */

loc_00564FFE: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esi) = 0x650408;
    MEM8(esi + 0x6C) = 0;
    PUSH32(esp, 0x00565014u); RECOMP_ABI_CALL(0x0055F7A0u, sub_0055F7A0); /* call 0x0055F7A0 */

loc_00565014: ;
    eax = esi;
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00565020
 * Original: 0x00565020 - 0x00565028 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00565020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00565020: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xB0)); return; /* indirect tail jmp */

}

/**
 * sub_00565030
 * Original: 0x00565030 - 0x00565036 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00565030(void)
{

loc_00565030: ;
    eax = 0x6504C4;
    esp += 4; return; /* ret */

}

/**
 * sub_00565040
 * Original: 0x00565040 - 0x0056506E (46 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00565040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00565040: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    esi = 0x6504C4;
    ecx = 0xC;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if ((_flags == 0)) goto loc_00565063; /* jne: not equal / not zero */

loc_0056505E: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_00565063: ;
    MEM32(esp + 4) = edx;
    ecx = eax;
    g_seh_ebp = ebp; sub_00562D40(); return; /* tail jmp 0x00562D40 */

}

/**
 * sub_00565070
 * Original: 0x00565070 - 0x00565087 (23 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00565070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00565070: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00565084; /* je: equal / zero */

loc_00565078: ;
    edx = MEM32(ecx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xA8)); return; /* indirect tail jmp */

loc_00565084: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00565090
 * Original: 0x00565090 - 0x005650C2 (50 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00565090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00565090: ;
    PUSH32(esp, 0xC6);
    PUSH32(esp, 0x6504D0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x005650A1u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005650A1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005650B7; /* je: equal / zero */

loc_005650A8: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x005650B1u); RECOMP_ABI_CALL(0x00566E20u, sub_00566E20); /* call 0x00566E20 */

loc_005650B1: ;
    MEM32(0x6C51E4) = eax;
    esp += 4; return; /* ret */

loc_005650B7: ;
    MEM32(0x6C51E4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_005650D0
 * Original: 0x005650D0 - 0x005650EB (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005650D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005650D0: ;
    ecx = MEM32(0x6C51E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005650E0; /* je: equal / zero */

loc_005650DA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x005650E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005650DEu); } /* indirect call */
    }

loc_005650E0: ;
    MEM32(0x6C51E4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_005650F0
 * Original: 0x005650F0 - 0x00565118 (40 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005650F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005650F0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF6u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFF6u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00565106; /* jne: not equal / not zero */

loc_005650F9: ;
    MEM32(ecx + 0x88) = 0;
    esp += 8; return; /* ret 4 */

loc_00565106: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF7u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFF7u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00565115; /* jne: not equal / not zero */

loc_0056510B: ;
    MEM32(ecx + 0x88) = 1;

loc_00565115: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00565120
 * Original: 0x00565120 - 0x00565137 (23 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00565120(void)
{

loc_00565120: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x98) = eax;
    MEM32(ecx + 0x9C) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00565140
 * Original: 0x00565140 - 0x005651D0 (144 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00565140(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00565140: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xAC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00565157u); RECOMP_ABI_CALL(0x00562A40u, sub_00562A40); /* call 0x00562A40 */

loc_00565157: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63B234);
    edx = esp + 0x10;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00565172u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00565172: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x98;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x0056518Eu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0056518E: ;
    edx = MEM32(esi + 8);
    eax = MEM32(edx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x63B220);
    ecx = esp + 0x10;
    PUSH32(esp, 0xA0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005651A9u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_005651A9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x9C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x005651C5u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005651C5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005651D0
 * Original: 0x005651D0 - 0x005651F5 (37 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005651D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005651D0: ;
    edx = MEM32(ecx + 0x74);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005651E3; /* jne: not equal / not zero */

loc_005651D7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

loc_005651E3: ;
    eax = MEM32(ecx + 0x78);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_00565200
 * Original: 0x00565200 - 0x00565224 (36 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00565200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00565200: ;
    _fa = (uint32_t)(MEM8(ecx + 0x44)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x44), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00565215; /* je: equal / zero */

loc_00565206: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00007D0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA00007D0u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056521A; /* je: equal / zero */

loc_00565211: ;
    MEM32(esp + 8) = eax;

loc_00565215: ;
    g_seh_ebp = ebp; sub_00562FC0(); return; /* tail jmp 0x00562FC0 */

loc_0056521A: ;
    PUSH32(esp, 0xFFFFFFF6u);
    PUSH32(esp, 0x00565221u); RECOMP_ABI_CALL(0x005650F0u, sub_005650F0); /* call 0x005650F0 */

loc_00565221: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00565230
 * Original: 0x00565230 - 0x0056548B (603 bytes, 177 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00565230(void)
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

loc_00565230: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0056523Eu); RECOMP_ABI_CALL(0x0055F0B0u, sub_0055F0B0); /* call 0x0055F0B0 */

loc_0056523E: ;
    _fa = (uint32_t)(MEM8(esi + 0x44)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x44), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00565483; /* je: equal / zero */

loc_00565248: ;
    eax = MEM32(esi + 0x74);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00565255; /* jne: not equal / not zero */

loc_00565251: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0056525D;

loc_00565255: ;
    ebx = MEM32(esi + 0x78);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((2) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_0056525D: ;
    eax = MEM32(esi + 0x88);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x14) = ebx;
    if ((_fa == 0)) goto loc_0056542D; /* je: equal / zero */

loc_0056526F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_005653BA; /* je: equal / zero */

loc_00565276: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0056528E; /* je: equal / zero */

loc_00565279: ;
    eax = MEM32(esi + 0x94);
    edi = MEM32(esi + 0x90);
    MEM32(esp + 0x10) = eax;
    goto loc_00565473;

loc_0056528E: ;
    PUSH32(esp, 0x00565293u); RECOMP_ABI_CALL(0x0055B910u, sub_0055B910); /* call 0x0055B910 */

loc_00565293: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x84)); /* fsub dword ptr [esi + 0x84] */
    eax = MEM32(esi + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_A(_fa, _fb)) goto loc_00565348; /* ja: above (unsigned >) */

loc_005652AC: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x56548C); /* switch: 4 entries, 2 targets */
    if (_jt == 0x005652B3u) goto loc_005652B3;
    if (_jt == 0x0056534Fu) goto loc_0056534F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_005652B3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00565348; /* jle: less or equal (signed <=) */

loc_005652BB: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x80)); /* fmul dword ptr [esi + 0x80] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005652E4; /* jne: not equal / not zero */

loc_005652D6: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, 0x005652DDu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005652DD: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    edi = edx;
    goto loc_005652F9;

loc_005652E4: ;
    fp_push(MEMF(0x630320)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, 0x005652F1u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005652F1: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = ebx;

loc_005652F9: ;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_push(MEMF(esi + 0x94)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x80)); /* fmul dword ptr [esi + 0x80] */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    PUSH32(esp, 0x00565310u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00565310: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    ebx = eax;
    PUSH32(esp, 0x0056531Bu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0056531B: ;
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00565473; /* je: equal / zero */

loc_00565325: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(esp + 0x1C) = ebp;
    MEM32(eax) = ebp;
    edx = MEM32(esi);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC00007E4u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0056533Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0056533Cu); } /* indirect call */
    }

loc_0056533F: ;
    ecx = MEM32(esp + 0x18);
    goto loc_0056546A;

loc_00565348: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00565473;

loc_0056534F: ;
    eax = MEM32(esi + 0x80);
    PUSH32(esp, 0x3727C5AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00565360u); RECOMP_ABI_CALL(0x00426390u, sub_00426390); /* call 0x00426390 */

loc_00565360: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0056536Cu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0056536C: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    ecx = edi;
    eax = ebx + -1;
    if (CMP_GE(_fas, _fbs)) goto loc_0056537B; /* jge: greater or equal (signed >=) */

loc_00565377: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00565385;

loc_0056537B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00565473; /* jle: less or equal (signed <=) */

loc_00565383: ;
    edi = eax;

loc_00565385: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00565473; /* je: equal / zero */

loc_0056538D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(esi + 0x88) = 3;
    MEM32(esp + 0x20) = ebp;
    MEM32(eax) = ebp;
    edx = MEM32(esi);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC00007DAu);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x005653B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005653AEu); } /* indirect call */
    }

loc_005653B1: ;
    ecx = MEM32(esp + 0x1C);
    goto loc_0056546A;

loc_005653BA: ;
    fp_push(MEMF(esi + 0x80)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63DF88)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x63df88] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005653D3; /* jne: not equal / not zero */

loc_005653CD: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_005653DD;

loc_005653D3: ;
    fp_pop(); /* fstp st(0) */
    MEM32(esp + 0x10) = 0x3727C5AC;

loc_005653DD: ;
    PUSH32(esp, 0x005653E2u); RECOMP_ABI_CALL(0x0055B910u, sub_0055B910); /* call 0x0055B910 */

loc_005653E2: ;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = esp;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x14)); /* fdiv dword ptr [esp + 0x14] */
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    MEM32(esi + 0x88) = 2;
    MEM32(esp + 0x28) = ebp;
    PUSH32(esp, 0xC00007D0u);
    ecx = esi;
    MEM32(esp + 0x1C) = 0;
    edi = ebx + -1;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x6504D8)); /* fsub dword ptr [0x6504d8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esi + 0x84) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax) = ebp;
    eax = MEM32(esi);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00565427u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00565424u); } /* indirect call */
    }

loc_00565427: ;
    ecx = MEM32(esp + 0x20);
    goto loc_0056546A;

loc_0056542D: ;
    PUSH32(esp, 0x00565432u); RECOMP_ABI_CALL(0x0055B910u, sub_0055B910); /* call 0x0055B910 */

loc_00565432: ;
    MEMF(esi + 0x84) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = esp;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esi + 0x88) = 2;
    MEM32(esp + 0x2C) = ebp;
    MEM32(eax) = ebp;
    eax = MEM32(esi);
    PUSH32(esp, 0xC00007D0u);
    ecx = esi;
    MEM32(esp + 0x1C) = 0;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00565466u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00565463u); } /* indirect call */
    }

loc_00565466: ;
    ecx = MEM32(esp + 0x24);

loc_0056546A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00565473; /* je: equal / zero */

loc_0056546E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00565473u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00565470u); } /* indirect call */
    }

loc_00565473: ;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x90) = edi;
    MEM32(esi + 0x94) = eax;

loc_00565483: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005654A0
 * Original: 0x005654A0 - 0x005654BE (30 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005654A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005654A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005654BD; /* je: equal / zero */

loc_005654AC: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);

loc_005654B1: ;
    esi = MEM32(edx);
    MEM32(eax) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005654B1; /* jne: not equal / not zero */

loc_005654BC: ;
    POP32(esp, esi);

loc_005654BD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005654C0
 * Original: 0x005654C0 - 0x005654D3 (19 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005654C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005654C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005654D0; /* je: equal / zero */

loc_005654C8: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    MEM32(eax) = edx;

loc_005654D0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005654E0
 * Original: 0x005654E0 - 0x00565546 (102 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005654E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005654E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x629C80);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    MEM32(ebp + -4) = 0;
    ebx = MEM32(ebp + 0x14);
    edi = MEM32(ebp + 0x10);
    esi = MEM32(ebp + 8);
    /* nop */

loc_00565510: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056552C; /* je: equal / zero */

loc_00565515: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056551Eu); RECOMP_ABI_CALL(0x005654C0u, sub_005654C0); /* call 0x005654C0 */

loc_0056551E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x10) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = esi;
    goto loc_00565510;

loc_0056552C: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    eax = edi;
    ecx = MEM32(ebp + -12);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00565546
 * Original: 0x00565546 - 0x00565550 (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00565546(void)
{

loc_00565546: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0056554Fu); RECOMP_ABI_CALL(0x0061A356u, sub_0061A356); /* call 0x0061A356 */

loc_0056554F: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00565550
 * Original: 0x00565550 - 0x005655CA (122 bytes, 45 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00565550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00565550: ;
    SET_LO8(eax, MEM8(ecx + 0x6C));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056559D; /* je: equal / zero */

loc_0056555A: ;
    ecx = MEM32(0x6C5108);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0056556C; /* je: equal / zero */

loc_00565567: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0056556Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00565569u); } /* indirect call */
    }

loc_0056556C: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0056557Du); RECOMP_ABI_CALL(0x0055B8C0u, sub_0055B8C0); /* call 0x0055B8C0 */

loc_0056557D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00565588; /* je: equal / zero */

loc_00565581: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00565588u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00565585u); } /* indirect call */
    }

loc_00565588: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00565592u); RECOMP_ABI_CALL(0x005E1B40u, sub_005E1B40); /* call 0x005E1B40 */

loc_00565592: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x639B68;
    POP32(esp, esi);
    goto loc_005655A4;

loc_0056559D: ;
    eax = 0x62DF21;
    ecx = eax;

loc_005655A4: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6504DC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005655C4u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_005655C4: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_005655D0
 * Original: 0x005655D0 - 0x00565694 (196 bytes, 70 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005655D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005655D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x44)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x44), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0056568F; /* je: equal / zero */

loc_005655E0: ;
    SET_LO8(eax, MEM8(esi + 0x48));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056568F; /* je: equal / zero */

loc_005655EB: ;
    ecx = MEM32(esi + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056568F; /* je: equal / zero */

loc_005655F6: ;
    eax = MEM32(esi + 0x78);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056568F; /* je: equal / zero */

loc_00565606: ;
    eax = MEM32(esi + 0x90);
    PUSH32(esp, edi);
    edi = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056568E; /* je: equal / zero */

loc_00565614: ;
    eax = MEM32(esi + 0x98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00565629; /* jne: not equal / not zero */

loc_0056561F: ;
    edx = ZX16(MEM16(edi + 8));
    MEM32(esp + 0xC) = edx;
    goto loc_0056562D;

loc_00565629: ;
    MEM32(esp + 0xC) = eax;

loc_0056562D: ;
    eax = MEM32(esi + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056563C; /* jne: not equal / not zero */

loc_00565638: ;
    eax = ZX16(MEM16(edi + 0xA));

loc_0056563C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x00565648u); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_00565648: ;
    ebx = MEM32(esi + 0x50);
    ebp = MEM32(esi + 0x4C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x58;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00565660u); RECOMP_ABI_CALL(0x0044F880u, sub_0044F880); /* call 0x0044F880 */

loc_00565660: ;
    ecx = ZX16(MEM16(edi + 8));
    edx = ZX16(MEM16(edi + 0xA));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, 0);
    ecx = ebx + eax;
    PUSH32(esp, ecx);
    eax = edx + ebp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00565689u); RECOMP_ABI_CALL(0x005EF6F0u, sub_005EF6F0); /* call 0x005EF6F0 */

loc_00565689: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0056568E: ;
    POP32(esp, edi);

loc_0056568F: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005656A0
 * Original: 0x005656A0 - 0x00565720 (128 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005656A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005656A0: ;
    edx = MEM32(ecx + 0x74);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005656F1; /* je: equal / zero */

loc_005656A7: ;
    eax = MEM32(ecx + 0x78);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005656F1; /* je: equal / zero */

loc_005656B3: ;
    eax = MEM32(ecx + 0x90);
    edx = MEM32(edx + eax * 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005656F1; /* je: equal / zero */

loc_005656C0: ;
    eax = MEM32(ecx + 0x98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005656CF; /* jne: not equal / not zero */

loc_005656CB: ;
    eax = ZX16(MEM16(edx + 8));

loc_005656CF: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(esi) = eax;
    ecx = MEM32(ecx + 0x9C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_005656E6; /* jne: not equal / not zero */

loc_005656E2: ;
    ecx = ZX16(MEM16(edx + 0xA));

loc_005656E6: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;

loc_005656EC: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_005656F1: ;
    edx = MEM32(ecx + 0x98);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    eax = MEM32(esp + 8);
    edx = MEM32(ecx + 0x9C);
    MEM32(eax) = edx;
    _fa = (uint32_t)(MEM32(ecx + 0x98)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x98), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056571B; /* je: equal / zero */

loc_00565712: ;
    _fa = (uint32_t)(MEM32(ecx + 0x9C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x9C), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005656EC; /* jne: not equal / not zero */

loc_0056571B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}
