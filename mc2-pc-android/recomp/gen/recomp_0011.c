/**
 * Midnight Club II (PC) - Recompiled code chunk 11
 * Functions: 250 (0x00497730 - 0x004A0ED0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00497730
 * Original: 0x00497730 - 0x004977B6 (134 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00497730(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00497730: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00497738u); RECOMP_ABI_CALL(0x00579B60u, sub_00579B60); /* call 0x00579B60 */

loc_00497738: ;
    ecx = esi + 0x134;
    MEM32(esi) = 0x6408CC;
    PUSH32(esp, 0x00497749u); RECOMP_ABI_CALL(0x00496C80u, sub_00496C80); /* call 0x00496C80 */

loc_00497749: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x148) = eax;
    MEM16(esi + 0x14C) = LO16(eax);
    MEM16(esi + 0x14E) = LO16(eax);
    MEM32(esi + 0x108) = eax;
    MEM32(esi + 0x10C) = eax;
    ecx = 0x3F800000;
    MEM32(esi + 0x104) = ecx;
    MEM32(esi + 0x110) = eax;
    MEM32(esi + 0x118) = eax;
    MEM32(esi + 0x114) = ecx;
    MEM32(esi + 0x11C) = eax;
    MEM32(esi + 0x120) = eax;
    MEM32(esi + 0x124) = ecx;
    MEM32(esi + 0x130) = eax;
    MEM32(esi + 0x12C) = eax;
    MEM32(esi + 0x128) = eax;
    MEM32(esi + 0x144) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004977C0
 * Original: 0x004977C0 - 0x00497809 (73 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004977C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004977C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x640904);
    MEM32(esi) = 0x6408CC;
    PUSH32(esp, 0x004977D3u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_004977D3: ;
    ecx = MEM32(esi + 0x148);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00497801; /* je: equal / zero */

loc_004977E0: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_004977F8; /* je: equal / zero */

loc_004977EA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004977F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004977EEu); } /* indirect call */
    }

loc_004977F0: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00579BA0(); return; /* tail jmp 0x00579BA0 */

loc_004977F8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004977FEu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_004977FE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00497801: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00579BA0(); return; /* tail jmp 0x00579BA0 */

}

/**
 * sub_00497810
 * Original: 0x00497810 - 0x0049782C (28 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00497810(void)
{

loc_00497810: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00497818u); RECOMP_ABI_CALL(0x00497160u, sub_00497160); /* call 0x00497160 */

loc_00497818: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi + 0x148;
    PUSH32(esp, 0x00497828u); RECOMP_ABI_CALL(0x00497630u, sub_00497630); /* call 0x00497630 */

loc_00497828: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00497830
 * Original: 0x00497830 - 0x004978CB (155 bytes, 52 insns)
 * Category: game_camera
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00497830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00497830: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x67457C);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(0x640888);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    MEM32(esp + 0x14) = eax;
    MEM32(0x67457C) = ecx;
    PUSH32(esp, 0x00497857u); RECOMP_ABI_CALL(0x005DD2B0u, sub_005DD2B0); /* call 0x005DD2B0 */

loc_00497857: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049786E; /* jne: not equal / not zero */

loc_00497860: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x640920);
    PUSH32(esp, 0x0049786Bu); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_0049786B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049786E: ;
    SET_LO16(eax, MEM16(esi + 0x14E));
    _fb = (uint32_t)(0x148) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x148;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 4), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049788F; /* jne: not equal / not zero */

loc_00497881: ;
    edx = ZX16(LO16(eax));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0049788Fu); RECOMP_ABI_CALL(0x00497630u, sub_00497630); /* call 0x00497630 */

loc_0049788F: ;
    edx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 4));
    ecx = ZX16(LO16(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    MEM16(esi + 4) = LO16(eax);
    PUSH32(esp, 0x004978AAu); RECOMP_ABI_CALL(0x00496D70u, sub_00496D70); /* call 0x00496D70 */

loc_004978AA: ;
    eax = ZX16(MEM16(esi + 4));
    ecx = MEM32(esi);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    SET_LO8(edx, MEM8(esp + 0x18));
    POP32(esp, edi);
    MEM8(eax + ecx + -16) = LO8(edx);
    eax = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(0x67457C) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004978D0
 * Original: 0x004978D0 - 0x004978FF (47 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004978D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004978D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = ZX16(MEM16(edi + 0x14C));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004978F6; /* jle: less or equal (signed <=) */

loc_004978DF: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004978E2: ;
    ecx = MEM32(edi + 0x148);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004978EFu); RECOMP_ABI_CALL(0x00496D90u, sub_00496D90); /* call 0x00496D90 */

loc_004978EF: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004978E2; /* jne: not equal / not zero */

loc_004978F5: ;
    POP32(esp, esi);

loc_004978F6: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00497470(); return; /* tail jmp 0x00497470 */

}

/**
 * sub_00497900
 * Original: 0x00497900 - 0x00497917 (23 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00497900(void)
{

loc_00497900: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x640960);
    PUSH32(esp, 0x64094C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00497914u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00497911u); } /* indirect call */
    }

loc_00497914: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00497920
 * Original: 0x00497920 - 0x0049796F (79 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00497920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00497920: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x640994);
    ecx = esi;
    PUSH32(esp, 0x00497933u); RECOMP_ABI_CALL(0x00615580u, sub_00615580); /* call 0x00615580 */

loc_00497933: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00497940; /* je: equal / zero */

loc_00497937: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00497940: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x640984);
    ecx = esi;
    PUSH32(esp, 0x0049794Eu); RECOMP_ABI_CALL(0x00615580u, sub_00615580); /* call 0x00615580 */

loc_0049794E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049795B; /* je: equal / zero */

loc_00497952: ;
    eax = 2;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0049795B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x640974);
    ecx = esi;
    PUSH32(esp, 0x00497969u); RECOMP_ABI_CALL(0x00615580u, sub_00615580); /* call 0x00615580 */

loc_00497969: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00497970
 * Original: 0x00497970 - 0x00497A5E (238 bytes, 86 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00497970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00497970: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    MEM32(esp + 0x10) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_004979A3; /* jle: less or equal (signed <=) */

loc_00497986: ;
    PUSH32(esp, 0x77);
    eax = edi * 4;
    PUSH32(esp, 0x63E2E0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049799Au); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049799A: ;
    ebp = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ebp;

loc_004979A3: ;
    ecx = ZX16(MEM16(esi + 4));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004979AD; /* jge: greater or equal (signed >=) */

loc_004979AB: ;
    ecx = edi;

loc_004979AD: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    MEM32(esp + 0xC) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00497A27; /* jl: less (signed <) */

loc_004979B8: ;
    ecx = 4;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = ecx;
    ecx = 0xFFFFFFF8u;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = 3;
    edi = 8;
    eax = ebp + 8;
    MEM32(esp + 0x18) = ecx;
    goto loc_004979E2;

loc_004979DE: ;
    ecx = MEM32(esp + 0x18);

loc_004979E2: ;
    ebp = MEM32(esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(ecx + ebp);
    MEM32(eax + -8) = ebp;
    ebp = MEM32(esi);
    ecx = MEM32(ecx + ebp + 4);
    MEM32(eax + -4) = ecx;
    ecx = MEM32(esi);
    ecx = MEM32(edi + ecx);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x1C);
    ebp = MEM32(esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ecx + ebp);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004979DE; /* jl: less (signed <) */

loc_00497A1E: ;
    ebp = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x24);
    POP32(esp, ebx);

loc_00497A27: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00497A3E; /* jge: greater or equal (signed >=) */

loc_00497A2B: ;
    goto loc_00497A30;

    /* nop */

loc_00497A30: ;
    eax = MEM32(esi);
    eax = MEM32(eax + edx * 4);
    MEM32(ebp + edx * 4) = eax;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00497A30; /* jl: less (signed <) */

loc_00497A3E: ;
    MEM16(esi + 4) = LO16(ecx);
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    MEM16(esi + 6) = LO16(edi);
    PUSH32(esp, 0x00497A4Eu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00497A4E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi) = ebp;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00497A60
 * Original: 0x00497A60 - 0x00497AFB (155 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00497A60(void)
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

loc_00497A60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x63EDE8);
    ecx = esi;
    PUSH32(esp, 0x00497A74u); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_00497A74: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64);
    ecx = edi + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00497A81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00497A7Eu); } /* indirect call */
    }

loc_00497A81: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00497A88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00497A85u); } /* indirect call */
    }

loc_00497A88: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    MEM8(edi + 0x80) = LO8(eax);
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00497A9Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00497A97u); } /* indirect call */
    }

loc_00497A9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    MEM8(edi + 0x82) = LO8(eax);
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00497AACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00497AA9u); } /* indirect call */
    }

loc_00497AAC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    MEM8(edi + 0x81) = LO8(eax);
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00497ABEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00497ABBu); } /* indirect call */
    }

loc_00497ABE: ;
    MEMF(edi + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00497ACBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00497AC8u); } /* indirect call */
    }

loc_00497ACB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    PUSH32(esp, 1);
    MEM8(edi + 0x83) = LO8(ecx);
    PUSH32(esp, 0x6409A0);
    ecx = esi;
    PUSH32(esp, 0x00497AE4u); RECOMP_ABI_CALL(0x00615580u, sub_00615580); /* call 0x00615580 */

loc_00497AE4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00497AF6; /* je: equal / zero */

loc_00497AE8: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00497AF0u); RECOMP_ABI_CALL(0x00497920u, sub_00497920); /* call 0x00497920 */

loc_00497AF0: ;
    MEM32(edi + 0xB0) = eax;

loc_00497AF6: ;
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
 * sub_00497B00
 * Original: 0x00497B00 - 0x00497B23 (35 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00497B00(void)
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

loc_00497B00: ;
    SET_LO8(eax, MEM8(ecx + 0x83));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00497B13; /* je: equal / zero */

loc_00497B0A: ;
    fp_push(MEMF(ecx + 0x88)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_00497B13: ;
    eax = MEM32(ecx + 0x98);
    ecx = MEM32(esp + 4);
    fp_push(MEMF(eax + ecx * 4)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00497B30
 * Original: 0x00497B30 - 0x00497B40 (16 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00497B30(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00497B30: ;
    eax = MEM32(ecx + 0x90);
    ecx = MEM32(esp + 4);
    fp_push(MEMF(eax + ecx * 4)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00497B40
 * Original: 0x00497B40 - 0x00497BD7 (151 bytes, 63 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00497B40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00497B40: ;
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
    if (CMP_LE(_fas, _fbs)) goto loc_00497B7E; /* jle: less or equal (signed <=) */

loc_00497B50: ;
    PUSH32(esp, 0x77);
    eax = ebx + ebx * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x63E2E0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00497B63u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00497B63: ;
    edi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00497B7C; /* je: equal / zero */

loc_00497B6C: ;
    PUSH32(esp, 0x4016E0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00497B7Au); RECOMP_ABI_CALL(0x00401750u, sub_00401750); /* call 0x00401750 */

loc_00497B7A: ;
    goto loc_00497B7E;

loc_00497B7C: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00497B7E: ;
    ecx = ZX16(MEM16(esi + 4));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00497B88; /* jge: greater or equal (signed >=) */

loc_00497B86: ;
    ecx = ebx;

loc_00497B88: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00497BB9; /* jle: less or equal (signed <=) */

loc_00497B90: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);

loc_00497B93: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(edx);
    ebx = eax + edi;
    MEM32(ebx) = ebp;
    ebp = MEM32(edx + 4);
    MEM32(ebx + 4) = ebp;
    edx = MEM32(edx + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebx + 8) = edx;
    if ((_fa != 0)) goto loc_00497B93; /* jne: not equal / not zero */

loc_00497BB0: ;
    ebx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x10);
    POP32(esp, ebp);

loc_00497BB9: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    MEM16(esi + 6) = LO16(ebx);
    MEM16(esi + 4) = LO16(ecx);
    PUSH32(esp, 0x00497BC9u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00497BC9: ;
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
 * sub_00497BE0
 * Original: 0x00497BE0 - 0x00497CE7 (263 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00497BE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00497BE0: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x6409B0;
    MEM32(esi + 0x90) = ebx;
    MEM16(esi + 0x94) = LO16(ebx);
    MEM16(esi + 0x96) = LO16(ebx);
    MEM32(esi + 0x98) = ebx;
    MEM16(esi + 0x9C) = LO16(ebx);
    MEM16(esi + 0x9E) = LO16(ebx);
    MEM32(esi + 0xA0) = ebx;
    MEM16(esi + 0xA4) = LO16(ebx);
    MEM16(esi + 0xA6) = LO16(ebx);
    MEM32(esi + 0xA8) = ebx;
    MEM16(esi + 0xAC) = LO16(ebx);
    MEM16(esi + 0xAE) = LO16(ebx);
    SET_LO8(eax, 1);
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM8(esi + 0x80) = LO8(eax);
    MEM8(esi + 0x81) = LO8(eax);
    MEM8(esi + 0x82) = LO8(eax);
    MEM8(esi + 0x83) = LO8(eax);
    eax = MEM32(esi + 0xA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00497C65u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00497C65: ;
    MEM32(esi + 0xA0) = ebx;
    MEM16(esi + 0xA4) = LO16(ebx);
    MEM16(esi + 0xA6) = LO16(ebx);
    ecx = MEM32(esi + 0xA8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00497C85u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00497C85: ;
    MEM32(esi + 0xA8) = ebx;
    MEM16(esi + 0xAC) = LO16(ebx);
    MEM16(esi + 0xAE) = LO16(ebx);
    edx = MEM32(esi + 0x98);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00497CA5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00497CA5: ;
    MEM32(esi + 0x98) = ebx;
    MEM16(esi + 0x9C) = LO16(ebx);
    MEM16(esi + 0x9E) = LO16(ebx);
    eax = MEM32(esi + 0x90);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00497CC5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00497CC5: ;
    MEM32(esi + 0x90) = ebx;
    MEM16(esi + 0x94) = LO16(ebx);
    MEM16(esi + 0x96) = LO16(ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xB0) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00497CF0
 * Original: 0x00497CF0 - 0x00497D2E (62 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00497CF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00497CF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xA8);
    PUSH32(esp, eax);
    MEM32(esi) = 0x6409B0;
    PUSH32(esp, 0x00497D05u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00497D05: ;
    ecx = MEM32(esi + 0xA0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00497D11u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00497D11: ;
    edx = MEM32(esi + 0x98);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00497D1Du); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00497D1D: ;
    eax = MEM32(esi + 0x90);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00497D29u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00497D29: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00497D30
 * Original: 0x00497D30 - 0x00497ECF (415 bytes, 136 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00497D30(void)
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

loc_00497D30: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    MEM32(esp + 0x10) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00497D48u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00497D45u); } /* indirect call */
    }

loc_00497D48: ;
    ebx = eax;
    ecx = edi + 0xA0;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00497D56u); RECOMP_ABI_CALL(0x00497B40u, sub_00497B40); /* call 0x00497B40 */

loc_00497D56: ;
    ebp = edi + 0xA8;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x00497D64u); RECOMP_ABI_CALL(0x00497B40u, sub_00497B40); /* call 0x00497B40 */

loc_00497D64: ;
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x98;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00497D72u); RECOMP_ABI_CALL(0x00497970u, sub_00497970); /* call 0x00497970 */

loc_00497D72: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x6409D0);
    ecx = esi;
    PUSH32(esp, 0x00497D80u); RECOMP_ABI_CALL(0x00615580u, sub_00615580); /* call 0x00615580 */

loc_00497D80: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00497D94; /* je: equal / zero */

loc_00497D84: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x90;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00497D94u); RECOMP_ABI_CALL(0x00497970u, sub_00497970); /* call 0x00497970 */

loc_00497D94: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00497EC5; /* jle: less or equal (signed <=) */

loc_00497D9C: ;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x14) = ebx;
    goto loc_00497DB0;

    /* nop */

loc_00497DB0: ;
    ebx = MEM32(esp + 0x10);
    SET_LO16(eax, MEM16(ebx + 0xA6));
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xA0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(ebx + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 4), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00497DD5; /* jne: not equal / not zero */

loc_00497DC7: ;
    ecx = ZX16(LO16(eax));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00497DD5u); RECOMP_ABI_CALL(0x00497B40u, sub_00497B40); /* call 0x00497B40 */

loc_00497DD5: ;
    MEM16(ebx + 4) = MEM16(ebx + 4) + 1;
    _fa = (uint32_t)(MEM16(ebx + 4)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(eax, MEM16(ebp + 6));
    _fa = (uint32_t)(MEM16(ebp + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 4), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00497DF1; /* jne: not equal / not zero */

loc_00497DE3: ;
    edx = ZX16(LO16(eax));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x00497DF1u); RECOMP_ABI_CALL(0x00497B40u, sub_00497B40); /* call 0x00497B40 */

loc_00497DF1: ;
    MEM16(ebp + 4) = MEM16(ebp + 4) + 1;
    _fa = (uint32_t)(MEM16(ebp + 4)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebx);
    ebx = MEM32(esp + 0x20);
    eax = MEM32(esi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00497E05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00497E02u); } /* indirect call */
    }

loc_00497E05: ;
    eax = MEM32(ebp);
    edx = MEM32(esi);
    ecx = ebx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00497E14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00497E11u); } /* indirect call */
    }

loc_00497E14: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00497E1Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00497E18u); } /* indirect call */
    }

loc_00497E1B: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO16(eax, MEM16(edi + 6));
    _fa = (uint32_t)(MEM16(edi + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 4), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00497E37; /* jne: not equal / not zero */

loc_00497E29: ;
    eax = ZX16(LO16(eax));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00497E37u); RECOMP_ABI_CALL(0x00497970u, sub_00497970); /* call 0x00497970 */

loc_00497E37: ;
    edx = MEM32(edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edi + 4));
    ecx = ZX16(LO16(eax));
    ecx = edx + ecx * 4;
    PUSH32(esp, 1);
    PUSH32(esp, 0x6409C0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(edi + 4) = LO16(eax);
    eax = MEM32(esp + 0x20);
    MEM32(ecx) = eax;
    ecx = esi;
    PUSH32(esp, 0x00497E5Eu); RECOMP_ABI_CALL(0x00615580u, sub_00615580); /* call 0x00615580 */

loc_00497E5E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00497EAB; /* je: equal / zero */

loc_00497E62: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00497E69u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00497E66u); } /* indirect call */
    }

loc_00497E69: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 0x10);
    SET_LO16(eax, MEM16(ebx + 0x96));
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x90;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(ebx + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 4), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00497E92; /* jne: not equal / not zero */

loc_00497E84: ;
    eax = ZX16(LO16(eax));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00497E92u); RECOMP_ABI_CALL(0x00497970u, sub_00497970); /* call 0x00497970 */

loc_00497E92: ;
    edx = MEM32(ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ebx + 4));
    ecx = ZX16(LO16(eax));
    ecx = edx + ecx * 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(ebx + 4) = LO16(eax);
    eax = MEM32(esp + 0x18);
    MEM32(ecx) = eax;

loc_00497EAB: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_00497DB0; /* jne: not equal / not zero */

loc_00497EC5: ;
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
 * sub_00497ED0
 * Original: 0x00497ED0 - 0x00497FC4 (244 bytes, 67 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00497ED0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00497ED0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xA0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00497EE0u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00497EE0: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xA0) = edi;
    MEM16(esi + 0xA4) = LO16(edi);
    MEM16(esi + 0xA6) = LO16(edi);
    ecx = MEM32(esi + 0xA8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00497F02u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00497F02: ;
    MEM32(esi + 0xA8) = edi;
    MEM16(esi + 0xAC) = LO16(edi);
    MEM16(esi + 0xAE) = LO16(edi);
    edx = MEM32(esi + 0x98);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00497F22u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00497F22: ;
    MEM32(esi + 0x98) = edi;
    MEM16(esi + 0x9C) = LO16(edi);
    MEM16(esi + 0x9E) = LO16(edi);
    eax = MEM32(esi + 0x90);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00497F42u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00497F42: ;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x90) = edi;
    MEM16(esi + 0x94) = LO16(edi);
    MEM16(esi + 0x96) = LO16(edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00497F69u); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_00497F69: ;
    PUSH32(esp, 0x63E350);
    ecx = edi;
    PUSH32(esp, 0x00497F75u); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_00497F75: ;
    PUSH32(esp, 0x63EFA0);
    ecx = edi;
    PUSH32(esp, 0x00497F81u); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_00497F81: ;
    edx = MEM32(edi);
    eax = esi + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00497F8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00497F89u); } /* indirect call */
    }

loc_00497F8C: ;
    edx = MEM32(edi);
    eax = esi + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00497F97u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00497F94u); } /* indirect call */
    }

loc_00497F97: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00497F9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00497F9Cu); } /* indirect call */
    }

loc_00497F9F: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00497FABu); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_00497FAB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00497FB3u); RECOMP_ABI_CALL(0x00497D30u, sub_00497D30); /* call 0x00497D30 */

loc_00497FB3: ;
    PUSH32(esp, 0x63E344);
    ecx = edi;
    PUSH32(esp, 0x00497FBFu); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_00497FBF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00497FD0
 * Original: 0x00497FD0 - 0x00498000 (48 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00497FD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00497FD0: ;
    edx = ecx;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(edx) = LO8(ebx);
    edi = edx + 0x14;
    ecx = 0xA;
    MEM32(edx + 0x10) = 1;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    MEM8(edx + 0x3C) = LO8(ebx);
    MEM8(edx + 0x3D) = LO8(ebx);
    MEM8(edx + 0x3E) = LO8(ebx);
    MEM32(edx + 0x40) = ebx;
    MEM32(edx + 0x44) = ebx;
    eax = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00498000
 * Original: 0x00498000 - 0x0049800B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00498000(void)
{

loc_00498000: ;
    eax = MEM32(ecx + 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00498009u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00498009: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00498010
 * Original: 0x00498010 - 0x0049813F (303 bytes, 102 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00498010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00498010: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x640A2C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00498020u); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_00498020: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00498030; /* jne: not equal / not zero */

loc_00498027: ;
    eax = 0xB;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00498030: ;
    PUSH32(esp, 0x640A20);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0049803Bu); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_0049803B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0049804B; /* jne: not equal / not zero */

loc_00498042: ;
    eax = 0xA;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0049804B: ;
    PUSH32(esp, 0x639338);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00498056u); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_00498056: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00498066; /* jne: not equal / not zero */

loc_0049805D: ;
    eax = 0xE;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00498066: ;
    PUSH32(esp, 0x640A18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00498071u); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_00498071: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0049805D; /* je: equal / zero */

loc_00498078: ;
    PUSH32(esp, 0x640A14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00498083u); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_00498083: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00498027; /* je: equal / zero */

loc_0049808A: ;
    PUSH32(esp, 0x63F844);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00498095u); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_00498095: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00498027; /* je: equal / zero */

loc_0049809C: ;
    PUSH32(esp, 0x640A0C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004980A7u); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_004980A7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004980B7; /* jne: not equal / not zero */

loc_004980AE: ;
    eax = 0xC;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_004980B7: ;
    PUSH32(esp, 0x640A04);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004980C2u); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_004980C2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004980D2; /* jne: not equal / not zero */

loc_004980C9: ;
    eax = 0xD;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_004980D2: ;
    PUSH32(esp, 0x6409F8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004980DDu); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_004980DD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004980ED; /* jne: not equal / not zero */

loc_004980E4: ;
    eax = 0xF;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_004980ED: ;
    PUSH32(esp, 0x6409F0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004980F8u); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_004980F8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00498108; /* jne: not equal / not zero */

loc_004980FF: ;
    eax = 0x10;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00498108: ;
    PUSH32(esp, 0x6409EC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00498113u); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_00498113: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00498123; /* jne: not equal / not zero */

loc_0049811A: ;
    eax = 0x11;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00498123: ;
    PUSH32(esp, 0x6409E4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0049812Eu); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_0049812E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFF5u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xB)) >> 32) & 1);
    eax = eax + 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00498140
 * Original: 0x00498140 - 0x00498528 (1000 bytes, 304 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00498140(void)
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

loc_00498140: ;
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xD4);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x640AC0);
    ecx = esi;
    PUSH32(esp, 0x0049815Fu); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_0049815F: ;
    PUSH32(esp, 0x63E350);
    ecx = esi;
    PUSH32(esp, 0x0049816Bu); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_0049816B: ;
    PUSH32(esp, 0x63EFA0);
    ecx = esi;
    PUSH32(esp, 0x00498177u); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_00498177: ;
    eax = MEM32(esi);
    ecx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00498183u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00498180u); } /* indirect call */
    }

loc_00498183: ;
    edx = MEM32(esi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0049818Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049818Cu); } /* indirect call */
    }

loc_0049818F: ;
    PUSH32(esp, 0x63EDE8);
    ecx = esi;
    PUSH32(esp, 0x0049819Bu); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_0049819B: ;
    PUSH32(esp, 0x63E350);
    ecx = esi;
    PUSH32(esp, 0x004981A7u); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_004981A7: ;
    PUSH32(esp, 0x640AB8);
    ecx = esi;
    PUSH32(esp, 0x004981B3u); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_004981B3: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004981BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004981BAu); } /* indirect call */
    }

loc_004981BD: ;
    PUSH32(esp, 0x640AB0);
    ecx = esi;
    PUSH32(esp, 0x004981C9u); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_004981C9: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40);
    ecx = esp + 0x98;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004981DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004981D7u); } /* indirect call */
    }

loc_004981DA: ;
    edx = esp + 0x94;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x004981E9u); RECOMP_ABI_CALL(0x00498010u, sub_00498010); /* call 0x00498010 */

loc_004981E9: ;
    PUSH32(esp, 0x640A9C);
    ecx = esi;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x004981F9u); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_004981F9: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00498200u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004981FDu); } /* indirect call */
    }

loc_00498200: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(edi + 0x3C) = LO8(ecx);
    PUSH32(esp, 0x640A94);
    ecx = esi;
    PUSH32(esp, 0x00498214u); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_00498214: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0049821Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00498218u); } /* indirect call */
    }

loc_0049821B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x640A8C);
    ecx = esi;
    MEM8(edi + 0x3D) = LO8(eax);
    PUSH32(esp, 0x0049822Fu); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_0049822F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00498236u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00498233u); } /* indirect call */
    }

loc_00498236: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(edi + 0x3E) = LO8(eax);
    PUSH32(esp, 0x640A84);
    ecx = esi;
    PUSH32(esp, 0x0049824Au); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_0049824A: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00498251u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049824Eu); } /* indirect call */
    }

loc_00498251: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 1);
    PUSH32(esp, 0x640A74);
    ecx = esi;
    PUSH32(esp, 0x00498263u); RECOMP_ABI_CALL(0x00615580u, sub_00615580); /* call 0x00615580 */

loc_00498263: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004982D2; /* je: equal / zero */

loc_00498267: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0049826Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049826Bu); } /* indirect call */
    }

loc_0049826E: ;
    ebp = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004982B9; /* jle: less or equal (signed <=) */

loc_00498276: ;
    ecx = edi + 0x14;
    MEM32(esp + 0x10) = ecx;
    /* nop */

loc_00498280: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x640A6C);
    ecx = esi;
    PUSH32(esp, 0x0049828Eu); RECOMP_ABI_CALL(0x00615580u, sub_00615580); /* call 0x00615580 */

loc_0049828E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00498297; /* je: equal / zero */

loc_00498292: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0049829E;

loc_00498297: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0049829Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049829Bu); } /* indirect call */
    }

loc_0049829E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004982A9; /* jge: greater or equal (signed >=) */

loc_004982A3: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;

loc_004982A9: ;
    ecx = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00498280; /* jl: less (signed <) */

loc_004982B9: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004982C5; /* jge: greater or equal (signed >=) */

loc_004982BE: ;
    ebp = 1;
    goto loc_004982CF;

loc_004982C5: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xA (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004982CF; /* jle: less or equal (signed <=) */

loc_004982CA: ;
    ebp = 0xA;

loc_004982CF: ;
    MEM32(edi + 0x10) = ebp;

loc_004982D2: ;
    PUSH32(esp, 0x63E344);
    ecx = esi;
    PUSH32(esp, 0x004982DEu); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_004982DE: ;
    PUSH32(esp, 0x640A5C);
    ecx = esi;
    PUSH32(esp, 0x004982EAu); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_004982EA: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004982F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004982EEu); } /* indirect call */
    }

loc_004982F1: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x66);
    MEM32(edi + 0x40) = eax;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x640A4C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00498305u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00498305: ;
    ecx = MEM32(esp + 0x34);
    MEM32(edi + 0x44) = eax;
    MEM32(eax) = ecx;
    edx = MEM32(esp + 0x38);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esp + 0x3C);
    MEM32(eax + 8) = ecx;
    edx = MEM32(edi + 0x44);
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = eax;
    ecx = MEM32(esp + 0x2C);
    MEM32(edx + 4) = ecx;
    eax = MEM32(esp + 0x30);
    MEM32(edx + 8) = eax;
    ecx = MEM32(edi + 0x44);
    edx = MEM32(esp + 0x20);
    MEM32(ecx + 0x18) = edx;
    eax = MEM32(edi + 0x44);
    ecx = MEM32(esp + 0x24);
    MEM32(eax + 0x1C) = ecx;
    eax = MEM32(edi + 0x40);
    ebp = 1;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004983F0; /* jle: less or equal (signed <=) */

loc_0049835D: ;
    ebx = 0x20;

loc_00498362: ;
    PUSH32(esp, 0x63EFA0);
    ecx = esi;
    PUSH32(esp, 0x0049836Eu); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_0049836E: ;
    eax = MEM32(edi + 0x44);
    edx = MEM32(esi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0049837Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00498378u); } /* indirect call */
    }

loc_0049837B: ;
    eax = MEM32(edi + 0x44);
    edx = MEM32(esi);
    ecx = eax + ebx + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0049838Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00498387u); } /* indirect call */
    }

loc_0049838A: ;
    PUSH32(esp, 0x640A40);
    ecx = esi;
    PUSH32(esp, 0x00498396u); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_00498396: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0049839Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049839Au); } /* indirect call */
    }

loc_0049839D: ;
    eax = MEM32(edi + 0x44);
    PUSH32(esp, 0x640A34);
    MEMF(eax + ebx + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi;
    PUSH32(esp, 0x004983B0u); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_004983B0: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40);
    eax = esp + 0x98;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004983C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004983BEu); } /* indirect call */
    }

loc_004983C1: ;
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x004983D0u); RECOMP_ABI_CALL(0x00498010u, sub_00498010); /* call 0x00498010 */

loc_004983D0: ;
    edx = MEM32(edi + 0x44);
    MEM32(edx + ebx + 0x1C) = eax;
    eax = MEM32(edi + 0x44);
    ecx = MEM32(eax + 4);
    MEM32(ebx + eax + 4) = ecx;
    eax = MEM32(edi + 0x40);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00498362; /* jl: less (signed <) */

loc_004983F0: ;
    PUSH32(esp, 0x63E344);
    ecx = esi;
    PUSH32(esp, 0x004983FCu); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_004983FC: ;
    eax = MEM32(edi + 0x40);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0049851B; /* jle: less or equal (signed <=) */

loc_0049840B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00498410: ;
    eax = MEM32(0x6984B0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0049843F; /* jne: not equal / not zero */

loc_00498419: ;
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x6984B0) = eax;
    MEM32(0x6984A4) = 0;
    MEM32(0x6984A8) = 0x3F800000;
    MEM32(0x6984AC) = 0;

loc_0049843F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00498469; /* jne: not equal / not zero */

loc_00498443: ;
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x6984B0) = eax;
    MEM32(0x698498) = 0;
    MEM32(0x69849C) = 0x40A00000;
    MEM32(0x6984A0) = 0;

loc_00498469: ;
    edx = MEM32(edi + 0x44);
    fp_push(MEMF(edx + esi)); /* fld float */
    eax = edx + esi;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x698498)); /* fsub dword ptr [0x698498] */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    fp_push(MEMF(eax + 4)); /* fld float */
    PUSH32(esp, ebp);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x69849C)); /* fsub dword ptr [0x69849c] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x6984A0)); /* fsub dword ptr [0x6984a0] */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x6984A4)); /* fld float */
    ecx = MEM32(esp + 0x60);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    fp_push(MEMF(0x6984A8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    fp_push(MEMF(0x6984AC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    MEM32(esp + 0x54) = ecx;
    ecx = MEM32(0x6C8EB8);
    MEM32(esp + 0x3C) = ebp;
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x6C);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x48) = eax;
    eax = esp + 0x70;
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    eax = esp + 0x40;
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx);
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x004984EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004984E9u); } /* indirect call */
    }

loc_004984EF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049850C; /* je: equal / zero */

loc_004984F3: ;
    ecx = MEM32(edi + 0x44);
    edx = MEM32(esp + 0x6C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    eax = MEM32(esp + 0x70);
    MEM32(ecx + 4) = eax;
    edx = MEM32(esp + 0x74);
    MEM32(ecx + 8) = edx;

loc_0049850C: ;
    eax = MEM32(edi + 0x40);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00498410; /* jl: less (signed <) */

loc_0049851B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00498530
 * Original: 0x00498530 - 0x0049854B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00498530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00498530: ;
    ecx = MEM32(0x6984B4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00498540; /* je: equal / zero */

loc_0049853A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00498540u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049853Eu); } /* indirect call */
    }

loc_00498540: ;
    MEM32(0x6984B4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00498550
 * Original: 0x00498550 - 0x00498576 (38 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00498550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00498550: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00498573; /* je: equal / zero */

loc_00498558: ;
    PUSH32(esp, esi);
    /* nop */

loc_00498560: ;
    eax = MEM32(ecx);
    esi = MEM32(ecx + 0x4C0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0049856Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049856Au); } /* indirect call */
    }

loc_0049856C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00498560; /* jne: not equal / not zero */

loc_00498572: ;
    POP32(esp, esi);

loc_00498573: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00498580
 * Original: 0x00498580 - 0x0049864A (202 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00498580(void)
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

loc_00498580: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x8583A0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0x00498594u); RECOMP_ABI_CALL(0x005EE5A0u, sub_005EE5A0); /* call 0x005EE5A0 */

loc_00498594: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x0049859Bu); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_0049859B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004985A2u); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_004985A2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004985A9u); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_004985A9: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004985B5u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_004985B5: ;
    eax = MEM32(0x858378);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004985C0u); RECOMP_ABI_CALL(0x005F23A0u, sub_005F23A0); /* call 0x005F23A0 */

loc_004985C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004985C7u); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_004985C7: ;
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004985DBu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004985DB: ;
    fp_push(MEMF(esi + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ebx, LO8(eax));
    PUSH32(esp, 0x004985EDu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004985ED: ;
    fp_push(MEMF(esi + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_LO8(ebx, LO8(eax));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00498600u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00498600: ;
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ecx = ZX8(LO8(eax));
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00498616u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00498616: ;
    ecx = MEM32(0x674FAC);
    edx = ZX8(LO8(eax));
    eax = MEM32(0x674FB0);
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0049863Au); RECOMP_ABI_CALL(0x005EF6F0u, sub_005EF6F0); /* call 0x005EF6F0 */

loc_0049863A: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00498643u); RECOMP_ABI_CALL(0x005F23A0u, sub_005F23A0); /* call 0x005F23A0 */

loc_00498643: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00498650
 * Original: 0x00498650 - 0x0049867A (42 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00498650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00498650: ;
    eax = MEM32(esp + 8);
    eax = MEM32(eax);
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00498675; /* je: equal / zero */

loc_0049865E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00498670; /* je: equal / zero */

loc_00498662: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00498675; /* je: equal / zero */

loc_00498666: ;
    eax = MEM32(eax + 0x4C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00498662; /* jne: not equal / not zero */

loc_00498670: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_00498675: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00498680
 * Original: 0x00498680 - 0x004986EA (106 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00498680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00498680: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00498690u); RECOMP_ABI_CALL(0x00498650u, sub_00498650); /* call 0x00498650 */

loc_00498690: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004986E6; /* je: equal / zero */

loc_00498694: ;
    eax = MEM32(esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004986AE; /* jne: not equal / not zero */

loc_0049869C: ;
    eax = MEM32(edx + 0x4BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004986AC; /* jne: not equal / not zero */

loc_004986A6: ;
    eax = MEM32(edx + 0x4C0);

loc_004986AC: ;
    MEM32(esi) = eax;

loc_004986AE: ;
    eax = MEM32(edx + 0x4C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004986C4; /* je: equal / zero */

loc_004986B8: ;
    esi = MEM32(edx + 0x4BC);
    MEM32(eax + 0x4BC) = esi;

loc_004986C4: ;
    eax = MEM32(edx + 0x4BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004986DA; /* je: equal / zero */

loc_004986CE: ;
    esi = MEM32(edx + 0x4C0);
    MEM32(eax + 0x4C0) = esi;

loc_004986DA: ;
    MEM32(edx + 0x4BC) = ecx;
    MEM32(edx + 0x4C0) = ecx;

loc_004986E6: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004986F0
 * Original: 0x004986F0 - 0x00498752 (98 bytes, 30 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004986F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004986F0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00498700u); RECOMP_ABI_CALL(0x00498650u, sub_00498650); /* call 0x00498650 */

loc_00498700: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049874E; /* jne: not equal / not zero */

loc_00498704: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, MEM8(esp + 0x10));
    if (CMP_EQ(_fa, _fb)) goto loc_00498718; /* je: equal / zero */

loc_0049870E: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00498734; /* je: equal / zero */

loc_00498712: ;
    MEM32(eax + 0x4BC) = edx;

loc_00498718: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049873A; /* je: equal / zero */

loc_0049871C: ;
    eax = MEM32(esi);
    MEM32(edx + 0x4C0) = eax;
    MEM32(edx + 0x4BC) = 0;
    MEM32(esi) = edx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00498734: ;
    MEM32(eax + 0x4C0) = edx;

loc_0049873A: ;
    ecx = MEM32(esi);
    MEM32(edx + 0x4BC) = ecx;
    MEM32(edx + 0x4C0) = 0;
    MEM32(esi) = edx;

loc_0049874E: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00498760
 * Original: 0x00498760 - 0x0049876D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00498760(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00498760: ;
    ecx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049876C; /* je: equal / zero */

loc_00498767: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

loc_0049876C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00498770
 * Original: 0x00498770 - 0x00498810 (160 bytes, 60 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00498770(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00498770: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0049877Eu); RECOMP_ABI_CALL(0x00406990u, sub_00406990); /* call 0x00406990 */

loc_0049877E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x640B2C);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x00498794u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00498794: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x640B18);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004987AAu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004987AA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0x640B04);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004987C0u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004987C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, 0x640AE8);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004987D6u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004987D6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x60;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x640AD8);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004987ECu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004987EC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x70;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x640AD0);
    PUSH32(esp, 7);
    ecx = edi;
    PUSH32(esp, 0x00498802u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00498802: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00498808u); RECOMP_ABI_CALL(0x0049B040u, sub_0049B040); /* call 0x0049B040 */

loc_00498808: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00498810
 * Original: 0x00498810 - 0x00498840 (48 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00498810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00498810: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    MEM32(esi) = 0x640B3C;
    PUSH32(esp, 0x00498822u); RECOMP_ABI_CALL(0x00498550u, sub_00498550); /* call 0x00498550 */

loc_00498822: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0049882Du); RECOMP_ABI_CALL(0x00498550u, sub_00498550); /* call 0x00498550 */

loc_0049882D: ;
    edx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00498838u); RECOMP_ABI_CALL(0x00498550u, sub_00498550); /* call 0x00498550 */

loc_00498838: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005E3280(); return; /* tail jmp 0x005E3280 */

}

/**
 * sub_00498840
 * Original: 0x00498840 - 0x00498846 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00498840(void)
{

loc_00498840: ;
    eax = 0x640B5C;
    esp += 4; return; /* ret */

}

/**
 * sub_00498850
 * Original: 0x00498850 - 0x004988A3 (83 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00498850(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00498850: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x18);
    eax = edi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00498861u); RECOMP_ABI_CALL(0x00498680u, sub_00498680); /* call 0x00498680 */

loc_00498861: ;
    PUSH32(esp, 1);
    eax = edi + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0049886Fu); RECOMP_ABI_CALL(0x004986F0u, sub_004986F0); /* call 0x004986F0 */

loc_0049886F: ;
    edx = MEM32(edi + 0x10);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    MEM32(edi + 0x10) = edx;
    PUSH32(esp, 0x0049887Du); RECOMP_ABI_CALL(0x0049B240u, sub_0049B240); /* call 0x0049B240 */

loc_0049887D: ;
    SET_LO8(ecx, MEM8(esp + 0xC));
    PUSH32(esp, 0);
    MEM8(esi + 0x485) = LO8(ecx);
    PUSH32(esp, 0x62D544);
    ecx = esi;
    MEM8(esi + 0x486) = 1;
    PUSH32(esp, 0x0049889Cu); RECOMP_ABI_CALL(0x0049B1A0u, sub_0049B1A0); /* call 0x0049B1A0 */

loc_0049889C: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004988B0
 * Original: 0x004988B0 - 0x00498905 (85 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004988B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004988B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(edi + 0x487));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004988C9; /* jne: not equal / not zero */

loc_004988C2: ;
    ecx = edi;
    PUSH32(esp, 0x004988C9u); RECOMP_ABI_CALL(0x0049B240u, sub_0049B240); /* call 0x0049B240 */

loc_004988C9: ;
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004988D5u); RECOMP_ABI_CALL(0x00498680u, sub_00498680); /* call 0x00498680 */

loc_004988D5: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = esi + 0x14;
    if (CMP_EQ(_fa, _fb)) goto loc_004988EE; /* je: equal / zero */

loc_004988DF: ;
    SET_LO8(edx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ecx + 0x487) = LO8(edx);

loc_004988EE: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004988F9u); RECOMP_ABI_CALL(0x004986F0u, sub_004986F0); /* call 0x004986F0 */

loc_004988F9: ;
    MEM8(edi + 0x487) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00498910
 * Original: 0x00498910 - 0x0049894B (59 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00498910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00498910: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = esi + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00498923u); RECOMP_ABI_CALL(0x00498680u, sub_00498680); /* call 0x00498680 */

loc_00498923: ;
    edi = MEM32(edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00498930; /* je: equal / zero */

loc_00498929: ;
    MEM8(edi + 0x487) = 1;

loc_00498930: ;
    PUSH32(esp, 1);
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0049893Eu); RECOMP_ABI_CALL(0x004986F0u, sub_004986F0); /* call 0x004986F0 */

loc_0049893E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebx + 0x487) = 0;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00498950
 * Original: 0x00498950 - 0x004989B4 (100 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00498950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00498950: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(edi + 0x486));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004989AF; /* je: equal / zero */

loc_00498962: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049896D; /* je: equal / zero */

loc_0049896A: ;
    PUSH32(esp, eax);
    goto loc_00498981;

loc_0049896D: ;
    SET_LO8(eax, MEM8(edi + 0x487));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049897D; /* je: equal / zero */

loc_00498977: ;
    eax = esi + 0x14;
    PUSH32(esp, eax);
    goto loc_00498981;

loc_0049897D: ;
    ecx = esi + 0x1C;
    PUSH32(esp, ecx);

loc_00498981: ;
    ecx = esi;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00498989u); RECOMP_ABI_CALL(0x00498680u, sub_00498680); /* call 0x00498680 */

loc_00498989: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00498997; /* je: equal / zero */

loc_00498990: ;
    MEM8(eax + 0x487) = 1;

loc_00498997: ;
    PUSH32(esp, 1);
    edx = esi + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004989A5u); RECOMP_ABI_CALL(0x004986F0u, sub_004986F0); /* call 0x004986F0 */

loc_004989A5: ;
    ecx = edi;
    PUSH32(esp, 0x004989ACu); RECOMP_ABI_CALL(0x0049B250u, sub_0049B250); /* call 0x0049B250 */

loc_004989AC: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_004989AF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004989C0
 * Original: 0x004989C0 - 0x00498A8A (202 bytes, 67 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004989C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004989C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00498A85; /* je: equal / zero */

loc_004989CF: ;
    SET_LO8(eax, MEM8(esi + 0x487));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00498A85; /* je: equal / zero */

loc_004989DD: ;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004989F2; /* jne: not equal / not zero */

loc_004989E4: ;
    SET_LO8(eax, MEM8(0x6C3421));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004989F2; /* jne: not equal / not zero */

loc_004989ED: ;
    PUSH32(esp, 0x004989F2u); RECOMP_ABI_CALL(0x00498580u, sub_00498580); /* call 0x00498580 */

loc_004989F2: ;
    eax = edi + 0x30;
    edx = MEM32(eax);
    ecx = esi + 0x3C4;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    ecx = edi + 0x40;
    eax = MEM32(ecx);
    edx = esi + 0x3D4;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    eax = MEM32(ecx + 8);
    MEM32(edx + 8) = eax;
    ecx = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = ecx;
    edx = edi + 0x50;
    ecx = MEM32(edx);
    eax = esi + 0x3E4;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edx + 8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(edx + 0xC);
    MEM32(eax + 0xC) = edx;
    eax = edi + 0x60;
    edx = MEM32(eax);
    ecx = esi + 0x3F4;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x70;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00498A79u); RECOMP_ABI_CALL(0x0049B020u, sub_0049B020); /* call 0x0049B020 */

loc_00498A79: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00498A85u); RECOMP_ABI_CALL(0x0049B3A0u, sub_0049B3A0); /* call 0x0049B3A0 */

loc_00498A85: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00498A90
 * Original: 0x00498A90 - 0x00498B97 (263 bytes, 88 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00498A90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00498A90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00498A9Bu); RECOMP_ABI_CALL(0x005E33D0u, sub_005E33D0); /* call 0x005E33D0 */

loc_00498A9B: ;
    ebp = MEM32(esp + 0x14);
    MEM32(esi) = 0x640B3C;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x2C) = 0x3E99999A;
    eax = 0x3F800000;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x30) = edi;
    MEM32(esi + 0x34) = edi;
    MEM32(esi + 0x38) = edi;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x40) = edi;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x48) = edi;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = edi;
    MEM32(esi + 0x54) = 0x3ECCCCCD;
    MEM32(esi + 0x58) = edi;
    MEM32(esi + 0x5C) = eax;
    PUSH32(esp, 0x2B);
    MEM32(esi + 0x60) = edi;
    MEM32(esi + 0x64) = edi;
    MEM32(esi + 0x68) = edi;
    MEM32(esi + 0x6C) = eax;
    PUSH32(esp, 0x640B74);
    MEM32(esi + 0x70) = eax;
    MEM32(esi + 0x74) = eax;
    PUSH32(esp, 0x54C);
    MEM32(esi + 0xC) = ebp;
    PUSH32(esp, 0x00498B16u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00498B16: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00498B28; /* je: equal / zero */

loc_00498B1D: ;
    ecx = eax;
    PUSH32(esp, 0x00498B24u); RECOMP_ABI_CALL(0x0049C090u, sub_0049C090); /* call 0x0049C090 */

loc_00498B24: ;
    ebx = eax;
    goto loc_00498B2A;

loc_00498B28: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00498B2A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    MEM32(esi + 0x18) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_00498B67; /* jle: less or equal (signed <=) */

loc_00498B32: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00498B33: ;
    PUSH32(esp, 0x31);
    PUSH32(esp, 0x640B74);
    PUSH32(esp, 0x54C);
    PUSH32(esp, 0x00498B44u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00498B44: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00498B54; /* je: equal / zero */

loc_00498B4B: ;
    ecx = eax;
    PUSH32(esp, 0x00498B52u); RECOMP_ABI_CALL(0x0049C090u, sub_0049C090); /* call 0x0049C090 */

loc_00498B52: ;
    goto loc_00498B56;

loc_00498B54: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00498B56: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 0x4BC) = ebx;
    MEM32(ebx + 0x4C0) = eax;
    ebx = eax;
    if ((_fa != 0)) goto loc_00498B33; /* jne: not equal / not zero */

loc_00498B67: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00498B6Fu); RECOMP_ABI_CALL(0x00498850u, sub_00498850); /* call 0x00498850 */

loc_00498B6F: ;
    ecx = esi + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00498B7Bu); RECOMP_ABI_CALL(0x00498950u, sub_00498950); /* call 0x00498950 */

loc_00498B7B: ;
    PUSH32(esp, 0x640B68);
    ecx = esi;
    PUSH32(esp, 0x00498B87u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_00498B87: ;
    ecx = esi;
    PUSH32(esp, 0x00498B8Eu); RECOMP_ABI_CALL(0x005E3320u, sub_005E3320); /* call 0x005E3320 */

loc_00498B8E: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00498BA0
 * Original: 0x00498BA0 - 0x00498BBE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00498BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00498BA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00498BA8u); RECOMP_ABI_CALL(0x00498810u, sub_00498810); /* call 0x00498810 */

loc_00498BA8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00498BB8; /* je: equal / zero */

loc_00498BAF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00498BB5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00498BB5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00498BB8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00498BC0
 * Original: 0x00498BC0 - 0x00498BEF (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00498BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00498BC0: ;
    PUSH32(esp, 0x17);
    PUSH32(esp, 0x640B74);
    PUSH32(esp, 0x78);
    PUSH32(esp, 0x00498BCEu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00498BCE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00498BE7; /* je: equal / zero */

loc_00498BD5: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00498BE1u); RECOMP_ABI_CALL(0x00498A90u, sub_00498A90); /* call 0x00498A90 */

loc_00498BE1: ;
    MEM32(0x6984B4) = eax;
    esp += 4; return; /* ret */

loc_00498BE7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x6984B4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00498BF0
 * Original: 0x00498BF0 - 0x00498C50 (96 bytes, 35 insns)
 * Category: game_ui
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00498BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00498BF0: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x639A50);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00498C0Eu); RECOMP_ABI_CALL(0x0049E1B0u, sub_0049E1B0); /* call 0x0049E1B0 */

loc_00498C0E: ;
    PUSH32(esp, 0x2A);
    PUSH32(esp, 0x640B80);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x00498C1Cu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00498C1C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00498C3E; /* je: equal / zero */

loc_00498C23: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x46);
    ecx = eax;
    PUSH32(esp, 0x00498C2Eu); RECOMP_ABI_CALL(0x0049E9D0u, sub_0049E9D0); /* call 0x0049E9D0 */

loc_00498C2E: ;
    PUSH32(esp, 1);
    ecx = esi;
    MEM32(esi + 0x34) = eax;
    PUSH32(esp, 0x00498C3Au); RECOMP_ABI_CALL(0x0049E240u, sub_0049E240); /* call 0x0049E240 */

loc_00498C3A: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00498C3E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 1);
    ecx = esi;
    MEM32(esi + 0x34) = eax;
    PUSH32(esp, 0x00498C4Cu); RECOMP_ABI_CALL(0x0049E240u, sub_0049E240); /* call 0x0049E240 */

loc_00498C4C: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00498C50
 * Original: 0x00498C50 - 0x00498DFA (426 bytes, 71 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00498C50(void)
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

loc_00498C50: ;
    SET_LO8(edx, MEM8(0x698518));
    eax = 1;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00498D5C; /* jne: not equal / not zero */

loc_00498C66: ;
    MEM32(0x698518) = MEM32(0x698518) | eax;
    _fa = (uint32_t)(MEM32(0x698518)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x6984B8) = 0x436D0000;
    MEM32(0x6984BC) = 0x436C0000;
    MEM32(0x6984C0) = 0x42F60000;
    MEM32(0x6984C4) = 0x43330000;
    MEM32(0x6984C8) = 0x43640000;
    MEM32(0x6984CC) = 0x430E0000;
    MEM32(0x6984D0) = 0x435A0000;
    MEM32(0x6984D4) = 0x43220000;
    MEM32(0x6984D8) = 0x43520000;
    MEM32(0x6984DC) = 0x437A0000;
    MEM32(0x6984E0) = 0x43160000;
    MEM32(0x6984E4) = 0x43350000;
    MEM32(0x6984E8) = 0x43190000;
    MEM32(0x6984EC) = 0x432B0000;
    MEM32(0x6984F0) = 0x43670000;
    MEM32(0x6984F4) = 0x42E40000;
    MEM32(0x6984F8) = 0x433B0000;
    MEM32(0x6984FC) = 0x43330000;
    MEM32(0x698500) = 0x43350000;
    MEM32(0x698504) = 0x43250000;
    MEM32(0x698508) = 0x43560000;
    MEM32(0x69850C) = 0x43750000;
    MEM32(0x698510) = 0x43360000;
    MEM32(0x698514) = 0x42A80000;

loc_00498D5C: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00498DAB; /* ja: above (unsigned >) */

loc_00498D65: ;
    eax = eax + eax * 2;
    edx = eax * 4 + 0x6984B8;
    eax = MEM32(edx);
    MEM32(esp) = eax;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D014)); /* fmul dword ptr [0x63d014] */
    eax = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 4) = eax;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 8) = edx;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D014)); /* fmul dword ptr [0x63d014] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D014)); /* fmul dword ptr [0x63d014] */
    goto loc_00498DDA;

loc_00498DAB: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x45C82BE5);
    _fb = (uint32_t)(0x2D09A4AB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x2D09A4AB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x640B8C)); /* fmul dword ptr [0x640b8c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D370)); /* fadd dword ptr [0x62d370] */
    MEMF(esp) = (float)fp_top(); /* fst */
    MEMF(esp + 4) = (float)fp_top(); /* fst */

loc_00498DDA: ;
    ecx = MEM32(ecx + 0x34);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00498DF4; /* je: equal / zero */

loc_00498DE5: ;
    edx = MEM32(esp + 0x10);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00498DF4u); RECOMP_ABI_CALL(0x0049E610u, sub_0049E610); /* call 0x0049E610 */

loc_00498DF4: ;
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
 * sub_00498D02
 * Original: 0x00498D02 - 0x00498DFA (248 bytes, 50 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00498D02(void)
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

loc_00498D02: ;
    MEM32(0x6984F4) = 0x42E40000;
    MEM32(0x6984F8) = 0x433B0000;
    MEM32(0x6984FC) = 0x43330000;
    MEM32(0x698500) = 0x43350000;
    MEM32(0x698504) = 0x43250000;
    MEM32(0x698508) = 0x43560000;
    MEM32(0x69850C) = 0x43750000;
    MEM32(0x698510) = 0x43360000;
    MEM32(0x698514) = 0x42A80000;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00498DAB; /* ja: above (unsigned >) */

loc_00498D65: ;
    eax = eax + eax * 2;
    edx = eax * 4 + 0x6984B8;
    eax = MEM32(edx);
    MEM32(esp) = eax;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D014)); /* fmul dword ptr [0x63d014] */
    eax = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 4) = eax;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 8) = edx;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D014)); /* fmul dword ptr [0x63d014] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D014)); /* fmul dword ptr [0x63d014] */
    goto loc_00498DDA;

loc_00498DAB: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x45C82BE5);
    _fb = (uint32_t)(0x2D09A4AB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x2D09A4AB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x640B8C)); /* fmul dword ptr [0x640b8c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D370)); /* fadd dword ptr [0x62d370] */
    MEMF(esp) = (float)fp_top(); /* fst */
    MEMF(esp + 4) = (float)fp_top(); /* fst */

loc_00498DDA: ;
    ecx = MEM32(ecx + 0x34);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00498DF4; /* je: equal / zero */

loc_00498DE5: ;
    edx = MEM32(esp + 0x10);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00498DF4u); RECOMP_ABI_CALL(0x0049E610u, sub_0049E610); /* call 0x0049E610 */

loc_00498DF4: ;
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
 * sub_00498D16
 * Original: 0x00498D16 - 0x00498DFA (228 bytes, 48 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00498D16(void)
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

loc_00498D16: ;
    MEM32(0x6984FC) = 0x43330000;
    MEM32(0x698500) = 0x43350000;
    MEM32(0x698504) = 0x43250000;
    MEM32(0x698508) = 0x43560000;
    MEM32(0x69850C) = 0x43750000;
    MEM32(0x698510) = 0x43360000;
    MEM32(0x698514) = 0x42A80000;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00498DAB; /* ja: above (unsigned >) */

loc_00498D65: ;
    eax = eax + eax * 2;
    edx = eax * 4 + 0x6984B8;
    eax = MEM32(edx);
    MEM32(esp) = eax;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D014)); /* fmul dword ptr [0x63d014] */
    eax = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 4) = eax;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 8) = edx;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D014)); /* fmul dword ptr [0x63d014] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D014)); /* fmul dword ptr [0x63d014] */
    goto loc_00498DDA;

loc_00498DAB: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x45C82BE5);
    _fb = (uint32_t)(0x2D09A4AB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x2D09A4AB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x640B8C)); /* fmul dword ptr [0x640b8c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D370)); /* fadd dword ptr [0x62d370] */
    MEMF(esp) = (float)fp_top(); /* fst */
    MEMF(esp + 4) = (float)fp_top(); /* fst */

loc_00498DDA: ;
    ecx = MEM32(ecx + 0x34);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00498DF4; /* je: equal / zero */

loc_00498DE5: ;
    edx = MEM32(esp + 0x10);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00498DF4u); RECOMP_ABI_CALL(0x0049E610u, sub_0049E610); /* call 0x0049E610 */

loc_00498DF4: ;
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
 * sub_00498E00
 * Original: 0x00498E00 - 0x00498E05 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00498E00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00498E00: ;
    g_seh_ebp = ebp; sub_00406990(); return; /* tail jmp 0x00406990 */

}

/**
 * sub_00498E10
 * Original: 0x00498E10 - 0x00498E50 (64 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00498E10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00498E10: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x640B90;
    if (CMP_EQ(_fa, _fb)) goto loc_00498E26; /* je: equal / zero */

loc_00498E20: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00498E26u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00498E24u); } /* indirect call */
    }

loc_00498E26: ;
    MEM32(0x698520) = MEM32(0x698520) - 1;
    _fa = (uint32_t)(MEM32(0x698520)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00498E48; /* jne: not equal / not zero */

loc_00498E2E: ;
    ecx = MEM32(0x69851C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00498E3E; /* je: equal / zero */

loc_00498E38: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00498E3Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00498E3Cu); } /* indirect call */
    }

loc_00498E3E: ;
    MEM32(0x69851C) = 0;

loc_00498E48: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0049E1A0(); return; /* tail jmp 0x0049E1A0 */

}

/**
 * sub_00498E50
 * Original: 0x00498E50 - 0x00498E56 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00498E50(void)
{

loc_00498E50: ;
    eax = 0x640BCC;
    esp += 4; return; /* ret */

}

/**
 * sub_00498E60
 * Original: 0x00498E60 - 0x00498EA1 (65 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00498E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00498E60: ;
    PUSH32(esp, esi);
    esi = MEM32(0x69851C);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00498E71u); RECOMP_ABI_CALL(0x0044E0A0u, sub_0044E0A0); /* call 0x0044E0A0 */

loc_00498E71: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x00498E7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00498E78u); } /* indirect call */
    }

loc_00498E7B: ;
    SET_LO8(eax, MEM8(0x6C3421));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00498EA0; /* je: equal / zero */

loc_00498E85: ;
    eax = MEM32(0x6C3424);
    ecx = MEM32(0x69585C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00498E96u); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_00498E96: ;
    ecx = MEM32(eax + 0x50);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00498EA0u); RECOMP_ABI_CALL(0x004998E0u, sub_004998E0); /* call 0x004998E0 */

loc_00498EA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00498EB0
 * Original: 0x00498EB0 - 0x00498EDF (47 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00498EB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00498EB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x00498EB8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00498EB5u); } /* indirect call */
    }

loc_00498EB8: ;
    SET_LO8(eax, MEM8(esi + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00498EDD; /* je: equal / zero */

loc_00498EBF: ;
    ecx = MEM32(0x69851C);
    ecx = MEM32(ecx + 0x10);
    PUSH32(esp, 0x00498ECDu); RECOMP_ABI_CALL(0x0055F0E0u, sub_0055F0E0); /* call 0x0055F0E0 */

loc_00498ECD: ;
    SET_LO8(eax, MEM8(esi + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00498EDD; /* je: equal / zero */

loc_00498ED4: ;
    ecx = MEM32(esi + 0x34);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0049E790(); return; /* tail jmp 0x0049E790 */

loc_00498EDD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00498EE0
 * Original: 0x00498EE0 - 0x00498EEF (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00498EE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00498EE0: ;
    eax = MEM32(0x69851C);
    ecx = MEM32(eax + 0x18);
    eax = MEM32(ecx + 0x44);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00498EF0
 * Original: 0x00498EF0 - 0x00498F42 (82 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00498EF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00498EF0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(0x69851C);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_00498F2C; /* je: equal / zero */

loc_00498F04: ;
    PUSH32(esp, 0x00498F09u); RECOMP_ABI_CALL(0x0044E050u, sub_0044E050); /* call 0x0044E050 */

loc_00498F09: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x62DF21);
    PUSH32(esp, 0x00498F16u); RECOMP_ABI_CALL(0x0044D8B0u, sub_0044D8B0); /* call 0x0044D8B0 */

loc_00498F16: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x00498F20u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00498F1Du); } /* indirect call */
    }

loc_00498F20: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x00498F28u); RECOMP_ABI_CALL(0x005615A0u, sub_005615A0); /* call 0x005615A0 */

loc_00498F28: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00498F2C: ;
    PUSH32(esp, 0x00498F31u); RECOMP_ABI_CALL(0x0044E0A0u, sub_0044E0A0); /* call 0x0044E0A0 */

loc_00498F31: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx);
    POP32(esp, esi);
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x60)); return; /* indirect tail jmp */

}

/**
 * sub_00498F50
 * Original: 0x00498F50 - 0x00498F6E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00498F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00498F50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00498F58u); RECOMP_ABI_CALL(0x00498E10u, sub_00498E10); /* call 0x00498E10 */

loc_00498F58: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00498F68; /* je: equal / zero */

loc_00498F5F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00498F65u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00498F65: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00498F68: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00498F70
 * Original: 0x00498F70 - 0x00499093 (291 bytes, 93 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00498F70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00498F70: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    SET_LO8(eax, MEM8(ebp + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00499091; /* je: equal / zero */

loc_00498F7E: ;
    SET_LO8(eax, MEM8(0x6C3421));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00499091; /* je: equal / zero */

loc_00498F8B: ;
    eax = MEM32(0x69851C);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00498F9Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00498F97u); } /* indirect call */
    }

loc_00498F9A: ;
    eax = MEM32(0x69851C);
    esi = MEM32(eax + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00498FAD; /* je: equal / zero */

loc_00498FA6: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00498FADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00498FAAu); } /* indirect call */
    }

loc_00498FAD: ;
    SET_LO8(eax, MEM8(esi + 0x4B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00499044; /* je: equal / zero */

loc_00498FB8: ;
    edi = MEM32(esi + 0x22C);
    MEM8(esi + 0x4B) = 0;
    ecx = MEM32(0x6C38B4);
    PUSH32(esp, 0x00498FCDu); RECOMP_ABI_CALL(0x005E4230u, sub_005E4230); /* call 0x005E4230 */

loc_00498FCD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00498FF2; /* jle: less or equal (signed <=) */

loc_00498FD2: ;
    eax = edi;
    edx = eax + 1;

loc_00498FD7: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00498FD7; /* jne: not equal / not zero */

loc_00498FDE: ;
    ecx = MEM32(0x6C38B4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x138); PUSH32(esp, 0x00498FF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00498FECu); } /* indirect call */
    }

loc_00498FF2: ;
    PUSH32(esp, 0x62DF21);
    ecx = esi;
    PUSH32(esp, 0x00498FFEu); RECOMP_ABI_CALL(0x0044D8B0u, sub_0044D8B0); /* call 0x0044D8B0 */

loc_00498FFE: ;
    ecx = esi;
    PUSH32(esp, 0x00499005u); RECOMP_ABI_CALL(0x0044F2E0u, sub_0044F2E0); /* call 0x0044F2E0 */

loc_00499005: ;
    eax = MEM32(0x6C38A4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00499019; /* jne: not equal / not zero */

loc_00499010: ;
    SET_LO8(eax, MEM8(0x696760));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00499035; /* jne: not equal / not zero */

loc_00499019: ;
    ecx = MEM32(0x6C3424);
    edx = MEM32(0x697B88);
    eax = MEM32(edx + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x8C);
    _fa = (uint32_t)(MEM8(ecx + eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0049907F; /* je: equal / zero */

loc_00499035: ;
    PUSH32(esp, 0x640BD4);
    PUSH32(esp, 0x0049903Fu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0049903F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0049907F;

loc_00499044: ;
    SET_LO8(eax, MEM8(esi + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0049907F; /* je: equal / zero */

loc_0049904B: ;
    MEM8(esi + 0x4C) = 0;
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
    PUSH32(esp, 0x0049906Cu); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_0049906C: ;
    edi = eax;
    ecx = edi;
    PUSH32(esp, 0x00499075u); RECOMP_ABI_CALL(0x00468C10u, sub_00468C10); /* call 0x00468C10 */

loc_00499075: ;
    ecx = MEM32(edi + 0x50);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0049907Fu); RECOMP_ABI_CALL(0x004998E0u, sub_004998E0); /* call 0x004998E0 */

loc_0049907F: ;
    ecx = MEM32(ebp + 0x34);
    PUSH32(esp, 0x00499087u); RECOMP_ABI_CALL(0x0049E710u, sub_0049E710); /* call 0x0049E710 */

loc_00499087: ;
    edx = MEM32(esi);
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC)); return; /* indirect tail jmp */

loc_00499091: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004990A0
 * Original: 0x004990A0 - 0x00499284 (484 bytes, 172 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004990A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004990A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    MEM32(esp + 0xC) = ebx;
    PUSH32(esp, 0x004990B3u); RECOMP_ABI_CALL(0x0049EB40u, sub_0049EB40); /* call 0x0049EB40 */

loc_004990B3: ;
    MEM32(esi) = 0x640C28;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;
    ebp = esi + 0x18;
    MEM32(ebp) = ebx;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xC), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004990E1; /* jne: not equal / not zero */

loc_004990CA: ;
    PUSH32(esp, 0x639A50);
    ecx = esi;
    PUSH32(esp, 0x004990D6u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_004990D6: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004990DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004990DAu); } /* indirect call */
    }

loc_004990DD: ;
    MEM8(esi + 0xC) = 1;

loc_004990E1: ;
    ecx = MEM32(ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004990F0; /* je: equal / zero */

loc_004990E8: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004990EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004990EAu); } /* indirect call */
    }

loc_004990ED: ;
    MEM32(ebp) = ebx;

loc_004990F0: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004990FF; /* je: equal / zero */

loc_004990F7: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004990FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004990F9u); } /* indirect call */
    }

loc_004990FC: ;
    MEM32(esi + 0x14) = ebx;

loc_004990FF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x11F);
    PUSH32(esp, 0x640B80);
    PUSH32(esp, 0x160);
    PUSH32(esp, 0x00499114u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00499114: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049912D; /* je: equal / zero */

loc_0049911B: ;
    ecx = MEM32(0x662878);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00499129u); RECOMP_ABI_CALL(0x0055E5B0u, sub_0055E5B0); /* call 0x0055E5B0 */

loc_00499129: ;
    edi = eax;
    goto loc_0049912F;

loc_0049912D: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049912F: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049914D; /* je: equal / zero */

loc_00499136: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049913F; /* je: equal / zero */

loc_0049913A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0049913Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049913Cu); } /* indirect call */
    }

loc_0049913F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi + 0x10) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0049914D; /* je: equal / zero */

loc_00499146: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0049914Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049914Au); } /* indirect call */
    }

loc_0049914D: ;
    PUSH32(esp, 0x121);
    PUSH32(esp, 0x640B80);
    PUSH32(esp, 0x8E8);
    PUSH32(esp, 0x00499161u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00499161: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00499179; /* je: equal / zero */

loc_00499168: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x640C1C);
    ecx = eax;
    PUSH32(esp, 0x00499175u); RECOMP_ABI_CALL(0x0044E500u, sub_0044E500); /* call 0x0044E500 */

loc_00499175: ;
    edi = eax;
    goto loc_0049917B;

loc_00499179: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049917B: ;
    ecx = MEM32(ebp);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00499199; /* je: equal / zero */

loc_00499182: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049918B; /* je: equal / zero */

loc_00499186: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0049918Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499188u); } /* indirect call */
    }

loc_0049918B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(ebp) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00499199; /* je: equal / zero */

loc_00499192: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00499199u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499196u); } /* indirect call */
    }

loc_00499199: ;
    ecx = MEM32(ebp);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3D);
    PUSH32(esp, 0x62DF21);
    PUSH32(esp, 0x27);
    PUSH32(esp, 0xA);
    PUSH32(esp, 7);
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x004991B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004991ABu); } /* indirect call */
    }

loc_004991B1: ;
    PUSH32(esp, 0x127);
    PUSH32(esp, 0x640B80);
    PUSH32(esp, 0x158);
    PUSH32(esp, 0x004991C5u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_004991C5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004991ED; /* je: equal / zero */

loc_004991CC: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x640C08);
    ecx = eax;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x18) = 1;
    PUSH32(esp, 0x004991E9u); RECOMP_ABI_CALL(0x00561060u, sub_00561060); /* call 0x00561060 */

loc_004991E9: ;
    edi = eax;
    goto loc_004991EF;

loc_004991ED: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004991EF: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049920D; /* je: equal / zero */

loc_004991F6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004991FF; /* je: equal / zero */

loc_004991FA: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004991FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004991FCu); } /* indirect call */
    }

loc_004991FF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi + 0x14) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0049920D; /* je: equal / zero */

loc_00499206: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0049920Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049920Au); } /* indirect call */
    }

loc_0049920D: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00499222; /* je: equal / zero */

loc_00499215: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00499222; /* je: equal / zero */

loc_0049921D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00499222u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049921Fu); } /* indirect call */
    }

loc_00499222: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0049922Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499228u); } /* indirect call */
    }

loc_0049922B: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00499237u); RECOMP_ABI_CALL(0x00561630u, sub_00561630); /* call 0x00561630 */

loc_00499237: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40E740);
    PUSH32(esp, 0x80000C1Cu);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0049924Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499247u); } /* indirect call */
    }

loc_0049924A: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x51);
    PUSH32(esp, 0x00499254u); RECOMP_ABI_CALL(0x00561610u, sub_00561610); /* call 0x00561610 */

loc_00499254: ;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0049925Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499259u); } /* indirect call */
    }

loc_0049925C: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00499264u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499261u); } /* indirect call */
    }

loc_00499264: ;
    ecx = MEM32(ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0049926Du); RECOMP_ABI_CALL(0x0044E0A0u, sub_0044E0A0); /* call 0x0044E0A0 */

loc_0049926D: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x00499276u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499273u); } /* indirect call */
    }

loc_00499276: ;
    PUSH32(esp, 0x0049927Bu); RECOMP_ABI_CALL(0x0049EAD0u, sub_0049EAD0); /* call 0x0049EAD0 */

loc_0049927B: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00499290
 * Original: 0x00499290 - 0x00499296 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00499290(void)
{

loc_00499290: ;
    eax = 0x640C48;
    esp += 4; return; /* ret */

}

/**
 * sub_004992A0
 * Original: 0x004992A0 - 0x004992F9 (89 bytes, 25 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004992A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004992A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004992A8u); RECOMP_ABI_CALL(0x0049E150u, sub_0049E150); /* call 0x0049E150 */

loc_004992A8: ;
    MEM32(esi) = 0x640B90;
    eax = MEM32(0x69851C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004992E4; /* jne: not equal / not zero */

loc_004992B7: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x640C58);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x004992C5u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_004992C5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004992DA; /* je: equal / zero */

loc_004992CC: ;
    ecx = eax;
    PUSH32(esp, 0x004992D3u); RECOMP_ABI_CALL(0x004990A0u, sub_004990A0); /* call 0x004990A0 */

loc_004992D3: ;
    MEM32(0x69851C) = eax;
    goto loc_004992E4;

loc_004992DA: ;
    MEM32(0x69851C) = 0;

loc_004992E4: ;
    MEM32(0x698520) = MEM32(0x698520) + 1;
    _fa = (uint32_t)(MEM32(0x698520)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x34) = 0;
    MEM8(esi + 0x38) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00499300
 * Original: 0x00499300 - 0x0049934D (77 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00499300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00499300: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x640C28;
    PUSH32(esp, 0x0049930Eu); RECOMP_ABI_CALL(0x0049E5F0u, sub_0049E5F0); /* call 0x0049E5F0 */

loc_0049930E: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00499321; /* je: equal / zero */

loc_00499315: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0049931Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499317u); } /* indirect call */
    }

loc_0049931A: ;
    MEM32(esi + 0x10) = 0;

loc_00499321: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049932D; /* je: equal / zero */

loc_00499328: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0049932Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049932Au); } /* indirect call */
    }

loc_0049932D: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00499339; /* je: equal / zero */

loc_00499334: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00499339u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499336u); } /* indirect call */
    }

loc_00499339: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00499345; /* je: equal / zero */

loc_00499340: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00499345u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499342u); } /* indirect call */
    }

loc_00499345: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0049EB60(); return; /* tail jmp 0x0049EB60 */

}

/**
 * sub_00499350
 * Original: 0x00499350 - 0x0049936E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00499350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00499350: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00499358u); RECOMP_ABI_CALL(0x00499300u, sub_00499300); /* call 0x00499300 */

loc_00499358: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00499368; /* je: equal / zero */

loc_0049935F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00499365u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00499365: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00499368: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00499370
 * Original: 0x00499370 - 0x00499478 (264 bytes, 120 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00499370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00499370: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x640CE4;
    if (CMP_EQ(_fa, _fb)) goto loc_00499386; /* je: equal / zero */

loc_00499380: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00499386u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499384u); } /* indirect call */
    }

loc_00499386: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00499393; /* je: equal / zero */

loc_0049938D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00499393u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499391u); } /* indirect call */
    }

loc_00499393: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004993A0; /* je: equal / zero */

loc_0049939A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004993A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049939Eu); } /* indirect call */
    }

loc_004993A0: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004993AD; /* je: equal / zero */

loc_004993A7: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004993ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004993ABu); } /* indirect call */
    }

loc_004993AD: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004993BA; /* je: equal / zero */

loc_004993B4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004993BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004993B8u); } /* indirect call */
    }

loc_004993BA: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004993C7; /* je: equal / zero */

loc_004993C1: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004993C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004993C5u); } /* indirect call */
    }

loc_004993C7: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004993D4; /* je: equal / zero */

loc_004993CE: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004993D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004993D2u); } /* indirect call */
    }

loc_004993D4: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004993E1; /* je: equal / zero */

loc_004993DB: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004993E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004993DFu); } /* indirect call */
    }

loc_004993E1: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004993EE; /* je: equal / zero */

loc_004993E8: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004993EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004993ECu); } /* indirect call */
    }

loc_004993EE: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004993FB; /* je: equal / zero */

loc_004993F5: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004993FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004993F9u); } /* indirect call */
    }

loc_004993FB: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00499408; /* je: equal / zero */

loc_00499402: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00499408u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499406u); } /* indirect call */
    }

loc_00499408: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00499415; /* je: equal / zero */

loc_0049940F: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00499415u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499413u); } /* indirect call */
    }

loc_00499415: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00499422; /* je: equal / zero */

loc_0049941C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00499422u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499420u); } /* indirect call */
    }

loc_00499422: ;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049942F; /* je: equal / zero */

loc_00499429: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0049942Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049942Du); } /* indirect call */
    }

loc_0049942F: ;
    ecx = MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049943C; /* je: equal / zero */

loc_00499436: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0049943Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049943Au); } /* indirect call */
    }

loc_0049943C: ;
    ecx = MEM32(esi + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00499449; /* je: equal / zero */

loc_00499443: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00499449u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499447u); } /* indirect call */
    }

loc_00499449: ;
    ecx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00499456; /* je: equal / zero */

loc_00499450: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00499456u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499454u); } /* indirect call */
    }

loc_00499456: ;
    ecx = MEM32(esi + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00499463; /* je: equal / zero */

loc_0049945D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00499463u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499461u); } /* indirect call */
    }

loc_00499463: ;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00499470; /* je: equal / zero */

loc_0049946A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00499470u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049946Eu); } /* indirect call */
    }

loc_00499470: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005E3280(); return; /* tail jmp 0x005E3280 */

}

/**
 * sub_00499480
 * Original: 0x00499480 - 0x00499486 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00499480(void)
{

loc_00499480: ;
    eax = 0x640D04;
    esp += 4; return; /* ret */

}

/**
 * sub_00499490
 * Original: 0x00499490 - 0x004995BF (303 bytes, 129 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00499490(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00499490: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x70);
    esi = ecx;
    eax = edi + edi * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x58) = edi;
    ecx = MEM32(eax + 0x6C3450);
    edx = MEM32(0x6C3308);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x640D0C);
    eax = esp + 0x14;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004994C3u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004994C3: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x004994D2u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_004994D2: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004994D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004994D6u); } /* indirect call */
    }

loc_004994D9: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004994E2u); RECOMP_ABI_CALL(0x004A23F0u, sub_004A23F0); /* call 0x004A23F0 */

loc_004994E2: ;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x004994EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004994EBu); } /* indirect call */
    }

loc_004994EE: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x004994FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004994F7u); } /* indirect call */
    }

loc_004994FA: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00499506u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499503u); } /* indirect call */
    }

loc_00499506: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x00499512u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049950Fu); } /* indirect call */
    }

loc_00499512: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0049951Eu); RECOMP_ABI_CALL(0x004A1D40u, sub_004A1D40); /* call 0x004A1D40 */

loc_0049951E: ;
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0049952Au); RECOMP_ABI_CALL(0x004A11D0u, sub_004A11D0); /* call 0x004A11D0 */

loc_0049952A: ;
    ecx = MEM32(esi + 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00499536u); RECOMP_ABI_CALL(0x004A0760u, sub_004A0760); /* call 0x004A0760 */

loc_00499536: ;
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00499542u); RECOMP_ABI_CALL(0x0049FFA0u, sub_0049FFA0); /* call 0x0049FFA0 */

loc_00499542: ;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0049954Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049954Bu); } /* indirect call */
    }

loc_0049954E: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x0049955Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499557u); } /* indirect call */
    }

loc_0049955A: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00499566u); RECOMP_ABI_CALL(0x0049F5A0u, sub_0049F5A0); /* call 0x0049F5A0 */

loc_00499566: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0049956Fu); RECOMP_ABI_CALL(0x0049D700u, sub_0049D700); /* call 0x0049D700 */

loc_0049956F: ;
    ecx = MEM32(esi + 0x40);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0049957Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499578u); } /* indirect call */
    }

loc_0049957B: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x00499587u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499584u); } /* indirect call */
    }

loc_00499587: ;
    ecx = MEM32(esi + 0x48);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00499593u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499590u); } /* indirect call */
    }

loc_00499593: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0049959Fu); RECOMP_ABI_CALL(0x0049F130u, sub_0049F130); /* call 0x0049F130 */

loc_0049959F: ;
    ecx = MEM32(esi + 0x50);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004995ABu); RECOMP_ABI_CALL(0x0049EB90u, sub_0049EB90); /* call 0x0049EB90 */

loc_004995AB: ;
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004995B7u); RECOMP_ABI_CALL(0x00498BF0u, sub_00498BF0); /* call 0x00498BF0 */

loc_004995B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004995C0
 * Original: 0x004995C0 - 0x0049964C (140 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004995C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004995C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x54);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x004995CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004995C8u); } /* indirect call */
    }

loc_004995CB: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004995D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004995D0u); } /* indirect call */
    }

loc_004995D3: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x004995DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004995D8u); } /* indirect call */
    }

loc_004995DB: ;
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004995E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004995E0u); } /* indirect call */
    }

loc_004995E3: ;
    ecx = MEM32(esi + 0x30);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x004995EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004995E8u); } /* indirect call */
    }

loc_004995EB: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004995F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004995F0u); } /* indirect call */
    }

loc_004995F3: ;
    ecx = MEM32(esi + 0x38);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x004995FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004995F8u); } /* indirect call */
    }

loc_004995FB: ;
    ecx = MEM32(esi + 0x40);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00499603u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499600u); } /* indirect call */
    }

loc_00499603: ;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x0049960Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499608u); } /* indirect call */
    }

loc_0049960B: ;
    ecx = MEM32(esi + 0x48);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00499613u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499610u); } /* indirect call */
    }

loc_00499613: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x0049961Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499618u); } /* indirect call */
    }

loc_0049961B: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00499623u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499620u); } /* indirect call */
    }

loc_00499623: ;
    ecx = MEM32(esi + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x0049962Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499628u); } /* indirect call */
    }

loc_0049962B: ;
    ecx = MEM32(esi + 0x4C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00499633u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499630u); } /* indirect call */
    }

loc_00499633: ;
    ecx = MEM32(esi + 0x50);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x0049963Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499638u); } /* indirect call */
    }

loc_0049963B: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00499643u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499640u); } /* indirect call */
    }

loc_00499643: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x30)); return; /* indirect tail jmp */

}

/**
 * sub_00499650
 * Original: 0x00499650 - 0x0049978E (318 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00499650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00499650: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x5C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049978C; /* je: equal / zero */

loc_0049965E: ;
    eax = MEM32(0x6C3890);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 3 (32-bit) */
    ecx = MEM32(0x6C32E0);
    if (CMP_EQ(_fa, _fb)) goto loc_0049977A; /* je: equal / zero */

loc_00499673: ;
    SET_LO8(edx, MEM8(eax + 9));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049977A; /* jne: not equal / not zero */

loc_0049967E: ;
    eax = MEM32(0x6C38A4);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049977A; /* je: equal / zero */

loc_0049968F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004996C3; /* jne: not equal / not zero */

loc_00499694: ;
    SET_LO8(eax, MEM8(0x6C3421));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004996C3; /* jne: not equal / not zero */

loc_0049969D: ;
    eax = MEM32(0x6C2C60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004996BA; /* je: equal / zero */

loc_004996A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004996BA; /* je: equal / zero */

loc_004996AC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004996BA; /* je: equal / zero */

loc_004996B1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049978C; /* jne: not equal / not zero */

loc_004996BA: ;
    ecx = MEM32(esi + 0x3C);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0049C400(); return; /* tail jmp 0x0049C400 */

loc_004996C3: ;
    PUSH32(esp, 0x004996C8u); RECOMP_ABI_CALL(0x005EE9F0u, sub_005EE9F0); /* call 0x005EE9F0 */

loc_004996C8: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x004996D0u); RECOMP_ABI_CALL(0x004A25F0u, sub_004A25F0); /* call 0x004A25F0 */

loc_004996D0: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x004996D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004996D5u); } /* indirect call */
    }

loc_004996D8: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004996E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004996DDu); } /* indirect call */
    }

loc_004996E0: ;
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x004996E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004996E5u); } /* indirect call */
    }

loc_004996E8: ;
    ecx = MEM32(esi + 0x30);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004996F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004996EDu); } /* indirect call */
    }

loc_004996F0: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x004996F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004996F5u); } /* indirect call */
    }

loc_004996F8: ;
    ecx = MEM32(esi + 0x38);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00499700u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004996FDu); } /* indirect call */
    }

loc_00499700: ;
    ecx = MEM32(esi + 0x40);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00499708u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499705u); } /* indirect call */
    }

loc_00499708: ;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00499710u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049970Du); } /* indirect call */
    }

loc_00499710: ;
    ecx = MEM32(esi + 0x48);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00499718u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499715u); } /* indirect call */
    }

loc_00499718: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00499720u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049971Du); } /* indirect call */
    }

loc_00499720: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00499728u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499725u); } /* indirect call */
    }

loc_00499728: ;
    ecx = MEM32(esi + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00499730u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049972Du); } /* indirect call */
    }

loc_00499730: ;
    ecx = MEM32(esi + 0x4C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00499738u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499735u); } /* indirect call */
    }

loc_00499738: ;
    ecx = MEM32(esi + 0x50);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00499740u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049973Du); } /* indirect call */
    }

loc_00499740: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00499748u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499745u); } /* indirect call */
    }

loc_00499748: ;
    eax = MEM32(0x6C3890);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049975B; /* je: equal / zero */

loc_00499753: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, 0x0049975Bu); RECOMP_ABI_CALL(0x0049C400u, sub_0049C400); /* call 0x0049C400 */

loc_0049975B: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00499763u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499760u); } /* indirect call */
    }

loc_00499763: ;
    SET_LO8(eax, MEM8(0x6C3421));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049978C; /* je: equal / zero */

loc_0049976C: ;
    PUSH32(esp, 0x00499771u); RECOMP_ABI_CALL(0x005EE9F0u, sub_005EE9F0); /* call 0x005EE9F0 */

loc_00499771: ;
    ecx = MEM32(esi + 0x54);
    eax = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x28)); return; /* indirect tail jmp */

loc_0049977A: ;
    SET_LO8(eax, MEM8(0x6C3421));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049978C; /* je: equal / zero */

loc_00499783: ;
    ecx = MEM32(esi + 0x54);
    edx = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x28)); return; /* indirect tail jmp */

loc_0049978C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00499790
 * Original: 0x00499790 - 0x00499824 (148 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00499790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00499790: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, 0x0049979Bu); RECOMP_ABI_CALL(0x0049C430u, sub_0049C430); /* call 0x0049C430 */

loc_0049979B: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x004997A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004997A0u); } /* indirect call */
    }

loc_004997A3: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x004997ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004997A8u); } /* indirect call */
    }

loc_004997AB: ;
    ecx = MEM32(esi + 0x24);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x004997B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004997B0u); } /* indirect call */
    }

loc_004997B3: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x004997BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004997B8u); } /* indirect call */
    }

loc_004997BB: ;
    ecx = MEM32(esi + 0x4C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x004997C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004997C0u); } /* indirect call */
    }

loc_004997C3: ;
    ecx = MEM32(esi + 0x50);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x004997CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004997C8u); } /* indirect call */
    }

loc_004997CB: ;
    ecx = MEM32(esi + 0x54);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x004997D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004997D0u); } /* indirect call */
    }

loc_004997D3: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x004997DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004997D8u); } /* indirect call */
    }

loc_004997DB: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x004997E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004997E0u); } /* indirect call */
    }

loc_004997E3: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x004997EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004997E8u); } /* indirect call */
    }

loc_004997EB: ;
    ecx = MEM32(esi + 0x2C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x004997F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004997F0u); } /* indirect call */
    }

loc_004997F3: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x004997FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004997F8u); } /* indirect call */
    }

loc_004997FB: ;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x00499803u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499800u); } /* indirect call */
    }

loc_00499803: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0049980Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499808u); } /* indirect call */
    }

loc_0049980B: ;
    ecx = MEM32(esi + 0x40);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x00499813u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499810u); } /* indirect call */
    }

loc_00499813: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0049981Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499818u); } /* indirect call */
    }

loc_0049981B: ;
    ecx = MEM32(esi + 0x48);
    eax = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x2C)); return; /* indirect tail jmp */

}

/**
 * sub_00499830
 * Original: 0x00499830 - 0x004998D3 (163 bytes, 73 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00499830(void)
{

loc_00499830: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    MEM8(eax + 0xC) = LO8(ebx);
    ecx = MEM32(esi + 0x20);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00499847u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499844u); } /* indirect call */
    }

loc_00499847: ;
    ecx = MEM32(esi + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00499850u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049984Du); } /* indirect call */
    }

loc_00499850: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00499859u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499856u); } /* indirect call */
    }

loc_00499859: ;
    ecx = MEM32(esi + 0x28);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00499862u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049985Fu); } /* indirect call */
    }

loc_00499862: ;
    ecx = MEM32(esi + 0x4C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0049986Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499868u); } /* indirect call */
    }

loc_0049986B: ;
    ecx = MEM32(esi + 0x50);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00499874u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499871u); } /* indirect call */
    }

loc_00499874: ;
    ecx = MEM32(esi + 0x54);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0049987Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049987Au); } /* indirect call */
    }

loc_0049987D: ;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00499886u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499883u); } /* indirect call */
    }

loc_00499886: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0049988Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049988Cu); } /* indirect call */
    }

loc_0049988F: ;
    ecx = MEM32(esi + 0x2C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00499898u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499895u); } /* indirect call */
    }

loc_00499898: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x004998A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049989Eu); } /* indirect call */
    }

loc_004998A1: ;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x004998AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004998A7u); } /* indirect call */
    }

loc_004998AA: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x004998B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004998B0u); } /* indirect call */
    }

loc_004998B3: ;
    ecx = MEM32(esi + 0x40);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x004998BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004998B9u); } /* indirect call */
    }

loc_004998BC: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x004998C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004998C2u); } /* indirect call */
    }

loc_004998C5: ;
    ecx = MEM32(esi + 0x48);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x004998CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004998CBu); } /* indirect call */
    }

loc_004998CE: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004998E0
 * Original: 0x004998E0 - 0x004998F9 (25 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004998E0(void)
{

loc_004998E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004998F1u); RECOMP_ABI_CALL(0x00498EF0u, sub_00498EF0); /* call 0x00498EF0 */

loc_004998F1: ;
    MEM8(esi + 0x5D) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00499900
 * Original: 0x00499900 - 0x00499908 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00499900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00499900: ;
    ecx = MEM32(ecx + 0x54);
    g_seh_ebp = ebp; sub_00498EE0(); return; /* tail jmp 0x00498EE0 */

}

/**
 * sub_00499910
 * Original: 0x00499910 - 0x00499933 (35 bytes, 7 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00499910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00499910: ;
    _fa = (uint32_t)(MEM32(0x674FAC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x674FAC), 0x400 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0049992D; /* jle: less or equal (signed <=) */

loc_0049991C: ;
    _fa = (uint32_t)(MEM32(0x674FB0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x300) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x674FB0), 0x300 (32-bit) */
    eax = 0x640D40;
    if (CMP_G(_fas, _fbs)) goto loc_00499932; /* jg: greater (signed >) */

loc_0049992D: ;
    eax = 0x640D2C;

loc_00499932: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00499940
 * Original: 0x00499940 - 0x00499957 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00499940(void)
{

loc_00499940: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x7D0;
    esp += 4; return; /* ret */

}

/**
 * sub_00499960
 * Original: 0x00499960 - 0x004999D0 (112 bytes, 49 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00499960(void)
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

loc_00499960: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = esi;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    PUSH32(esp, edi);
    edi = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    PUSH32(esp, 0x0049997Eu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0049997E: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    edx = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_00499989; /* jg: greater (signed >) */

loc_00499987: ;
    edx = eax;

loc_00499989: ;
    eax = esi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    ecx = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00499995; /* jl: less (signed <) */

loc_00499993: ;
    ecx = eax;

loc_00499995: ;
    fp_push(MEMF(edi)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D520)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d520] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004999BD; /* jp: parity */

loc_004999A4: ;
    edi = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004999B4; /* jge: greater or equal (signed >=) */

loc_004999AB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ecx + ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_004999B4: ;
    eax = edi + ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_004999BD: ;
    _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    eax = ecx + ebx;
    if (CMP_G(_fas, _fbs)) goto loc_004999CA; /* jg: greater (signed >) */

loc_004999C7: ;
    eax = esi + ebx;

loc_004999CA: ;
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
 * sub_004999D0
 * Original: 0x004999D0 - 0x00499A7C (172 bytes, 59 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004999D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004999D0: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xB4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x640D84);
    eax = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x004999F7u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004999F7: ;
    ebx = MEM32(esp + 0xC0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 6);
    ecx = ebx;
    PUSH32(esp, 0x00499A14u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00499A14: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x640D70);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00499A29u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00499A29: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = ebx;
    PUSH32(esp, 0x00499A42u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00499A42: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x640D58);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00499A57u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00499A57: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    ecx = ebx;
    PUSH32(esp, 0x00499A70u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00499A70: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00499A80
 * Original: 0x00499A80 - 0x00499A85 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00499A80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00499A80: ;
    g_seh_ebp = ebp; sub_00499960(); return; /* tail jmp 0x00499960 */

}

/**
 * sub_00499A90
 * Original: 0x00499A90 - 0x00499A98 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00499A90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00499A90: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00499960(); return; /* tail jmp 0x00499960 */

}

/**
 * sub_00499AA0
 * Original: 0x00499AA0 - 0x00499B10 (112 bytes, 36 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00499AA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00499AA0: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xB4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x640DAC);
    eax = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00499AC7u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00499AC7: ;
    ebx = MEM32(esp + 0xC0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00499ADEu); RECOMP_ABI_CALL(0x004999D0u, sub_004999D0); /* call 0x004999D0 */

loc_00499ADE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x640DA4);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00499AF3u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00499AF3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi + 0xC;
    PUSH32(esp, 0x00499B04u); RECOMP_ABI_CALL(0x004999D0u, sub_004999D0); /* call 0x004999D0 */

loc_00499B04: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00499B10
 * Original: 0x00499B10 - 0x00499B2E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00499B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00499B10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00499B18u); RECOMP_ABI_CALL(0x00499370u, sub_00499370); /* call 0x00499370 */

loc_00499B18: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00499B28; /* je: equal / zero */

loc_00499B1F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00499B25u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00499B25: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00499B28: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00499B30
 * Original: 0x00499B30 - 0x00499C19 (233 bytes, 94 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00499B30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00499B30: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x58);
    PUSH32(esp, ebx);
    ebx = MEM32(0x6C3308);
    PUSH32(esp, ebp);
    eax = eax + eax * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x6C3450);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(0x674FB0);
    if (CMP_EQ(_fa, _fb)) goto loc_00499B6B; /* je: equal / zero */

loc_00499B54: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00499B5E; /* jne: not equal / not zero */

loc_00499B59: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00499B6B; /* jg: greater (signed >) */

loc_00499B5E: ;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x10) = eax;
    goto loc_00499B73;

loc_00499B6B: ;
    MEM32(esp + 0x10) = 0;

loc_00499B73: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00499B7C; /* jne: not equal / not zero */

loc_00499B77: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    goto loc_00499B8E;

loc_00499B7C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00499B86; /* jne: not equal / not zero */

loc_00499B81: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    goto loc_00499B8E;

loc_00499B86: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00499B9B; /* je: equal / zero */

loc_00499B8B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */

loc_00499B8E: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00499B9B; /* je: equal / zero */

loc_00499B90: ;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = eax;
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((1) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    goto loc_00499B9D;

loc_00499B9B: ;
    ebp = edi;

loc_00499B9D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00499BBE; /* je: equal / zero */

loc_00499BA1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00499BAB; /* jne: not equal / not zero */

loc_00499BA6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    goto loc_00499BAE;

loc_00499BAB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */

loc_00499BAE: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00499BBE; /* je: equal / zero */

loc_00499BB0: ;
    eax = MEM32(0x674FAC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    goto loc_00499BC0;

loc_00499BBE: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00499BC0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00499BC9; /* jne: not equal / not zero */

loc_00499BC4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    goto loc_00499BD1;

loc_00499BC9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00499BDF; /* je: equal / zero */

loc_00499BCE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */

loc_00499BD1: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00499BDF; /* je: equal / zero */

loc_00499BD3: ;
    eax = MEM32(0x674FAC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    goto loc_00499BE4;

loc_00499BDF: ;
    eax = MEM32(0x674FAC);

loc_00499BE4: ;
    edx = MEM32(esp + 0x18);
    edx = edx + edx * 2 + 0xC;
    esi = ecx + edx * 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00499BF8u); RECOMP_ABI_CALL(0x00499A80u, sub_00499A80); /* call 0x00499A80 */

loc_00499BF8: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    MEM32(ecx) = eax;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00499C0Bu); RECOMP_ABI_CALL(0x00499A90u, sub_00499A90); /* call 0x00499A90 */

loc_00499C0B: ;
    ecx = MEM32(esp + 0x20);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00499C20
 * Original: 0x00499C20 - 0x00499C6D (77 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00499C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00499C20: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x6C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x66287C;
    edi = ecx + 0x60;

loc_00499C32: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x640DB4);
    ecx = esp + 0x14;
    PUSH32(esp, 0x64);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00499C46u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00499C46: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00499C56u); RECOMP_ABI_CALL(0x00499AA0u, sub_00499AA0); /* call 0x00499AA0 */

loc_00499C56: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6628A0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x6628A0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00499C32; /* jl: less (signed <) */

loc_00499C64: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00499C70
 * Original: 0x00499C70 - 0x00499F9E (814 bytes, 278 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00499C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00499C70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00499C7Au); RECOMP_ABI_CALL(0x005E33D0u, sub_005E33D0); /* call 0x005E33D0 */

loc_00499C7A: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x640CE4;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 0x3C) = ebx;
    MEM32(esi + 0x40) = ebx;
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x4C) = ebx;
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x54) = ebx;
    MEM32(esi + 0x58) = ebx;
    edx = esi + 0x60;
    edi = 9;

loc_00499CC6: ;
    ecx = edx;
    PUSH32(esp, 0x00499CCDu); RECOMP_ABI_CALL(0x00499940u, sub_00499940); /* call 0x00499940 */

loc_00499CCD: ;
    ecx = edx + 0xC;
    PUSH32(esp, 0x00499CD5u); RECOMP_ABI_CALL(0x00499940u, sub_00499940); /* call 0x00499940 */

loc_00499CD5: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00499CC6; /* jne: not equal / not zero */

loc_00499CDB: ;
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0x640DC0);
    PUSH32(esp, 0x70);
    PUSH32(esp, 0x00499CE9u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00499CE9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00499CF9; /* je: equal / zero */

loc_00499CF0: ;
    ecx = eax;
    PUSH32(esp, 0x00499CF7u); RECOMP_ABI_CALL(0x004A2370u, sub_004A2370); /* call 0x004A2370 */

loc_00499CF7: ;
    goto loc_00499CFB;

loc_00499CF9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00499CFB: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x640DC0);
    PUSH32(esp, 0x70);
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x00499D0Cu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00499D0C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00499D1C; /* je: equal / zero */

loc_00499D13: ;
    ecx = eax;
    PUSH32(esp, 0x00499D1Au); RECOMP_ABI_CALL(0x004A8E10u, sub_004A8E10); /* call 0x004A8E10 */

loc_00499D1A: ;
    goto loc_00499D1E;

loc_00499D1C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00499D1E: ;
    PUSH32(esp, 0x3D);
    PUSH32(esp, 0x640DC0);
    PUSH32(esp, 0x6C);
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x00499D2Fu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00499D2F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00499D3F; /* je: equal / zero */

loc_00499D36: ;
    ecx = eax;
    PUSH32(esp, 0x00499D3Du); RECOMP_ABI_CALL(0x004A8030u, sub_004A8030); /* call 0x004A8030 */

loc_00499D3D: ;
    goto loc_00499D41;

loc_00499D3F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00499D41: ;
    PUSH32(esp, 0x3E);
    PUSH32(esp, 0x640DC0);
    PUSH32(esp, 0x5C);
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x00499D52u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00499D52: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00499D62; /* je: equal / zero */

loc_00499D59: ;
    ecx = eax;
    PUSH32(esp, 0x00499D60u); RECOMP_ABI_CALL(0x004A5C60u, sub_004A5C60); /* call 0x004A5C60 */

loc_00499D60: ;
    goto loc_00499D64;

loc_00499D62: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00499D64: ;
    PUSH32(esp, 0x3F);
    PUSH32(esp, 0x640DC0);
    PUSH32(esp, 0x80);
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x00499D78u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00499D78: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00499D88; /* je: equal / zero */

loc_00499D7F: ;
    ecx = eax;
    PUSH32(esp, 0x00499D86u); RECOMP_ABI_CALL(0x004A4F90u, sub_004A4F90); /* call 0x004A4F90 */

loc_00499D86: ;
    goto loc_00499D8A;

loc_00499D88: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00499D8A: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x640DC0);
    PUSH32(esp, 0x44);
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x00499D9Bu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00499D9B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00499DAB; /* je: equal / zero */

loc_00499DA2: ;
    ecx = eax;
    PUSH32(esp, 0x00499DA9u); RECOMP_ABI_CALL(0x0049FEE0u, sub_0049FEE0); /* call 0x0049FEE0 */

loc_00499DA9: ;
    goto loc_00499DAD;

loc_00499DAB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00499DAD: ;
    PUSH32(esp, 0x41);
    PUSH32(esp, 0x640DC0);
    PUSH32(esp, 0x44);
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0x00499DBEu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00499DBE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00499DCE; /* je: equal / zero */

loc_00499DC5: ;
    ecx = eax;
    PUSH32(esp, 0x00499DCCu); RECOMP_ABI_CALL(0x004A22B0u, sub_004A22B0); /* call 0x004A22B0 */

loc_00499DCC: ;
    goto loc_00499DD0;

loc_00499DCE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00499DD0: ;
    PUSH32(esp, 0x42);
    PUSH32(esp, 0x640DC0);
    PUSH32(esp, 0x3C);
    MEM32(esi + 0x24) = eax;
    PUSH32(esp, 0x00499DE1u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00499DE1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00499DF1; /* je: equal / zero */

loc_00499DE8: ;
    ecx = eax;
    PUSH32(esp, 0x00499DEFu); RECOMP_ABI_CALL(0x004A1CB0u, sub_004A1CB0); /* call 0x004A1CB0 */

loc_00499DEF: ;
    goto loc_00499DF3;

loc_00499DF1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00499DF3: ;
    PUSH32(esp, 0x43);
    PUSH32(esp, 0x640DC0);
    PUSH32(esp, 0x4C);
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, 0x00499E04u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00499E04: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00499E14; /* je: equal / zero */

loc_00499E0B: ;
    ecx = eax;
    PUSH32(esp, 0x00499E12u); RECOMP_ABI_CALL(0x004A1120u, sub_004A1120); /* call 0x004A1120 */

loc_00499E12: ;
    goto loc_00499E16;

loc_00499E14: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00499E16: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x640DC0);
    PUSH32(esp, 0x44);
    MEM32(esi + 0x2C) = eax;
    PUSH32(esp, 0x00499E27u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00499E27: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00499E37; /* je: equal / zero */

loc_00499E2E: ;
    ecx = eax;
    PUSH32(esp, 0x00499E35u); RECOMP_ABI_CALL(0x004A0670u, sub_004A0670); /* call 0x004A0670 */

loc_00499E35: ;
    goto loc_00499E39;

loc_00499E37: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00499E39: ;
    PUSH32(esp, 0x45);
    PUSH32(esp, 0x640DC0);
    PUSH32(esp, 0x84);
    MEM32(esi + 0x30) = eax;
    PUSH32(esp, 0x00499E4Du); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00499E4D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00499E5D; /* je: equal / zero */

loc_00499E54: ;
    ecx = eax;
    PUSH32(esp, 0x00499E5Bu); RECOMP_ABI_CALL(0x004A4830u, sub_004A4830); /* call 0x004A4830 */

loc_00499E5B: ;
    goto loc_00499E5F;

loc_00499E5D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00499E5F: ;
    PUSH32(esp, 0x46);
    PUSH32(esp, 0x640DC0);
    PUSH32(esp, 0x80);
    MEM32(esi + 0x34) = eax;
    PUSH32(esp, 0x00499E73u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00499E73: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00499E83; /* je: equal / zero */

loc_00499E7A: ;
    ecx = eax;
    PUSH32(esp, 0x00499E81u); RECOMP_ABI_CALL(0x004A4280u, sub_004A4280); /* call 0x004A4280 */

loc_00499E81: ;
    goto loc_00499E85;

loc_00499E83: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00499E85: ;
    PUSH32(esp, 0x47);
    PUSH32(esp, 0x640DC0);
    PUSH32(esp, 0x78);
    MEM32(esi + 0x38) = eax;
    PUSH32(esp, 0x00499E96u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00499E96: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00499EA6; /* je: equal / zero */

loc_00499E9D: ;
    ecx = eax;
    PUSH32(esp, 0x00499EA4u); RECOMP_ABI_CALL(0x0049C390u, sub_0049C390); /* call 0x0049C390 */

loc_00499EA4: ;
    goto loc_00499EA8;

loc_00499EA6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00499EA8: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, 0x640DC0);
    PUSH32(esp, 0x80);
    MEM32(esi + 0x3C) = eax;
    PUSH32(esp, 0x00499EBCu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00499EBC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00499ECC; /* je: equal / zero */

loc_00499EC3: ;
    ecx = eax;
    PUSH32(esp, 0x00499ECAu); RECOMP_ABI_CALL(0x004A3C60u, sub_004A3C60); /* call 0x004A3C60 */

loc_00499ECA: ;
    goto loc_00499ECE;

loc_00499ECC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00499ECE: ;
    PUSH32(esp, 0x49);
    PUSH32(esp, 0x640DC0);
    PUSH32(esp, 0xA8);
    MEM32(esi + 0x40) = eax;
    PUSH32(esp, 0x00499EE2u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00499EE2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00499EF2; /* je: equal / zero */

loc_00499EE9: ;
    ecx = eax;
    PUSH32(esp, 0x00499EF0u); RECOMP_ABI_CALL(0x004A3460u, sub_004A3460); /* call 0x004A3460 */

loc_00499EF0: ;
    goto loc_00499EF4;

loc_00499EF2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00499EF4: ;
    PUSH32(esp, 0x4A);
    PUSH32(esp, 0x640DC0);
    PUSH32(esp, 0x7C);
    MEM32(esi + 0x44) = eax;
    PUSH32(esp, 0x00499F05u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00499F05: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00499F15; /* je: equal / zero */

loc_00499F0C: ;
    ecx = eax;
    PUSH32(esp, 0x00499F13u); RECOMP_ABI_CALL(0x004A2D30u, sub_004A2D30); /* call 0x004A2D30 */

loc_00499F13: ;
    goto loc_00499F17;

loc_00499F15: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00499F17: ;
    PUSH32(esp, 0x4B);
    PUSH32(esp, 0x640DC0);
    PUSH32(esp, 0x5C);
    MEM32(esi + 0x48) = eax;
    PUSH32(esp, 0x00499F28u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00499F28: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00499F38; /* je: equal / zero */

loc_00499F2F: ;
    ecx = eax;
    PUSH32(esp, 0x00499F36u); RECOMP_ABI_CALL(0x0049F4B0u, sub_0049F4B0); /* call 0x0049F4B0 */

loc_00499F36: ;
    goto loc_00499F3A;

loc_00499F38: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00499F3A: ;
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x640DC0);
    PUSH32(esp, 0x48);
    MEM32(esi + 0x4C) = eax;
    PUSH32(esp, 0x00499F4Bu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00499F4B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00499F5B; /* je: equal / zero */

loc_00499F52: ;
    ecx = eax;
    PUSH32(esp, 0x00499F59u); RECOMP_ABI_CALL(0x0049F0A0u, sub_0049F0A0); /* call 0x0049F0A0 */

loc_00499F59: ;
    goto loc_00499F5D;

loc_00499F5B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00499F5D: ;
    PUSH32(esp, 0x4D);
    PUSH32(esp, 0x640DC0);
    PUSH32(esp, 0x3C);
    MEM32(esi + 0x50) = eax;
    PUSH32(esp, 0x00499F6Eu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00499F6E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00499F8C; /* je: equal / zero */

loc_00499F75: ;
    ecx = eax;
    PUSH32(esp, 0x00499F7Cu); RECOMP_ABI_CALL(0x004992A0u, sub_004992A0); /* call 0x004992A0 */

loc_00499F7C: ;
    MEM32(esi + 0x54) = eax;
    POP32(esp, edi);
    MEM8(esi + 0x5D) = LO8(ebx);
    MEM8(esi + 0x5C) = 1;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00499F8C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x54) = eax;
    POP32(esp, edi);
    MEM8(esi + 0x5D) = LO8(ebx);
    MEM8(esi + 0x5C) = 1;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00499FA0
 * Original: 0x00499FA0 - 0x0049A07D (221 bytes, 85 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00499FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00499FA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x74);
    PUSH32(esp, 0x640DC0);
    PUSH32(esp, 0x138);
    PUSH32(esp, 0x00499FB2u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00499FB2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00499FC4; /* je: equal / zero */

loc_00499FB9: ;
    ecx = eax;
    PUSH32(esp, 0x00499FC0u); RECOMP_ABI_CALL(0x00499C70u, sub_00499C70); /* call 0x00499C70 */

loc_00499FC0: ;
    esi = eax;
    goto loc_00499FC6;

loc_00499FC4: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00499FC6: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00499FD2u); RECOMP_ABI_CALL(0x00499490u, sub_00499490); /* call 0x00499490 */

loc_00499FD2: ;
    ecx = MEM32(esi + 0xC);
    MEM8(ecx + 0xC) = 1;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00499FE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499FE0u); } /* indirect call */
    }

loc_00499FE3: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00499FEDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499FEAu); } /* indirect call */
    }

loc_00499FED: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00499FF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499FF4u); } /* indirect call */
    }

loc_00499FF7: ;
    ecx = MEM32(esi + 0x24);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0049A001u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00499FFEu); } /* indirect call */
    }

loc_0049A001: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0049A00Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049A008u); } /* indirect call */
    }

loc_0049A00B: ;
    ecx = MEM32(esi + 0x2C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0049A015u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049A012u); } /* indirect call */
    }

loc_0049A015: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0049A01Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049A01Cu); } /* indirect call */
    }

loc_0049A01F: ;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0049A029u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049A026u); } /* indirect call */
    }

loc_0049A029: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0049A033u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049A030u); } /* indirect call */
    }

loc_0049A033: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0049A03Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049A03Au); } /* indirect call */
    }

loc_0049A03D: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0049A047u); RECOMP_ABI_CALL(0x0049C460u, sub_0049C460); /* call 0x0049C460 */

loc_0049A047: ;
    ecx = MEM32(esi + 0x40);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0049A051u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049A04Eu); } /* indirect call */
    }

loc_0049A051: ;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0049A05Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049A058u); } /* indirect call */
    }

loc_0049A05B: ;
    ecx = MEM32(esi + 0x4C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0049A065u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049A062u); } /* indirect call */
    }

loc_0049A065: ;
    ecx = MEM32(esi + 0x50);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0049A06Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049A06Cu); } /* indirect call */
    }

loc_0049A06F: ;
    ecx = MEM32(esi + 0x54);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0049A079u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049A076u); } /* indirect call */
    }

loc_0049A079: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0049A080
 * Original: 0x0049A080 - 0x0049A08D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049A080(void)
{

loc_0049A080: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x48C) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049A090
 * Original: 0x0049A090 - 0x0049A09D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049A090(void)
{

loc_0049A090: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x448) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049A0A0
 * Original: 0x0049A0A0 - 0x0049A194 (244 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049A0A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049A0A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x4DC;
    ecx = 0xF;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x170) = 0;
    MEM32(esi + 0x414) = 0xA;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ebx = 0x2F;
    ebp = esi + 0x48F;

loc_0049A0D4: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049A0D6: ;
    _fa = (uint32_t)(MEM8(edi + ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + ebp), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049A0EF; /* je: equal / zero */

loc_0049A0DC: ;
    eax = ebx + edi;
    ecx = MEM32(esi + eax * 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0049A0E8u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0049A0E8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + ebp) = 0;

loc_0049A0EF: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0049A0D6; /* jl: less (signed <) */

loc_0049A0F5: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 3;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x5C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0049A0D4; /* jl: less (signed <) */

loc_0049A100: ;
    MEM8(esi + 0x484) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x2D;
    edi = esi + 8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = 0x2D;
    edi = esi + 0xBC;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = 0xB;
    edi = esi + 0x48F;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    edx = esi + 0x450;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(edx) = LO16(edi);
    MEM8(esi + 0x178) = 7;
    MEM16(esi + 0x452) = LO16(edi);
    ecx = esi + 0x1A6;
    edx = 0xF;

loc_0049A153: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049A155: ;
    MEM8(ecx + eax + -45) = 0;
    MEM8(ecx + eax) = 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0049A155; /* jl: less (signed <) */

loc_0049A164: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0049A153; /* jne: not equal / not zero */

loc_0049A16A: ;
    eax = esi + 0x43C;
    ecx = 3;
    goto loc_0049A180;

    /* nop */
    edi = edi;

loc_0049A180: ;
    MEM32(eax + -12) = edi;
    MEM32(eax) = 0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0049A180; /* jne: not equal / not zero */

loc_0049A18F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0049A1A0
 * Original: 0x0049A1A0 - 0x0049A263 (195 bytes, 62 insns)
 * CC: cdecl, 13 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049A1A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049A1A0: ;
    SET_LO8(eax, MEM8(esp + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0049A1D7; /* je: equal / zero */

loc_0049A1B0: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    eax = esi + 0x185;
    ecx = ebx + eax * 2;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    MEM8(eax + edi) = 1;
    PUSH32(esp, 0x0049A1CEu); RECOMP_ABI_CALL(0x00616450u, sub_00616450); /* call 0x00616450 */

loc_0049A1CE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx + esi * 2;
    POP32(esp, ebx);
    goto loc_0049A1E2;

loc_0049A1D7: ;
    eax = MEM32(esp + 0x14);
    ecx = eax + esi * 2;
    eax = MEM32(esp + 0xC);

loc_0049A1E2: ;
    edx = esi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + edx * 4 + 0xBC) = eax;
    eax = MEM32(esp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049A218; /* je: equal / zero */

loc_0049A1F5: ;
    ecx = esi;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx + edi + 0x1E4;
    ecx = MEM32(esp + 0x28);
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = eax;

loc_0049A218: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049A253; /* je: equal / zero */

loc_0049A220: ;
    edx = esi;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edx + edi + 0x2D4;
    edx = MEM32(esp + 0x18);
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    SET_LO8(eax, MEM8(esp + 0x3C));
    MEM8(esi + edi + 0x1D3) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 56; return; /* ret 52 */

loc_0049A253: ;
    SET_LO8(ecx, MEM8(esp + 0x3C));
    MEM8(esi + edi + 0x1D3) = LO8(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 56; return; /* ret 52 */

}

/**
 * sub_0049A270
 * Original: 0x0049A270 - 0x0049A28B (27 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049A270(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049A270: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    edx = edx + eax * 2;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(esp + 0xC));
    MEM8(eax + ecx + 0x179) = LO8(edx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0049A290
 * Original: 0x0049A290 - 0x0049A2AB (27 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049A290(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049A290: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    edx = edx + eax * 2;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(esp + 0xC));
    MEM8(eax + ecx + 0x1A6) = LO8(edx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0049A2B0
 * Original: 0x0049A2B0 - 0x0049A2D3 (35 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049A2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049A2B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = 0x8582C8;
    PUSH32(esp, 0x0049A2C2u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0049A2C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049A2CF; /* je: equal / zero */

loc_0049A2C6: ;
    ecx = MEM32(eax + 8);
    MEM32(esi + 0x170) = ecx;

loc_0049A2CF: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049A2E0
 * Original: 0x0049A2E0 - 0x0049A33B (91 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049A2E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049A2E0: ;
    PUSH32(esp, esi);
    edx = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = edi;
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((3) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    SET_LO8(ecx, MEM8(ecx + edx + 0x452));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0049A32D; /* je: equal / zero */

loc_0049A304: ;
    esi = MEM32(edx + 0x448);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0049A32D; /* jle: less or equal (signed <=) */

loc_0049A310: ;
    ecx = edi + edi * 2;
    ecx = edx + ecx * 4 + 0xBC;
    /* nop */

loc_0049A320: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049A334; /* jne: not equal / not zero */

loc_0049A325: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0049A320; /* jl: less (signed <) */

loc_0049A32D: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0049A334: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049A340
 * Original: 0x0049A340 - 0x0049A351 (17 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049A340(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049A340: ;
    eax = MEM32(esp + 4);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ecx + 0x2D4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049A360
 * Original: 0x0049A360 - 0x0049A57C (540 bytes, 168 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049A360(void)
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

loc_0049A360: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x485);
    ecx = MEM32(0x69585C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x0049A37Eu); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_0049A37E: ;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + 0x44);
    edi = MEM32(edx + 0x80);
    PUSH32(esp, 0x23);
    ecx = edi;
    PUSH32(esp, 0x0049A393u); RECOMP_ABI_CALL(0x00467E90u, sub_00467E90); /* call 0x00467E90 */

loc_0049A393: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049A3B5; /* jne: not equal / not zero */

loc_0049A397: ;
    eax = MEM32(0x85F888);
    SET_LO8(edx, MEM8(0x85F8B4));
    SET_LO8(ecx, MEM8(0x85F9B4));
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(eax + 0x85F8B4)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x85F8B4), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0049A3B7; /* je: equal / zero */

loc_0049A3B5: ;
    SET_LO8(ebx, 1);

loc_0049A3B7: ;
    PUSH32(esp, 0x1D);
    ecx = edi;
    PUSH32(esp, 0x0049A3C0u); RECOMP_ABI_CALL(0x00467E90u, sub_00467E90); /* call 0x00467E90 */

loc_0049A3C0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049A471; /* jne: not equal / not zero */

loc_0049A3C8: ;
    edx = MEM32(0x85F888);
    SET_LO8(ecx, MEM8(0x85F963));
    SET_LO8(eax, MEM8(0x85FA63));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(edx + 0x85F963)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x85F963), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0049A471; /* jne: not equal / not zero */

loc_0049A3EA: ;
    PUSH32(esp, 0x1E);
    ecx = edi;
    PUSH32(esp, 0x0049A3F3u); RECOMP_ABI_CALL(0x00467E90u, sub_00467E90); /* call 0x00467E90 */

loc_0049A3F3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049A46A; /* jne: not equal / not zero */

loc_0049A3F7: ;
    ecx = MEM32(0x85F888);
    SET_LO8(eax, MEM8(0x85F965));
    SET_LO8(edx, MEM8(0x85FA65));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ecx + 0x85F965)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x85F965), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0049A46A; /* jne: not equal / not zero */

loc_0049A415: ;
    fp_push(MEMF(esi + 0x4CC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D678)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d678] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0049A441; /* jne: not equal / not zero */

loc_0049A428: ;
    PUSH32(esp, 0x21);
    ecx = edi;
    PUSH32(esp, 0x0049A431u); RECOMP_ABI_CALL(0x00467E40u, sub_00467E40); /* call 0x00467E40 */

loc_0049A431: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63AF04)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63af04] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0049A441; /* jp: parity */

loc_0049A43E: ;
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0049A441: ;
    fp_push(MEMF(esi + 0x4CC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D678)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d678] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0049A474; /* jne: not equal / not zero */

loc_0049A454: ;
    PUSH32(esp, 0x21);
    ecx = edi;
    PUSH32(esp, 0x0049A45Du); RECOMP_ABI_CALL(0x00467E40u, sub_00467E40); /* call 0x00467E40 */

loc_0049A45D: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D520)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d520] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0049A474; /* jne: not equal / not zero */

loc_0049A46A: ;
    ebp = 1;
    goto loc_0049A474;

loc_0049A471: ;
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0049A474: ;
    SET_LO8(eax, MEM8(esi + 0x178));
    ecx = 2;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    MEM8(esp + 0x13) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_0049A4CE; /* jne: not equal / not zero */

loc_0049A488: ;
    SET_LO8(eax, MEM8(esi + 0x484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049A496; /* jne: not equal / not zero */

loc_0049A492: ;
    MEM8(esp + 0x13) = LO8(eax);

loc_0049A496: ;
    _fa = (uint32_t)(MEM32(0x6C3308)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C3308), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049A4B2; /* jne: not equal / not zero */

loc_0049A49E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049A4AA; /* je: equal / zero */

loc_0049A4A2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049A4AA; /* je: equal / zero */

loc_0049A4A6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049A4BA; /* jne: not equal / not zero */

loc_0049A4AA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0049A4B2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049A4C6; /* je: equal / zero */

loc_0049A4B6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049A4C6; /* je: equal / zero */

loc_0049A4BA: ;
    eax = MEM32(0x6C38B4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0049A50B; /* jl: less (signed <) */

loc_0049A4C6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0049A4CE: ;
    _fa = (uint32_t)(MEM8(esi + 0x174)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x174), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0049A50B; /* je: equal / zero */

loc_0049A4D7: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049A4F5; /* je: equal / zero */

loc_0049A4DB: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x484);
    SET_LO8(eax, MEM8(ecx + esi + 0x1D3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049A574; /* je: equal / zero */

loc_0049A4F1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049A4C6; /* je: equal / zero */

loc_0049A4F5: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049A50B; /* je: equal / zero */

loc_0049A4F9: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x484);
    SET_LO8(eax, MEM8(edx + esi + 0x1D3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049A574; /* je: equal / zero */

loc_0049A50B: ;
    _fa = (uint32_t)(MEM8(esi + 0x174)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x174), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0049A52F; /* je: equal / zero */

loc_0049A514: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049A52F; /* jne: not equal / not zero */

loc_0049A518: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x484);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebp);
    ecx = eax + esi + 0x1E4;
    PUSH32(esp, 0x0049A52Fu); RECOMP_ABI_CALL(0x00614420u, sub_00614420); /* call 0x00614420 */

loc_0049A52F: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049A574; /* je: equal / zero */

loc_0049A537: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049A574; /* je: equal / zero */

loc_0049A53B: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x484);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx + esi + 0x2DC) = ebp;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x484);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0);
    ecx = edx + esi + 0x2D4;
    PUSH32(esp, 0x0049A564u); RECOMP_ABI_CALL(0x00614420u, sub_00614420); /* call 0x00614420 */

loc_0049A564: ;
    ecx = MEM32(esi + 0x544);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x63995C);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0049A574u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049A571u); } /* indirect call */
    }

loc_0049A574: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
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
 * sub_0049A580
 * Original: 0x0049A580 - 0x0049A809 (649 bytes, 198 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049A580(void)
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

loc_0049A580: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x486));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0049A806; /* je: equal / zero */

loc_0049A592: ;
    SET_LO8(eax, MEM8(esi + 0x48D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0049A806; /* jne: not equal / not zero */

loc_0049A5A0: ;
    fp_push(MEMF(esi + 0x4CC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D678)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d678] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0049A5BD; /* jne: not equal / not zero */

loc_0049A5B3: ;
    MEM32(esi + 0x4CC) = 0;

loc_0049A5BD: ;
    fp_push(MEMF(0x6797CC)); /* fld float */
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x485);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x4CC)); /* fadd dword ptr [esi + 0x4cc] */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEMF(esi + 0x4CC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x69585C);
    PUSH32(esp, eax);
    MEM8(esp + 0x10) = LO8(ebx);
    PUSH32(esp, 0x0049A5EAu); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_0049A5EA: ;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + 0x44);
    edi = MEM32(edx + 0x80);
    ecx = edi;
    PUSH32(esp, 0x0049A5FDu); RECOMP_ABI_CALL(0x00467DF0u, sub_00467DF0); /* call 0x00467DF0 */

loc_0049A5FD: ;
    eax = MEM32(0x85F888);
    SET_LO8(edx, MEM8(0x85F899));
    SET_LO8(ecx, MEM8(0x85F999));
    if (8) _cf = (int)(((eax) >> (32 - (8))) & 1);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(eax + 0x85F899)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x85F899), LO8(ecx) (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0049A628; /* jne: not equal / not zero */

loc_0049A61B: ;
    PUSH32(esp, 0x24);
    ecx = edi;
    PUSH32(esp, 0x0049A624u); RECOMP_ABI_CALL(0x00467E90u, sub_00467E90); /* call 0x00467E90 */

loc_0049A624: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0049A640; /* je: equal / zero */

loc_0049A628: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x485);
    PUSH32(esp, edx);
    ecx = esi + 0x464;
    PUSH32(esp, 0x0049A63Bu); RECOMP_ABI_CALL(0x00614420u, sub_00614420); /* call 0x00614420 */

loc_0049A63B: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0049A640: ;
    PUSH32(esp, 0x23);
    ecx = edi;
    PUSH32(esp, 0x0049A649u); RECOMP_ABI_CALL(0x00467E90u, sub_00467E90); /* call 0x00467E90 */

loc_0049A649: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0049A65B; /* jne: not equal / not zero */

loc_0049A64D: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x0049A654u); RECOMP_ABI_CALL(0x00402A90u, sub_00402A90); /* call 0x00402A90 */

loc_0049A654: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0049A661; /* je: equal / zero */

loc_0049A65B: ;
    SET_LO8(ebx, 1);
    MEM8(esp + 0xC) = LO8(ebx);

loc_0049A661: ;
    ecx = MEM32(esi + 0x544);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x639968);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0049A671u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049A66Eu); } /* indirect call */
    }

loc_0049A671: ;
    _fa = (uint32_t)(MEM8(esi + 0x174)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x174), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0049A68F; /* je: equal / zero */

loc_0049A67A: ;
    ecx = esi;
    PUSH32(esp, 0x0049A681u); RECOMP_ABI_CALL(0x0049A360u, sub_0049A360); /* call 0x0049A360 */

loc_0049A681: ;
    SET_LO8(ebx, LO8(eax));
    eax = MEM32(esp + 0xC);
    _cf = (int)((LO8(ebx)) != 0);
    SET_LO8(ebx, (uint32_t)(0u - (uint32_t)(LO8(ebx))));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(ebx, ~LO8(ebx));
    _cf = 0; /* logical op clears CF */
    ebx = ebx & eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0049A68F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0049A6C8; /* je: equal / zero */

loc_0049A693: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x484);
    if (4) _cf = (int)(((ecx) >> (32 - (4))) & 1);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0);
    ecx = ecx + esi + 0x2D4;
    PUSH32(esp, 0x0049A6ABu); RECOMP_ABI_CALL(0x00614420u, sub_00614420); /* call 0x00614420 */

loc_0049A6AB: ;
    ecx = MEM32(esi + 0x544);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0049A6B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049A6B3u); } /* indirect call */
    }

loc_0049A6B6: ;
    PUSH32(esp, 0);
    ecx = esi + 0x474;
    PUSH32(esp, 0x0049A6C3u); RECOMP_ABI_CALL(0x00614420u, sub_00614420); /* call 0x00614420 */

loc_0049A6C3: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0049A6C8: ;
    ebx = (uint32_t)(int32_t)SMEM8(esi + 0x484);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x20);
    ecx = edi;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0049A6DBu); RECOMP_ABI_CALL(0x00467E90u, sub_00467E90); /* call 0x00467E90 */

loc_0049A6DB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0049A719; /* jne: not equal / not zero */

loc_0049A6DF: ;
    PUSH32(esp, 0xD0);
    PUSH32(esp, 0x0049A6E9u); RECOMP_ABI_CALL(0x00402A90u, sub_00402A90); /* call 0x00402A90 */

loc_0049A6E9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0049A719; /* jne: not equal / not zero */

loc_0049A6F0: ;
    fp_push(MEMF(esi + 0x4CC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D678)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d678] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0049A71E; /* jne: not equal / not zero */

loc_0049A703: ;
    PUSH32(esp, 0x22);
    ecx = edi;
    PUSH32(esp, 0x0049A70Cu); RECOMP_ABI_CALL(0x00467E40u, sub_00467E40); /* call 0x00467E40 */

loc_0049A70C: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D520)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d520] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0049A71E; /* jne: not equal / not zero */

loc_0049A719: ;
    ebp = 1;

loc_0049A71E: ;
    PUSH32(esp, 0x1F);
    ecx = edi;
    PUSH32(esp, 0x0049A727u); RECOMP_ABI_CALL(0x00467E90u, sub_00467E90); /* call 0x00467E90 */

loc_0049A727: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0049A765; /* jne: not equal / not zero */

loc_0049A72B: ;
    PUSH32(esp, 0xC8);
    PUSH32(esp, 0x0049A735u); RECOMP_ABI_CALL(0x00402A90u, sub_00402A90); /* call 0x00402A90 */

loc_0049A735: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0049A765; /* jne: not equal / not zero */

loc_0049A73C: ;
    fp_push(MEMF(esi + 0x4CC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D678)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d678] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0049A76A; /* jne: not equal / not zero */

loc_0049A74F: ;
    PUSH32(esp, 0x22);
    ecx = edi;
    PUSH32(esp, 0x0049A758u); RECOMP_ABI_CALL(0x00467E40u, sub_00467E40); /* call 0x00467E40 */

loc_0049A758: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63AF04)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63af04] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0049A76A; /* jp: parity */

loc_0049A765: ;
    _cf = 0; /* logical op clears CF */
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0049A772;

loc_0049A76A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0049A7F6; /* je: equal / zero */

loc_0049A772: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049A774: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebx + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = 0xF;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xF (32-bit) */
    _cf = (int)(_fa < _fb);
    ebx = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0049A7A2; /* je: equal / zero */

loc_0049A794: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0049A79Cu); RECOMP_ABI_CALL(0x0049A2E0u, sub_0049A2E0); /* call 0x0049A2E0 */

loc_0049A79C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0049A774; /* je: equal / zero */

loc_0049A7A0: ;
    goto loc_0049A7B6;

loc_0049A7A2: ;
    PUSH32(esp, 0x640DC8);
    PUSH32(esp, 0x0049A7ACu); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_0049A7AC: ;
    ebx = (uint32_t)(int32_t)SMEM8(esi + 0x484);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049A7B6: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x484);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0049A7F6; /* je: equal / zero */

loc_0049A7C1: ;
    ecx = SX8(LO8(ebx));
    if (4) _cf = (int)(((ecx) >> (32 - (4))) & 1);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0);
    ecx = ecx + esi + 0x1E4;
    MEM8(esi + 0x484) = LO8(ebx);
    PUSH32(esp, 0x0049A7DBu); RECOMP_ABI_CALL(0x00614420u, sub_00614420); /* call 0x00614420 */

loc_0049A7DB: ;
    ecx = MEM32(esi + 0x544);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x63995C);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0049A7EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049A7E8u); } /* indirect call */
    }

loc_0049A7EB: ;
    ecx = MEM32(esi + 0x544);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0049A7F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049A7F3u); } /* indirect call */
    }

loc_0049A7F6: ;
    POP32(esp, ebp);
    PUSH32(esp, 0);
    ecx = esi + 0x474;
    PUSH32(esp, 0x0049A804u); RECOMP_ABI_CALL(0x00614420u, sub_00614420); /* call 0x00614420 */

loc_0049A804: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0049A806: ;
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
 * sub_0049A810
 * Original: 0x0049A810 - 0x0049A838 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049A810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049A810: ;
    SET_LO8(eax, MEM8(0x698528));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049A821; /* je: equal / zero */

loc_0049A819: ;
    eax = MEM32(ecx + 0x53C);
    goto loc_0049A827;

loc_0049A821: ;
    eax = MEM32(ecx + 0x538);

loc_0049A827: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049A837; /* je: equal / zero */

loc_0049A82B: ;
    ecx = MEM32(ecx + 0x540);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049A837; /* je: equal / zero */

loc_0049A835: ;
    MEM32(ecx) = eax;

loc_0049A837: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0049A840
 * Original: 0x0049A840 - 0x0049AC53 (1043 bytes, 267 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049A840(void)
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

loc_0049A840: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0049A850u); RECOMP_ABI_CALL(0x005E1AF0u, sub_005E1AF0); /* call 0x005E1AF0 */

loc_0049A850: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(0x674FAC);
    eax = eax & 0xFFFFFFF9u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x3F800000);
    eax = 0x64;
    _fb = (uint32_t)(0xFFFFFF9Cu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFF9Cu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F800000);
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x34) = eax;
    eax = MEM32(esi + 0xBC);
    MEM32(esp + 0x38) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x4C4);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x34) = 0xB9;
    MEM32(esp + 0x3C) = 0x3E8;
    PUSH32(esp, 0x0049A8BBu); RECOMP_ABI_CALL(0x005E0E00u, sub_005E0E00); /* call 0x005E0E00 */

loc_0049A8BB: ;
    ecx = esi;
    MEM8(0x698528) = 0;
    PUSH32(esp, 0x0049A8C9u); RECOMP_ABI_CALL(0x0049A810u, sub_0049A810); /* call 0x0049A810 */

loc_0049A8C9: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x0049A8D0u); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_0049A8D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0049A8D7u); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_0049A8D7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0049A8DEu); RECOMP_ABI_CALL(0x005EDF80u, sub_005EDF80); /* call 0x005EDF80 */

loc_0049A8DE: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0049A8E5u); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_0049A8E5: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0049A8F1u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_0049A8F1: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0049A8FAu); RECOMP_ABI_CALL(0x005EE5A0u, sub_005EE5A0); /* call 0x005EE5A0 */

loc_0049A8FA: ;
    fp_push(MEMF(esi + 0x3F4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0049A90Eu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0049A90E: ;
    fp_push(MEMF(esi + 0x3F8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    edi = eax;
    edi = edi | 0xFFFFFF00u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0049A92Au); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0049A92A: ;
    fp_push(MEMF(esi + 0x3FC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0049A940u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0049A940: ;
    ecx = MEM32(esi + 0x410);
    edx = MEM32(esi + 0x40C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x170);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x4C4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(esp + 0x6C) = edi;
    PUSH32(esp, 0x0049A973u); RECOMP_ABI_CALL(0x005DF5B0u, sub_005DF5B0); /* call 0x005DF5B0 */

loc_0049A973: ;
    fp_push(MEMF(esi + 0x3C4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x0049A984u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0049A984: ;
    fp_push(MEMF(esi + 0x3C8)); /* fld float */
    edi = ZX8(LO8(eax));
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    edi = edi | 0xFFFFFF00u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0049A9A1u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0049A9A1: ;
    ecx = ZX8(LO8(eax));
    fp_push(MEMF(esi + 0x3CC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    edi = edi | ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0049A9BAu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0049A9BA: ;
    ecx = MEM32(esi + 0x410);
    fp_push((double)SMEM32(esi + 0x414)); /* fild */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = ZX8(LO8(eax));
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xBC);
    PUSH32(esp, ecx);
    edi = edi | edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esi + 0x40C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x4C4);
    MEM32(esp + 0x68) = edi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    PUSH32(esp, 0x0049A9F8u); RECOMP_ABI_CALL(0x005DF5B0u, sub_005DF5B0); /* call 0x005DF5B0 */

loc_0049A9F8: ;
    eax = MEM32(esi + 0x534);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049AC4D; /* je: equal / zero */

loc_0049AA06: ;
    fp_push((double)SMEM32(0x675030)); /* fild */
    ecx = MEM32(0x698524);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x96) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x96 (32-bit) */
    eax = MEM32(0x675030);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x636EB0)); /* fmul dword ptr [0x636eb0] */
    PUSH32(esp, ebp);
    ebp = MEM32(0x8583A0);
    edi = eax + eax * 2;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_0049AAA1; /* jge: greater or equal (signed >=) */

loc_0049AA33: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x8C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0049AAA1; /* jge: greater or equal (signed >=) */

loc_0049AA3B: ;
    ecx = MEM32(esi + 0x548);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0049AA46u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049AA43u); } /* indirect call */
    }

loc_0049AA46: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049AA55; /* jne: not equal / not zero */

loc_0049AA4A: ;
    ecx = MEM32(esi + 0x548);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0049AA55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049AA52u); } /* indirect call */
    }

loc_0049AA55: ;
    ecx = MEM32(0x698524);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x96) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x96 (32-bit) */
    MEM32(0x698524) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0049AA76; /* jle: less or equal (signed <=) */

loc_0049AA6B: ;
    ecx = 0x96;
    MEM32(0x698524) = ecx;

loc_0049AA76: ;
    fp_push((double)SMEM32(0x698524)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x638140)); /* fmul dword ptr [0x638140] */
    MEMF(0x698530) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x640DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x640de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0049AAE4; /* jne: not equal / not zero */

loc_0049AA95: ;
    MEM32(0x698530) = 0x3E21CAC1;
    goto loc_0049AAE4;

loc_0049AAA1: ;
    fp_push(MEMF(0x69852C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x640DE0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x640de0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0049AAE4; /* jne: not equal / not zero */

loc_0049AAB4: ;
    ecx = MEM32(esi + 0x548);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0049AABFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049AABCu); } /* indirect call */
    }

loc_0049AABF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049AACE; /* jne: not equal / not zero */

loc_0049AAC3: ;
    ecx = MEM32(esi + 0x548);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0049AACEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049AACBu); } /* indirect call */
    }

loc_0049AACE: ;
    fp_push(MEMF(0x69852C)); /* fld float */
    ecx = MEM32(0x698524);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    MEMF(0x69852C) = (float)fp_top(); fp_pop(); /* fstp */

loc_0049AAE4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x96) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x96 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0049AB4C; /* jle: less or equal (signed <=) */

loc_0049AAEC: ;
    ecx = MEM32(esi + 0x548);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0049AAF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049AAF4u); } /* indirect call */
    }

loc_0049AAF7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049AB06; /* jne: not equal / not zero */

loc_0049AAFB: ;
    ecx = MEM32(esi + 0x548);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0049AB06u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049AB03u); } /* indirect call */
    }

loc_0049AB06: ;
    eax = MEM32(0x698524);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x96) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x96 (32-bit) */
    MEM32(0x698524) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0049AB23; /* jge: greater or equal (signed >=) */

loc_0049AB19: ;
    MEM32(0x698524) = 0x96;

loc_0049AB23: ;
    fp_push((double)SMEM32(0x698524)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x638140)); /* fmul dword ptr [0x638140] */
    MEMF(0x698530) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x640DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x640de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0049AB4C; /* jne: not equal / not zero */

loc_0049AB42: ;
    MEM32(0x698530) = 0x3E21CAC1;

loc_0049AB4C: ;
    ecx = MEM32(0x698530);
    fp_push(MEMF(0x69852C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x640DDC)); /* fadd dword ptr [0x640ddc] */
    edx = MEM32(0x69852C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x52C);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, 0x0049AB81u); RECOMP_ABI_CALL(0x005FA3C0u, sub_005FA3C0); /* call 0x005FA3C0 */

loc_0049AB81: ;
    eax = MEM32(0x698524);
    ecx = MEM32(0x674FAC);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x52C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0049ABA4u); RECOMP_ABI_CALL(0x005FAA80u, sub_005FAA80); /* call 0x005FAA80 */

loc_0049ABA4: ;
    edx = MEM32(esi + 0x52C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0049ABB0u); RECOMP_ABI_CALL(0x005F23A0u, sub_005F23A0); /* call 0x005F23A0 */

loc_0049ABB0: ;
    ecx = MEM32(esi + 0x534);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049ABC4u); RECOMP_ABI_CALL(0x005F25C0u, sub_005F25C0); /* call 0x005F25C0 */

loc_0049ABC4: ;
    fp_push(MEMF(0x69852C)); /* fld float */
    ecx = MEM32(0x698530);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x640DDC)); /* fadd dword ptr [0x640ddc] */
    edx = MEM32(0x69852C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x530);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0049ABF9u); RECOMP_ABI_CALL(0x005FA3C0u, sub_005FA3C0); /* call 0x005FA3C0 */

loc_0049ABF9: ;
    eax = MEM32(0x674FB0);
    ecx = MEM32(0x674FAC);
    edi = MEM32(0x698524);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x530);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0049AC23u); RECOMP_ABI_CALL(0x005FAA80u, sub_005FAA80); /* call 0x005FAA80 */

loc_0049AC23: ;
    edx = MEM32(esi + 0x530);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0049AC2Fu); RECOMP_ABI_CALL(0x005F23A0u, sub_005F23A0); /* call 0x005F23A0 */

loc_0049AC2F: ;
    ecx = MEM32(esi + 0x534);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049AC43u); RECOMP_ABI_CALL(0x005F25C0u, sub_005F25C0); /* call 0x005F25C0 */

loc_0049AC43: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0049AC49u); RECOMP_ABI_CALL(0x005F23A0u, sub_005F23A0); /* call 0x005F23A0 */

loc_0049AC49: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);

loc_0049AC4D: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_0049AC60
 * Original: 0x0049AC60 - 0x0049AF3F (735 bytes, 206 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0049AC60(void)
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

loc_0049AC60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -112;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049AC73u); RECOMP_ABI_CALL(0x005E1AF0u, sub_005E1AF0); /* call 0x005E1AF0 */

loc_0049AC73: ;
    eax = MEM32(ebp + -112);
    ecx = MEM32(0x674FAC);
    eax = eax & 0xFFFFFFF9u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0xFFFFFF9Cu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFF9Cu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -112) = eax;
    eax = 0x64;
    MEM32(ebp + -88) = ecx;
    PUSH32(esp, 0x63F1B4);
    ecx = 0x8582C8;
    MEM32(ebp + -108) = 0;
    MEM32(ebp + -104) = 0x96;
    MEM32(ebp + -100) = eax;
    MEM32(ebp + -96) = 0x3E8;
    MEM32(ebp + -92) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049ACBAu); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0049ACBA: ;
    eax = MEM32(eax + 8);
    edx = ebp + -112;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x4C4);
    edx = ebp + -24;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049ACDFu); RECOMP_ABI_CALL(0x005E0E00u, sub_005E0E00); /* call 0x005E0E00 */

loc_0049ACDF: ;
    eax = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049ACE9u); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_0049ACE9: ;
    eax = esp;
    ecx = ebp + -112;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6399B0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049AD06u); RECOMP_ABI_CALL(0x004056C0u, sub_004056C0); /* call 0x004056C0 */

loc_0049AD06: ;
    ecx = MEM32(esi + 0x4C4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    edx = ebp + -28;
    PUSH32(esp, edx);
    eax = ebp + -32;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049AD1Du); RECOMP_ABI_CALL(0x005E0E00u, sub_005E0E00); /* call 0x005E0E00 */

loc_0049AD1D: ;
    PUSH32(esp, 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049AD24u); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_0049AD24: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049AD2Bu); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_0049AD2B: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049AD32u); RECOMP_ABI_CALL(0x005EDF80u, sub_005EDF80); /* call 0x005EDF80 */

loc_0049AD32: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049AD39u); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_0049AD39: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049AD45u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_0049AD45: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049AD4Eu); RECOMP_ABI_CALL(0x005EE5A0u, sub_005EE5A0); /* call 0x005EE5A0 */

loc_0049AD4E: ;
    eax = MEM32(esi + 0x170);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049AD90; /* je: equal / zero */

loc_0049AD5B: ;
    fp_push(MEMF(esi + 0x410)); /* fld float */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ebp + -112;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x4C4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x40C)); /* fld float */
    MEM32(ebp + -56) = 0xFF00B266u;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049AD90u); RECOMP_ABI_CALL(0x005DF5B0u, sub_005DF5B0); /* call 0x005DF5B0 */

loc_0049AD90: ;
    fp_push(MEMF(0x6797CC)); /* fld float */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x4C8)); /* fadd dword ptr [esi + 0x4c8] */
    edx = esi + 0xBC;
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -8) = edx;
    MEMF(esi + 0x4C8) = (float)fp_top(); fp_pop(); /* fstp */

loc_0049ADB0: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x484);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049AE35; /* jne: not equal / not zero */

loc_0049ADBB: ;
    fp_push(MEMF(esi + 0x4C8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x640DE8)); /* fmul dword ptr [0x640de8] */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D57C)); /* fadd dword ptr [0x62d57c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    fp_push(MEMF(esi + 0x3E4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x3D4)); /* fsub dword ptr [esi + 0x3d4] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x3D4)); /* fadd dword ptr [esi + 0x3d4] */
    MEMF(ebp + -48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x3E8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x3D8)); /* fsub dword ptr [esi + 0x3d8] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x3D8)); /* fadd dword ptr [esi + 0x3d8] */
    MEMF(ebp + -44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x3EC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x3DC)); /* fsub dword ptr [esi + 0x3dc] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x3DC)); /* fadd dword ptr [esi + 0x3dc] */
    MEMF(ebp + -40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x3F0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x3E0)); /* fsub dword ptr [esi + 0x3e0] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x3E0)); /* fadd dword ptr [esi + 0x3e0] */
    MEMF(ebp + -36) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    goto loc_0049AE52;

loc_0049AE35: ;
    edx = esi + 0x3C4;
    ecx = MEM32(edx);
    MEM32(ebp + -48) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(ebp + -44) = ecx;
    ecx = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(ebp + -40) = ecx;
    MEM32(ebp + -36) = edx;

loc_0049AE52: ;
    ecx = MEM32(esi + 0x448);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -12) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0049AF1D; /* jle: less or equal (signed <=) */

loc_0049AE67: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -4) = eax;
    /* nop */

loc_0049AE70: ;
    ecx = MEM32(ebp + -4);
    edi = MEM32(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049AEFC; /* je: equal / zero */

loc_0049AE7D: ;
    fp_push(MEMF(ebp + -36)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049AE8Bu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0049AE8B: ;
    fp_push(MEMF(ebp + -48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ebx, LO8(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049AE9Du); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0049AE9D: ;
    fp_push(MEMF(ebp + -44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_LO8(ebx, LO8(eax));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049AEB0u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0049AEB0: ;
    fp_push(MEMF(ebp + -40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    edx = ZX8(LO8(eax));
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049AEC6u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0049AEC6: ;
    PUSH32(esp, 0);
    fp_push(MEMF(esi + 0x410)); /* fld float */
    PUSH32(esp, 0);
    ecx = ebp + -112;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x4C4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ZX8(LO8(eax));
    fp_push(MEMF(esi + 0x40C)); /* fld float */
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(ebp + -56) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049AEFCu); RECOMP_ABI_CALL(0x005DF5B0u, sub_005DF5B0); /* call 0x005DF5B0 */

loc_0049AEFC: ;
    eax = MEM32(ebp + -12);
    edx = MEM32(ebp + -4);
    ecx = MEM32(esi + 0x448);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -4) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0049AE70; /* jl: less (signed <) */

loc_0049AF1A: ;
    eax = MEM32(ebp + -16);

loc_0049AF1D: ;
    edx = MEM32(ebp + -8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -8) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0049ADB0; /* jl: less (signed <) */

loc_0049AF33: ;
    esp = ebp + -124;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0049AF40
 * Original: 0x0049AF40 - 0x0049AFAE (110 bytes, 45 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049AF40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049AF40: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = 0x3E8;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    PUSH32(esp, 0x0049AF6Du); RECOMP_ABI_CALL(0x0044F880u, sub_0044F880); /* call 0x0044F880 */

loc_0049AF6D: ;
    MEM32(esi + 0x38) = eax;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0049AF9F; /* je: equal / zero */

loc_0049AF7B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0049AF90; /* je: equal / zero */

loc_0049AF7E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0049AFA9; /* jne: not equal / not zero */

loc_0049AF81: ;
    edx = MEM32(esi);
    edx = edx & 0xFFFFFFFCu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(esi) = edx;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0049AF90: ;
    eax = MEM32(esi);
    eax = eax & 0xFFFFFFFAu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0049AF9F: ;
    ecx = MEM32(esi);
    ecx = ecx & 0xFFFFFFF9u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi) = ecx;

loc_0049AFA9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0049AFB0
 * Original: 0x0049AFB0 - 0x0049B020 (112 bytes, 26 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0049AFB0(void)
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

loc_0049AFB0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0049AFCF; /* jp: parity */

loc_0049AFC1: ;
    fp_push((double)SMEM32(0x674FAC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    goto loc_0049AFD3;

loc_0049AFCF: ;
    fp_push(MEMF(esp + 4)); /* fld float */

loc_0049AFD3: ;
    MEMF(ecx + 0x4D0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0049B009; /* jp: parity */

loc_0049AFEA: ;
    fp_push((double)SMEM32(0x674FB0)); /* fild */
    SET_LO8(eax, MEM8(esp + 0xC));
    MEM8(ecx + 0x489) = LO8(eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0x4D4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 16; return; /* ret 12 */

loc_0049B009: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    SET_LO8(eax, MEM8(esp + 0xC));
    MEMF(ecx + 0x4D4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM8(ecx + 0x489) = LO8(eax);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0049B020
 * Original: 0x0049B020 - 0x0049B038 (24 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049B020(void)
{

loc_0049B020: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x40C) = edx;
    eax = MEM32(eax + 4);
    MEM32(ecx + 0x410) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049B040
 * Original: 0x0049B040 - 0x0049B08C (76 bytes, 25 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049B040(void)
{

loc_0049B040: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x698524);
    PUSH32(esp, 0x640DFC);
    PUSH32(esp, 5);
    ecx = esi;
    PUSH32(esp, 0x0049B05Cu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049B05C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x69852C);
    PUSH32(esp, 0x640DF4);
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x0049B073u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049B073: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x698530);
    PUSH32(esp, 0x640DEC);
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x0049B08Au); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049B08A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0049B090
 * Original: 0x0049B090 - 0x0049B19F (271 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049B090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049B090: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x4C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi) = 0x640E08;
    if (CMP_EQ(_fa, _fb)) goto loc_0049B0AF; /* je: equal / zero */

loc_0049B0A6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049B0ACu); RECOMP_ABI_CALL(0x005E1010u, sub_005E1010); /* call 0x005E1010 */

loc_0049B0AC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049B0AF: ;
    eax = MEM32(edi + 0x518);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049B0C2; /* je: equal / zero */

loc_0049B0B9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049B0BFu); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_0049B0BF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049B0C2: ;
    ebp = 0x2F;
    ebx = edi + 0x48F;
    /* nop */

loc_0049B0D0: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049B0D2: ;
    _fa = (uint32_t)(MEM8(ebx + esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049B0EB; /* je: equal / zero */

loc_0049B0D8: ;
    eax = esi + ebp;
    MEM8(ebx + esi) = 0;
    ecx = MEM32(edi + eax * 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0049B0E8u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0049B0E8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049B0EB: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0049B0D2; /* jl: less (signed <) */

loc_0049B0F1: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 3;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x5C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0049B0D0; /* jl: less (signed <) */

loc_0049B0FC: ;
    ecx = MEM32(edi + 0x544);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049B10C; /* je: equal / zero */

loc_0049B106: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0049B10Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049B10Au); } /* indirect call */
    }

loc_0049B10C: ;
    ecx = MEM32(edi + 0x548);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049B11C; /* je: equal / zero */

loc_0049B116: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0049B11Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049B11Au); } /* indirect call */
    }

loc_0049B11C: ;
    ecx = MEM32(edi + 0x53C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049B132; /* je: equal / zero */

loc_0049B126: ;
    eax = MEM32(edi + 0x540);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049B132; /* je: equal / zero */

loc_0049B130: ;
    MEM32(eax) = ecx;

loc_0049B132: ;
    eax = MEM32(edi + 0x534);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049B145; /* je: equal / zero */

loc_0049B13C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049B142u); RECOMP_ABI_CALL(0x005F3D80u, sub_005F3D80); /* call 0x005F3D80 */

loc_0049B142: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049B145: ;
    eax = MEM32(edi + 0x538);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049B158; /* je: equal / zero */

loc_0049B14F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049B155u); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_0049B155: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049B158: ;
    esi = MEM32(edi + 0x52C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049B176; /* je: equal / zero */

loc_0049B162: ;
    MEM32(esi) = MEM32(esi) - 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0049B176; /* jne: not equal / not zero */

loc_0049B166: ;
    ecx = esi;
    PUSH32(esp, 0x0049B16Du); RECOMP_ABI_CALL(0x005FA390u, sub_005FA390); /* call 0x005FA390 */

loc_0049B16D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0049B173u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0049B173: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049B176: ;
    esi = MEM32(edi + 0x530);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049B194; /* je: equal / zero */

loc_0049B180: ;
    MEM32(esi) = MEM32(esi) - 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0049B194; /* jne: not equal / not zero */

loc_0049B184: ;
    ecx = esi;
    PUSH32(esp, 0x0049B18Bu); RECOMP_ABI_CALL(0x005FA390u, sub_005FA390); /* call 0x005FA390 */

loc_0049B18B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0049B191u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0049B191: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049B194: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00614360(); return; /* tail jmp 0x00614360 */

}

/**
 * sub_0049B1A0
 * Original: 0x0049B1A0 - 0x0049B1C8 (40 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049B1A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049B1A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0049B1AFu); RECOMP_ABI_CALL(0x005E11E0u, sub_005E11E0); /* call 0x005E11E0 */

loc_0049B1AF: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esi + 0x4C4) = eax;
    PUSH32(esp, 0x0049B1C4u); RECOMP_ABI_CALL(0x0049A080u, sub_0049A080); /* call 0x0049A080 */

loc_0049B1C4: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0049B1D0
 * Original: 0x0049B1D0 - 0x0049B231 (97 bytes, 34 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049B1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049B1D0: ;
    SET_LO8(eax, MEM8(esp + 4));
    PUSH32(esp, esi);
    esi = ecx;
    MEM8(esi + 0x484) = LO8(eax);
    eax = SX8(LO8(eax));
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0049B1E9u); RECOMP_ABI_CALL(0x0049A2E0u, sub_0049A2E0); /* call 0x0049A2E0 */

loc_0049B1E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049B22C; /* jne: not equal / not zero */

loc_0049B1ED: ;
    /* nop */

loc_0049B1F0: ;
    SET_LO8(edx, MEM8(esi + 0x484));
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xF (32-bit) */
    MEM8(esi + 0x484) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_0049B218; /* je: equal / zero */

loc_0049B204: ;
    ecx = SX8(LO8(edx));
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0049B20Fu); RECOMP_ABI_CALL(0x0049A2E0u, sub_0049A2E0); /* call 0x0049A2E0 */

loc_0049B20F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049B1F0; /* je: equal / zero */

loc_0049B213: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0049B218: ;
    PUSH32(esp, 0x640DC8);
    PUSH32(esp, 0x0049B222u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_0049B222: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x484) = 0xFF;

loc_0049B22C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049B240
 * Original: 0x0049B240 - 0x0049B248 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049B240(void)
{

loc_0049B240: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0049B247u); RECOMP_ABI_CALL(0x0049B1D0u, sub_0049B1D0); /* call 0x0049B1D0 */

loc_0049B247: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0049B250
 * Original: 0x0049B250 - 0x0049B312 (194 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049B250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049B250: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x454;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0049B265u); RECOMP_ABI_CALL(0x00614420u, sub_00614420); /* call 0x00614420 */

loc_0049B265: ;
    eax = MEM32(esi + 0x4C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(esi + 0x488) = 1;
    MEM8(esi + 0x48D) = LO8(ebx);
    MEM8(esi + 0x48B) = LO8(ebx);
    MEM8(esi + 0x48A) = LO8(ebx);
    MEM8(esi + 0x48C) = LO8(ebx);
    MEM8(esi + 0x48E) = LO8(ebx);
    MEM32(esi + 0x170) = ebx;
    MEM8(esi + 0x487) = LO8(ebx);
    MEM32(esi + 0x4C8) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0049B2B5; /* je: equal / zero */

loc_0049B2A6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049B2ACu); RECOMP_ABI_CALL(0x005E1010u, sub_005E1010); /* call 0x005E1010 */

loc_0049B2AC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x4C4) = ebx;

loc_0049B2B5: ;
    eax = MEM32(0x860608);
    MEM32(edi) = eax;
    ecx = MEM32(0x86060C);
    MEM32(edi + 4) = ecx;
    edx = MEM32(0x860610);
    PUSH32(esp, 1);
    MEM32(edi + 8) = edx;
    eax = MEM32(0x860614);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0xBF800000u);
    ecx = esi;
    MEM32(edi + 0xC) = eax;
    PUSH32(esp, 0x0049B2E9u); RECOMP_ABI_CALL(0x0049AFB0u, sub_0049AFB0); /* call 0x0049AFB0 */

loc_0049B2E9: ;
    eax = 0x3E99999A;
    POP32(esp, edi);
    MEM32(esi + 0x3C4) = eax;
    MEM32(esi + 0x3C8) = eax;
    MEM32(esi + 0x3CC) = eax;
    MEM32(esi + 0x3D0) = 0x3F800000;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0049A0A0(); return; /* tail jmp 0x0049A0A0 */

}

/**
 * sub_0049B320
 * Original: 0x0049B320 - 0x0049B396 (118 bytes, 41 insns)
 * CC: cdecl, 12 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049B320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049B320: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = 0x8582C8;
    PUSH32(esp, 0x0049B332u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0049B332: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049B392; /* je: equal / zero */

loc_0049B336: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x44);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(esp + 0x4C);
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x44);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(edx + 0xC) = ecx;
    edx = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    edx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0049B392u); RECOMP_ABI_CALL(0x0049A1A0u, sub_0049A1A0); /* call 0x0049A1A0 */

loc_0049B392: ;
    POP32(esp, esi);
    esp += 52; return; /* ret 48 */

}

/**
 * sub_0049B3A0
 * Original: 0x0049B3A0 - 0x0049C084 (3300 bytes, 972 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0049B3A0(void)
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

loc_0049B3A0: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x486));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0049C075; /* je: equal / zero */

loc_0049B3BE: ;
    SET_LO8(eax, MEM8(esi + 0x178));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049B400; /* je: equal / zero */

loc_0049B3C8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049B3E0; /* jne: not equal / not zero */

loc_0049B3CC: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049B3D1u); RECOMP_ABI_CALL(0x0049A840u, sub_0049A840); /* call 0x0049A840 */

loc_0049B3D1: ;
    esp = ebp + -92;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x74;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0049B3E0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049B400; /* jne: not equal / not zero */

loc_0049B3E4: ;
    PUSH32(esp, 0);
    ecx = esi;
    MEM8(esi + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049B3F1u); RECOMP_ABI_CALL(0x0049AC60u, sub_0049AC60); /* call 0x0049AC60 */

loc_0049B3F1: ;
    esp = ebp + -92;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x74;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0049B400: ;
    MEM8(esi + 4) = 0;
    ecx = esi;
    MEM8(esi + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049B40Fu); RECOMP_ABI_CALL(0x0049A810u, sub_0049A810); /* call 0x0049A810 */

loc_0049B40F: ;
    ecx = ebp + -76;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049B417u); RECOMP_ABI_CALL(0x005E1AF0u, sub_005E1AF0); /* call 0x005E1AF0 */

loc_0049B417: ;
    SET_LO8(eax, MEM8(esi + 0x48C));
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(ebp + -76);
    if (CMP_EQ(_fa, _fb)) goto loc_0049B42D; /* je: equal / zero */

loc_0049B426: ;
    eax = eax | 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0049B432;

loc_0049B42D: ;
    eax = eax & 0xFFFFFF7Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0049B432: ;
    MEM32(ebp + -76) = eax;
    eax = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049B43Fu); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_0049B43F: ;
    eax = esp;
    ecx = ebp + -76;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 2);
    PUSH32(esp, 0x63C908);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049B45Cu); RECOMP_ABI_CALL(0x004056C0u, sub_004056C0); /* call 0x004056C0 */

loc_0049B45C: ;
    ecx = MEM32(esi + 0x4C4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    edx = ebp + 0x20;
    PUSH32(esp, edx);
    eax = ebp + -80;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049B473u); RECOMP_ABI_CALL(0x005E0E00u, sub_005E0E00); /* call 0x005E0E00 */

loc_0049B473: ;
    edx = 0xE;
    ecx = 0x59;
    /* nop */

loc_0049B480: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049B4B3; /* jne: not equal / not zero */

loc_0049B484: ;
    edi = MEM32(esi + 0x448);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0049B4AA; /* jle: less or equal (signed <=) */

loc_0049B490: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049B4AA; /* jne: not equal / not zero */

loc_0049B494: ;
    edi = ecx + eax;
    _fa = (uint32_t)(MEM32(esi + edi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + edi * 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049B49F; /* je: equal / zero */

loc_0049B49D: ;
    SET_LO8(ebx, 1);

loc_0049B49F: ;
    edi = MEM32(esi + 0x448);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0049B490; /* jl: less (signed <) */

loc_0049B4AA: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0049B480; /* jge: greater or equal (signed >=) */

loc_0049B4B3: ;
    ecx = MEM32(ebp + 0x20);
    ebx = edx + 2;
    edx = MEM32(esi + 0x170);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ebp + 0x44) = ebx;
    MEM32(ebp + 0x48) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0049B4DB; /* je: equal / zero */

loc_0049B4CE: ;
    edx = MEM32(esi + 0x414);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x48) = eax;

loc_0049B4DB: ;
    eax = MEM32(esi + 0x448);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x58) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0049B612; /* jle: less or equal (signed <=) */

loc_0049B4F0: ;
    eax = MEM32(esi + edi * 4 + 0x43C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049B5DD; /* jne: not equal / not zero */

loc_0049B4FF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    eax = MEM32(esi + edi * 4 + 0x418);
    MEM32(ebp + edi * 4 + 0x24) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0049B5B9; /* jle: less or equal (signed <=) */

loc_0049B512: ;
    edx = MEM32(ebp + 0x44);
    ecx = edi + esi + 0x1A6;
    MEM32(ebp + 0x6C) = ecx;
    ebx = esi + edi * 4 + 8;
    MEM32(ebp + 0x50) = edx;

loc_0049B526: ;
    eax = MEM32(ebp + 0x6C);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049B5A0; /* jne: not equal / not zero */

loc_0049B52E: ;
    eax = MEM32(ebx + 0xB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049B57D; /* je: equal / zero */

loc_0049B538: ;
    ecx = ebp + -76;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x4C4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    edx = ebp + 0x14;
    PUSH32(esp, edx);
    eax = ebp + 0x68;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049B55Au); RECOMP_ABI_CALL(0x005E0E00u, sub_005E0E00); /* call 0x005E0E00 */

loc_0049B55A: ;
    eax = MEM32(ebp + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0049B573; /* jg: greater (signed >) */

loc_0049B561: ;
    ecx = MEM32(0x674FAC);
    _fb = (uint32_t)(0xFFFFFF38u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFF38u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + edi * 4 + 0x24) = ecx;
    goto loc_0049B57D;

loc_0049B573: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + edi * 4 + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + edi * 4 + 0x24) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0049B57D; /* jle: less or equal (signed <=) */

loc_0049B579: ;
    MEM32(ebp + edi * 4 + 0x24) = eax;

loc_0049B57D: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049B5A0; /* je: equal / zero */

loc_0049B583: ;
    eax = ZX16(MEM16(eax + 8));
    edx = MEM32(esi + edi * 4 + 0x424);
    ecx = MEM32(ebp + edi * 4 + 0x24);
    eax = eax + edx * 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebp + 0x68) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0049B5A0; /* jle: less or equal (signed <=) */

loc_0049B59C: ;
    MEM32(ebp + edi * 4 + 0x24) = eax;

loc_0049B5A0: ;
    ecx = MEM32(ebp + 0x6C);
    eax = MEM32(ebp + 0x50);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0x6C) = ecx;
    MEM32(ebp + 0x50) = eax;
    if ((_fa != 0)) goto loc_0049B526; /* jne: not equal / not zero */

loc_0049B5B9: ;
    eax = MEM32(esi + edi * 4 + 0x430);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049B5CB; /* jne: not equal / not zero */

loc_0049B5C5: ;
    eax = MEM32(esi + 0x44C);

loc_0049B5CB: ;
    ecx = MEM32(ebp + edi * 4 + 0x24);
    ebx = MEM32(ebp + 0x44);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + edi * 4 + 0x24) = ecx;
    ecx = MEM32(ebp + 0x58);
    goto loc_0049B5FC;

loc_0049B5DD: ;
    eax = MEM32(esi + edi * 4 + 0x430);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049B5F8; /* jne: not equal / not zero */

loc_0049B5E9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049B5F6; /* jne: not equal / not zero */

loc_0049B5ED: ;
    eax = MEM32(0x674FAC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0049B5F8;

loc_0049B5F6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049B5F8: ;
    MEM32(ebp + edi * 4 + 0x24) = eax;

loc_0049B5FC: ;
    _fb = (uint32_t)(MEM32(ebp + edi * 4 + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(ebp + edi * 4 + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x448);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(ebp + 0x58) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0049B4F0; /* jl: less (signed <) */

loc_0049B612: ;
    PUSH32(esp, 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049B619u); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_0049B619: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049B620u); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_0049B620: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049B627u); RECOMP_ABI_CALL(0x005EDF80u, sub_005EDF80); /* call 0x005EDF80 */

loc_0049B627: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049B62Eu); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_0049B62E: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049B63Au); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_0049B63A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049B643u); RECOMP_ABI_CALL(0x005EE5A0u, sub_005EE5A0); /* call 0x005EE5A0 */

loc_0049B643: ;
    fp_push((double)SMEM32(ebp + 0x58)); /* fild */
    eax = MEM32(esi + 0x518);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(ebp + 0x6C) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x40C)); /* fmul dword ptr [esi + 0x40c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    fp_top() = RECOMP_FP_PC(MEMF(esi + 0x4D0) - fp_top()); /* fsubr dword ptr [esi + 0x4d0] */
    MEMF(ebp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(ebp + 0x48)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x410)); /* fmul dword ptr [esi + 0x410] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    fp_top() = RECOMP_FP_PC(MEMF(esi + 0x4D4) - fp_top()); /* fsubr dword ptr [esi + 0x4d4] */
    MEMF(ebp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_0049B6E9; /* je: equal / zero */

loc_0049B683: ;
    ecx = MEM32(esi + 0x524);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049B692; /* jne: not equal / not zero */

loc_0049B68E: ;
    ecx = ZX16(MEM16(eax + 8));

loc_0049B692: ;
    edi = MEM32(esi + 0x528);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    MEM32(ebp + 0x68) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0049B6A4; /* jne: not equal / not zero */

loc_0049B6A0: ;
    edi = ZX16(MEM16(eax + 0xA));

loc_0049B6A4: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049B6AAu); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_0049B6AA: ;
    eax = MEM32(esi + 0x518);
    ebx = ZX16(MEM16(eax + 8));
    eax = ZX16(MEM16(eax + 0xA));
    ecx = MEM32(esi + 0x520);
    edx = MEM32(esi + 0x51C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ecx + edi;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x68);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049B6E3u); RECOMP_ABI_CALL(0x005EF6F0u, sub_005EF6F0); /* call 0x005EF6F0 */

loc_0049B6E3: ;
    ebx = MEM32(ebp + 0x44);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049B6E9: ;
    ecx = MEM32(ebp + 0x64);
    fp_push(MEMF(ebp + 0x64)); /* fld float */
    MEM32(ebp + 0x5C) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049B6F7u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0049B6F7: ;
    ecx = MEM32(ebp + -76);
    edi = MEM32(esi + 0x170);
    ecx = ecx & 0xFFFFFFF7u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + 0x14) = eax;
    MEM32(ebp + -76) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0049B793; /* je: equal / zero */

loc_0049B711: ;
    SET_LO8(eax, MEM8(esi + 4));
    fp_push(MEMF(ebp + 0x6C)); /* fld float */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x40C)); /* fmul dword ptr [esi + 0x40c] */
    PUSH32(esp, 0);
    if (CMP_EQ(_fa, _fb)) goto loc_0049B736; /* je: equal / zero */

loc_0049B723: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049B728u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0049B728: ;
    PUSH32(esp, eax);
    edx = esi + 0x3E4;
    PUSH32(esp, edx);
    eax = ebp + -76;
    PUSH32(esp, eax);
    goto loc_0049B747;

loc_0049B736: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049B73Bu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0049B73B: ;
    PUSH32(esp, eax);
    ecx = esi + 0x3F4;
    PUSH32(esp, ecx);
    edx = ebp + -76;
    PUSH32(esp, edx);

loc_0049B747: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049B74Eu); RECOMP_ABI_CALL(0x0049AF40u, sub_0049AF40); /* call 0x0049AF40 */

loc_0049B74E: ;
    ecx = MEM32(esi + 0x410);
    edx = MEM32(esi + 0x40C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = ebp + -76;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x64);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x4C4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049B778u); RECOMP_ABI_CALL(0x005DF5B0u, sub_005DF5B0); /* call 0x005DF5B0 */

loc_0049B778: ;
    edx = MEM32(esi + 0x414);
    _fb = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ebp + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x68) = edx;
    fp_push((double)SMEM32(ebp + 0x68)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x410)); /* fmul dword ptr [esi + 0x410] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x64)); /* fadd dword ptr [ebp + 0x64] */
    MEMF(ebp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */

loc_0049B793: ;
    fp_push(MEMF(0x6797CC)); /* fld float */
    ecx = MEM32(ebp + -76);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x4C8)); /* fadd dword ptr [esi + 0x4c8] */
    ecx = ecx | 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + -76) = ecx;
    MEMF(esi + 0x4C8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ebp + 0x64) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0049BD97; /* jle: less or equal (signed <=) */

loc_0049B7BD: ;
    eax = esi + 0x4DC;
    MEM32(ebp + 0x6C) = 2;
    MEM32(ebp + 0x58) = eax;
    /* nop */

loc_0049B7D0: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x484);
    eax = MEM32(ebp + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049B85C; /* jne: not equal / not zero */

loc_0049B7E2: ;
    fp_push(MEMF(esi + 0x4C8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x640DE8)); /* fmul dword ptr [0x640de8] */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D57C)); /* fadd dword ptr [0x62d57c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    fp_push(MEMF(esi + 0x3E4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x3D4)); /* fsub dword ptr [esi + 0x3d4] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x3D4)); /* fadd dword ptr [esi + 0x3d4] */
    MEMF(ebp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x3E8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x3D8)); /* fsub dword ptr [esi + 0x3d8] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x3D8)); /* fadd dword ptr [esi + 0x3d8] */
    MEMF(ebp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x3EC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x3DC)); /* fsub dword ptr [esi + 0x3dc] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x3DC)); /* fadd dword ptr [esi + 0x3dc] */
    MEMF(ebp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x3F0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x3E0)); /* fsub dword ptr [esi + 0x3e0] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x3E0)); /* fadd dword ptr [esi + 0x3e0] */
    MEMF(ebp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    goto loc_0049B879;

loc_0049B85C: ;
    edx = esi + 0x3C4;
    ecx = MEM32(edx);
    MEM32(ebp + 0x30) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(ebp + 0x34) = ecx;
    ecx = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(ebp + 0x38) = ecx;
    MEM32(ebp + 0x3C) = edx;

loc_0049B879: ;
    ecx = MEM32(ebp + 0x58);
    edi = MEM32(ecx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(ebp + 0x48) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0049B94A; /* je: equal / zero */

loc_0049B88B: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049B893u); RECOMP_ABI_CALL(0x0049A2E0u, sub_0049A2E0); /* call 0x0049A2E0 */

loc_0049B893: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049B94A; /* jne: not equal / not zero */

loc_0049B89B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049B8E9; /* jne: not equal / not zero */

loc_0049B8A0: ;
    eax = MEM32(esi + 0x408);
    edx = MEM32(eax + 4);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63032C)); /* fmul dword ptr [0x63032c] */
    ecx = MEM32(eax + 8);
    MEM32(ebp + 8) = edx;
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63032C)); /* fmul dword ptr [0x63032c] */
    edx = MEM32(eax + 0xC);
    MEM32(ebp + 0xC) = ecx;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63032C)); /* fmul dword ptr [0x63032c] */
    MEM32(ebp + 0x10) = edx;
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebp + 0xC);
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63032C)); /* fmul dword ptr [0x63032c] */
    MEMF(ebp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ebp + 0x10);
    goto loc_0049B935;

loc_0049B8E9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049B94A; /* jne: not equal / not zero */

loc_0049B8EE: ;
    eax = MEM32(esi + 0x404);
    edx = MEM32(eax + 4);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63032C)); /* fmul dword ptr [0x63032c] */
    ecx = MEM32(eax + 8);
    MEM32(ebp + -8) = edx;
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63032C)); /* fmul dword ptr [0x63032c] */
    edx = MEM32(eax + 0xC);
    MEM32(ebp + -4) = ecx;
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63032C)); /* fmul dword ptr [0x63032c] */
    MEM32(ebp) = edx;
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebp + -4);
    fp_push(MEMF(ebp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63032C)); /* fmul dword ptr [0x63032c] */
    MEMF(ebp) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ebp);

loc_0049B935: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(ebp + 0x38) = eax;
    MEMF(ebp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ebp + 0x3C) = ecx;
    MEM32(ebp + 0x48) = 0xF;
    MEMF(ebp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */

loc_0049B94A: ;
    _fa = (uint32_t)(MEM32(esi + 0x448)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x448), ebx (32-bit) */
    edx = MEM32(ebp + 0x18);
    MEM32(ebp + 0x70) = edx;
    MEM32(ebp + 0x50) = 0;
    MEM32(ebp + 0x68) = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_0049BD50; /* jle: less or equal (signed <=) */

loc_0049B96A: ;
    /* nop */

loc_0049B970: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049B984; /* jne: not equal / not zero */

loc_0049B974: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x48);
    MEM32(ebp + 0x54) = eax;
    fp_push((double)SMEM32(ebp + 0x54)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(ebp + 0x70) - fp_top()); /* fsubr dword ptr [ebp + 0x70] */
    MEMF(ebp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */

loc_0049B984: ;
    edx = MEM32(ebp + 0x6C);
    ecx = edx + ebx + 0x2D;
    eax = esi + ecx * 4;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    MEM32(ebp + 0x54) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0049BC71; /* je: equal / zero */

loc_0049B99A: ;
    edi = edx + esi + -2;
    SET_LO8(eax, MEM8(edi + ebx + 0x1A6));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(ebp + 0x60) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_0049B9CB; /* jbe: below or equal (unsigned <=) */

loc_0049B9AE: ;
    edx = edx + ebx + -2;
    edx = ZX8(MEM8(edx + esi + 0x1A6));
    eax = ebp + ebx * 4 + 0x24;
    edi = edi;

loc_0049B9C0: ;
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0049B9C0; /* jne: not equal / not zero */

loc_0049B9C8: ;
    MEM32(ebp + 0x60) = ecx;

loc_0049B9CB: ;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049BA3A; /* je: equal / zero */

loc_0049B9D2: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x484);
    _fa = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x64), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049BA3A; /* je: equal / zero */

loc_0049B9DE: ;
    fp_push((double)SMEM32(ebp + 0x60)); /* fild */
    ecx = ZX8(MEM8(edi + ebx + 0x179));
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x40C)); /* fmul dword ptr [esi + 0x40c] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049B9F5u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0049B9F5: ;
    PUSH32(esp, eax);
    edx = esi + 0x3E4;
    PUSH32(esp, edx);
    eax = ebp + -76;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049BA08u); RECOMP_ABI_CALL(0x0049AF40u, sub_0049AF40); /* call 0x0049AF40 */

loc_0049BA08: ;
    fp_push((double)SMEM32(esi + 0x4D8)); /* fild */
    edx = MEM32(esi + 0x410);
    eax = MEM32(esi + 0x40C);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x5C)); /* fadd dword ptr [ebp + 0x5c] */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ebp + -76;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x54);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x70);
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    goto loc_0049BC32;

loc_0049BA3A: ;
    eax = MEM32(ebp + 0x64);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049BA45u); RECOMP_ABI_CALL(0x0049A2E0u, sub_0049A2E0); /* call 0x0049A2E0 */

loc_0049BA45: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049BAA5; /* jne: not equal / not zero */

loc_0049BA49: ;
    _fa = (uint32_t)(MEM8(esi + 0x174)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x174), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0049BAA5; /* jne: not equal / not zero */

loc_0049BA52: ;
    fp_push((double)SMEM32(ebp + 0x60)); /* fild */
    ecx = ZX8(MEM8(edi + ebx + 0x179));
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x40C)); /* fmul dword ptr [esi + 0x40c] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049BA69u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0049BA69: ;
    PUSH32(esp, eax);
    edx = esi + 0x3E4;
    PUSH32(esp, edx);
    eax = ebp + -76;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049BA7Cu); RECOMP_ABI_CALL(0x0049AF40u, sub_0049AF40); /* call 0x0049AF40 */

loc_0049BA7C: ;
    edx = MEM32(esi + 0x410);
    eax = MEM32(esi + 0x40C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ebp + -76;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x54);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x5C);
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x70);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    goto loc_0049BC32;

loc_0049BAA5: ;
    fp_push((double)SMEM32(ebp + 0x60)); /* fild */
    ecx = ZX8(MEM8(edi + ebx + 0x179));
    PUSH32(esp, ecx);
    MEMF(ebp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x40C)); /* fmul dword ptr [esi + 0x40c] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049BAC2u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0049BAC2: ;
    PUSH32(esp, eax);
    edx = ebp + 0x30;
    PUSH32(esp, edx);
    eax = ebp + -76;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049BAD2u); RECOMP_ABI_CALL(0x0049AF40u, sub_0049AF40); /* call 0x0049AF40 */

loc_0049BAD2: ;
    ecx = MEM32(ebp + 0x58);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049BAE8; /* je: equal / zero */

loc_0049BADB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049BAE8; /* je: equal / zero */

loc_0049BAE0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049BAE8; /* je: equal / zero */

loc_0049BAE5: ;
    MEM32(ebp + -20) = eax;

loc_0049BAE8: ;
    eax = MEM32(esi + 0x410);
    fp_push((double)SMEM32(esi + 0x4D8)); /* fild */
    ecx = MEM32(esi + 0x40C);
    PUSH32(esp, 0);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x5C)); /* fadd dword ptr [ebp + 0x5c] */
    PUSH32(esp, 0);
    edx = ebp + -76;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x54);
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x70);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x4C4);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049BB20u); RECOMP_ABI_CALL(0x005DF5B0u, sub_005DF5B0); /* call 0x005DF5B0 */

loc_0049BB20: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x484);
    _fa = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x64), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049BC3D; /* jne: not equal / not zero */

loc_0049BB30: ;
    SET_LO8(eax, MEM8(eax + esi + 0x1D3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049BB43; /* je: equal / zero */

loc_0049BB3B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049BC3D; /* jne: not equal / not zero */

loc_0049BB43: ;
    ecx = ZX8(MEM8(edi + ebx + 0x179));
    fp_push(MEMF(ebp + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x40C)); /* fmul dword ptr [esi + 0x40c] */
    MEM16(ebp + 0x40) = 0x3C;
    MEM16(ebp + 0x42) = 0;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049BB66u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0049BB66: ;
    PUSH32(esp, eax);
    edx = ebp + 0x30;
    PUSH32(esp, edx);
    eax = ebp + -76;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049BB76u); RECOMP_ABI_CALL(0x0049AF40u, sub_0049AF40); /* call 0x0049AF40 */

loc_0049BB76: ;
    ecx = MEM32(ebp + -76);
    fp_push((double)SMEM32(esi + 0x4D8)); /* fild */
    eax = MEM32(esi + 0x410);
    PUSH32(esp, 0);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x5C)); /* fadd dword ptr [ebp + 0x5c] */
    PUSH32(esp, 0);
    ecx = ecx & 0xFFFFFFFAu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ebp + -76;
    PUSH32(esp, edx);
    MEM32(ebp + -76) = ecx;
    ecx = MEM32(esi + 0x40C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x4C4);
    edx = ebp + 0x40;
    PUSH32(esp, edx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x6382CC)); /* fsub dword ptr [0x6382cc] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049BBC3u); RECOMP_ABI_CALL(0x005DF5B0u, sub_005DF5B0); /* call 0x005DF5B0 */

loc_0049BBC3: ;
    eax = ZX8(MEM8(edi + ebx + 0x179));
    fp_push(MEMF(ebp + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x40C)); /* fmul dword ptr [esi + 0x40c] */
    MEM16(ebp + 0x40) = 0x3E;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049BBE0u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0049BBE0: ;
    PUSH32(esp, eax);
    ecx = ebp + 0x30;
    PUSH32(esp, ecx);
    edx = ebp + -76;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049BBF0u); RECOMP_ABI_CALL(0x0049AF40u, sub_0049AF40); /* call 0x0049AF40 */

loc_0049BBF0: ;
    eax = MEM32(ebp + -76);
    fp_push((double)SMEM32(esi + 0x4D8)); /* fild */
    edx = MEM32(esi + 0x410);
    PUSH32(esp, 0);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x5C)); /* fadd dword ptr [ebp + 0x5c] */
    PUSH32(esp, 0);
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ebp + -76;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(ebp + -76) = eax;
    eax = MEM32(esi + 0x40C);
    PUSH32(esp, eax);
    ecx = ebp + 0x40;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x6382CC)); /* fadd dword ptr [0x6382cc] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */

loc_0049BC32: ;
    ecx = MEM32(esi + 0x4C4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049BC3Du); RECOMP_ABI_CALL(0x005DF5B0u, sub_005DF5B0); /* call 0x005DF5B0 */

loc_0049BC3D: ;
    edx = MEM32(ebp + 0x54);
    eax = MEM32(edx);
    PUSH32(esp, 0xA);
    PUSH32(esp, eax);
    edi = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049BC4Fu); RECOMP_ABI_CALL(0x0061A562u, sub_0061A562); /* call 0x0061A562 */

loc_0049BC4F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049BC69; /* je: equal / zero */

loc_0049BC56: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xA);
    PUSH32(esp, eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049BC62u); RECOMP_ABI_CALL(0x0061A562u, sub_0061A562); /* call 0x0061A562 */

loc_0049BC62: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049BC56; /* jne: not equal / not zero */

loc_0049BC69: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0x68) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0049BC71; /* jle: less or equal (signed <=) */

loc_0049BC6E: ;
    MEM32(ebp + 0x68) = edi;

loc_0049BC71: ;
    eax = MEM32(ebp + 0x6C);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(esi + eax * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049BD1D; /* je: equal / zero */

loc_0049BC81: ;
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049BC89u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0049BC89: ;
    fp_push(MEMF(ebp + 0x5C)); /* fld float */
    ecx = ZX16(MEM16(edi + 8));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x4C) = eax;
    MEM32(ebp + 0x60) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049BC9Du); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0049BC9D: ;
    ecx = ZX16(MEM16(edi + 0xA));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    MEM32(ebp + 0x1C) = eax;
    MEM32(ebp + 0x54) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049BCAFu); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_0049BCAF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049BCD1u); RECOMP_ABI_CALL(0x004016F0u, sub_004016F0); /* call 0x004016F0 */

loc_0049BCD1: ;
    ecx = ZX16(MEM16(edi + 0xA));
    edx = ZX16(MEM16(edi + 8));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x54);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x60);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esi + ebx * 4 + 0x424);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    _fb = (uint32_t)(MEM32(ebp + 0x4C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049BCFFu); RECOMP_ABI_CALL(0x005EF6F0u, sub_005EF6F0); /* call 0x005EF6F0 */

loc_0049BCFF: ;
    ecx = ZX16(MEM16(edi + 0xA));
    MEM32(ebp + 0x4C) = ecx;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(ebp + 0x4C)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 0x50)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebp + 0x50] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0049BD1B; /* jne: not equal / not zero */

loc_0049BD16: ;
    MEMF(ebp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0049BD1D;

loc_0049BD1B: ;
    fp_pop(); /* fstp st(0) */

loc_0049BD1D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049BD31; /* jne: not equal / not zero */

loc_0049BD21: ;
    edx = (uint32_t)(int32_t)SMEM16(ebp + 0x48);
    MEM32(ebp + 0x4C) = edx;
    fp_push((double)SMEM32(ebp + 0x4C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x70)); /* fadd dword ptr [ebp + 0x70] */
    MEMF(ebp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */

loc_0049BD31: ;
    fp_push((double)SMEM32(ebp + ebx * 4 + 0x24)); /* fild */
    eax = MEM32(esi + 0x448);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x40C)); /* fmul dword ptr [esi + 0x40c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x70)); /* fadd dword ptr [ebp + 0x70] */
    MEMF(ebp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_0049B970; /* jl: less (signed <) */

loc_0049BD50: ;
    fp_push((double)SMEM32(ebp + 0x68)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(ebp + 0x20)); /* fimul dword ptr [ebp + 0x20] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x410)); /* fmul dword ptr [esi + 0x410] */
    fp_push(MEMF(ebp + 0x50)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0049BD6D; /* jne: not equal / not zero */

loc_0049BD68: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + 0x50)); /* fld float */

loc_0049BD6D: ;
    eax = MEM32(ebp + 0x64);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x5C)); /* fadd dword ptr [ebp + 0x5c] */
    edi = MEM32(ebp + 0x58);
    edx = MEM32(ebp + 0x6C);
    ecx = MEM32(ebp + 0x44);
    MEMF(ebp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebp + 0x64) = eax;
    MEM32(ebp + 0x58) = edi;
    MEM32(ebp + 0x6C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0049B7D0; /* jl: less (signed <) */

loc_0049BD97: ;
    eax = MEM32(esi + 0x534);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049C075; /* je: equal / zero */

loc_0049BDA5: ;
    eax = MEM32(0x675030);
    fp_push((double)SMEM32(0x675030)); /* fild */
    ebx = eax + eax * 2;
    eax = MEM32(0x8583A0);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x636EB0)); /* fmul dword ptr [0x636eb0] */
    MEM32(ebp + 0x1C) = eax;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEMF(ebp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_0049BE5A; /* je: equal / zero */

loc_0049BDCF: ;
    eax = MEM32(0x698524);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0049BE15; /* jle: less or equal (signed <=) */

loc_0049BDD8: ;
    ecx = MEM32(esi + 0x548);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0049BDE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049BDE0u); } /* indirect call */
    }

loc_0049BDE3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049BDF2; /* jne: not equal / not zero */

loc_0049BDE7: ;
    ecx = MEM32(esi + 0x548);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0049BDF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049BDEFu); } /* indirect call */
    }

loc_0049BDF2: ;
    eax = MEM32(0x698524);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x698524) = eax;
    fp_push((double)SMEM32(0x698524)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x638140)); /* fmul dword ptr [0x638140] */
    MEMF(0x698530) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0049BF70;

loc_0049BE15: ;
    fp_push(MEMF(0x69852C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D67C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d67c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0049BF70; /* jp: parity */

loc_0049BE2C: ;
    ecx = MEM32(esi + 0x548);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0049BE37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049BE34u); } /* indirect call */
    }

loc_0049BE37: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049BE46; /* jne: not equal / not zero */

loc_0049BE3B: ;
    ecx = MEM32(esi + 0x548);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0049BE46u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049BE43u); } /* indirect call */
    }

loc_0049BE46: ;
    fp_push(MEMF(ebp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x69852C)); /* fadd dword ptr [0x69852c] */
    MEMF(0x69852C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0049BF70;

loc_0049BE5A: ;
    ecx = MEM32(0x698524);
    edi = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0049BECE; /* jge: greater or equal (signed >=) */

loc_0049BE67: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x8C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0049BECE; /* jge: greater or equal (signed >=) */

loc_0049BE6F: ;
    ecx = MEM32(esi + 0x548);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0049BE7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049BE77u); } /* indirect call */
    }

loc_0049BE7A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049BE89; /* jne: not equal / not zero */

loc_0049BE7E: ;
    ecx = MEM32(esi + 0x548);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0049BE89u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049BE86u); } /* indirect call */
    }

loc_0049BE89: ;
    ecx = MEM32(0x698524);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(0x698524) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0049BEA3; /* jle: less or equal (signed <=) */

loc_0049BE9B: ;
    ecx = edi;
    MEM32(0x698524) = ecx;

loc_0049BEA3: ;
    fp_push((double)SMEM32(0x698524)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x638140)); /* fmul dword ptr [0x638140] */
    MEMF(0x698530) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x640DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x640de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0049BF13; /* jne: not equal / not zero */

loc_0049BEC2: ;
    MEM32(0x698530) = 0x3E21CAC1;
    goto loc_0049BF13;

loc_0049BECE: ;
    fp_push(MEMF(0x69852C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x640DE0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x640de0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0049BF13; /* jne: not equal / not zero */

loc_0049BEE1: ;
    ecx = MEM32(esi + 0x548);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0049BEECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049BEE9u); } /* indirect call */
    }

loc_0049BEEC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049BEFB; /* jne: not equal / not zero */

loc_0049BEF0: ;
    ecx = MEM32(esi + 0x548);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0049BEFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049BEF8u); } /* indirect call */
    }

loc_0049BEFB: ;
    fp_push(MEMF(0x69852C)); /* fld float */
    ecx = MEM32(0x698524);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x63D408)); /* fsub dword ptr [0x63d408] */
    MEMF(0x69852C) = (float)fp_top(); fp_pop(); /* fstp */

loc_0049BF13: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0049BF70; /* jle: less or equal (signed <=) */

loc_0049BF17: ;
    ecx = MEM32(esi + 0x548);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0049BF22u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049BF1Fu); } /* indirect call */
    }

loc_0049BF22: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049BF31; /* jne: not equal / not zero */

loc_0049BF26: ;
    ecx = MEM32(esi + 0x548);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0049BF31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049BF2Eu); } /* indirect call */
    }

loc_0049BF31: ;
    eax = MEM32(0x698524);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(0x698524) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0049BF47; /* jge: greater or equal (signed >=) */

loc_0049BF41: ;
    MEM32(0x698524) = edi;

loc_0049BF47: ;
    fp_push((double)SMEM32(0x698524)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x638140)); /* fmul dword ptr [0x638140] */
    MEMF(0x698530) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x640DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x640de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0049BF70; /* jne: not equal / not zero */

loc_0049BF66: ;
    MEM32(0x698530) = 0x3E21CAC1;

loc_0049BF70: ;
    ecx = MEM32(0x698530);
    fp_push(MEMF(0x69852C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x640DDC)); /* fadd dword ptr [0x640ddc] */
    edx = MEM32(0x69852C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x52C);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049BFA5u); RECOMP_ABI_CALL(0x005FA3C0u, sub_005FA3C0); /* call 0x005FA3C0 */

loc_0049BFA5: ;
    eax = MEM32(0x698524);
    ecx = MEM32(0x674FAC);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x52C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049BFC8u); RECOMP_ABI_CALL(0x005FAA80u, sub_005FAA80); /* call 0x005FAA80 */

loc_0049BFC8: ;
    edx = MEM32(esi + 0x52C);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049BFD4u); RECOMP_ABI_CALL(0x005F23A0u, sub_005F23A0); /* call 0x005F23A0 */

loc_0049BFD4: ;
    ecx = MEM32(esi + 0x534);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049BFE8u); RECOMP_ABI_CALL(0x005F25C0u, sub_005F25C0); /* call 0x005F25C0 */

loc_0049BFE8: ;
    fp_push(MEMF(0x69852C)); /* fld float */
    ecx = MEM32(0x698530);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x640DDC)); /* fadd dword ptr [0x640ddc] */
    edx = MEM32(0x69852C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x530);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049C01Du); RECOMP_ABI_CALL(0x005FA3C0u, sub_005FA3C0); /* call 0x005FA3C0 */

loc_0049C01D: ;
    eax = MEM32(0x674FB0);
    ecx = MEM32(0x674FAC);
    ebx = MEM32(0x698524);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x530);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049C047u); RECOMP_ABI_CALL(0x005FAA80u, sub_005FAA80); /* call 0x005FAA80 */

loc_0049C047: ;
    edx = MEM32(esi + 0x530);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049C053u); RECOMP_ABI_CALL(0x005F23A0u, sub_005F23A0); /* call 0x005F23A0 */

loc_0049C053: ;
    esi = MEM32(esi + 0x534);
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049C069u); RECOMP_ABI_CALL(0x005F25C0u, sub_005F25C0); /* call 0x005F25C0 */

loc_0049C069: ;
    ecx = MEM32(ebp + 0x1C);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049C072u); RECOMP_ABI_CALL(0x005F23A0u, sub_005F23A0); /* call 0x005F23A0 */

loc_0049C072: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049C075: ;
    esp = ebp + -92;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x74;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0049C090
 * Original: 0x0049C090 - 0x0049C362 (722 bytes, 177 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049C090: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esi) = 0x640E08;
    MEM32(esi + 0x170) = ebx;
    edi = esi + 0x1E4;
    ebp = 0xF;
    /* nop */

loc_0049C0B0: ;
    ecx = edi;
    PUSH32(esp, 0x0049C0B7u); RECOMP_ABI_CALL(0x00614370u, sub_00614370); /* call 0x00614370 */

loc_0049C0B7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0049C0B0; /* jne: not equal / not zero */

loc_0049C0BD: ;
    edi = esi + 0x2D4;
    ebp = 0xF;

loc_0049C0C8: ;
    ecx = edi;
    PUSH32(esp, 0x0049C0CFu); RECOMP_ABI_CALL(0x00614370u, sub_00614370); /* call 0x00614370 */

loc_0049C0CF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0049C0C8; /* jne: not equal / not zero */

loc_0049C0D5: ;
    eax = 0x3F000000;
    MEM32(esi + 0x3C4) = eax;
    MEM32(esi + 0x3C8) = eax;
    MEM32(esi + 0x3CC) = eax;
    eax = 0x3F800000;
    MEM32(esi + 0x3D0) = eax;
    MEM32(esi + 0x3D8) = eax;
    MEM32(esi + 0x3E0) = eax;
    MEM32(esi + 0x3D4) = ebx;
    MEM32(esi + 0x3DC) = ebx;
    MEM32(esi + 0x3F0) = eax;
    MEM32(esi + 0x3E4) = ebx;
    MEM32(esi + 0x3E8) = ebx;
    MEM32(esi + 0x3EC) = ebx;
    MEM32(esi + 0x3F4) = eax;
    MEM32(esi + 0x3F8) = eax;
    MEM32(esi + 0x3FC) = eax;
    MEM32(esi + 0x400) = eax;
    MEM32(esi + 0x40C) = eax;
    MEM32(esi + 0x410) = eax;
    eax = 0xA;
    ecx = esi + 0x454;
    MEM32(esi + 0x414) = eax;
    MEM32(esi + 0x448) = 1;
    MEM32(esi + 0x44C) = eax;
    PUSH32(esp, 0x0049C171u); RECOMP_ABI_CALL(0x00614370u, sub_00614370); /* call 0x00614370 */

loc_0049C171: ;
    ecx = esi + 0x464;
    PUSH32(esp, 0x0049C17Cu); RECOMP_ABI_CALL(0x00614370u, sub_00614370); /* call 0x00614370 */

loc_0049C17C: ;
    ecx = esi + 0x474;
    PUSH32(esp, 0x0049C187u); RECOMP_ABI_CALL(0x00614370u, sub_00614370); /* call 0x00614370 */

loc_0049C187: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x524) = eax;
    MEM32(esi + 0x528) = eax;
    MEM8(esi + 0x486) = LO8(ebx);
    MEM8(esi + 0x488) = 1;
    MEM8(esi + 0x48C) = LO8(ebx);
    MEM32(esi + 0x4BC) = ebx;
    MEM32(esi + 0x4C0) = ebx;
    MEM32(esi + 0x4C4) = ebx;
    MEM32(esi + 0x4C8) = ebx;
    MEM32(esi + 0x4D8) = ebx;
    MEM32(esi + 0x518) = ebx;
    MEM32(esi + 0x51C) = ebx;
    MEM32(esi + 0x520) = ebx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xB;
    edi = esi + 0x48F;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    PUSH32(esp, 0x0049C1F0u); RECOMP_ABI_CALL(0x0049B250u, sub_0049B250); /* call 0x0049B250 */

loc_0049C1F0: ;
    PUSH32(esp, 0x31);
    PUSH32(esp, 0x640E3C);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x0049C1FEu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049C1FE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049C213; /* je: equal / zero */

loc_0049C205: ;
    PUSH32(esp, 0x63995C);
    ecx = eax;
    PUSH32(esp, 0x0049C211u); RECOMP_ABI_CALL(0x005D5BD0u, sub_005D5BD0); /* call 0x005D5BD0 */

loc_0049C211: ;
    goto loc_0049C215;

loc_0049C213: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049C215: ;
    MEM32(esi + 0x544) = eax;
    ecx = MEM32(0x6CE2E4);
    edx = MEM32(ecx + 0x4C);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0049C22Cu); RECOMP_ABI_CALL(0x005D5800u, sub_005D5800); /* call 0x005D5800 */

loc_0049C22C: ;
    PUSH32(esp, 0x33);
    PUSH32(esp, 0x640E3C);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x0049C23Au); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049C23A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049C24F; /* je: equal / zero */

loc_0049C241: ;
    PUSH32(esp, 0x640E30);
    ecx = eax;
    PUSH32(esp, 0x0049C24Du); RECOMP_ABI_CALL(0x005D5BD0u, sub_005D5BD0); /* call 0x005D5BD0 */

loc_0049C24D: ;
    goto loc_0049C251;

loc_0049C24F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049C251: ;
    MEM32(esi + 0x548) = eax;
    ecx = MEM32(0x6CE2E4);
    edx = MEM32(ecx + 0x4C);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0049C268u); RECOMP_ABI_CALL(0x005D5800u, sub_005D5800); /* call 0x005D5800 */

loc_0049C268: ;
    PUSH32(esp, 0x0049C26Du); RECOMP_ABI_CALL(0x005ED990u, sub_005ED990); /* call 0x005ED990 */

loc_0049C26D: ;
    MEM32(esi + 0x52C) = eax;
    PUSH32(esp, 0x0049C278u); RECOMP_ABI_CALL(0x005ED990u, sub_005ED990); /* call 0x005ED990 */

loc_0049C278: ;
    PUSH32(esp, 0x112);
    MEM32(esi + 0x530) = eax;
    MEM32(esi + 0x4CC) = ebx;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x640E24);
    MEM32(0x698524) = 0x28;
    MEM32(0x69852C) = 0x3EB33333;
    MEM32(0x698530) = 0x3D99999A;
    MEM8(0x698528) = LO8(ebx);
    PUSH32(esp, 0x6403F4);
    MEM32(esi + 0x540) = ebx;
    PUSH32(esp, 0x0049C2C3u); RECOMP_ABI_CALL(0x005F3D00u, sub_005F3D00); /* call 0x005F3D00 */

loc_0049C2C3: ;
    MEM32(esi + 0x534) = eax;
    SET_LO8(edx, MEM8(eax));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0049C2FD; /* jbe: below or equal (unsigned <=) */

loc_0049C2D4: ;
    edx = MEM32(eax + 4);
    edi = MEM32(edx + ecx * 4);
    edi = MEM32(edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049C2EF; /* je: equal / zero */

loc_0049C2E0: ;
    MEM32(esi + 0x53C) = edi;
    edx = MEM32(edx + ecx * 4);
    MEM32(esi + 0x540) = edx;

loc_0049C2EF: ;
    edx = MEM32(esi + 0x534);
    edx = ZX8(MEM8(edx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0049C2D4; /* jl: less (signed <) */

loc_0049C2FD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x640E10);
    PUSH32(esp, 0x0049C30Au); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_0049C30A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x538) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x4DC;
    goto loc_0049C320;

    /* nop */

loc_0049C320: ;
    MEM32(ecx) = ebx;
    MEM8(esi + eax + 0x1D3) = LO8(ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0049C320; /* jl: less (signed <) */

loc_0049C332: ;
    eax = esi + 0x418;
    ecx = 3;
    /* nop */

loc_0049C340: ;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0049C340; /* jne: not equal / not zero */

loc_0049C34B: ;
    POP32(esp, edi);
    MEM32(esi + 0x174) = ebx;
    MEM8(esi + 4) = LO8(ebx);
    MEM8(esi + 0x178) = 7;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0049C370
 * Original: 0x0049C370 - 0x0049C38E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049C370: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0049C378u); RECOMP_ABI_CALL(0x0049B090u, sub_0049B090); /* call 0x0049B090 */

loc_0049C378: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0049C388; /* je: equal / zero */

loc_0049C37F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0049C385u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0049C385: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049C388: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049C390
 * Original: 0x0049C390 - 0x0049C3B9 (41 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C390(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049C390: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0049C399u); RECOMP_ABI_CALL(0x005E33D0u, sub_005E33D0); /* call 0x005E33D0 */

loc_0049C399: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 0x70) = LO8(eax);
    MEM8(esi + 0x71) = LO8(eax);
    MEM32(esi + 0x74) = eax;
    edi = esi + 0xC;
    MEM32(esi) = 0x640E58;
    ecx = 0x19;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0049C3C0
 * Original: 0x0049C3C0 - 0x0049C3C6 (6 bytes, 2 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C3C0(void)
{

loc_0049C3C0: ;
    eax = 0x640E78;
    esp += 4; return; /* ret */

}

/**
 * sub_0049C3D0
 * Original: 0x0049C3D0 - 0x0049C3FF (47 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C3D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049C3D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    MEM32(ebx) = 0x640E58;
    esi = ebx + 0xC;
    edi = 0x19;

loc_0049C3E3: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049C3EF; /* je: equal / zero */

loc_0049C3E9: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0049C3EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049C3EDu); } /* indirect call */
    }

loc_0049C3EF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0049C3E3; /* jne: not equal / not zero */

loc_0049C3F5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ebx;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_005E3280(); return; /* tail jmp 0x005E3280 */

}

/**
 * sub_0049C400
 * Original: 0x0049C400 - 0x0049C429 (41 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049C400: ;
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x70));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049C427; /* je: equal / zero */

loc_0049C40A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edi + 0xC;
    ebx = 0x19;

loc_0049C414: ;
    ecx = MEM32(esi);
    edx = MEM32(edi + 0x74);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0049C41Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049C41Cu); } /* indirect call */
    }

loc_0049C41F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0049C414; /* jne: not equal / not zero */

loc_0049C425: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0049C427: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0049C430
 * Original: 0x0049C430 - 0x0049C45D (45 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049C430: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0xC;
    edi = 0x19;
    /* nop */

loc_0049C440: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049C454; /* je: equal / zero */

loc_0049C446: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0049C44Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049C448u); } /* indirect call */
    }

loc_0049C44B: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0049C454u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049C451u); } /* indirect call */
    }

loc_0049C454: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0049C440; /* jne: not equal / not zero */

loc_0049C45A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0049C460
 * Original: 0x0049C460 - 0x0049C46A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C460(void)
{

loc_0049C460: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x70) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049C470
 * Original: 0x0049C470 - 0x0049C49F (47 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049C470: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x70));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049C49B; /* je: equal / zero */

loc_0049C47A: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = MEM32(esi + edi * 4 + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0049C488u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049C485u); } /* indirect call */
    }

loc_0049C488: ;
    ecx = MEM32(esi + edi * 4 + 0xC);
    edx = MEM32(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x2C)); return; /* indirect tail jmp */

loc_0049C49B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049C4A0
 * Original: 0x0049C4A0 - 0x0049C4CF (47 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C4A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049C4A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x70));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049C4CB; /* je: equal / zero */

loc_0049C4AA: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = MEM32(esi + edi * 4 + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0049C4B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049C4B5u); } /* indirect call */
    }

loc_0049C4B8: ;
    ecx = MEM32(esi + edi * 4 + 0xC);
    edx = MEM32(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x2C)); return; /* indirect tail jmp */

loc_0049C4CB: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049C4D0
 * Original: 0x0049C4D0 - 0x0049C4EA (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C4D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049C4D0: ;
    SET_LO8(eax, MEM8(ecx + 0x70));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049C4DC; /* jne: not equal / not zero */

loc_0049C4D7: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_0049C4DC: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + eax * 4 + 0xC);
    SET_LO8(eax, MEM8(ecx + 0x38));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049C4F0
 * Original: 0x0049C4F0 - 0x0049C5DE (238 bytes, 79 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C4F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049C4F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0049C4FAu); RECOMP_ABI_CALL(0x005E33D0u, sub_005E33D0); /* call 0x005E33D0 */

loc_0049C4FA: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x3F800000;
    MEM32(esi + 0x18) = eax;
    MEM32(esi) = 0x640E94;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = 0x43960000;
    MEM32(esi + 0x14) = 0x43480000;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x34) = ebx;
    MEM8(esi + 0x38) = LO8(ebx);
    MEM8(esi + 0x39) = LO8(ebx);
    MEM32(esi + 0x3C) = ebx;
    PUSH32(esp, 0x0049C542u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_0049C542: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0x2C) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0049C556u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049C553u); } /* indirect call */
    }

loc_0049C556: ;
    edi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049C596; /* je: equal / zero */

loc_0049C55E: ;
    PUSH32(esp, 0x123);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x0049C56Fu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049C56F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049C580; /* je: equal / zero */

loc_0049C576: ;
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x0049C57Eu); RECOMP_ABI_CALL(0x005D5BD0u, sub_005D5BD0); /* call 0x005D5BD0 */

loc_0049C57E: ;
    goto loc_0049C582;

loc_0049C580: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049C582: ;
    MEM32(esi + 0x30) = eax;
    ecx = MEM32(0x6CE2E4);
    edx = MEM32(ecx + 0x44);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0049C596u); RECOMP_ABI_CALL(0x005D5800u, sub_005D5800); /* call 0x005D5800 */

loc_0049C596: ;
    edi = MEM32(esp + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049C5D6; /* je: equal / zero */

loc_0049C59E: ;
    PUSH32(esp, 0x128);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x0049C5AFu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049C5AF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049C5C0; /* je: equal / zero */

loc_0049C5B6: ;
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x0049C5BEu); RECOMP_ABI_CALL(0x005D5BD0u, sub_005D5BD0); /* call 0x005D5BD0 */

loc_0049C5BE: ;
    goto loc_0049C5C2;

loc_0049C5C0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049C5C2: ;
    MEM32(esi + 0x34) = eax;
    ecx = MEM32(0x6CE2E4);
    edx = MEM32(ecx + 0x44);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0049C5D6u); RECOMP_ABI_CALL(0x005D5800u, sub_005D5800); /* call 0x005D5800 */

loc_0049C5D6: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0049C5E0
 * Original: 0x0049C5E0 - 0x0049C5E6 (6 bytes, 2 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C5E0(void)
{

loc_0049C5E0: ;
    eax = 0x640EC4;
    esp += 4; return; /* ret */

}

/**
 * sub_0049C5F0
 * Original: 0x0049C5F0 - 0x0049C634 (68 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C5F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049C5F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x640E94;
    if (CMP_EQ(_fa, _fb)) goto loc_0049C606; /* je: equal / zero */

loc_0049C600: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0049C606u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049C604u); } /* indirect call */
    }

loc_0049C606: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0049C60Fu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0049C60F: ;
    ecx = MEM32(esi + 0x30);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049C61F; /* je: equal / zero */

loc_0049C619: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0049C61Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049C61Du); } /* indirect call */
    }

loc_0049C61F: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049C62C; /* je: equal / zero */

loc_0049C626: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0049C62Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049C62Au); } /* indirect call */
    }

loc_0049C62C: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005E3280(); return; /* tail jmp 0x005E3280 */

}

/**
 * sub_0049C640
 * Original: 0x0049C640 - 0x0049C68A (74 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049C640: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0049C648u); RECOMP_ABI_CALL(0x00499910u, sub_00499910); /* call 0x00499910 */

loc_0049C648: ;
    edx = eax + 1;
    goto loc_0049C650;

    /* nop */

loc_0049C650: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049C650; /* jne: not equal / not zero */

loc_0049C657: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x148);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x640E88);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049C66Au); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049C66A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x3C) = eax;
    PUSH32(esp, 0x0049C675u); RECOMP_ABI_CALL(0x00499910u, sub_00499910); /* call 0x00499910 */

loc_0049C675: ;
    edx = MEM32(esi + 0x3C);

loc_0049C678: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049C678; /* jne: not equal / not zero */

loc_0049C682: ;
    eax = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

}

/**
 * sub_0049C690
 * Original: 0x0049C690 - 0x0049C6DD (77 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049C690: ;
    SET_LO8(eax, MEM8(ecx + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049C6DA; /* je: equal / zero */

loc_0049C697: ;
    ecx = MEM32(ecx + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0049C69Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049C69Cu); } /* indirect call */
    }

loc_0049C69F: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x0049C6A6u); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_0049C6A6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0049C6ADu); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_0049C6AD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0049C6B4u); RECOMP_ABI_CALL(0x005EDF80u, sub_005EDF80); /* call 0x005EDF80 */

loc_0049C6B4: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0049C6BBu); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_0049C6BB: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0049C6C7u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_0049C6C7: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0049C6D0u); RECOMP_ABI_CALL(0x005EE5A0u, sub_005EE5A0); /* call 0x005EE5A0 */

loc_0049C6D0: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x0049C6D7u); RECOMP_ABI_CALL(0x005EE4E0u, sub_005EE4E0); /* call 0x005EE4E0 */

loc_0049C6D7: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049C6DA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049C6E0
 * Original: 0x0049C6E0 - 0x0049C705 (37 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C6E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049C6E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0049C6EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049C6E8u); } /* indirect call */
    }

loc_0049C6EB: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049C6F7; /* je: equal / zero */

loc_0049C6F2: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0049C6F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049C6F4u); } /* indirect call */
    }

loc_0049C6F7: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0049C704; /* je: equal / zero */

loc_0049C6FF: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x18)); return; /* indirect tail jmp */

loc_0049C704: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0049C710
 * Original: 0x0049C710 - 0x0049C71A (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C710(void)
{

loc_0049C710: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x38) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049C720
 * Original: 0x0049C720 - 0x0049C72A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C720(void)
{

loc_0049C720: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x39) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049C730
 * Original: 0x0049C730 - 0x0049C734 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C730(void)
{

loc_0049C730: ;
    eax = MEM32(ecx + 0x3C);
    esp += 4; return; /* ret */

}

/**
 * sub_0049C740
 * Original: 0x0049C740 - 0x0049C77B (59 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049C740: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0049C763; /* je: equal / zero */

loc_0049C74B: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049C777; /* je: equal / zero */

loc_0049C752: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0049C757u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049C754u); } /* indirect call */
    }

loc_0049C757: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0049C75Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049C75Cu); } /* indirect call */
    }

loc_0049C75F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0049C763: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049C777; /* je: equal / zero */

loc_0049C76A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0049C76Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049C76Cu); } /* indirect call */
    }

loc_0049C76F: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0049C777u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049C774u); } /* indirect call */
    }

loc_0049C777: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049C780
 * Original: 0x0049C780 - 0x0049C7A1 (33 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C780(void)
{

loc_0049C780: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0049C78Eu); RECOMP_ABI_CALL(0x00406990u, sub_00406990); /* call 0x00406990 */

loc_0049C78E: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x640ED0);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0049C79Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049C799u); } /* indirect call */
    }

loc_0049C79C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049C7B0
 * Original: 0x0049C7B0 - 0x0049C804 (84 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C7B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049C7B0: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    esi = ecx;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0049C7D0u); RECOMP_ABI_CALL(0x0049C4F0u, sub_0049C4F0); /* call 0x0049C4F0 */

loc_0049C7D0: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEM32(esi) = 0x640ED8;
    MEM32(esi + 0x40) = 0;
    PUSH32(esp, 0x0049C7EBu); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_0049C7EB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x40) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0049C7FE; /* je: equal / zero */

loc_0049C7F5: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0049C7FEu); RECOMP_ABI_CALL(0x0049C720u, sub_0049C720); /* call 0x0049C720 */

loc_0049C7FE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0049C810
 * Original: 0x0049C810 - 0x0049C816 (6 bytes, 2 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C810(void)
{

loc_0049C810: ;
    eax = 0x640F08;
    esp += 4; return; /* ret */

}

/**
 * sub_0049C820
 * Original: 0x0049C820 - 0x0049C841 (33 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049C820: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x640ED8;
    if (CMP_EQ(_fa, _fb)) goto loc_0049C839; /* je: equal / zero */

loc_0049C830: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049C836u); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_0049C836: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049C839: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0049C5F0(); return; /* tail jmp 0x0049C5F0 */

}

/**
 * sub_0049C850
 * Original: 0x0049C850 - 0x0049C914 (196 bytes, 67 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C850(void)
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

loc_0049C850: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0049C85Fu); RECOMP_ABI_CALL(0x0049C690u, sub_0049C690); /* call 0x0049C690 */

loc_0049C85F: ;
    SET_LO8(eax, MEM8(esi + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049C90E; /* je: equal / zero */

loc_0049C86A: ;
    eax = MEM32(esi + 0x40);
    ecx = ZX16(MEM16(eax + 8));
    edx = ZX16(MEM16(eax + 0xA));
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    MEM32(esp + 0x18) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x18)); /* fmul dword ptr [esi + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x18)); /* fmul dword ptr [esi + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0049C8A6u); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_0049C8A6: ;
    edi = MEM32(esi + 0x40);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esi + 0x1C;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049C8BBu); RECOMP_ABI_CALL(0x0044F880u, sub_0044F880); /* call 0x0044F880 */

loc_0049C8BB: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    ecx = ZX16(MEM16(edi + 8));
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x14)); /* fadd dword ptr [esi + 0x14] */
    edx = ZX16(MEM16(edi + 0xA));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0049C8D9u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0049C8D9: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x10)); /* fadd dword ptr [esi + 0x10] */
    PUSH32(esp, 0x0049C8E8u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0049C8E8: ;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x38)); /* fsub dword ptr [esp + 0x38] */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049C8F5u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0049C8F5: ;
    fp_push(MEMF(esi + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x34)); /* fsub dword ptr [esp + 0x34] */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049C904u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0049C904: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049C90Au); RECOMP_ABI_CALL(0x005EF6F0u, sub_005EF6F0); /* call 0x005EF6F0 */

loc_0049C90A: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_0049C90E: ;
    POP32(esp, esi);
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
 * sub_0049C920
 * Original: 0x0049C920 - 0x0049C957 (55 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C920(void)
{

loc_0049C920: ;
    eax = MEM32(esp + 0x14);
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
    PUSH32(esp, 0x0049C943u); RECOMP_ABI_CALL(0x0049C4F0u, sub_0049C4F0); /* call 0x0049C4F0 */

loc_0049C943: ;
    ecx = esi + 0x40;
    MEM32(esi) = 0x640F18;
    PUSH32(esp, 0x0049C951u); RECOMP_ABI_CALL(0x005E1AF0u, sub_005E1AF0); /* call 0x005E1AF0 */

loc_0049C951: ;
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0049C960
 * Original: 0x0049C960 - 0x0049C966 (6 bytes, 2 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C960(void)
{

loc_0049C960: ;
    eax = 0x640F48;
    esp += 4; return; /* ret */

}

/**
 * sub_0049C970
 * Original: 0x0049C970 - 0x0049C9DA (106 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C970(void)
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

loc_0049C970: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0049C97Du); RECOMP_ABI_CALL(0x0049C690u, sub_0049C690); /* call 0x0049C690 */

loc_0049C97D: ;
    SET_LO8(ecx, MEM8(esi + 0x38));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049C9D6; /* je: equal / zero */

loc_0049C986: ;
    MEM32(esi + 0x4C) = eax;
    ecx = MEM32(0x674FB0);
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x50) = ecx;
    edx = MEM32(0x674FAC);
    MEM32(esi + 0x58) = edx;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x48) = eax;
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049C9ADu); RECOMP_ABI_CALL(0x0044F880u, sub_0044F880); /* call 0x0044F880 */

loc_0049C9AD: ;
    MEM32(esi + 0x78) = eax;
    ecx = MEM32(esi + 0x40);
    ecx = ecx & 0xFFFFFFFAu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x40) = ecx;
    fp_push(MEMF(esi + 0x18)); /* fld float */
    edx = MEM32(esi + 0x18);
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x70) = edx;
    eax = MEM32(esi + 0x40);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFF7Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x40) = eax;

loc_0049C9D6: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0049C9E0
 * Original: 0x0049C9E0 - 0x0049CA09 (41 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C9E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049C9E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0049C9EEu); RECOMP_ABI_CALL(0x0049C780u, sub_0049C780); /* call 0x0049C780 */

loc_0049C9EE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x640F58);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x0049CA04u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049CA04: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049CA10
 * Original: 0x0049CA10 - 0x0049CA7F (111 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049CA10(void)
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

loc_0049CA10: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0049CA20u); RECOMP_ABI_CALL(0x0049C970u, sub_0049C970); /* call 0x0049C970 */

loc_0049CA20: ;
    SET_LO8(eax, MEM8(esi + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049CA78; /* je: equal / zero */

loc_0049CA27: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = esi + 0x40;
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    ebx = esi + 0x80;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x0049CA44u); RECOMP_ABI_CALL(0x005E2700u, sub_005E2700); /* call 0x005E2700 */

loc_0049CA44: ;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ebx;
    fp_top() = RECOMP_FP_PC(MEMF(esi + 0x14) - fp_top()); /* fsubr dword ptr [esi + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 0x28)); /* fiadd dword ptr [esp + 0x28] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    fp_top() = RECOMP_FP_PC(MEMF(esi + 0x10) - fp_top()); /* fsubr dword ptr [esi + 0x10] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0049CA76u); RECOMP_ABI_CALL(0x005E26A0u, sub_005E26A0); /* call 0x005E26A0 */

loc_0049CA76: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0049CA78: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0049CA80
 * Original: 0x0049CA80 - 0x0049CB21 (161 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049CA80(void)
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

loc_0049CA80: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0049CA8Eu); RECOMP_ABI_CALL(0x0049C970u, sub_0049C970); /* call 0x0049C970 */

loc_0049CA8E: ;
    SET_LO8(eax, MEM8(esi + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049CB1C; /* je: equal / zero */

loc_0049CA99: ;
    ecx = MEM32(esi + 0x80);
    PUSH32(esp, edi);
    edi = esi + 0x40;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x84);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049CAC4u); RECOMP_ABI_CALL(0x005E0E00u, sub_005E0E00); /* call 0x005E0E00 */

loc_0049CAC4: ;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    ecx = MEM32(edi);
    edx = MEM32(esp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ecx & 0xFFFFFFF9u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi) = ecx;
    fp_top() = RECOMP_FP_PC(MEMF(esi + 0x14) - fp_top()); /* fsubr dword ptr [esi + 0x14] */
    eax = MEM32(esi + 0x80);
    ecx = MEM32(esi + 0x84);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    MEM32(esi + 0x58) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    fp_top() = RECOMP_FP_PC(MEMF(esi + 0x10) - fp_top()); /* fsubr dword ptr [esi + 0x10] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0049CB1Bu); RECOMP_ABI_CALL(0x005DF5B0u, sub_005DF5B0); /* call 0x005DF5B0 */

loc_0049CB1B: ;
    POP32(esp, edi);

loc_0049CB1C: ;
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
 * sub_0049CB30
 * Original: 0x0049CB30 - 0x0049CB98 (104 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0049CB30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049CB30: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp;
    edi = ecx;
    ecx = eax + 1;
    edi = edi;

loc_0049CB40: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049CB40; /* jne: not equal / not zero */

loc_0049CB47: ;
    esi = MEM32(edi + 0x80);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0049CB86; /* jle: less or equal (signed <=) */

loc_0049CB57: ;
    goto loc_0049CB60;

    /* nop */

loc_0049CB60: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(eax + ebp));
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(esi + eax * 2) = LO16(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0049CB60; /* jl: less (signed <) */

loc_0049CB74: ;
    eax = MEM32(edi + 0x80);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(eax + edx * 2) = 0;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0049CB86: ;
    ecx = MEM32(edi + 0x80);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(ecx + edx * 2) = 0;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049CBA0
 * Original: 0x0049CBA0 - 0x0049CBB7 (23 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049CBA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049CBA0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x80);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0049CBB1u); RECOMP_ABI_CALL(0x00619BC5u, sub_00619BC5); /* call 0x00619BC5 */

loc_0049CBB1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049CBC0
 * Original: 0x0049CBC0 - 0x0049CBCF (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049CBC0(void)
{

loc_0049CBC0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(ecx + 4) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0049CBCCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049CBC9u); } /* indirect call */
    }

loc_0049CBCC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049CBD0
 * Original: 0x0049CBD0 - 0x0049CBEC (28 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0049CBD0(void)
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

loc_0049CBD0: ;
    eax = MEM32(0x6C3894);
    SET_LO8(edx, MEM8(eax + 9));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049CBEB; /* jne: not equal / not zero */

loc_0049CBDC: ;
    edx = MEM32(0x6C38A4);
    fp_push(MEMF(edx + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_0049CBEB: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0049CBF0
 * Original: 0x0049CBF0 - 0x0049CC9C (172 bytes, 59 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049CBF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049CBF0: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xB4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x640F80);
    eax = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0049CC17u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0049CC17: ;
    ebx = MEM32(esp + 0xC0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 6);
    ecx = ebx;
    PUSH32(esp, 0x0049CC34u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049CC34: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x640F74);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0049CC49u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0049CC49: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 6);
    ecx = ebx;
    PUSH32(esp, 0x0049CC62u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049CC62: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x640F64);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0049CC77u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0049CC77: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    ecx = ebx;
    PUSH32(esp, 0x0049CC90u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049CC90: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0049CCA0
 * Original: 0x0049CCA0 - 0x0049CCAA (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049CCA0(void)
{

loc_0049CCA0: ;
    PUSH32(esp, 0x0049CCA5u); RECOMP_ABI_CALL(0x00573C70u, sub_00573C70); /* call 0x00573C70 */

loc_0049CCA5: ;
    MEM8(ecx + 0x48) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0049CCB0
 * Original: 0x0049CCB0 - 0x0049CEB0 (512 bytes, 175 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0049CCB0(void)
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

loc_0049CCB0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0049CCBBu); RECOMP_ABI_CALL(0x0049CBD0u, sub_0049CBD0); /* call 0x0049CBD0 */

loc_0049CCBB: ;
    fp_push(MEMF(esi + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x40)); /* fadd dword ptr [esi + 0x40] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0049CCDA; /* jp: parity */

loc_0049CCCB: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0049CCD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049CCD2u); } /* indirect call */
    }

loc_0049CCD5: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0049CCDA: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    PUSH32(esp, ebp);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x3C)); /* fsub dword ptr [esi + 0x3c] */
    ebp = MEM32(0x8583A0);
    _fb = (uint32_t)(0x164) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x164;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63813C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63813c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0049CD1A; /* jne: not equal / not zero */

loc_0049CD06: ;
    SET_LO8(eax, MEM8(esi + 0x48));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049CD1A; /* jne: not equal / not zero */

loc_0049CD0D: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0049CD16u); RECOMP_ABI_CALL(0x0049C740u, sub_0049C740); /* call 0x0049C740 */

loc_0049CD16: ;
    MEM8(esi + 0x48) = 1;

loc_0049CD1A: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0049CDDD; /* jne: not equal / not zero */

loc_0049CD2F: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0049CD50; /* jp: parity */

loc_0049CD3D: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_push(MEMF(esi + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 0x14)); /* fdiv dword ptr [esi + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    goto loc_0049CD85;

loc_0049CD50: ;
    fp_push(MEMF(esi + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x20)); /* fsub dword ptr [esi + 0x20] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0049CD80; /* jne: not equal / not zero */

loc_0049CD63: ;
    fp_push(MEMF(esi + 0x18)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); fp_pop(); /* fsubrp st(2) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 0x20)); /* fdiv dword ptr [esi + 0x20] */
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_pop(); /* fstp st(0) */
    goto loc_0049CD85;

loc_0049CD80: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x10)); /* fld float */

loc_0049CD85: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x2C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x2c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0049CDA6; /* jp: parity */

loc_0049CD93: ;
    fp_push(MEMF(esi + 0x24)); /* fld float */
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 0x2C)); /* fdiv dword ptr [esi + 0x2c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    goto loc_0049CDE9;

loc_0049CDA6: ;
    fp_push(MEMF(esi + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x38)); /* fsub dword ptr [esi + 0x38] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0049CDD6; /* jne: not equal / not zero */

loc_0049CDB9: ;
    fp_push(MEMF(esi + 0x30)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); fp_pop(); /* fsubrp st(2) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 0x38)); /* fdiv dword ptr [esi + 0x38] */
    fp_push(MEMF(esi + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_pop(); /* fstp st(0) */
    goto loc_0049CDE9;

loc_0049CDD6: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x28)); /* fld float */
    goto loc_0049CDE9;

loc_0049CDDD: ;
    fp_push(MEMF(0x65E384)); /* fld float */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_0049CDE9: ;
    fp_push(MEMF(edi + 0x20)); /* fld float */
    ecx = MEM32(edi + 0x1C);
    edx = MEM32(esi + 4);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x24)); /* fld float */
    eax = ecx;
    MEM32(edx) = eax;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(edx + 4) = ecx;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(edx + 8) = eax;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x1C);
    MEM32(edx + 0xC) = ecx;
    edx = MEM32(esi + 4);
    MEMF(edx + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(0x6C3304);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0049CE53; /* jle: less or equal (signed <=) */

loc_0049CE33: ;
    SET_LO8(eax, MEM8(0x6C3421));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049CE53; /* jne: not equal / not zero */

loc_0049CE3C: ;
    fp_push(MEMF(esi + 0x44)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x640F90)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x640f90] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0049CE53; /* jp: parity */

loc_0049CE4C: ;
    MEM32(esi + 0x44) = 0x3E8B4396;

loc_0049CE53: ;
    eax = MEM32(ebp + 0xC);
    fp_push((double)SMEM32(ebp + 0xC)); /* fild */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0049CE63; /* jge: greater or equal (signed >=) */

loc_0049CE5D: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_0049CE63: ;
    ecx = MEM32(ebp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x44)); /* fmul dword ptr [esi + 0x44] */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    fp_push((double)SMEM32(ebp + 4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0049CE76; /* jge: greater or equal (signed >=) */

loc_0049CE70: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_0049CE76: ;
    edx = MEM32(ebp + 8);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    esi = MEM32(esi + 4);
    if (CMP_GE(_fas, _fbs)) goto loc_0049CE8B; /* jge: greater or equal (signed >=) */

loc_0049CE85: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_0049CE8B: ;
    eax = MEM32(ebp);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_push((double)SMEM32(ebp)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0049CEA1; /* jge: greater or equal (signed >=) */

loc_0049CE9B: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_0049CEA1: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    POP32(esp, edi);
    POP32(esp, ebp);
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
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
 * sub_0049CEB0
 * Original: 0x0049CEB0 - 0x0049CFF7 (327 bytes, 108 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049CEB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049CEB0: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xB4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x640FD0);
    eax = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0049CED7u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0049CED7: ;
    ebx = MEM32(esp + 0xC0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x3C;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 6);
    ecx = ebx;
    PUSH32(esp, 0x0049CEF7u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049CEF7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x640F64);
    eax = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049CF0Cu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0049CF0C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 6);
    ecx = ebx;
    PUSH32(esp, 0x0049CF25u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049CF25: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x640FC4);
    eax = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049CF3Au); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0049CF3A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x44;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 6);
    ecx = ebx;
    PUSH32(esp, 0x0049CF53u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049CF53: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x640FB8);
    eax = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049CF68u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0049CF68: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = esi + 0xC;
    PUSH32(esp, 0x0049CF79u); RECOMP_ABI_CALL(0x0049CBF0u, sub_0049CBF0); /* call 0x0049CBF0 */

loc_0049CF79: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x640FAC);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0049CF8Eu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0049CF8E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi + 0x18;
    PUSH32(esp, 0x0049CF9Fu); RECOMP_ABI_CALL(0x0049CBF0u, sub_0049CBF0); /* call 0x0049CBF0 */

loc_0049CF9F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x640FA0);
    ecx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0049CFB4u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0049CFB4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ecx = esi + 0x24;
    PUSH32(esp, 0x0049CFC5u); RECOMP_ABI_CALL(0x0049CBF0u, sub_0049CBF0); /* call 0x0049CBF0 */

loc_0049CFC5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x640F94);
    eax = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049CFDAu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0049CFDA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = esi + 0x30;
    PUSH32(esp, 0x0049CFEBu); RECOMP_ABI_CALL(0x0049CBF0u, sub_0049CBF0); /* call 0x0049CBF0 */

loc_0049CFEB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0049D000
 * Original: 0x0049D000 - 0x0049D00D (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049D000(void)
{

loc_0049D000: ;
    PUSH32(esp, 0x0049D005u); RECOMP_ABI_CALL(0x00573C70u, sub_00573C70); /* call 0x00573C70 */

loc_0049D005: ;
    MEM32(ecx + 0x4C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0049D010
 * Original: 0x0049D010 - 0x0049D26A (602 bytes, 204 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049D010(void)
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

loc_0049D010: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0049D01Bu); RECOMP_ABI_CALL(0x0049CBD0u, sub_0049CBD0); /* call 0x0049CBD0 */

loc_0049D01B: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x3C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x3c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0049D037; /* jne: not equal / not zero */

loc_0049D028: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0049D032u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049D02Fu); } /* indirect call */
    }

loc_0049D032: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0049D037: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 4);
    eax = MEM32(ebx + 0x2C);
    PUSH32(esp, edi);
    edi = MEM32(0x8583A0);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x164) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x164;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0049D051u); RECOMP_ABI_CALL(0x004690F0u, sub_004690F0); /* call 0x004690F0 */

loc_0049D051: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x14] */
    ecx = MEM32(eax + 0x50);
    ecx = MEM32(ecx + 0x34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0049D07D; /* jp: parity */

loc_0049D067: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_push(MEMF(esi + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 0x14)); /* fdiv dword ptr [esi + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0049D0B0;

loc_0049D07D: ;
    fp_push(MEMF(esi + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x20)); /* fsub dword ptr [esi + 0x20] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esi + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0049D0A9; /* jp: parity */

loc_0049D08D: ;
    fp_push(MEMF(esi + 0x18)); /* fld float */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 0x20)); /* fdiv dword ptr [esi + 0x20] */
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    goto loc_0049D0B0;

loc_0049D0A9: ;
    edx = MEM32(esi + 0x10);
    MEM32(esp + 0x14) = edx;

loc_0049D0B0: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x2C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x2c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0049D0D5; /* jp: parity */

loc_0049D0BF: ;
    fp_push(MEMF(esi + 0x24)); /* fld float */
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 0x2C)); /* fdiv dword ptr [esi + 0x2c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0049D108;

loc_0049D0D5: ;
    fp_push(MEMF(esi + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x38)); /* fsub dword ptr [esi + 0x38] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esi + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0049D101; /* jp: parity */

loc_0049D0E5: ;
    fp_push(MEMF(esi + 0x30)); /* fld float */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 0x38)); /* fdiv dword ptr [esi + 0x38] */
    fp_push(MEMF(esi + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    goto loc_0049D108;

loc_0049D101: ;
    eax = MEM32(esi + 0x28);
    MEM32(esp + 0x18) = eax;

loc_0049D108: ;
    edx = MEM32(edi + 8);
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push((double)SMEM32(edi + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0049D11A; /* jge: greater or equal (signed >=) */

loc_0049D114: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_0049D11A: ;
    eax = MEM32(edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_push((double)SMEM32(edi)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0049D12E; /* jge: greater or equal (signed >=) */

loc_0049D128: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_0049D12E: ;
    edx = MEM32(edi + 0xC);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(edi + 0xC)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0049D144; /* jge: greater or equal (signed >=) */

loc_0049D13E: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_0049D144: ;
    eax = MEM32(edi + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x630DB8)); /* fmul dword ptr [0x630db8] */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_push((double)SMEM32(edi + 4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0049D15A; /* jge: greater or equal (signed >=) */

loc_0049D154: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_0049D15A: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    edi = 1;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x40)); /* fsub dword ptr [esi + 0x40] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esi + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0049D1E3; /* jp: parity */

loc_0049D175: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    edx = esp + 0x24;
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 0x40)); /* fdiv dword ptr [esi + 0x40] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0049D192u); RECOMP_ABI_CALL(0x0044D490u, sub_0044D490); /* call 0x0044D490 */

loc_0049D192: ;
    _fa = (uint32_t)(MEM32(esi + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x4C), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049D1A7; /* jne: not equal / not zero */

loc_0049D197: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0049D1A0u); RECOMP_ABI_CALL(0x0049C740u, sub_0049C740); /* call 0x0049C740 */

loc_0049D1A0: ;
    MEM32(esi + 0x4C) = 2;

loc_0049D1A7: ;
    edx = MEM32(esp + 0x20);
    ecx = MEM32(esi + 0x44);
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi + 0x48);
    MEM32(esp + 0x20) = ecx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    goto loc_0049D1ED;

loc_0049D1E3: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */

loc_0049D1ED: ;
    fp_push(MEMF(ebx + 0x20)); /* fld float */
    edx = MEM32(esi + 4);
    eax = MEM32(ebx + 0x1C);
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0x24)); /* fld float */
    MEM32(edx) = eax;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x34);
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x30);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(edx + 0xC) = ecx;
    edx = MEM32(esi + 4);
    MEM32(edx + 0x18) = eax;
    eax = MEM32(esi + 4);
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0049D263; /* jne: not equal / not zero */

loc_0049D24F: ;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049D263; /* jne: not equal / not zero */

loc_0049D256: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0049D260u); RECOMP_ABI_CALL(0x0049C740u, sub_0049C740); /* call 0x0049C740 */

loc_0049D260: ;
    MEM32(esi + 0x4C) = edi;

loc_0049D263: ;
    POP32(esp, edi);
    POP32(esp, ebx);
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
 * sub_0049D270
 * Original: 0x0049D270 - 0x0049D3E5 (373 bytes, 124 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049D270(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049D270: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xB4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x640F64);
    eax = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0049D297u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0049D297: ;
    ebx = MEM32(esp + 0xC0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x3C;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 6);
    ecx = ebx;
    PUSH32(esp, 0x0049D2B7u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049D2B7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x641004);
    eax = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049D2CCu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0049D2CC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 6);
    ecx = ebx;
    PUSH32(esp, 0x0049D2E5u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049D2E5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x640FB8);
    eax = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049D2FAu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0049D2FA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = esi + 0xC;
    PUSH32(esp, 0x0049D30Bu); RECOMP_ABI_CALL(0x0049CBF0u, sub_0049CBF0); /* call 0x0049CBF0 */

loc_0049D30B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x640FAC);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0049D320u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0049D320: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi + 0x18;
    PUSH32(esp, 0x0049D331u); RECOMP_ABI_CALL(0x0049CBF0u, sub_0049CBF0); /* call 0x0049CBF0 */

loc_0049D331: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x640FA0);
    ecx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0049D346u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0049D346: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ecx = esi + 0x24;
    PUSH32(esp, 0x0049D357u); RECOMP_ABI_CALL(0x0049CBF0u, sub_0049CBF0); /* call 0x0049CBF0 */

loc_0049D357: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x640F94);
    eax = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049D36Cu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0049D36C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = esi + 0x30;
    PUSH32(esp, 0x0049D37Du); RECOMP_ABI_CALL(0x0049CBF0u, sub_0049CBF0); /* call 0x0049CBF0 */

loc_0049D37D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x640FF4);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0049D392u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0049D392: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x44;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = ebx;
    PUSH32(esp, 0x0049D3ABu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049D3AB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x640FE4);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0049D3C0u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0049D3C0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x48;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    ecx = ebx;
    PUSH32(esp, 0x0049D3D9u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049D3D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0049D3F0
 * Original: 0x0049D3F0 - 0x0049D414 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049D3F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049D3F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x640F18;
    PUSH32(esp, 0x0049D3FEu); RECOMP_ABI_CALL(0x0049C5F0u, sub_0049C5F0); /* call 0x0049C5F0 */

loc_0049D3FE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0049D40E; /* je: equal / zero */

loc_0049D405: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0049D40Bu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0049D40B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049D40E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049D420
 * Original: 0x0049D420 - 0x0049D43E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049D420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049D420: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0049D428u); RECOMP_ABI_CALL(0x0049C3D0u, sub_0049C3D0); /* call 0x0049C3D0 */

loc_0049D428: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0049D438; /* je: equal / zero */

loc_0049D42F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0049D435u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0049D435: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049D438: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049D440
 * Original: 0x0049D440 - 0x0049D455 (21 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049D440(void)
{

loc_0049D440: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + edx * 4 + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049D452u); RECOMP_ABI_CALL(0x0049CB30u, sub_0049CB30); /* call 0x0049CB30 */

loc_0049D452: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0049D460
 * Original: 0x0049D460 - 0x0049D475 (21 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049D460(void)
{

loc_0049D460: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + edx * 4 + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049D472u); RECOMP_ABI_CALL(0x0049CBA0u, sub_0049CBA0); /* call 0x0049CBA0 */

loc_0049D472: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0049D480
 * Original: 0x0049D480 - 0x0049D49E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049D480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049D480: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0049D488u); RECOMP_ABI_CALL(0x0049C5F0u, sub_0049C5F0); /* call 0x0049C5F0 */

loc_0049D488: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0049D498; /* je: equal / zero */

loc_0049D48F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0049D495u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0049D495: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049D498: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049D4A0
 * Original: 0x0049D4A0 - 0x0049D4BE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049D4A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049D4A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0049D4A8u); RECOMP_ABI_CALL(0x0049C820u, sub_0049C820); /* call 0x0049C820 */

loc_0049D4A8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0049D4B8; /* je: equal / zero */

loc_0049D4AF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0049D4B5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0049D4B5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049D4B8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049D4C0
 * Original: 0x0049D4C0 - 0x0049D520 (96 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049D4C0(void)
{

loc_0049D4C0: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    esi = ecx;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0049D4E1u); RECOMP_ABI_CALL(0x0049C920u, sub_0049C920); /* call 0x0049C920 */

loc_0049D4E1: ;
    edi = esi + 0x80;
    ecx = edi;
    MEM32(esi) = 0x64101C;
    PUSH32(esp, 0x0049D4F4u); RECOMP_ABI_CALL(0x005E2670u, sub_005E2670); /* call 0x005E2670 */

loc_0049D4F4: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0049D500u); RECOMP_ABI_CALL(0x005E2680u, sub_005E2680); /* call 0x005E2680 */

loc_0049D500: ;
    ecx = MEM32(edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0049D509u); RECOMP_ABI_CALL(0x005E14B0u, sub_005E14B0); /* call 0x005E14B0 */

loc_0049D509: ;
    ecx = eax;
    PUSH32(esp, 0x0049D510u); RECOMP_ABI_CALL(0x005E0520u, sub_005E0520); /* call 0x005E0520 */

loc_0049D510: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0049D519u); RECOMP_ABI_CALL(0x0049C720u, sub_0049C720); /* call 0x0049C720 */

loc_0049D519: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0049D520
 * Original: 0x0049D520 - 0x0049D526 (6 bytes, 2 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049D520(void)
{

loc_0049D520: ;
    eax = 0x64104C;
    esp += 4; return; /* ret */

}

/**
 * sub_0049D530
 * Original: 0x0049D530 - 0x0049D53B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049D530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049D530: ;
    MEM32(ecx) = 0x640F18;
    g_seh_ebp = ebp; sub_0049C5F0(); return; /* tail jmp 0x0049C5F0 */

}

/**
 * sub_0049D540
 * Original: 0x0049D540 - 0x0049D5D8 (152 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049D540(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049D540: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    esi = ecx;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0049D563u); RECOMP_ABI_CALL(0x0049C920u, sub_0049C920); /* call 0x0049C920 */

loc_0049D563: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0x244);
    eax = edx + edx;
    PUSH32(esp, 0x640E88);
    PUSH32(esp, eax);
    MEM32(esi) = 0x641064;
    MEM32(esi + 0x80) = 0;
    MEM32(esi + 0x84) = 0;
    PUSH32(esp, 0x0049D594u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049D594: ;
    edx = MEM32(esp + 0x1C);
    MEM32(esi + 0x80) = eax;
    MEM16(eax) = 0x58;
    ecx = MEM32(esi + 0x80);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    MEM16(ecx + 2) = 0;
    PUSH32(esp, 0x0049D5B7u); RECOMP_ABI_CALL(0x005E11E0u, sub_005E11E0); /* call 0x005E11E0 */

loc_0049D5B7: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = eax;
    MEM32(esi + 0x84) = eax;
    PUSH32(esp, 0x0049D5C9u); RECOMP_ABI_CALL(0x005E0520u, sub_005E0520); /* call 0x005E0520 */

loc_0049D5C9: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0049D5D2u); RECOMP_ABI_CALL(0x0049C720u, sub_0049C720); /* call 0x0049C720 */

loc_0049D5D2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0049D5E0
 * Original: 0x0049D5E0 - 0x0049D5E6 (6 bytes, 2 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049D5E0(void)
{

loc_0049D5E0: ;
    eax = 0x641094;
    esp += 4; return; /* ret */

}

/**
 * sub_0049D5F0
 * Original: 0x0049D5F0 - 0x0049D622 (50 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049D5F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049D5F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x84);
    PUSH32(esp, eax);
    MEM32(esi) = 0x641064;
    PUSH32(esp, 0x0049D605u); RECOMP_ABI_CALL(0x005E1010u, sub_005E1010); /* call 0x005E1010 */

loc_0049D605: ;
    ecx = MEM32(esi + 0x80);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0049D611u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0049D611: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0x640F18;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0049C5F0(); return; /* tail jmp 0x0049C5F0 */

}

/**
 * sub_0049D630
 * Original: 0x0049D630 - 0x0049D67D (77 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049D630(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049D630: ;
    eax = ecx;
    MEM32(eax) = 0x6410AC;
    ecx = 0x3F800000;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    edx = 0x3DCCCCCD;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x24) = edx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x30) = edx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x40) = 0x40400000;
    MEM32(eax + 0x44) = 0x3F000000;
    MEM8(eax + 0x48) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0049D680
 * Original: 0x0049D680 - 0x0049D6CC (76 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049D680(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049D680: ;
    eax = ecx;
    MEM32(eax) = 0x6410C0;
    ecx = 0x3F800000;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    edx = 0x3DCCCCCD;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x24) = edx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x40) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x3C) = 0x40400000;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0049D6D0
 * Original: 0x0049D6D0 - 0x0049D6F4 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049D6D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049D6D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x640E44;
    PUSH32(esp, 0x0049D6DEu); RECOMP_ABI_CALL(0x00614360u, sub_00614360); /* call 0x00614360 */

loc_0049D6DE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0049D6EE; /* je: equal / zero */

loc_0049D6E5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0049D6EBu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0049D6EB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049D6EE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049D700
 * Original: 0x0049D700 - 0x0049E0F2 (2546 bytes, 860 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049D700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049D700: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x641350);
    ebx = ecx;
    PUSH32(esp, 0x0049D70Fu); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_0049D70F: ;
    eax = MEM32(0x6C2C5C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0049D73D; /* ja: above (unsigned >) */

loc_0049D71A: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x49E0F4); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0049D721u) goto loc_0049D721;
    if (_jt == 0x0049D728u) goto loc_0049D728;
    if (_jt == 0x0049D72Fu) goto loc_0049D72F;
    if (_jt == 0x0049D736u) goto loc_0049D736;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0049D721: ;
    edi = 0x641344;
    goto loc_0049D742;

loc_0049D728: ;
    edi = 0x641338;
    goto loc_0049D742;

loc_0049D72F: ;
    edi = 0x64132C;
    goto loc_0049D742;

loc_0049D736: ;
    edi = 0x641320;
    goto loc_0049D742;

loc_0049D73D: ;
    edi = 0x641318;

loc_0049D742: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x641318);
    PUSH32(esp, 0x0049D750u); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_0049D750: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049D760; /* je: equal / zero */

loc_0049D757: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049D75Du); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_0049D75D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049D760: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x641344);
    PUSH32(esp, 0x0049D76Eu); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_0049D76E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049D77E; /* je: equal / zero */

loc_0049D775: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049D77Bu); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_0049D77B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049D77E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x641338);
    PUSH32(esp, 0x0049D78Cu); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_0049D78C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049D79C; /* je: equal / zero */

loc_0049D793: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049D799u); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_0049D799: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049D79C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x64132C);
    PUSH32(esp, 0x0049D7AAu); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_0049D7AA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049D7BA; /* je: equal / zero */

loc_0049D7B1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049D7B7u); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_0049D7B7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049D7BA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x641320);
    PUSH32(esp, 0x0049D7C8u); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_0049D7C8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049D7D8; /* je: equal / zero */

loc_0049D7CF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049D7D5u); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_0049D7D5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049D7D8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x52);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x0049D7E7u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049D7E7: ;
    ebp = MEM32(esp + 0x20);
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049D82E; /* je: equal / zero */

loc_0049D7F4: ;
    PUSH32(esp, 0x52);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x0049D802u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049D802: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049D812; /* je: equal / zero */

loc_0049D809: ;
    ecx = eax;
    PUSH32(esp, 0x0049D810u); RECOMP_ABI_CALL(0x0049D630u, sub_0049D630); /* call 0x0049D630 */

loc_0049D810: ;
    goto loc_0049D814;

loc_0049D812: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049D814: ;
    PUSH32(esp, 0x63E8C8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x641308);
    PUSH32(esp, 0x641300);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0049D82Cu); RECOMP_ABI_CALL(0x0049C7B0u, sub_0049C7B0); /* call 0x0049C7B0 */

loc_0049D82C: ;
    goto loc_0049D830;

loc_0049D82E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049D830: ;
    PUSH32(esp, 0x53);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x44);
    MEM32(ebx + 0xC) = eax;
    PUSH32(esp, 0x0049D841u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049D841: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049D884; /* je: equal / zero */

loc_0049D84A: ;
    PUSH32(esp, 0x53);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x0049D858u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049D858: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049D868; /* je: equal / zero */

loc_0049D85F: ;
    ecx = eax;
    PUSH32(esp, 0x0049D866u); RECOMP_ABI_CALL(0x0049D630u, sub_0049D630); /* call 0x0049D630 */

loc_0049D866: ;
    goto loc_0049D86A;

loc_0049D868: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049D86A: ;
    PUSH32(esp, 0x63E8C8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6412F0);
    PUSH32(esp, 0x6412E8);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0049D882u); RECOMP_ABI_CALL(0x0049C7B0u, sub_0049C7B0); /* call 0x0049C7B0 */

loc_0049D882: ;
    goto loc_0049D886;

loc_0049D884: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049D886: ;
    PUSH32(esp, 0x54);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x44);
    MEM32(ebx + 0x10) = eax;
    PUSH32(esp, 0x0049D897u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049D897: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049D8DA; /* je: equal / zero */

loc_0049D8A0: ;
    PUSH32(esp, 0x54);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x0049D8AEu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049D8AE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049D8BE; /* je: equal / zero */

loc_0049D8B5: ;
    ecx = eax;
    PUSH32(esp, 0x0049D8BCu); RECOMP_ABI_CALL(0x0049D630u, sub_0049D630); /* call 0x0049D630 */

loc_0049D8BC: ;
    goto loc_0049D8C0;

loc_0049D8BE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049D8C0: ;
    PUSH32(esp, 0x63E8C8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6412D8);
    PUSH32(esp, 0x6412D0);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0049D8D8u); RECOMP_ABI_CALL(0x0049C7B0u, sub_0049C7B0); /* call 0x0049C7B0 */

loc_0049D8D8: ;
    goto loc_0049D8DC;

loc_0049D8DA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049D8DC: ;
    PUSH32(esp, 0x56);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x44);
    MEM32(ebx + 0x14) = eax;
    PUSH32(esp, 0x0049D8EDu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049D8ED: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049D92C; /* je: equal / zero */

loc_0049D8F6: ;
    PUSH32(esp, 0x56);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x0049D904u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049D904: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049D914; /* je: equal / zero */

loc_0049D90B: ;
    ecx = eax;
    PUSH32(esp, 0x0049D912u); RECOMP_ABI_CALL(0x0049D630u, sub_0049D630); /* call 0x0049D630 */

loc_0049D912: ;
    goto loc_0049D916;

loc_0049D914: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049D916: ;
    PUSH32(esp, 0x6412C8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6412B8);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0049D92Au); RECOMP_ABI_CALL(0x0049C7B0u, sub_0049C7B0); /* call 0x0049C7B0 */

loc_0049D92A: ;
    goto loc_0049D92E;

loc_0049D92C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049D92E: ;
    PUSH32(esp, 0x58);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x84);
    MEM32(ebx + 0x18) = eax;
    PUSH32(esp, 0x0049D942u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049D942: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049D985; /* je: equal / zero */

loc_0049D94B: ;
    PUSH32(esp, 0x58);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x0049D959u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049D959: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049D969; /* je: equal / zero */

loc_0049D960: ;
    ecx = eax;
    PUSH32(esp, 0x0049D967u); RECOMP_ABI_CALL(0x0049D630u, sub_0049D630); /* call 0x0049D630 */

loc_0049D967: ;
    goto loc_0049D96B;

loc_0049D969: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049D96B: ;
    PUSH32(esp, 0x6412A0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x641288);
    PUSH32(esp, 0x641278);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0049D983u); RECOMP_ABI_CALL(0x0049D4C0u, sub_0049D4C0); /* call 0x0049D4C0 */

loc_0049D983: ;
    goto loc_0049D987;

loc_0049D985: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049D987: ;
    PUSH32(esp, 0x59);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x84);
    MEM32(ebx + 0x1C) = eax;
    PUSH32(esp, 0x0049D99Bu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049D99B: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049D9DE; /* je: equal / zero */

loc_0049D9A4: ;
    PUSH32(esp, 0x59);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x0049D9B2u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049D9B2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049D9C2; /* je: equal / zero */

loc_0049D9B9: ;
    ecx = eax;
    PUSH32(esp, 0x0049D9C0u); RECOMP_ABI_CALL(0x0049D630u, sub_0049D630); /* call 0x0049D630 */

loc_0049D9C0: ;
    goto loc_0049D9C4;

loc_0049D9C2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049D9C4: ;
    PUSH32(esp, 0x641264);
    PUSH32(esp, eax);
    PUSH32(esp, 0x641288);
    PUSH32(esp, 0x641278);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0049D9DCu); RECOMP_ABI_CALL(0x0049D4C0u, sub_0049D4C0); /* call 0x0049D4C0 */

loc_0049D9DC: ;
    goto loc_0049D9E0;

loc_0049D9DE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049D9E0: ;
    PUSH32(esp, 0x5A);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x84);
    MEM32(ebx + 0x20) = eax;
    PUSH32(esp, 0x0049D9F4u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049D9F4: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049DA37; /* je: equal / zero */

loc_0049D9FD: ;
    PUSH32(esp, 0x5A);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x0049DA0Bu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049DA0B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049DA1B; /* je: equal / zero */

loc_0049DA12: ;
    ecx = eax;
    PUSH32(esp, 0x0049DA19u); RECOMP_ABI_CALL(0x0049D630u, sub_0049D630); /* call 0x0049D630 */

loc_0049DA19: ;
    goto loc_0049DA1D;

loc_0049DA1B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049DA1D: ;
    PUSH32(esp, 0x641264);
    PUSH32(esp, eax);
    PUSH32(esp, 0x641288);
    PUSH32(esp, 0x641254);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0049DA35u); RECOMP_ABI_CALL(0x0049D4C0u, sub_0049D4C0); /* call 0x0049D4C0 */

loc_0049DA35: ;
    goto loc_0049DA39;

loc_0049DA37: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049DA39: ;
    PUSH32(esp, 0x5B);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x88);
    MEM32(ebx + 0x24) = eax;
    PUSH32(esp, 0x0049DA4Du); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049DA4D: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049DA97; /* je: equal / zero */

loc_0049DA56: ;
    PUSH32(esp, 0x5B);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x0049DA64u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049DA64: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049DA74; /* je: equal / zero */

loc_0049DA6B: ;
    ecx = eax;
    PUSH32(esp, 0x0049DA72u); RECOMP_ABI_CALL(0x0049D680u, sub_0049D680); /* call 0x0049D680 */

loc_0049DA72: ;
    goto loc_0049DA76;

loc_0049DA74: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049DA76: ;
    PUSH32(esp, 0x641238);
    PUSH32(esp, 0x6412A0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x641224);
    PUSH32(esp, 0x62D544);
    PUSH32(esp, 0xA);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0049DA95u); RECOMP_ABI_CALL(0x0049D540u, sub_0049D540); /* call 0x0049D540 */

loc_0049DA95: ;
    goto loc_0049DA99;

loc_0049DA97: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049DA99: ;
    PUSH32(esp, 0x5D);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x88);
    MEM32(ebx + 0x28) = eax;
    PUSH32(esp, 0x0049DAADu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049DAAD: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049DAF4; /* je: equal / zero */

loc_0049DAB6: ;
    PUSH32(esp, 0x5D);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x0049DAC4u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049DAC4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049DAD4; /* je: equal / zero */

loc_0049DACB: ;
    ecx = eax;
    PUSH32(esp, 0x0049DAD2u); RECOMP_ABI_CALL(0x0049D630u, sub_0049D630); /* call 0x0049D630 */

loc_0049DAD2: ;
    goto loc_0049DAD6;

loc_0049DAD4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049DAD6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x641218);
    PUSH32(esp, eax);
    PUSH32(esp, 0x641200);
    PUSH32(esp, 0x62D544);
    PUSH32(esp, 0x32);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0049DAF2u); RECOMP_ABI_CALL(0x0049D540u, sub_0049D540); /* call 0x0049D540 */

loc_0049DAF2: ;
    goto loc_0049DAF6;

loc_0049DAF4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049DAF6: ;
    PUSH32(esp, 0x5E);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x88);
    MEM32(ebx + 0x2C) = eax;
    PUSH32(esp, 0x0049DB0Au); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049DB0A: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049DB51; /* je: equal / zero */

loc_0049DB13: ;
    PUSH32(esp, 0x5E);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x0049DB21u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049DB21: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049DB31; /* je: equal / zero */

loc_0049DB28: ;
    ecx = eax;
    PUSH32(esp, 0x0049DB2Fu); RECOMP_ABI_CALL(0x0049D630u, sub_0049D630); /* call 0x0049D630 */

loc_0049DB2F: ;
    goto loc_0049DB33;

loc_0049DB31: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049DB33: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x6411F0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x641200);
    PUSH32(esp, 0x62D544);
    PUSH32(esp, 0x32);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0049DB4Fu); RECOMP_ABI_CALL(0x0049D540u, sub_0049D540); /* call 0x0049D540 */

loc_0049DB4F: ;
    goto loc_0049DB53;

loc_0049DB51: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049DB53: ;
    PUSH32(esp, 0x5F);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x88);
    MEM32(ebx + 0x30) = eax;
    PUSH32(esp, 0x0049DB67u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049DB67: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049DBAE; /* je: equal / zero */

loc_0049DB70: ;
    PUSH32(esp, 0x5F);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x0049DB7Eu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049DB7E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049DB8E; /* je: equal / zero */

loc_0049DB85: ;
    ecx = eax;
    PUSH32(esp, 0x0049DB8Cu); RECOMP_ABI_CALL(0x0049D630u, sub_0049D630); /* call 0x0049D630 */

loc_0049DB8C: ;
    goto loc_0049DB90;

loc_0049DB8E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049DB90: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x641264);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6411D8);
    PUSH32(esp, 0x62D544);
    PUSH32(esp, 0x32);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0049DBACu); RECOMP_ABI_CALL(0x0049D540u, sub_0049D540); /* call 0x0049D540 */

loc_0049DBAC: ;
    goto loc_0049DBB0;

loc_0049DBAE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049DBB0: ;
    PUSH32(esp, 0x61);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x88);
    MEM32(ebx + 0x34) = eax;
    PUSH32(esp, 0x0049DBC4u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049DBC4: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049DC08; /* je: equal / zero */

loc_0049DBCD: ;
    PUSH32(esp, 0x61);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x0049DBDBu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049DBDB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049DBEB; /* je: equal / zero */

loc_0049DBE2: ;
    ecx = eax;
    PUSH32(esp, 0x0049DBE9u); RECOMP_ABI_CALL(0x0049D630u, sub_0049D630); /* call 0x0049D630 */

loc_0049DBE9: ;
    goto loc_0049DBED;

loc_0049DBEB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049DBED: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6411C8);
    PUSH32(esp, 0x62D544);
    PUSH32(esp, 0x28);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0049DC06u); RECOMP_ABI_CALL(0x0049D540u, sub_0049D540); /* call 0x0049D540 */

loc_0049DC06: ;
    goto loc_0049DC0A;

loc_0049DC08: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049DC0A: ;
    PUSH32(esp, 0x62);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x88);
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x0049DC1Eu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049DC1E: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049DC62; /* je: equal / zero */

loc_0049DC27: ;
    PUSH32(esp, 0x62);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x0049DC35u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049DC35: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049DC45; /* je: equal / zero */

loc_0049DC3C: ;
    ecx = eax;
    PUSH32(esp, 0x0049DC43u); RECOMP_ABI_CALL(0x0049D630u, sub_0049D630); /* call 0x0049D630 */

loc_0049DC43: ;
    goto loc_0049DC47;

loc_0049DC45: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049DC47: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6411B4);
    PUSH32(esp, 0x62D544);
    PUSH32(esp, 0x37);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0049DC60u); RECOMP_ABI_CALL(0x0049D540u, sub_0049D540); /* call 0x0049D540 */

loc_0049DC60: ;
    goto loc_0049DC64;

loc_0049DC62: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049DC64: ;
    PUSH32(esp, 0x63);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x88);
    MEM32(ebx + 0x3C) = eax;
    PUSH32(esp, 0x0049DC78u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049DC78: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049DCBC; /* je: equal / zero */

loc_0049DC81: ;
    PUSH32(esp, 0x63);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x0049DC8Fu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049DC8F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049DC9F; /* je: equal / zero */

loc_0049DC96: ;
    ecx = eax;
    PUSH32(esp, 0x0049DC9Du); RECOMP_ABI_CALL(0x0049D630u, sub_0049D630); /* call 0x0049D630 */

loc_0049DC9D: ;
    goto loc_0049DCA1;

loc_0049DC9F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049DCA1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x64119C);
    PUSH32(esp, 0x62D544);
    PUSH32(esp, 0x28);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0049DCBAu); RECOMP_ABI_CALL(0x0049D540u, sub_0049D540); /* call 0x0049D540 */

loc_0049DCBA: ;
    goto loc_0049DCBE;

loc_0049DCBC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049DCBE: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x88);
    MEM32(ebx + 0x40) = eax;
    PUSH32(esp, 0x0049DCD2u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049DCD2: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049DD16; /* je: equal / zero */

loc_0049DCDB: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x0049DCE9u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049DCE9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049DCF9; /* je: equal / zero */

loc_0049DCF0: ;
    ecx = eax;
    PUSH32(esp, 0x0049DCF7u); RECOMP_ABI_CALL(0x0049D630u, sub_0049D630); /* call 0x0049D630 */

loc_0049DCF7: ;
    goto loc_0049DCFB;

loc_0049DCF9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049DCFB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x64119C);
    PUSH32(esp, 0x62D544);
    PUSH32(esp, 0x28);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0049DD14u); RECOMP_ABI_CALL(0x0049D540u, sub_0049D540); /* call 0x0049D540 */

loc_0049DD14: ;
    goto loc_0049DD18;

loc_0049DD16: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049DD18: ;
    PUSH32(esp, 0x66);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x88);
    MEM32(ebx + 0x44) = eax;
    PUSH32(esp, 0x0049DD2Cu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049DD2C: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049DD73; /* je: equal / zero */

loc_0049DD35: ;
    PUSH32(esp, 0x66);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x0049DD43u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049DD43: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049DD53; /* je: equal / zero */

loc_0049DD4A: ;
    ecx = eax;
    PUSH32(esp, 0x0049DD51u); RECOMP_ABI_CALL(0x0049D630u, sub_0049D630); /* call 0x0049D630 */

loc_0049DD51: ;
    goto loc_0049DD55;

loc_0049DD53: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049DD55: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x641188);
    PUSH32(esp, eax);
    PUSH32(esp, 0x641174);
    PUSH32(esp, 0x62D544);
    PUSH32(esp, 0x32);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0049DD71u); RECOMP_ABI_CALL(0x0049D540u, sub_0049D540); /* call 0x0049D540 */

loc_0049DD71: ;
    goto loc_0049DD75;

loc_0049DD73: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049DD75: ;
    PUSH32(esp, 0x67);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x88);
    MEM32(ebx + 0x48) = eax;
    PUSH32(esp, 0x0049DD89u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049DD89: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049DDD0; /* je: equal / zero */

loc_0049DD92: ;
    PUSH32(esp, 0x67);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x0049DDA0u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049DDA0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049DDB0; /* je: equal / zero */

loc_0049DDA7: ;
    ecx = eax;
    PUSH32(esp, 0x0049DDAEu); RECOMP_ABI_CALL(0x0049D630u, sub_0049D630); /* call 0x0049D630 */

loc_0049DDAE: ;
    goto loc_0049DDB2;

loc_0049DDB0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049DDB2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x641164);
    PUSH32(esp, eax);
    PUSH32(esp, 0x641174);
    PUSH32(esp, 0x62D544);
    PUSH32(esp, 0x32);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0049DDCEu); RECOMP_ABI_CALL(0x0049D540u, sub_0049D540); /* call 0x0049D540 */

loc_0049DDCE: ;
    goto loc_0049DDD2;

loc_0049DDD0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049DDD2: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x88);
    MEM32(ebx + 0x4C) = eax;
    PUSH32(esp, 0x0049DDE6u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049DDE6: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049DE2D; /* je: equal / zero */

loc_0049DDEF: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x0049DDFDu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049DDFD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049DE0D; /* je: equal / zero */

loc_0049DE04: ;
    ecx = eax;
    PUSH32(esp, 0x0049DE0Bu); RECOMP_ABI_CALL(0x0049D630u, sub_0049D630); /* call 0x0049D630 */

loc_0049DE0B: ;
    goto loc_0049DE0F;

loc_0049DE0D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049DE0F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x641154);
    PUSH32(esp, eax);
    PUSH32(esp, 0x641174);
    PUSH32(esp, 0x62D544);
    PUSH32(esp, 0x32);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0049DE2Bu); RECOMP_ABI_CALL(0x0049D540u, sub_0049D540); /* call 0x0049D540 */

loc_0049DE2B: ;
    goto loc_0049DE2F;

loc_0049DE2D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049DE2F: ;
    PUSH32(esp, 0x6A);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x88);
    MEM32(ebx + 0x50) = eax;
    PUSH32(esp, 0x0049DE43u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049DE43: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049DE87; /* je: equal / zero */

loc_0049DE4C: ;
    PUSH32(esp, 0x6A);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x0049DE5Au); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049DE5A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049DE6A; /* je: equal / zero */

loc_0049DE61: ;
    ecx = eax;
    PUSH32(esp, 0x0049DE68u); RECOMP_ABI_CALL(0x0049D630u, sub_0049D630); /* call 0x0049D630 */

loc_0049DE68: ;
    goto loc_0049DE6C;

loc_0049DE6A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049DE6C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x641144);
    PUSH32(esp, 0x62D544);
    PUSH32(esp, 0x32);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0049DE85u); RECOMP_ABI_CALL(0x0049D540u, sub_0049D540); /* call 0x0049D540 */

loc_0049DE85: ;
    goto loc_0049DE89;

loc_0049DE87: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049DE89: ;
    PUSH32(esp, 0x6C);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x88);
    MEM32(ebx + 0x54) = eax;
    PUSH32(esp, 0x0049DE9Du); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049DE9D: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049DEE4; /* je: equal / zero */

loc_0049DEA6: ;
    PUSH32(esp, 0x6C);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x0049DEB4u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049DEB4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049DEC4; /* je: equal / zero */

loc_0049DEBB: ;
    ecx = eax;
    PUSH32(esp, 0x0049DEC2u); RECOMP_ABI_CALL(0x0049D630u, sub_0049D630); /* call 0x0049D630 */

loc_0049DEC2: ;
    goto loc_0049DEC6;

loc_0049DEC4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049DEC6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x641264);
    PUSH32(esp, eax);
    PUSH32(esp, 0x641134);
    PUSH32(esp, 0x62D544);
    PUSH32(esp, 0x32);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0049DEE2u); RECOMP_ABI_CALL(0x0049D540u, sub_0049D540); /* call 0x0049D540 */

loc_0049DEE2: ;
    goto loc_0049DEE6;

loc_0049DEE4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049DEE6: ;
    PUSH32(esp, 0x6D);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x88);
    MEM32(ebx + 0x58) = eax;
    PUSH32(esp, 0x0049DEFAu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049DEFA: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049DF3E; /* je: equal / zero */

loc_0049DF03: ;
    PUSH32(esp, 0x6D);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x0049DF11u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049DF11: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049DF21; /* je: equal / zero */

loc_0049DF18: ;
    ecx = eax;
    PUSH32(esp, 0x0049DF1Fu); RECOMP_ABI_CALL(0x0049D630u, sub_0049D630); /* call 0x0049D630 */

loc_0049DF1F: ;
    goto loc_0049DF23;

loc_0049DF21: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049DF23: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x641124);
    PUSH32(esp, 0x62D544);
    PUSH32(esp, 0x32);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0049DF3Cu); RECOMP_ABI_CALL(0x0049D540u, sub_0049D540); /* call 0x0049D540 */

loc_0049DF3C: ;
    goto loc_0049DF40;

loc_0049DF3E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049DF40: ;
    PUSH32(esp, 0x6E);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x88);
    MEM32(ebx + 0x5C) = eax;
    PUSH32(esp, 0x0049DF54u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049DF54: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049DF98; /* je: equal / zero */

loc_0049DF5D: ;
    PUSH32(esp, 0x6E);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x0049DF6Bu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049DF6B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049DF7B; /* je: equal / zero */

loc_0049DF72: ;
    ecx = eax;
    PUSH32(esp, 0x0049DF79u); RECOMP_ABI_CALL(0x0049D630u, sub_0049D630); /* call 0x0049D630 */

loc_0049DF79: ;
    goto loc_0049DF7D;

loc_0049DF7B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049DF7D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x641114);
    PUSH32(esp, 0x62D544);
    PUSH32(esp, 0x32);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0049DF96u); RECOMP_ABI_CALL(0x0049D540u, sub_0049D540); /* call 0x0049D540 */

loc_0049DF96: ;
    goto loc_0049DF9A;

loc_0049DF98: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049DF9A: ;
    PUSH32(esp, 0x70);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x88);
    MEM32(ebx + 0x60) = eax;
    PUSH32(esp, 0x0049DFAEu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049DFAE: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049DFF2; /* je: equal / zero */

loc_0049DFB7: ;
    PUSH32(esp, 0x70);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x0049DFC5u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049DFC5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049DFD5; /* je: equal / zero */

loc_0049DFCC: ;
    ecx = eax;
    PUSH32(esp, 0x0049DFD3u); RECOMP_ABI_CALL(0x0049D630u, sub_0049D630); /* call 0x0049D630 */

loc_0049DFD3: ;
    goto loc_0049DFD7;

loc_0049DFD5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049DFD7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x641104);
    PUSH32(esp, 0x62D544);
    PUSH32(esp, 0x64);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0049DFF0u); RECOMP_ABI_CALL(0x0049D540u, sub_0049D540); /* call 0x0049D540 */

loc_0049DFF0: ;
    goto loc_0049DFF4;

loc_0049DFF2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049DFF4: ;
    PUSH32(esp, 0x71);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x88);
    MEM32(ebx + 0x64) = eax;
    PUSH32(esp, 0x0049E008u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049E008: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049E04C; /* je: equal / zero */

loc_0049E011: ;
    PUSH32(esp, 0x71);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x0049E01Fu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049E01F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049E02F; /* je: equal / zero */

loc_0049E026: ;
    ecx = eax;
    PUSH32(esp, 0x0049E02Du); RECOMP_ABI_CALL(0x0049D630u, sub_0049D630); /* call 0x0049D630 */

loc_0049E02D: ;
    goto loc_0049E031;

loc_0049E02F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049E031: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6410F0);
    PUSH32(esp, 0x62D544);
    PUSH32(esp, 0x1E);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0049E04Au); RECOMP_ABI_CALL(0x0049D540u, sub_0049D540); /* call 0x0049D540 */

loc_0049E04A: ;
    goto loc_0049E04E;

loc_0049E04C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049E04E: ;
    PUSH32(esp, 0x72);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x88);
    MEM32(ebx + 0x68) = eax;
    PUSH32(esp, 0x0049E062u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049E062: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049E0A6; /* je: equal / zero */

loc_0049E06B: ;
    PUSH32(esp, 0x72);
    PUSH32(esp, 0x640E88);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x0049E079u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049E079: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049E089; /* je: equal / zero */

loc_0049E080: ;
    ecx = eax;
    PUSH32(esp, 0x0049E087u); RECOMP_ABI_CALL(0x0049D630u, sub_0049D630); /* call 0x0049D630 */

loc_0049E087: ;
    goto loc_0049E08B;

loc_0049E089: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049E08B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6410D4);
    PUSH32(esp, 0x62D544);
    PUSH32(esp, 0x1E);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0049E0A4u); RECOMP_ABI_CALL(0x0049D540u, sub_0049D540); /* call 0x0049D540 */

loc_0049E0A4: ;
    goto loc_0049E0A8;

loc_0049E0A6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049E0A8: ;
    MEM32(ebx + 0x6C) = eax;
    esi = ebx + 0xC;
    edi = 0x19;

loc_0049E0B3: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0049E0BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049E0B7u); } /* indirect call */
    }

loc_0049E0BA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0049E0B3; /* jne: not equal / not zero */

loc_0049E0C0: ;
    _fa = (uint32_t)(MEM32(0x6C3304)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C3304), 2 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0049E0E8; /* jne: not equal / not zero */

loc_0049E0CA: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049E0E8; /* jne: not equal / not zero */

loc_0049E0CE: ;
    SET_LO8(eax, MEM8(0x6C3421));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(ebx + 0x71) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_0049E0EC; /* jne: not equal / not zero */

loc_0049E0DB: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(ebx + 0x74) = 0x19;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0049E0E8: ;
    MEM8(ebx + 0x71) = 1;

loc_0049E0EC: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049E110
 * Original: 0x0049E110 - 0x0049E12E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049E110: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0049E118u); RECOMP_ABI_CALL(0x0049D530u, sub_0049D530); /* call 0x0049D530 */

loc_0049E118: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0049E128; /* je: equal / zero */

loc_0049E11F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0049E125u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0049E125: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049E128: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049E130
 * Original: 0x0049E130 - 0x0049E14E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049E130: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0049E138u); RECOMP_ABI_CALL(0x0049D5F0u, sub_0049D5F0); /* call 0x0049D5F0 */

loc_0049E138: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0049E148; /* je: equal / zero */

loc_0049E13F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0049E145u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0049E145: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049E148: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049E150
 * Original: 0x0049E150 - 0x0049E192 (66 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E150(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049E150: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0049E158u); RECOMP_ABI_CALL(0x005E33D0u, sub_005E33D0); /* call 0x005E33D0 */

loc_0049E158: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM8(esi + 0x28) = LO8(eax);
    MEM8(esi + 0x29) = LO8(eax);
    MEM32(esi + 0x2C) = 1;
    MEM32(esi) = 0x641360;
    MEM32(esi + 0x1C) = 8;
    eax = MEM32(0x6C3308);
    MEM32(esi + 0x2C) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0049E1A0
 * Original: 0x0049E1A0 - 0x0049E1AB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E1A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049E1A0: ;
    MEM32(ecx) = 0x641360;
    g_seh_ebp = ebp; sub_005E3280(); return; /* tail jmp 0x005E3280 */

}

/**
 * sub_0049E1B0
 * Original: 0x0049E1B0 - 0x0049E20F (95 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E1B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049E1B0: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x74);
    MEM32(esi + 0x18) = eax;
    eax = MEM32(esp + 0x6C);
    edx = eax + eax * 2;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x1C) = ecx;
    ecx = MEM32(esi + 0x2C);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(edx + 0x6C3450);
    edx = MEM32(esp + 0x78);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x64139C);
    eax = esp + 0x14;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049E1F2u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0049E1F2: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0049E201u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_0049E201: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0049E208u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049E205u); } /* indirect call */
    }

loc_0049E208: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0049E210
 * Original: 0x0049E210 - 0x0049E226 (22 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E210(void)
{

loc_0049E210: ;
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0049E223u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049E220u); } /* indirect call */
    }

loc_0049E223: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0049E230
 * Original: 0x0049E230 - 0x0049E23A (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E230(void)
{

loc_0049E230: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x28) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049E240
 * Original: 0x0049E240 - 0x0049E24A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E240(void)
{

loc_0049E240: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x29) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049E250
 * Original: 0x0049E250 - 0x0049E297 (71 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049E250: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049E283; /* je: equal / zero */

loc_0049E25A: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = esi + 0x14;
    PUSH32(esp, edi);
    ebx = esi + 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049E26Du); RECOMP_ABI_CALL(0x00499B30u, sub_00499B30); /* call 0x00499B30 */

loc_0049E26D: ;
    edx = MEM32(ebx);
    ecx = MEM32(esi + 0x20);
    eax = MEM32(edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = edx;
    edx = MEM32(esi + 0x24);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    POP32(esp, edi);
    POP32(esp, ebx);
    goto loc_0049E28F;

loc_0049E283: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = ecx;

loc_0049E28F: ;
    edx = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x38)); return; /* indirect tail jmp */

}

/**
 * sub_0049E2A0
 * Original: 0x0049E2A0 - 0x0049E2DF (63 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E2A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049E2A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0049E2AEu); RECOMP_ABI_CALL(0x00406990u, sub_00406990); /* call 0x00406990 */

loc_0049E2AE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6413C0);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x0049E2C4u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049E2C4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x6413B8);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x0049E2DAu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049E2DA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049E2E0
 * Original: 0x0049E2E0 - 0x0049E2E5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E2E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049E2E0: ;
    g_seh_ebp = ebp; sub_0049E250(); return; /* tail jmp 0x0049E250 */

}

/**
 * sub_0049E2F0
 * Original: 0x0049E2F0 - 0x0049E30E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049E2F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0049E2F8u); RECOMP_ABI_CALL(0x0049E1A0u, sub_0049E1A0); /* call 0x0049E1A0 */

loc_0049E2F8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0049E308; /* je: equal / zero */

loc_0049E2FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0049E305u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0049E305: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049E308: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049E310
 * Original: 0x0049E310 - 0x0049E332 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E310(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049E310: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0x3F800000;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = 1;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0049E340
 * Original: 0x0049E340 - 0x0049E34B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E340(void)
{

loc_0049E340: ;
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049E349u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0049E349: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0049E350
 * Original: 0x0049E350 - 0x0049E379 (41 bytes, 14 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E350(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049E350: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x2F);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x6413C8);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0049E365u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049E365: ;
    MEM32(esi + 0xC) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = 0;
    MEM32(esi + 0x14) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049E380
 * Original: 0x0049E380 - 0x0049E3F3 (115 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0049E380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049E380: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049E393; /* jne: not equal / not zero */

loc_0049E38F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0049E3BF;

loc_0049E393: ;
    eax = edi;
    edx = eax + 1;

loc_0049E398: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049E398; /* jne: not equal / not zero */

loc_0049E39F: ;
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
    PUSH32(esp, 0x0049E3B2u); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_0049E3B2: ;
    eax = esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049E3BCu); RECOMP_ABI_CALL(0x004056C0u, sub_004056C0); /* call 0x004056C0 */

loc_0049E3BC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049E3BF: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    eax = MEM32(0x698534);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049E3E3u); RECOMP_ABI_CALL(0x005DF5B0u, sub_005DF5B0); /* call 0x005DF5B0 */

loc_0049E3E3: ;
    eax = MEM32(esi + 0x2C);
    MEM32(ebx + 0x14) = eax;
    esp = ebp + -12;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049E400
 * Original: 0x0049E400 - 0x0049E40F (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E400(void)
{

loc_0049E400: ;
    MEM32(ecx + 0x18) = 2;
    MEM32(ecx + 0x10) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0049E410
 * Original: 0x0049E410 - 0x0049E499 (137 bytes, 45 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0049E410(void)
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

loc_0049E410: ;
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049E450; /* je: equal / zero */

loc_0049E418: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x6C38A4);
    fp_push(MEMF(edx + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x10)); /* fadd dword ptr [ecx + 0x10] */
    MEMF(ecx + 0x10) = (float)fp_top(); /* fst */
    if ((_fa == 0)) goto loc_0049E474; /* je: equal / zero */

loc_0049E42C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0049E453; /* je: equal / zero */

loc_0049E42F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0049E494; /* jne: not equal / not zero */

loc_0049E432: ;
    eax = MEM32(0x698534);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax + 0x2C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [eax + 0x2c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0049E496; /* jne: not equal / not zero */

loc_0049E441: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x18) = 1;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;

loc_0049E450: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0049E453: ;
    edx = MEM32(0x698534);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 0x28] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0049E496; /* jne: not equal / not zero */

loc_0049E463: ;
    MEM32(ecx + 0x18) = 4;
    MEM32(ecx + 0x10) = 0;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0049E474: ;
    eax = MEM32(0x698534);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [eax + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0049E496; /* jne: not equal / not zero */

loc_0049E483: ;
    MEM32(ecx + 0x18) = 3;
    MEM32(ecx + 0x10) = 0;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0049E494: ;
    fp_pop(); /* fstp st(0) */

loc_0049E496: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0049E4A0
 * Original: 0x0049E4A0 - 0x0049E5DD (317 bytes, 108 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0049E4A0(void)
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

loc_0049E4A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x18);
    PUSH32(esp, ebx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_A(_fa, _fb)) goto loc_0049E51D; /* ja: above (unsigned >) */

loc_0049E4B2: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x49E5E0); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0049E4B9u) goto loc_0049E4B9;
    if (_jt == 0x0049E4D8u) goto loc_0049E4D8;
    if (_jt == 0x0049E4F2u) goto loc_0049E4F2;
    if (_jt == 0x0049E5D1u) goto loc_0049E5D1;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0049E4B9: ;
    eax = MEM32(ecx);
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    edx = MEM32(ecx + 4);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ecx + 8);
    MEM32(ebp + -12) = edx;
    edx = MEM32(0x698534);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(edx + 0x24)); /* fdiv dword ptr [edx + 0x24] */
    MEM32(ebp + -8) = eax;
    goto loc_0049E514;

loc_0049E4D8: ;
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ecx + 8);
    MEM32(ebp + -12) = edx;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = 0x3F800000;
    goto loc_0049E51D;

loc_0049E4F2: ;
    eax = MEM32(ecx + 4);
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    MEM32(ebp + -12) = eax;
    eax = MEM32(0x698534);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(eax + 0x2C)); /* fdiv dword ptr [eax + 0x2c] */
    edx = MEM32(ecx);
    MEM32(ebp + -16) = edx;
    edx = MEM32(ecx + 8);
    MEM32(ebp + -8) = edx;
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */

loc_0049E514: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6628A0)); /* fmul dword ptr [0x6628a0] */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */

loc_0049E51D: ;
    edi = MEM32(ecx + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049E528; /* jne: not equal / not zero */

loc_0049E524: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0049E559;

loc_0049E528: ;
    eax = edi;
    edx = eax + 1;
    /* nop */

loc_0049E530: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049E530; /* jne: not equal / not zero */

loc_0049E537: ;
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
    PUSH32(esp, 0x0049E54Au); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_0049E54A: ;
    eax = esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049E554u); RECOMP_ABI_CALL(0x004056C0u, sub_004056C0); /* call 0x004056C0 */

loc_0049E554: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_0049E559: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049E567u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0049E567: ;
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ebx, LO8(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049E579u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0049E579: ;
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_LO8(ebx, LO8(eax));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049E58Cu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0049E58C: ;
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ecx = ZX8(LO8(eax));
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049E5A2u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0049E5A2: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = ZX8(LO8(eax));
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    MEM32(eax + 0x38) = ebx;
    edx = MEM32(0x698534);
    ecx = MEM32(edx + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0049E5D1u); RECOMP_ABI_CALL(0x005DF5B0u, sub_005DF5B0); /* call 0x005DF5B0 */

loc_0049E5D1: ;
    esp = ebp + -28;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
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
 * sub_0049E5F0
 * Original: 0x0049E5F0 - 0x0049E60B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049E5F0: ;
    ecx = MEM32(0x698534);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049E600; /* je: equal / zero */

loc_0049E5FA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0049E600u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049E5FEu); } /* indirect call */
    }

loc_0049E600: ;
    MEM32(0x698534) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0049E610
 * Original: 0x0049E610 - 0x0049E701 (241 bytes, 84 insns)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E610(void)
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

loc_0049E610: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x4C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x6413D8);
    esi = ecx;
    PUSH32(esp, 0x0049E628u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0049E628: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    edi = MEM32(0x698534);
    edx = ebx;
    ebx = MEM32(esp + 0x64);
    ebp = MEM32(ebx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax + 0xC);
    MEM32(eax) = ebp;
    ebp = MEM32(ebx + 4);
    MEM32(eax + 4) = ebp;
    ebx = MEM32(ebx + 8);
    MEM32(eax + 8) = ebx;
    eax = edx;
    SET_LO8(ebx, MEM8(eax));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0049E683; /* je: equal / zero */

loc_0049E665: ;
    ebp = MEM32(esp + 0x10);
    /* nop */

loc_0049E670: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esi + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049E683; /* je: equal / zero */

loc_0049E675: ;
    SET_LO8(eax, MEM8(edx));
    MEM8(ecx) = LO8(eax);
    SET_LO8(eax, MEM8(edx + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049E670; /* jne: not equal / not zero */

loc_0049E683: ;
    MEM8(ecx) = 0;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(esi + 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0049E696u); RECOMP_ABI_CALL(0x0049E400u, sub_0049E400); /* call 0x0049E400 */

loc_0049E696: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0049E69Fu); RECOMP_ABI_CALL(0x005E1AF0u, sub_005E1AF0); /* call 0x005E1AF0 */

loc_0049E69F: ;
    ecx = MEM32(edi + 0x20);
    edx = MEM32(edi + 0x1C);
    eax = MEM32(edi + 0x18);
    edi = MEM32(edi + 0x14);
    ebx = MEM32(esp + 0x14);
    MEM32(esp + 0x2C) = ecx;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(esi + 4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx | 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x0049E6DEu); RECOMP_ABI_CALL(0x0049E380u, sub_0049E380); /* call 0x0049E380 */

loc_0049E6DE: ;
    MEM32(esp + 0x58) = eax;
    eax = MEM32(esi + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x58)); /* fild */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 8)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 8))); }
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x14)); /* fadd dword ptr [esi + 0x14] */
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    MEM32(esi + 0x10) = edx;
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
 * sub_0049E710
 * Original: 0x0049E710 - 0x0049E781 (113 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E710(void)
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

loc_0049E710: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x698534);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x18) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_0049E751; /* jle: less or equal (signed <=) */

loc_0049E727: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esi + 4);
    ecx = edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0049E743u); RECOMP_ABI_CALL(0x0049E410u, sub_0049E410); /* call 0x0049E410 */

loc_0049E743: ;
    eax = MEM32(ecx + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x18) = MEM32(esi + 0x18) + eax;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0049E727; /* jl: less (signed <) */

loc_0049E751: ;
    ecx = MEM32(0x6C38A4);
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x30)); /* fmul dword ptr [ebx + 0x30] */
    fp_top() = RECOMP_FP_PC(MEMF(esi + 0x14) - fp_top()); /* fsubr dword ptr [esi + 0x14] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0049E774; /* jne: not equal / not zero */

loc_0049E76D: ;
    POP32(esp, edi);
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0049E774: ;
    POP32(esp, edi);
    fp_pop(); /* fstp st(0) */
    MEM32(esi + 0x14) = 0;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0049E790
 * Original: 0x0049E790 - 0x0049E843 (179 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E790(void)
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

loc_0049E790: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x698534);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0049E7A8u); RECOMP_ABI_CALL(0x005E1AF0u, sub_005E1AF0); /* call 0x005E1AF0 */

loc_0049E7A8: ;
    fp_push(MEMF(edi + 0x14)); /* fld float */
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x20);
    edx = MEM32(esi + 0x1C);
    ebx = MEM32(esi + 0x14);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, 0x0049E7CFu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0049E7CF: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(edi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx | 0x108;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(edi + 8);
    MEM32(esp + 0x10) = edx;
    ebx = MEM32(esi + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0049E83B; /* jle: less or equal (signed <=) */

loc_0049E7FE: ;
    edi = edi;

loc_0049E800: ;
    edx = MEM32(edi + 0x10);
    eax = ecx;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 0);
    ecx = edx;
    edx = MEM32(edi + 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    eax = MEM32(ecx + edx + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi + 0x1C);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0x0049E833u); RECOMP_ABI_CALL(0x0049E4A0u, sub_0049E4A0); /* call 0x0049E4A0 */

loc_0049E833: ;
    ecx = MEM32(edi + 8);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0049E800; /* jl: less (signed <) */

loc_0049E83B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_0049E850
 * Original: 0x0049E850 - 0x0049E8C3 (115 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049E850: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0049E858u); RECOMP_ABI_CALL(0x0049EB40u, sub_0049EB40); /* call 0x0049EB40 */

loc_0049E858: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esi) = 0x641400;
    if (CMP_NE(_fa, _fb)) goto loc_0049E87C; /* jne: not equal / not zero */

loc_0049E865: ;
    PUSH32(esp, 0x6413F8);
    ecx = esi;
    PUSH32(esp, 0x0049E871u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_0049E871: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0049E878u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049E875u); } /* indirect call */
    }

loc_0049E878: ;
    MEM8(esi + 0xC) = 1;

loc_0049E87C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x639A50);
    PUSH32(esp, 0x0049E888u); RECOMP_ABI_CALL(0x005E11E0u, sub_005E11E0); /* call 0x005E11E0 */

loc_0049E888: ;
    MEM32(esi + 0x10) = eax;
    eax = 0x3F800000;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = 0x14;
    MEM32(esi + 0x18) = 0xA0;
    MEM32(esi + 0x1C) = 0x3C;
    MEM32(esi + 0x20) = 0x1C4;
    MEM32(esi + 0x28) = 0x41200000;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0049E8D0
 * Original: 0x0049E8D0 - 0x0049E8D6 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E8D0(void)
{

loc_0049E8D0: ;
    eax = 0x641420;
    esp += 4; return; /* ret */

}

/**
 * sub_0049E8E0
 * Original: 0x0049E8E0 - 0x0049E8FD (29 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E8E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049E8E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    MEM32(esi) = 0x641400;
    PUSH32(esp, 0x0049E8F2u); RECOMP_ABI_CALL(0x005E1010u, sub_005E1010); /* call 0x005E1010 */

loc_0049E8F2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0049EB60(); return; /* tail jmp 0x0049EB60 */

}

/**
 * sub_0049E900
 * Original: 0x0049E900 - 0x0049E9C3 (195 bytes, 73 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E900(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049E900: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0049E90Eu); RECOMP_ABI_CALL(0x00406990u, sub_00406990); /* call 0x00406990 */

loc_0049E90E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x639388);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x0049E924u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049E924: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x639380);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x0049E93Au); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049E93A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x641474);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x0049E950u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049E950: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64146C);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x0049E966u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049E966: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64145C);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0049E97Cu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049E97C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x641450);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0049E992u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049E992: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x641440);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0049E9A8u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049E9A8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x641434);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0049E9BEu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049E9BE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049E9D0
 * Original: 0x0049E9D0 - 0x0049EA69 (153 bytes, 60 insns)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E9D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049E9D0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = ebx;
    PUSH32(esp, ebp);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xC2);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ecx;
    PUSH32(esp, 0x6413C8);
    PUSH32(esp, eax);
    MEM32(esi) = 0x641478;
    PUSH32(esp, 0x0049E9F8u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049E9F8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049EA29; /* je: equal / zero */

loc_0049E9FF: ;
    ebp = eax + 4;
    MEM32(eax) = ebx;
    eax = ebx + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_0049EA2B; /* jl: less (signed <) */

loc_0049EA0D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;

loc_0049EA12: ;
    ecx = edi;
    PUSH32(esp, 0x0049EA19u); RECOMP_ABI_CALL(0x0049E310u, sub_0049E310); /* call 0x0049E310 */

loc_0049EA19: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_0049EA12; /* jne: not equal / not zero */

loc_0049EA27: ;
    goto loc_0049EA2B;

loc_0049EA29: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049EA2B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esi + 4) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_0049EA4B; /* jle: less or equal (signed <=) */

loc_0049EA32: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ebx;

loc_0049EA36: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0049EA45u); RECOMP_ABI_CALL(0x0049E350u, sub_0049E350); /* call 0x0049E350 */

loc_0049EA45: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0049EA36; /* jne: not equal / not zero */

loc_0049EA4B: ;
    edx = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = edx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0049EA70
 * Original: 0x0049EA70 - 0x0049EAC1 (81 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0049EA70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049EA70: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(ebp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp) = 0x641478;
    if (CMP_EQ(_fa, _fb)) goto loc_0049EAB9; /* je: equal / zero */

loc_0049EA81: ;
    eax = MEM32(ecx + -4);
    PUSH32(esp, ebx);
    ebx = ecx + -4;
    PUSH32(esp, esi);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0049EAAE; /* js: sign (negative) */

loc_0049EA93: ;
    PUSH32(esp, edi);
    edi = eax + 1;
    goto loc_0049EAA0;

    /* nop */

loc_0049EAA0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x0049EAAAu); RECOMP_ABI_CALL(0x0049E340u, sub_0049E340); /* call 0x0049E340 */

loc_0049EAAA: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0049EAA0; /* jne: not equal / not zero */

loc_0049EAAD: ;
    POP32(esp, edi);

loc_0049EAAE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0049EAB4u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0049EAB4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0049EAB9: ;
    ecx = ebp;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_00614360(); return; /* tail jmp 0x00614360 */

}

/**
 * sub_0049EAD0
 * Original: 0x0049EAD0 - 0x0049EAFF (47 bytes, 15 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049EAD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049EAD0: ;
    PUSH32(esp, 0xDD);
    PUSH32(esp, 0x6413C8);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x0049EAE1u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049EAE1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049EAF1; /* je: equal / zero */

loc_0049EAE8: ;
    ecx = eax;
    PUSH32(esp, 0x0049EAEFu); RECOMP_ABI_CALL(0x0049E850u, sub_0049E850); /* call 0x0049E850 */

loc_0049EAEF: ;
    goto loc_0049EAF3;

loc_0049EAF1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0049EAF3: ;
    MEM32(0x698534) = eax;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 8)); return; /* indirect tail jmp */

}

/**
 * sub_0049EB00
 * Original: 0x0049EB00 - 0x0049EB1E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049EB00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049EB00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0049EB08u); RECOMP_ABI_CALL(0x0049E8E0u, sub_0049E8E0); /* call 0x0049E8E0 */

loc_0049EB08: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0049EB18; /* je: equal / zero */

loc_0049EB0F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0049EB15u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0049EB15: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049EB18: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049EB20
 * Original: 0x0049EB20 - 0x0049EB3E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049EB20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049EB20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0049EB28u); RECOMP_ABI_CALL(0x0049EA70u, sub_0049EA70); /* call 0x0049EA70 */

loc_0049EB28: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0049EB38; /* je: equal / zero */

loc_0049EB2F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0049EB35u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0049EB35: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049EB38: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049EB40
 * Original: 0x0049EB40 - 0x0049EB56 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049EB40(void)
{

loc_0049EB40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0049EB48u); RECOMP_ABI_CALL(0x005E33D0u, sub_005E33D0); /* call 0x005E33D0 */

loc_0049EB48: ;
    MEM32(esi) = 0x64147C;
    MEM8(esi + 0xC) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0049EB60
 * Original: 0x0049EB60 - 0x0049EB6B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049EB60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049EB60: ;
    MEM32(ecx) = 0x64147C;
    g_seh_ebp = ebp; sub_005E3280(); return; /* tail jmp 0x005E3280 */

}

/**
 * sub_0049EB70
 * Original: 0x0049EB70 - 0x0049EB8E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049EB70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049EB70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0049EB78u); RECOMP_ABI_CALL(0x0049EB60u, sub_0049EB60); /* call 0x0049EB60 */

loc_0049EB78: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0049EB88; /* je: equal / zero */

loc_0049EB7F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0049EB85u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0049EB85: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049EB88: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049EB90
 * Original: 0x0049EB90 - 0x0049EC28 (152 bytes, 52 insns)
 * Category: game_ui
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049EB90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049EB90: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0x6414B0);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0049EBAFu); RECOMP_ABI_CALL(0x0049E1B0u, sub_0049E1B0); /* call 0x0049E1B0 */

loc_0049EBAF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0049EBB5u); RECOMP_ABI_CALL(0x004690F0u, sub_004690F0); /* call 0x004690F0 */

loc_0049EBB5: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + 0x78);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x64149C);
    MEM32(esi + 0x38) = eax;
    PUSH32(esp, 0x0049EBCCu); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_0049EBCC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x34) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0049EC23; /* je: equal / zero */

loc_0049EBD6: ;
    ecx = MEM32(0x698538);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x44) = ecx;
    edx = MEM32(0x697B88);
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049EC1A; /* je: equal / zero */

loc_0049EBEF: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049EC0E; /* jne: not equal / not zero */

loc_0049EBF5: ;
    eax = MEM32(0x698538);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = esi;
    MEM32(esi + 0x44) = eax;
    PUSH32(esp, 0x0049EC09u); RECOMP_ABI_CALL(0x0049E240u, sub_0049E240); /* call 0x0049E240 */

loc_0049EC09: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0049EC0E: ;
    ecx = MEM32(0x698538);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x44) = ecx;

loc_0049EC1A: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0049EC23u); RECOMP_ABI_CALL(0x0049E240u, sub_0049E240); /* call 0x0049E240 */

loc_0049EC23: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0049EC30
 * Original: 0x0049EC30 - 0x0049EDFC (460 bytes, 152 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049EC30(void)
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

loc_0049EC30: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049EDF7; /* je: equal / zero */

loc_0049EC41: ;
    eax = MEM32(esi + 0x38);
    SET_LO8(ecx, MEM8(eax + 0x29));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(0x698538);
    if (CMP_EQ(_fa, _fb)) goto loc_0049EC77; /* je: equal / zero */

loc_0049EC52: ;
    ecx = MEM32(0x6C38A4);
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x40)); /* fadd dword ptr [esi + 0x40] */
    MEMF(esi + 0x40) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0049ECAA; /* jne: not equal / not zero */

loc_0049EC6E: ;
    MEM32(esi + 0x40) = 0x3F800000;
    goto loc_0049ECAA;

loc_0049EC77: ;
    fp_push(MEMF(esi + 0x40)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0049ECAA; /* jne: not equal / not zero */

loc_0049EC87: ;
    edx = MEM32(0x6C38A4);
    fp_push(MEMF(edx + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(MEMF(esi + 0x40) - fp_top()); /* fsubr dword ptr [esi + 0x40] */
    MEMF(esi + 0x40) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0049ECAA; /* jp: parity */

loc_0049ECA3: ;
    MEM32(esi + 0x40) = 0;

loc_0049ECAA: ;
    fp_push(MEMF(esi + 0x40)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0049EDF6; /* jne: not equal / not zero */

loc_0049ECBE: ;
    eax = MEM32(0x6C32E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049ED1B; /* je: equal / zero */

loc_0049ECC7: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049ECD0u); RECOMP_ABI_CALL(0x004690F0u, sub_004690F0); /* call 0x004690F0 */

loc_0049ECD0: ;
    ecx = MEM32(eax + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049ECFB; /* jne: not equal / not zero */

loc_0049ECDB: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edi);
    edx = MEM32(edi + 4);
    eax = MEM32(edi + 8);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(edi + 0xC);
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = ecx;
    goto loc_0049ED39;

loc_0049ECFB: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x50;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(edi);
    eax = MEM32(edi + 4);
    ecx = MEM32(edi + 8);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(edi + 0xC);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    goto loc_0049ED39;

loc_0049ED1B: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi);
    ecx = MEM32(edi + 4);
    edx = MEM32(edi + 8);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(edi + 0xC);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = eax;

loc_0049ED39: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    PUSH32(esp, ebx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x40)); /* fmul dword ptr [esi + 0x40] */
    PUSH32(esp, ebp);
    PUSH32(esp, 8);
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0049ED4Du); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_0049ED4D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0049ED54u); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_0049ED54: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0049ED5Bu); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_0049ED5B: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0049ED67u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_0049ED67: ;
    edi = MEM32(esi + 0x44);
    fp_push((double)SMEM32(edi)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x3C)); /* fmul dword ptr [esi + 0x3c] */
    PUSH32(esp, 0x0049ED74u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0049ED74: ;
    fp_push((double)SMEM32(edi + 4)); /* fild */
    MEM32(esp + 0x2C) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x3C)); /* fmul dword ptr [esi + 0x3c] */
    PUSH32(esp, 0x0049ED83u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0049ED83: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x0049ED90u); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_0049ED90: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x3C);
    edi = MEM32(esi + 0x44);
    ebx = MEM32(edi + 0xC);
    ebp = MEM32(edi + 8);
    esi = MEM32(esi + 0x10);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049EDC5u); RECOMP_ABI_CALL(0x004016F0u, sub_004016F0); /* call 0x004016F0 */

loc_0049EDC5: ;
    ecx = MEM32(edi);
    edx = MEM32(edi + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    edx = eax + ecx;
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    edx = esi + ecx;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0049EDF1u); RECOMP_ABI_CALL(0x005EF6F0u, sub_005EF6F0); /* call 0x005EF6F0 */

loc_0049EDF1: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0049EDF6: ;
    POP32(esp, edi);

loc_0049EDF7: ;
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
 * sub_0049EE00
 * Original: 0x0049EE00 - 0x0049EE29 (41 bytes, 17 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049EE00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049EE00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0049EE0Eu); RECOMP_ABI_CALL(0x0049E2A0u, sub_0049E2A0); /* call 0x0049E2A0 */

loc_0049EE0E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x3C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x6414B8);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0049EE24u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049EE24: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049EE30
 * Original: 0x0049EE30 - 0x0049EE48 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049EE30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049EE30: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x40;
    MEM32(eax + 4) = 0x40;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0049EE50
 * Original: 0x0049EE50 - 0x0049EF2A (218 bytes, 75 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049EE50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049EE50: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xB4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x6414F8);
    eax = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0049EE77u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0049EE77: ;
    ebx = MEM32(esp + 0xC0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = ebx;
    PUSH32(esp, 0x0049EE94u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049EE94: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x6414E4);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0049EEA9u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0049EEA9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = ebx;
    PUSH32(esp, 0x0049EEC2u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049EEC2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x6414D4);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0049EED7u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0049EED7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = ebx;
    PUSH32(esp, 0x0049EEF0u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049EEF0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x6414C4);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0049EF05u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0049EF05: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    ecx = ebx;
    PUSH32(esp, 0x0049EF1Eu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049EF1E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0049EF30
 * Original: 0x0049EF30 - 0x0049EF73 (67 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049EF30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049EF30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x64150C;
    if (CMP_EQ(_fa, _fb)) goto loc_0049EF49; /* je: equal / zero */

loc_0049EF40: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049EF46u); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_0049EF46: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049EF49: ;
    MEM32(0x69853C) = MEM32(0x69853C) - 1;
    _fa = (uint32_t)(MEM32(0x69853C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0049EF6B; /* jne: not equal / not zero */

loc_0049EF51: ;
    ecx = MEM32(0x698538);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049EF61; /* je: equal / zero */

loc_0049EF5B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0049EF61u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049EF5Fu); } /* indirect call */
    }

loc_0049EF61: ;
    MEM32(0x698538) = 0;

loc_0049EF6B: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0049E1A0(); return; /* tail jmp 0x0049E1A0 */

}

/**
 * sub_0049EF80
 * Original: 0x0049EF80 - 0x0049EF86 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049EF80(void)
{

loc_0049EF80: ;
    eax = 0x641548;
    esp += 4; return; /* ret */

}

/**
 * sub_0049EF90
 * Original: 0x0049EF90 - 0x0049F003 (115 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049EF90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049EF90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0049EF98u); RECOMP_ABI_CALL(0x0049EB40u, sub_0049EB40); /* call 0x0049EB40 */

loc_0049EF98: ;
    ecx = esi + 0x10;
    MEM32(esi) = 0x641550;
    PUSH32(esp, 0x0049EFA6u); RECOMP_ABI_CALL(0x0049EE30u, sub_0049EE30); /* call 0x0049EE30 */

loc_0049EFA6: ;
    ecx = esi + 0x20;
    PUSH32(esp, 0x0049EFAEu); RECOMP_ABI_CALL(0x0049EE30u, sub_0049EE30); /* call 0x0049EE30 */

loc_0049EFAE: ;
    eax = 0x3F800000;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = eax;
    ecx = 0x3DCCCCCD;
    MEM32(esi + 0x44) = ecx;
    MEM32(esi + 0x48) = ecx;
    MEM32(esi + 0x4C) = eax;
    edx = 0x3F4CCCCD;
    MEM32(esi + 0x40) = edx;
    MEM32(esi + 0x50) = ecx;
    MEM32(esi + 0x54) = ecx;
    MEM32(esi + 0x58) = edx;
    MEM32(esi + 0x5C) = eax;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049EFFF; /* jne: not equal / not zero */

loc_0049EFE8: ;
    PUSH32(esp, 0x6414B0);
    ecx = esi;
    PUSH32(esp, 0x0049EFF4u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_0049EFF4: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0049EFFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049EFF8u); } /* indirect call */
    }

loc_0049EFFB: ;
    MEM8(esi + 0xC) = 1;

loc_0049EFFF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0049F010
 * Original: 0x0049F010 - 0x0049F016 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049F010(void)
{

loc_0049F010: ;
    eax = 0x641570;
    esp += 4; return; /* ret */

}

/**
 * sub_0049F020
 * Original: 0x0049F020 - 0x0049F091 (113 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049F020(void)
{

loc_0049F020: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0049F02Eu); RECOMP_ABI_CALL(0x00406990u, sub_00406990); /* call 0x00406990 */

loc_0049F02E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6415B8);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x0049F044u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049F044: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6415AC);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x0049F05Au); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049F05A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x50;
    PUSH32(esp, edx);
    PUSH32(esp, 0x6415A0);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x0049F070u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049F070: ;
    PUSH32(esp, 0x641594);
    PUSH32(esp, edi);
    ecx = esi + 0x10;
    PUSH32(esp, 0x0049F07Eu); RECOMP_ABI_CALL(0x0049EE50u, sub_0049EE50); /* call 0x0049EE50 */

loc_0049F07E: ;
    PUSH32(esp, 0x641580);
    PUSH32(esp, edi);
    ecx = esi + 0x20;
    PUSH32(esp, 0x0049F08Cu); RECOMP_ABI_CALL(0x0049EE50u, sub_0049EE50); /* call 0x0049EE50 */

loc_0049F08C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049F0A0
 * Original: 0x0049F0A0 - 0x0049F103 (99 bytes, 26 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049F0A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049F0A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0049F0A8u); RECOMP_ABI_CALL(0x0049E150u, sub_0049E150); /* call 0x0049E150 */

loc_0049F0A8: ;
    MEM32(esi) = 0x64150C;
    eax = MEM32(0x698538);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049F0E4; /* jne: not equal / not zero */

loc_0049F0B7: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x640C58);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x0049F0C5u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049F0C5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049F0DA; /* je: equal / zero */

loc_0049F0CC: ;
    ecx = eax;
    PUSH32(esp, 0x0049F0D3u); RECOMP_ABI_CALL(0x0049EF90u, sub_0049EF90); /* call 0x0049EF90 */

loc_0049F0D3: ;
    MEM32(0x698538) = eax;
    goto loc_0049F0E4;

loc_0049F0DA: ;
    MEM32(0x698538) = 0;

loc_0049F0E4: ;
    MEM32(0x69853C) = MEM32(0x69853C) + 1;
    _fa = (uint32_t)(MEM32(0x69853C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x38) = 0;
    MEM32(esi + 0x3C) = 0x3F800000;
    MEM32(esi + 0x40) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0049F110
 * Original: 0x0049F110 - 0x0049F12E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049F110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049F110: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0049F118u); RECOMP_ABI_CALL(0x0049EF30u, sub_0049EF30); /* call 0x0049EF30 */

loc_0049F118: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0049F128; /* je: equal / zero */

loc_0049F11F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0049F125u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0049F125: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049F128: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049F130
 * Original: 0x0049F130 - 0x0049F16F (63 bytes, 24 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049F130(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049F130: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0x6415C8);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0049F14Fu); RECOMP_ABI_CALL(0x0049E1B0u, sub_0049E1B0); /* call 0x0049E1B0 */

loc_0049F14F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0049F155u); RECOMP_ABI_CALL(0x004690F0u, sub_004690F0); /* call 0x004690F0 */

loc_0049F155: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + 0x78);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = esi;
    MEM32(esi + 0x34) = eax;
    PUSH32(esp, 0x0049F16Au); RECOMP_ABI_CALL(0x0049E240u, sub_0049E240); /* call 0x0049E240 */

loc_0049F16A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0049F170
 * Original: 0x0049F170 - 0x0049F34F (479 bytes, 154 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049F170(void)
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

loc_0049F170: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049F34A; /* je: equal / zero */

loc_0049F181: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 0x34);
    PUSH32(esp, edi);
    edi = MEM32(0x698540);
    MEM8(esp + 0x13) = 0;
    PUSH32(esp, 0x0049F19Au); RECOMP_ABI_CALL(0x004CEC30u, sub_004CEC30); /* call 0x004CEC30 */

loc_0049F19A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x10 (32-bit) */
    ebx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0049F1E3; /* jne: not equal / not zero */

loc_0049F1A1: ;
    fp_push(MEMF(esi + 0x3C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0049F247; /* jne: not equal / not zero */

loc_0049F1B5: ;
    eax = MEM32(0x6C38A4);
    fp_push(MEMF(eax + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(MEMF(esi + 0x3C) - fp_top()); /* fsubr dword ptr [esi + 0x3c] */
    MEMF(esi + 0x3C) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0049F1DA; /* jne: not equal / not zero */

loc_0049F1D0: ;
    ebp = MEM32(esi + 0x44);
    MEM8(esp + 0x13) = 1;
    goto loc_0049F206;

loc_0049F1DA: ;
    MEM32(esi + 0x3C) = 0;
    goto loc_0049F247;

loc_0049F1E3: ;
    ecx = MEM32(0x6C38A4);
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x3C)); /* fadd dword ptr [esi + 0x3c] */
    MEMF(esi + 0x3C) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0049F206; /* jne: not equal / not zero */

loc_0049F1FF: ;
    MEM32(esi + 0x3C) = 0x3F800000;

loc_0049F206: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x10 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049F247; /* je: equal / zero */

loc_0049F20B: ;
    edx = MEM32(edi + 0x10);
    fp_push(MEMF(edi + 0x1C)); /* fld float */
    eax = MEM32(edi + 0x14);
    ecx = MEM32(edi + 0x18);
    MEM32(esp + 0x1C) = edx;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x10);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esi + 0x38);
    PUSH32(esp, ebp);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x3C)); /* fmul dword ptr [esi + 0x3c] */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x44) = ebp;
    PUSH32(esp, 0x0049F244u); RECOMP_ABI_CALL(0x00529AB0u, sub_00529AB0); /* call 0x00529AB0 */

loc_0049F244: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049F247: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049F28F; /* jne: not equal / not zero */

loc_0049F24C: ;
    fp_push(MEMF(esi + 0x40)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0049F347; /* jne: not equal / not zero */

loc_0049F260: ;
    eax = MEM32(0x6C38A4);
    fp_push(MEMF(eax + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(MEMF(esi + 0x40) - fp_top()); /* fsubr dword ptr [esi + 0x40] */
    MEMF(esi + 0x40) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0049F280; /* jne: not equal / not zero */

loc_0049F27B: ;
    ebx = MEM32(esi + 0x48);
    goto loc_0049F2B2;

loc_0049F280: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(esi + 0x40) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0049F28F: ;
    ecx = MEM32(0x6C38A4);
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x40)); /* fadd dword ptr [esi + 0x40] */
    MEMF(esi + 0x40) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0049F2B2; /* jne: not equal / not zero */

loc_0049F2AB: ;
    MEM32(esi + 0x40) = 0x3F800000;

loc_0049F2B2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049F347; /* je: equal / zero */

loc_0049F2BB: ;
    fp_push(MEMF(edi + 0x2C)); /* fld float */
    eax = MEM32(edi + 0x24);
    edx = MEM32(edi + 0x20);
    ecx = MEM32(edi + 0x28);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x40)); /* fmul dword ptr [esi + 0x40] */
    MEM32(esp + 0x20) = eax;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x24) = ecx;
    MEM32(esi + 0x48) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0049F32D; /* je: equal / zero */

loc_0049F2E5: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049F32D; /* jne: not equal / not zero */

loc_0049F2E9: ;
    eax = MEM32(esi + 0x4C);
    edx = MEM32(esi + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x14) = edx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEM32(esp + 0x18) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x3C)); /* fmul dword ptr [esi + 0x3c] */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 0x18)); /* fiadd dword ptr [esp + 0x18] */
    PUSH32(esp, 0x0049F309u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0049F309: ;
    ecx = MEM32(esi + 0x14);
    edi = eax;
    eax = MEM32(esi + 0x50);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = ecx;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    MEM32(esp + 0x14) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x3C)); /* fmul dword ptr [esi + 0x3c] */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 0x14)); /* fiadd dword ptr [esp + 0x14] */
    PUSH32(esp, 0x0049F32Bu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0049F32B: ;
    goto loc_0049F333;

loc_0049F32D: ;
    edi = MEM32(esi + 0x4C);
    eax = MEM32(esi + 0x50);

loc_0049F333: ;
    ecx = MEM32(esi + 0x38);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0049F344u); RECOMP_ABI_CALL(0x00529AB0u, sub_00529AB0); /* call 0x00529AB0 */

loc_0049F344: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049F347: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0049F34A: ;
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
 * sub_0049F350
 * Original: 0x0049F350 - 0x0049F391 (65 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049F350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049F350: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049F383; /* je: equal / zero */

loc_0049F35A: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = esi + 0x50;
    PUSH32(esp, edi);
    ebx = esi + 0x4C;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049F36Du); RECOMP_ABI_CALL(0x00499B30u, sub_00499B30); /* call 0x00499B30 */

loc_0049F36D: ;
    edx = MEM32(ebx);
    ecx = MEM32(esi + 0x54);
    eax = MEM32(edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = edx;
    edx = MEM32(esi + 0x58);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0049F383: ;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(esi + 0x58);
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0049F3A0
 * Original: 0x0049F3A0 - 0x0049F3F5 (85 bytes, 33 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049F3A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049F3A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0049F3AEu); RECOMP_ABI_CALL(0x0049E2A0u, sub_0049E2A0); /* call 0x0049E2A0 */

loc_0049F3AE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6415E8);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x0049F3C4u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049F3C4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x54;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6415DC);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x0049F3DAu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049F3DA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x58;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x6415D0);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x0049F3F0u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049F3F0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049F400
 * Original: 0x0049F400 - 0x0049F410 (16 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049F400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049F400: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0049F408u); RECOMP_ABI_CALL(0x0049E2E0u, sub_0049E2E0); /* call 0x0049E2E0 */

loc_0049F408: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0049F350(); return; /* tail jmp 0x0049F350 */

}

/**
 * sub_0049F410
 * Original: 0x0049F410 - 0x0049F45D (77 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049F410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049F410: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0049F418u); RECOMP_ABI_CALL(0x0049EB40u, sub_0049EB40); /* call 0x0049EB40 */

loc_0049F418: ;
    eax = 0x3F800000;
    MEM32(esi) = 0x6415F4;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049F459; /* jne: not equal / not zero */

loc_0049F442: ;
    PUSH32(esp, 0x6415C8);
    ecx = esi;
    PUSH32(esp, 0x0049F44Eu); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_0049F44E: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0049F455u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049F452u); } /* indirect call */
    }

loc_0049F455: ;
    MEM8(esi + 0xC) = 1;

loc_0049F459: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0049F460
 * Original: 0x0049F460 - 0x0049F466 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049F460(void)
{

loc_0049F460: ;
    eax = 0x641614;
    esp += 4; return; /* ret */

}

/**
 * sub_0049F470
 * Original: 0x0049F470 - 0x0049F4AF (63 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049F470(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049F470: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0049F47Eu); RECOMP_ABI_CALL(0x00406990u, sub_00406990); /* call 0x00406990 */

loc_0049F47E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6415B8);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x0049F494u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049F494: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x641628);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x0049F4AAu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049F4AA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049F4B0
 * Original: 0x0049F4B0 - 0x0049F520 (112 bytes, 36 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049F4B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049F4B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0049F4B9u); RECOMP_ABI_CALL(0x0049E150u, sub_0049E150); /* call 0x0049E150 */

loc_0049F4B9: ;
    MEM32(esi) = 0x641638;
    eax = MEM32(0x698540);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049F4F3; /* jne: not equal / not zero */

loc_0049F4CA: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x640C58);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x0049F4D8u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049F4D8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049F4ED; /* je: equal / zero */

loc_0049F4DF: ;
    ecx = eax;
    PUSH32(esp, 0x0049F4E6u); RECOMP_ABI_CALL(0x0049F410u, sub_0049F410); /* call 0x0049F410 */

loc_0049F4E6: ;
    MEM32(0x698540) = eax;
    goto loc_0049F4F3;

loc_0049F4ED: ;
    MEM32(0x698540) = edi;

loc_0049F4F3: ;
    MEM32(0x698544) = MEM32(0x698544) + 1;
    _fa = (uint32_t)(MEM32(0x698544)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x34) = edi;
    MEM32(esi + 0x3C) = edi;
    MEM32(esi + 0x40) = edi;
    MEM32(esi + 0x44) = edi;
    MEM32(esi + 0x48) = edi;
    MEM32(esi + 0x4C) = edi;
    MEM32(esi + 0x50) = edi;
    MEM32(esi + 0x54) = edi;
    MEM32(esi + 0x58) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x38) = 0x20;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0049F520
 * Original: 0x0049F520 - 0x0049F526 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049F520(void)
{

loc_0049F520: ;
    eax = 0x641674;
    esp += 4; return; /* ret */

}

/**
 * sub_0049F530
 * Original: 0x0049F530 - 0x0049F563 (51 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049F530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049F530: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x641638;
    MEM32(0x698544) = MEM32(0x698544) - 1;
    _fa = (uint32_t)(MEM32(0x698544)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0049F55B; /* jne: not equal / not zero */

loc_0049F541: ;
    ecx = MEM32(0x698540);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049F551; /* je: equal / zero */

loc_0049F54B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0049F551u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049F54Fu); } /* indirect call */
    }

loc_0049F551: ;
    MEM32(0x698540) = 0;

loc_0049F55B: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0049E1A0(); return; /* tail jmp 0x0049E1A0 */

}

/**
 * sub_0049F570
 * Original: 0x0049F570 - 0x0049F575 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049F570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049F570: ;
    g_seh_ebp = ebp; sub_0049F350(); return; /* tail jmp 0x0049F350 */

}

/**
 * sub_0049F580
 * Original: 0x0049F580 - 0x0049F59E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049F580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049F580: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0049F588u); RECOMP_ABI_CALL(0x0049F530u, sub_0049F530); /* call 0x0049F530 */

loc_0049F588: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0049F598; /* je: equal / zero */

loc_0049F58F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0049F595u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0049F595: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049F598: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049F5A0
 * Original: 0x0049F5A0 - 0x0049F6C1 (289 bytes, 97 insns)
 * Category: game_ui
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049F5A0(void)
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

loc_0049F5A0: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049F5B4; /* jne: not equal / not zero */

loc_0049F5AF: ;
    edi = 4;

loc_0049F5B4: ;
    eax = MEM32(esp + 0x78);
    ecx = MEM32(esp + 0x74);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x78);
    PUSH32(esp, 0x6416C8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0049F5D1u); RECOMP_ABI_CALL(0x0049E1B0u, sub_0049E1B0); /* call 0x0049E1B0 */

loc_0049F5D1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x6416B4);
    edx = esp + 0x18;
    PUSH32(esp, 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0049F5E3u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0049F5E3: ;
    ecx = MEM32(0x698548);
    SET_LO8(eax, MEM8(ecx + 0xC));
    edi = ecx + 0xC;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0049F60C; /* jne: not equal / not zero */

loc_0049F5F8: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049F602u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_0049F602: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0049F609u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049F606u); } /* indirect call */
    }

loc_0049F609: ;
    MEM8(edi) = 1;

loc_0049F60C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0049F612u); RECOMP_ABI_CALL(0x004690F0u, sub_004690F0); /* call 0x004690F0 */

loc_0049F612: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x48);
    eax = MEM32(ecx + 0x14);
    PUSH32(esp, 0);
    MEM32(esi + 0x40) = eax;
    edx = MEM32(eax + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x64149C);
    MEM32(esp + 0x90) = edx;
    PUSH32(esp, 0x0049F636u); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_0049F636: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebp);
    MEM32(esi + 0x3C) = eax;
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0049F6B9; /* je: equal / zero */

loc_0049F642: ;
    fp_push(MEMF(esp + 0x78)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63CFF8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63cff8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0049F65A; /* jp: parity */

loc_0049F653: ;
    eax = 0x6416A8;
    goto loc_0049F68D;

loc_0049F65A: ;
    fp_push(MEMF(esp + 0x78)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x6416A4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x6416a4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0049F672; /* jp: parity */

loc_0049F66B: ;
    eax = 0x641698;
    goto loc_0049F68D;

loc_0049F672: ;
    fp_push(MEMF(esp + 0x78)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63F2A0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63f2a0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    eax = 0x64168C;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0049F68D; /* jnp: not parity */

loc_0049F688: ;
    eax = 0x641680;

loc_0049F68D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049F697u); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_0049F697: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x38) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0049F6B9; /* je: equal / zero */

loc_0049F6A1: ;
    PUSH32(esp, 0x0049F6A6u); RECOMP_ABI_CALL(0x005ED990u, sub_005ED990); /* call 0x005ED990 */

loc_0049F6A6: ;
    ecx = eax;
    MEM32(esi + 0x34) = eax;
    PUSH32(esp, 0x0049F6B0u); RECOMP_ABI_CALL(0x00419DB0u, sub_00419DB0); /* call 0x00419DB0 */

loc_0049F6B0: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0049F6B9u); RECOMP_ABI_CALL(0x0049E240u, sub_0049E240); /* call 0x0049E240 */

loc_0049F6B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0049F6D0
 * Original: 0x0049F6D0 - 0x0049F6EE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049F6D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049F6D0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x40;
    MEM32(eax + 4) = 0x40;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0049F6F0
 * Original: 0x0049F6F0 - 0x0049F826 (310 bytes, 107 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049F6F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049F6F0: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xB4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x641758);
    eax = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0049F717u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0049F717: ;
    ebx = MEM32(esp + 0xC0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = ebx;
    PUSH32(esp, 0x0049F734u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049F734: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x64173C);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0049F749u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0049F749: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = ebx;
    PUSH32(esp, 0x0049F762u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049F762: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x641728);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0049F777u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0049F777: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = ebx;
    PUSH32(esp, 0x0049F790u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049F790: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x641714);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0049F7A5u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0049F7A5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = ebx;
    PUSH32(esp, 0x0049F7BEu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049F7BE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x6416F4);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0049F7D3u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0049F7D3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = ebx;
    PUSH32(esp, 0x0049F7ECu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049F7EC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x6416D4);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0049F801u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0049F801: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    ecx = ebx;
    PUSH32(esp, 0x0049F81Au); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049F81A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0049F830
 * Original: 0x0049F830 - 0x0049F849 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049F830(void)
{

loc_0049F830: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0049F838u); RECOMP_ABI_CALL(0x0049EB40u, sub_0049EB40); /* call 0x0049EB40 */

loc_0049F838: ;
    MEM32(esi) = 0x641774;
    MEM32(esi + 0x10) = 0x3F800000;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0049F850
 * Original: 0x0049F850 - 0x0049F8E7 (151 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049F850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049F850: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi) = 0x6417B8;
    if (CMP_EQ(_fa, _fb)) goto loc_0049F869; /* je: equal / zero */

loc_0049F860: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049F866u); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_0049F866: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049F869: ;
    eax = MEM32(edi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049F879; /* je: equal / zero */

loc_0049F870: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049F876u); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_0049F876: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049F879: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x34);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049F895; /* je: equal / zero */

loc_0049F881: ;
    MEM32(esi) = MEM32(esi) - 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0049F895; /* jne: not equal / not zero */

loc_0049F885: ;
    ecx = esi;
    PUSH32(esp, 0x0049F88Cu); RECOMP_ABI_CALL(0x005FA390u, sub_005FA390); /* call 0x005FA390 */

loc_0049F88C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0049F892u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0049F892: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049F895: ;
    eax = MEM32(0x698554);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x698554) = eax;
    if ((_fa != 0)) goto loc_0049F8BD; /* jne: not equal / not zero */

loc_0049F8A3: ;
    ecx = MEM32(0x698548);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049F8B3; /* je: equal / zero */

loc_0049F8AD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0049F8B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049F8B1u); } /* indirect call */
    }

loc_0049F8B3: ;
    MEM32(0x698548) = 0;

loc_0049F8BD: ;
    MEM32(0x698550) = MEM32(0x698550) - 1;
    _fa = (uint32_t)(MEM32(0x698550)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0049F8DF; /* jne: not equal / not zero */

loc_0049F8C5: ;
    ecx = MEM32(0x69854C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049F8D5; /* je: equal / zero */

loc_0049F8CF: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0049F8D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049F8D3u); } /* indirect call */
    }

loc_0049F8D5: ;
    MEM32(0x69854C) = 0;

loc_0049F8DF: ;
    ecx = edi;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_0049E1A0(); return; /* tail jmp 0x0049E1A0 */

}

/**
 * sub_0049F8F0
 * Original: 0x0049F8F0 - 0x0049FE0A (1306 bytes, 303 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049F8F0(void)
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

loc_0049F8F0: ;
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = ecx;
    SET_LO8(eax, MEM8(ebp + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049FE02; /* je: equal / zero */

loc_0049F904: ;
    eax = MEM32(ebp + 0x40);
    fp_push(MEMF(eax + 0x64)); /* fld float */
    PUSH32(esp, ebx);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(eax + 0x10)); /* fdiv dword ptr [eax + 0x10] */
    eax = MEM32(ebp + 0x3C);
    ecx = ZX16(MEM16(eax + 8));
    PUSH32(esp, esi);
    esi = MEM32(0x69854C);
    MEM32(esp + 0x10) = ecx;
    edx = ZX16(MEM16(eax + 0xA));
    eax = MEM32(0x8583A0);
    PUSH32(esp, edi);
    edi = MEM32(0x698548);
    PUSH32(esp, 0x858548);
    ecx = esp + 0xF8;
    MEM32(esp + 0x34) = eax;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esi + 0x18)); /* fild */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    MEM32(esp + 0x18) = edx;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esi + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push((double)SMEM32(esi + 0x1C)); /* fild */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esi + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0049F989u); RECOMP_ABI_CALL(0x00457640u, sub_00457640); /* call 0x00457640 */

loc_0049F989: ;
    MEM32(esp + 0xC0) = 0;
    MEM32(esp + 0xBC) = 0;
    MEM32(esp + 0xB8) = 0;
    MEM32(esp + 0x94) = 0x3F800000;
    MEM32(esp + 0x98) = 0;
    MEM32(esp + 0x9C) = 0;
    MEM32(esp + 0xA0) = 0;
    MEM32(esp + 0xA4) = 0x3F800000;
    MEM32(esp + 0xA8) = 0;
    MEM32(esp + 0xAC) = 0;
    MEM32(esp + 0xB0) = 0;
    MEM32(esp + 0xB4) = 0x3F800000;
    fp_push((double)SMEM32(esi + 0x24)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x630320)); /* fmul dword ptr [0x630320] */
    fp_push((double)SMEM32(esi + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    MEM32(esp + 0xC0) = 0;
    MEM32(esp + 0x64) = 0x3F800000;
    MEM32(esp + 0x68) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x630320)); /* fmul dword ptr [0x630320] */
    MEM32(esp + 0x6C) = 0;
    MEM32(esp + 0x70) = 0;
    MEM32(esp + 0x74) = 0x3F800000;
    MEMF(esp + 0xB8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x78) = 0;
    MEM32(esp + 0x7C) = 0;
    MEMF(esp + 0xBC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x80) = 0;
    MEM32(esp + 0x84) = 0x3F800000;
    MEM32(esp + 0x90) = 0;
    MEM32(esp + 0x8C) = 0;
    MEM32(esp + 0x88) = 0;
    fp_push(MEMF(esi + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x30)); /* fsub dword ptr [esi + 0x30] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0049FAC2; /* jp: parity */

loc_0049FAC0: ;
    fp_top() = -fp_top(); /* fchs */

loc_0049FAC2: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    PUSH32(esp, ecx);
    ecx = esp + 0x68;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x30)); /* fadd dword ptr [esi + 0x30] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63EDBC)); /* fmul dword ptr [0x63edbc] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0049FADCu); RECOMP_ABI_CALL(0x00607150u, sub_00607150); /* call 0x00607150 */

loc_0049FADC: ;
    eax = MEM32(0x69854C);
    MEM32(esp + 0x60) = 0;
    MEM32(esp + 0x5C) = 0;
    MEM32(esp + 0x58) = 0;
    MEM32(esp + 0x34) = 0x3F800000;
    MEM32(esp + 0x38) = 0;
    MEM32(esp + 0x3C) = 0;
    MEM32(esp + 0x40) = 0;
    MEM32(esp + 0x44) = 0x3F800000;
    MEM32(esp + 0x48) = 0;
    MEM32(esp + 0x4C) = 0;
    MEM32(esp + 0x50) = 0;
    MEM32(esp + 0x54) = 0x3F800000;
    fp_push((double)SMEM32(eax + 0x2C)); /* fild */
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    edx = esp + 0x98;
    PUSH32(esp, edx);
    ecx = esp + 0xCC;
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(ebp + 0x14)); /* fiadd dword ptr [ebp + 0x14] */
    fp_push((double)SMEM32(eax + 0x28)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    MEM32(esp + 0x68) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(ebp + 0x10)); /* fiadd dword ptr [ebp + 0x10] */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0049FB7Cu); RECOMP_ABI_CALL(0x00606860u, sub_00606860); /* call 0x00606860 */

loc_0049FB7C: ;
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0xC8;
    PUSH32(esp, ecx);
    ecx = esp + 0x6C;
    PUSH32(esp, 0x0049FB92u); RECOMP_ABI_CALL(0x00606860u, sub_00606860); /* call 0x00606860 */

loc_0049FB92: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x0049FB99u); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_0049FB99: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0049FBA0u); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_0049FBA0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0049FBA7u); RECOMP_ABI_CALL(0x005EDF80u, sub_005EDF80); /* call 0x005EDF80 */

loc_0049FBA7: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0049FBAEu); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_0049FBAE: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0049FBBAu); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_0049FBBA: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0049FBC3u); RECOMP_ABI_CALL(0x005EE5A0u, sub_005EE5A0); /* call 0x005EE5A0 */

loc_0049FBC3: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x0049FBCAu); RECOMP_ABI_CALL(0x005EE4E0u, sub_005EE4E0); /* call 0x005EE4E0 */

loc_0049FBCA: ;
    PUSH32(esp, 0x679684);
    PUSH32(esp, 0x0049FBD4u); RECOMP_ABI_CALL(0x005EE900u, sub_005EE900); /* call 0x005EE900 */

loc_0049FBD4: ;
    edx = MEM32(ebp + 0x34);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0049FBDDu); RECOMP_ABI_CALL(0x005F23A0u, sub_005F23A0); /* call 0x005F23A0 */

loc_0049FBDD: ;
    eax = MEM32(ebp + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049FBE6u); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_0049FBE6: ;
    eax = MEM32(ebp + 0x38);
    ecx = ZX16(MEM16(eax + 8));
    eax = ZX16(MEM16(eax + 0xA));
    ebx = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x6C) = eax;
    MEM32(esp + 0x68) = ebx;
    MEM32(esp + 0x58) = edx;
    PUSH32(esp, 0);
    fp_push((double)SMEM32(esp + 0x70)); /* fild */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 0x78)); /* fiadd dword ptr [esp + 0x78] */
    PUSH32(esp, 0x0049FC25u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0049FC25: ;
    fp_push((double)SMEM32(esp + 0x60)); /* fild */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 0x6C)); /* fiadd dword ptr [esp + 0x6c] */
    PUSH32(esp, 0x0049FC36u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0049FC36: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x70);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049FC42u); RECOMP_ABI_CALL(0x005EF6F0u, sub_005EF6F0); /* call 0x005EF6F0 */

loc_0049FC42: ;
    ecx = esp + 0xC4;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0049FC52u); RECOMP_ABI_CALL(0x005EDB20u, sub_005EDB20); /* call 0x005EDB20 */

loc_0049FC52: ;
    edx = MEM32(ebp + 0x3C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0049FC5Bu); RECOMP_ABI_CALL(0x005FB260u, sub_005FB260); /* call 0x005FB260 */

loc_0049FC5B: ;
    PUSH32(esp, 4);
    PUSH32(esp, 5);
    PUSH32(esp, 0x0049FC64u); RECOMP_ABI_CALL(0x005FB070u, sub_005FB070); /* call 0x005FB070 */

loc_0049FC64: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x2C);
    MEM32(0x85B2A4) = eax;
    eax = MEM32(0x85B2AC);
    MEM32(0x85B2B0) = ecx;
    MEM32(0x85B2C0) = 0xFFFFFFFFu;
    fp_push((double)SMEM32(esi + 0x1C)); /* fild */
    ebx = MEM32(esi + 0x10);
    edx = MEM32(esi + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = edx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    MEM32(eax + 8) = ecx;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = edx;
    eax = MEM32(0x85B2AC);
    edx = MEM32(esp + 0x30);
    MEM32(0x85B2A4) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(0x85B2B0) = edx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    edx = MEM32(esi + 0x1C);
    ebp = MEM32(esi + 0x14);
    ebx = MEM32(esi + 0x10);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esi + 0x18);
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    MEM32(eax + 8) = ecx;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = edx;
    eax = MEM32(0x85B2AC);
    edx = MEM32(esp + 0x34);
    MEM32(0x85B2A4) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(0x85B2B0) = edx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    fp_push((double)SMEM32(esi + 0x1C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    fp_push((double)SMEM32(esi + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    MEM32(eax + 8) = ecx;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = edx;
    eax = MEM32(0x85B2AC);
    edx = MEM32(esp + 0x34);
    MEM32(0x85B2A4) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(0x85B2B0) = edx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    edx = MEM32(esi + 0x1C);
    _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = edx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    fp_push((double)SMEM32(esi + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    MEM32(eax + 8) = ecx;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
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
    PUSH32(esp, 0x0049FDE5u); RECOMP_ABI_CALL(0x005FB150u, sub_005FB150); /* call 0x005FB150 */

loc_0049FDE5: ;
    edx = MEM32(esp + 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0049FDEFu); RECOMP_ABI_CALL(0x005F23A0u, sub_005F23A0); /* call 0x005F23A0 */

loc_0049FDEF: ;
    eax = esp + 0x108;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049FDFCu); RECOMP_ABI_CALL(0x005EE8D0u, sub_005EE8D0); /* call 0x005EE8D0 */

loc_0049FDFC: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0049FE02: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0049FE10
 * Original: 0x0049FE10 - 0x0049FE5A (74 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049FE10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049FE10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0049FE18u); RECOMP_ABI_CALL(0x0049EB40u, sub_0049EB40); /* call 0x0049EB40 */

loc_0049FE18: ;
    ecx = esi + 0x10;
    MEM32(esi) = 0x641800;
    PUSH32(esp, 0x0049FE26u); RECOMP_ABI_CALL(0x0049F6D0u, sub_0049F6D0); /* call 0x0049F6D0 */

loc_0049FE26: ;
    SET_LO8(ecx, MEM8(esi + 0xC));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = 0x43340000;
    if (CMP_NE(_fa, _fb)) goto loc_0049FE56; /* jne: not equal / not zero */

loc_0049FE3F: ;
    PUSH32(esp, 0x6416C8);
    ecx = esi;
    PUSH32(esp, 0x0049FE4Bu); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_0049FE4B: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0049FE52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0049FE4Fu); } /* indirect call */
    }

loc_0049FE52: ;
    MEM8(esi + 0xC) = 1;

loc_0049FE56: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0049FE60
 * Original: 0x0049FE60 - 0x0049FED9 (121 bytes, 45 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049FE60(void)
{

loc_0049FE60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0049FE6Eu); RECOMP_ABI_CALL(0x00406990u, sub_00406990); /* call 0x00406990 */

loc_0049FE6E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x641864);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x0049FE84u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049FE84: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x641854);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x0049FE9Au); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049FE9A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x641844);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0049FEB0u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049FEB0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x641838);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0049FEC6u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0049FEC6: ;
    PUSH32(esp, 0x641830);
    PUSH32(esp, edi);
    ecx = esi + 0x10;
    PUSH32(esp, 0x0049FED4u); RECOMP_ABI_CALL(0x0049F6F0u, sub_0049F6F0); /* call 0x0049F6F0 */

loc_0049FED4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049FEE0
 * Original: 0x0049FEE0 - 0x0049FF76 (150 bytes, 47 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049FEE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049FEE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0049FEE9u); RECOMP_ABI_CALL(0x0049E150u, sub_0049E150); /* call 0x0049E150 */

loc_0049FEE9: ;
    MEM32(esi) = 0x6417B8;
    eax = MEM32(0x69854C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049FF23; /* jne: not equal / not zero */

loc_0049FEFA: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x640C58);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x0049FF08u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049FF08: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049FF1D; /* je: equal / zero */

loc_0049FF0F: ;
    ecx = eax;
    PUSH32(esp, 0x0049FF16u); RECOMP_ABI_CALL(0x0049FE10u, sub_0049FE10); /* call 0x0049FE10 */

loc_0049FF16: ;
    MEM32(0x69854C) = eax;
    goto loc_0049FF23;

loc_0049FF1D: ;
    MEM32(0x69854C) = edi;

loc_0049FF23: ;
    ecx = MEM32(0x698550);
    eax = MEM32(0x698548);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(0x698550) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0049FF62; /* jne: not equal / not zero */

loc_0049FF39: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x640C58);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x0049FF47u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0049FF47: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0049FF5C; /* je: equal / zero */

loc_0049FF4E: ;
    ecx = eax;
    PUSH32(esp, 0x0049FF55u); RECOMP_ABI_CALL(0x0049F830u, sub_0049F830); /* call 0x0049F830 */

loc_0049FF55: ;
    MEM32(0x698548) = eax;
    goto loc_0049FF62;

loc_0049FF5C: ;
    MEM32(0x698548) = edi;

loc_0049FF62: ;
    MEM32(0x698554) = MEM32(0x698554) + 1;
    _fa = (uint32_t)(MEM32(0x698554)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x34) = edi;
    MEM32(esi + 0x38) = edi;
    MEM32(esi + 0x3C) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0049FF80
 * Original: 0x0049FF80 - 0x0049FF9E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049FF80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049FF80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0049FF88u); RECOMP_ABI_CALL(0x0049F850u, sub_0049F850); /* call 0x0049F850 */

loc_0049FF88: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0049FF98; /* je: equal / zero */

loc_0049FF8F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0049FF95u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0049FF95: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0049FF98: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049FFA0
 * Original: 0x0049FFA0 - 0x004A0035 (149 bytes, 54 insns)
 * Category: game_vehicle
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049FFA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0049FFA0: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0049FFB4; /* jne: not equal / not zero */

loc_0049FFAF: ;
    esi = 4;

loc_0049FFB4: ;
    eax = MEM32(esp + 0x78);
    ecx = MEM32(esp + 0x74);
    edx = MEM32(esp + 0x70);
    PUSH32(esp, edi);
    PUSH32(esp, 0x641898);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x0049FFD0u); RECOMP_ABI_CALL(0x0049E1B0u, sub_0049E1B0); /* call 0x0049E1B0 */

loc_0049FFD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x641888);
    eax = esp + 0x14;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0049FFE2u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0049FFE2: ;
    ecx = MEM32(0x698558);
    SET_LO8(eax, MEM8(ecx + 0xC));
    esi = ecx + 0xC;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004A000B; /* jne: not equal / not zero */

loc_0049FFF7: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A0001u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_004A0001: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004A0008u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A0005u); } /* indirect call */
    }

loc_004A0008: ;
    MEM8(esi) = 1;

loc_004A000B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x641874);
    PUSH32(esp, 0x004A0019u); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_004A0019: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0x34) = eax;
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_004A002D; /* je: equal / zero */

loc_004A0024: ;
    PUSH32(esp, 1);
    ecx = ebx;
    PUSH32(esp, 0x004A002Du); RECOMP_ABI_CALL(0x0049E240u, sub_0049E240); /* call 0x0049E240 */

loc_004A002D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004A0040
 * Original: 0x004A0040 - 0x004A035E (798 bytes, 253 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0040(void)
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

loc_004A0040: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A0359; /* je: equal / zero */

loc_004A0051: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A005Du); RECOMP_ABI_CALL(0x004690F0u, sub_004690F0); /* call 0x004690F0 */

loc_004A005D: ;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(esi + 0x3C);
    eax = MEM32(ecx + 0x48);
    ecx = MEM32(edx + 4);
    SET_LO8(edx, MEM8(eax + 0x184));
    edi = MEM32(0x698558);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 8 (8-bit) */
    MEM32(esp + 0x24) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_004A0356; /* jne: not equal / not zero */

loc_004A0085: ;
    eax = MEM32(eax + 0x1D0);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004A0356; /* jl: less (signed <) */

loc_004A0098: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 5 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004A00A2; /* jle: less or equal (signed <=) */

loc_004A009D: ;
    ebp = 5;

loc_004A00A2: ;
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0xE);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 5 (32-bit) */
    MEM32(esp + 0x1C) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_004A00BB; /* jle: less or equal (signed <=) */

loc_004A00AF: ;
    MEM32(esp + 0x1C) = 5;
    ebx = MEM32(esp + 0x1C);

loc_004A00BB: ;
    SET_LO8(eax, MEM8(esi + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004A00CC; /* jl: less (signed <) */

loc_004A00C2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A00CC; /* je: equal / zero */

loc_004A00C6: ;
    _fa = (uint32_t)(MEM8(esi + 0x31)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x31), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A00D2; /* jne: not equal / not zero */

loc_004A00CC: ;
    MEM8(esi + 0x30) = LO8(ecx);
    MEM8(esi + 0x31) = LO8(ebx);

loc_004A00D2: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x31);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004A00DD; /* jge: greater or equal (signed >=) */

loc_004A00DA: ;
    MEM8(esi + 0x30) = MEM8(esi + 0x30) - 1;
    _fa = (uint32_t)(MEM8(esi + 0x30)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */

loc_004A00DD: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x004A00E4u); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_004A00E4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004A00EBu); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_004A00EB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004A00F2u); RECOMP_ABI_CALL(0x005EDF80u, sub_005EDF80); /* call 0x005EDF80 */

loc_004A00F2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004A00F9u); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_004A00F9: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004A0105u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_004A0105: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004A010Eu); RECOMP_ABI_CALL(0x005EE5A0u, sub_005EE5A0); /* call 0x005EE5A0 */

loc_004A010E: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004A0117u); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_004A0117: ;
    fp_push((double)SMEM32(esi + 0x14)); /* fild */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas, _fbs)) goto loc_004A01EC; /* jle: less or equal (signed <=) */

loc_004A0129: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x004A0142u); RECOMP_ABI_CALL(0x004016F0u, sub_004016F0); /* call 0x004016F0 */

loc_004A0142: ;
    MEM32(esp + 0x38) = eax;
    eax = MEM32(esi + 0x3C);
    ebx = MEM32(eax + 4);
    MEM32(esp + 0x28) = ebx;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = ebp;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    edi = edi;

loc_004A0160: ;
    ecx = MEM32(eax + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    edx = MEM32(eax + 8);
    ebp = MEM32(eax);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = edx + ebp;
    PUSH32(esp, eax);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A018Cu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A018C: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x38) = ebp;
    fp_push((double)SMEM32(esp + 0x38)); /* fild */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 0x38)); /* fiadd dword ptr [esp + 0x38] */
    PUSH32(esp, 0x004A01A4u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A01A4: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A01AEu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A01AE: ;
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004A01B9u); RECOMP_ABI_CALL(0x005EF6F0u, sub_005EF6F0); /* call 0x005EF6F0 */

loc_004A01B9: ;
    eax = MEM32(esi + 0x3C);
    ebx = MEM32(eax + 4);
    ecx = MEM32(esp + 0x50);
    MEM32(esp + 0x48) = ebx;
    fp_push((double)SMEM32(esp + 0x48)); /* fild */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_004A0160; /* jne: not equal / not zero */

loc_004A01E6: ;
    ebx = MEM32(esp + 0x1C);
    fp_pop(); /* fstp st(0) */

loc_004A01EC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    fp_push((double)SMEM32(esi + 0x14)); /* fild */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas, _fbs)) goto loc_004A02B4; /* jle: less or equal (signed <=) */

loc_004A01FB: ;
    eax = MEM32(esi + 0x3C);
    MEM32(esp + 0x20) = ebx;

loc_004A0202: ;
    ecx = MEM32(eax + 0x18);
    ebx = MEM32(eax + 0x10);
    ebp = MEM32(eax);
    edx = MEM32(eax + 0x14);
    eax = MEM32(eax + 0x1C);
    PUSH32(esp, 0);
    MEM32(esp + 0x1C) = ebp;
    ebp = eax + ecx;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0);
    MEM32(esp + 0x34) = ebp;
    fp_push((double)SMEM32(esp + 0x34)); /* fild */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    MEM32(esp + 0x28) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    ecx = ebx + eax;
    eax = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004A024Du); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A024D: ;
    ecx = MEM32(esp + 0x38);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x48) = ecx;
    fp_push((double)SMEM32(esp + 0x48)); /* fild */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 0x38)); /* fiadd dword ptr [esp + 0x38] */
    PUSH32(esp, 0x004A0269u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A0269: ;
    PUSH32(esp, eax);
    _fb = (uint32_t)(MEM32(esp + 0x4C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - MEM32(esp + 0x4C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x50) = ebp;
    fp_push((double)SMEM32(esp + 0x50)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x38)); /* fadd dword ptr [esp + 0x38] */
    PUSH32(esp, 0x004A0282u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A0282: ;
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A028Du); RECOMP_ABI_CALL(0x005EF6F0u, sub_005EF6F0); /* call 0x005EF6F0 */

loc_004A028D: ;
    eax = MEM32(esi + 0x3C);
    fp_push((double)SMEM32(eax + 4)); /* fild */
    ecx = MEM32(esp + 0x50);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    MEM32(esp + 0x20) = ecx;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x10) - fp_top()); /* fsubr dword ptr [esp + 0x10] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_004A0202; /* jne: not equal / not zero */

loc_004A02B0: ;
    ebx = MEM32(esp + 0x1C);

loc_004A02B4: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x31);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004A0356; /* jge: greater or equal (signed >=) */

loc_004A02C0: ;
    eax = MEM32(esi + 0x3C);
    ebx = MEM32(eax);
    ebp = MEM32(eax + 0x18);
    ecx = MEM32(eax + 0x14);
    edx = MEM32(eax + 0x10);
    PUSH32(esp, 0);
    MEM32(esp + 0x1C) = ebx;
    ebx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    esi = MEM32(esi + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x30) = ebx;
    ebx = MEM32(eax + 0x1C);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx + ebp;
    MEM32(esp + 0x40) = ecx;
    PUSH32(esp, eax);
    MEM32(esp + 0x30) = esi;
    fp_push((double)SMEM32(esp + 0x44)); /* fild */
    PUSH32(esp, edx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x30)); /* fadd dword ptr [esp + 0x30] */
    PUSH32(esp, 0x004A0315u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A0315: ;
    edx = MEM32(esp + 0x38);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x48) = edx;
    fp_push((double)SMEM32(esp + 0x48)); /* fild */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 0x38)); /* fiadd dword ptr [esp + 0x38] */
    PUSH32(esp, 0x004A0331u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A0331: ;
    _fb = (uint32_t)(MEM32(esp + 0x48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(esp + 0x48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x4C) = ebx;
    fp_push((double)SMEM32(esp + 0x4C)); /* fild */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x38)); /* fadd dword ptr [esp + 0x38] */
    PUSH32(esp, 0x004A034Cu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A034C: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004A0353u); RECOMP_ABI_CALL(0x005EF6F0u, sub_005EF6F0); /* call 0x005EF6F0 */

loc_004A0353: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A0356: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_004A0359: ;
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
 * sub_004A0360
 * Original: 0x004A0360 - 0x004A0388 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0360(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A0360: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0xC;
    MEM32(eax + 4) = 0x28;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_004A0390
 * Original: 0x004A0390 - 0x004A0522 (402 bytes, 139 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0390(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A0390: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xB4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x6414F8);
    eax = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x004A03B7u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A03B7: ;
    ebx = MEM32(esp + 0xC0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = ebx;
    PUSH32(esp, 0x004A03D4u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A03D4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x6414E4);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A03E9u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A03E9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = ebx;
    PUSH32(esp, 0x004A0402u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A0402: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x64191C);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A0417u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A0417: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = ebx;
    PUSH32(esp, 0x004A0430u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A0430: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x641904);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A0445u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A0445: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = ebx;
    PUSH32(esp, 0x004A045Eu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A045E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x6418EC);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A0473u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A0473: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = ebx;
    PUSH32(esp, 0x004A048Cu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A048C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x6418D4);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A04A1u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A04A1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = ebx;
    PUSH32(esp, 0x004A04BAu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A04BA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x6418B8);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A04CFu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A04CF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = ebx;
    PUSH32(esp, 0x004A04E8u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A04E8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x6418A0);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A04FDu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A04FD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    ecx = ebx;
    PUSH32(esp, 0x004A0516u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A0516: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004A0530
 * Original: 0x004A0530 - 0x004A0549 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0530(void)
{

loc_004A0530: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A0538u); RECOMP_ABI_CALL(0x0049EB40u, sub_0049EB40); /* call 0x0049EB40 */

loc_004A0538: ;
    MEM32(esi) = 0x641934;
    MEM32(esi + 0x10) = 0x3F800000;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A0550
 * Original: 0x004A0550 - 0x004A0556 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0550(void)
{

loc_004A0550: ;
    eax = 0x641954;
    esp += 4; return; /* ret */

}

/**
 * sub_004A0560
 * Original: 0x004A0560 - 0x004A05D2 (114 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A0560: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x641970;
    if (CMP_EQ(_fa, _fb)) goto loc_004A0579; /* je: equal / zero */

loc_004A0570: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A0576u); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_004A0576: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A0579: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A0586; /* je: equal / zero */

loc_004A0580: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004A0586u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A0584u); } /* indirect call */
    }

loc_004A0586: ;
    MEM32(0x698564) = MEM32(0x698564) - 1;
    _fa = (uint32_t)(MEM32(0x698564)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004A05A8; /* jne: not equal / not zero */

loc_004A058E: ;
    ecx = MEM32(0x698558);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A059E; /* je: equal / zero */

loc_004A0598: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004A059Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A059Cu); } /* indirect call */
    }

loc_004A059E: ;
    MEM32(0x698558) = 0;

loc_004A05A8: ;
    MEM32(0x698560) = MEM32(0x698560) - 1;
    _fa = (uint32_t)(MEM32(0x698560)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004A05CA; /* jne: not equal / not zero */

loc_004A05B0: ;
    ecx = MEM32(0x69855C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A05C0; /* je: equal / zero */

loc_004A05BA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004A05C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A05BEu); } /* indirect call */
    }

loc_004A05C0: ;
    MEM32(0x69855C) = 0;

loc_004A05CA: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0049E1A0(); return; /* tail jmp 0x0049E1A0 */

}

/**
 * sub_004A05E0
 * Original: 0x004A05E0 - 0x004A05E6 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A05E0(void)
{

loc_004A05E0: ;
    eax = 0x6419AC;
    esp += 4; return; /* ret */

}

/**
 * sub_004A05F0
 * Original: 0x004A05F0 - 0x004A0630 (64 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A05F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A05F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A05F8u); RECOMP_ABI_CALL(0x0049EB40u, sub_0049EB40); /* call 0x0049EB40 */

loc_004A05F8: ;
    ecx = esi + 0x10;
    MEM32(esi) = 0x6419B8;
    PUSH32(esp, 0x004A0606u); RECOMP_ABI_CALL(0x004A0360u, sub_004A0360); /* call 0x004A0360 */

loc_004A0606: ;
    ecx = esi + 0x30;
    PUSH32(esp, 0x004A060Eu); RECOMP_ABI_CALL(0x004A0360u, sub_004A0360); /* call 0x004A0360 */

loc_004A060E: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A062C; /* jne: not equal / not zero */

loc_004A0615: ;
    PUSH32(esp, 0x641898);
    ecx = esi;
    PUSH32(esp, 0x004A0621u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_004A0621: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004A0628u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A0625u); } /* indirect call */
    }

loc_004A0628: ;
    MEM8(esi + 0xC) = 1;

loc_004A062C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A0630
 * Original: 0x004A0630 - 0x004A0636 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0630(void)
{

loc_004A0630: ;
    eax = 0x6419D8;
    esp += 4; return; /* ret */

}

/**
 * sub_004A0640
 * Original: 0x004A0640 - 0x004A066F (47 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0640(void)
{

loc_004A0640: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004A064Eu); RECOMP_ABI_CALL(0x00406990u, sub_00406990); /* call 0x00406990 */

loc_004A064E: ;
    PUSH32(esp, 0x6419E8);
    PUSH32(esp, edi);
    ecx = esi + 0x10;
    PUSH32(esp, 0x004A065Cu); RECOMP_ABI_CALL(0x004A0390u, sub_004A0390); /* call 0x004A0390 */

loc_004A065C: ;
    PUSH32(esp, 0x63F784);
    PUSH32(esp, edi);
    ecx = esi + 0x30;
    PUSH32(esp, 0x004A066Au); RECOMP_ABI_CALL(0x004A0390u, sub_004A0390); /* call 0x004A0390 */

loc_004A066A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A0670
 * Original: 0x004A0670 - 0x004A0738 (200 bytes, 65 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A0670: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004A0679u); RECOMP_ABI_CALL(0x0049E150u, sub_0049E150); /* call 0x0049E150 */

loc_004A0679: ;
    MEM32(esi) = 0x641970;
    eax = MEM32(0x69855C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A06B3; /* jne: not equal / not zero */

loc_004A068A: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x640C58);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x004A0698u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_004A0698: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A06AD; /* je: equal / zero */

loc_004A069F: ;
    ecx = eax;
    PUSH32(esp, 0x004A06A6u); RECOMP_ABI_CALL(0x004A05F0u, sub_004A05F0); /* call 0x004A05F0 */

loc_004A06A6: ;
    MEM32(0x69855C) = eax;
    goto loc_004A06B3;

loc_004A06AD: ;
    MEM32(0x69855C) = edi;

loc_004A06B3: ;
    ecx = MEM32(0x698560);
    eax = MEM32(0x698558);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(0x698560) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004A06F2; /* jne: not equal / not zero */

loc_004A06C9: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x640C58);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x004A06D7u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_004A06D7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A06EC; /* je: equal / zero */

loc_004A06DE: ;
    ecx = eax;
    PUSH32(esp, 0x004A06E5u); RECOMP_ABI_CALL(0x004A0530u, sub_004A0530); /* call 0x004A0530 */

loc_004A06E5: ;
    MEM32(0x698558) = eax;
    goto loc_004A06F2;

loc_004A06EC: ;
    MEM32(0x698558) = edi;

loc_004A06F2: ;
    MEM32(0x698564) = MEM32(0x698564) + 1;
    _fa = (uint32_t)(MEM32(0x698564)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), 1 (32-bit) */
    MEM32(esi + 0x34) = edi;
    MEM32(esi + 0x38) = edi;
    MEM32(esi + 0x40) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_004A071F; /* jne: not equal / not zero */

loc_004A0707: ;
    eax = MEM32(0x69855C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x3C) = eax;
    SET_LO8(eax, LO8(eax) | 0xFF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x30) = LO8(eax);
    MEM8(esi + 0x31) = LO8(eax);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004A071F: ;
    ecx = MEM32(0x69855C);
    SET_LO8(eax, LO8(eax) | 0xFF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x30) = LO8(eax);
    MEM8(esi + 0x31) = LO8(eax);
    POP32(esp, edi);
    MEM32(esi + 0x3C) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A0740
 * Original: 0x004A0740 - 0x004A075E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A0740: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A0748u); RECOMP_ABI_CALL(0x004A0560u, sub_004A0560); /* call 0x004A0560 */

loc_004A0748: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004A0758; /* je: equal / zero */

loc_004A074F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004A0755u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_004A0755: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A0758: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A0760
 * Original: 0x004A0760 - 0x004A0872 (274 bytes, 91 insns)
 * Category: game_vehicle
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A0760: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A0774; /* jne: not equal / not zero */

loc_004A076F: ;
    edi = 4;

loc_004A0774: ;
    eax = MEM32(esp + 0x78);
    ecx = MEM32(esp + 0x74);
    edx = MEM32(esp + 0x70);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x641A44);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x004A0790u); RECOMP_ABI_CALL(0x0049E1B0u, sub_0049E1B0); /* call 0x0049E1B0 */

loc_004A0790: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x641A28);
    eax = esp + 0x14;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A07A2u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A07A2: ;
    ecx = MEM32(0x698568);
    SET_LO8(eax, MEM8(ecx + 0xC));
    edi = ecx + 0xC;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004A07CB; /* jne: not equal / not zero */

loc_004A07B7: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A07C1u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_004A07C1: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004A07C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A07C5u); } /* indirect call */
    }

loc_004A07C8: ;
    MEM8(edi) = 1;

loc_004A07CB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x641874);
    PUSH32(esp, 0x004A07D9u); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_004A07D9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x34) = eax;
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_004A086A; /* je: equal / zero */

loc_004A07E8: ;
    PUSH32(esp, 0x41);
    PUSH32(esp, 0x641A18);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x004A07F6u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_004A07F6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A080B; /* je: equal / zero */

loc_004A07FD: ;
    PUSH32(esp, 0x641A08);
    ecx = eax;
    PUSH32(esp, 0x004A0809u); RECOMP_ABI_CALL(0x005D5BD0u, sub_005D5BD0); /* call 0x005D5BD0 */

loc_004A0809: ;
    goto loc_004A080D;

loc_004A080B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004A080D: ;
    MEM32(esi + 0x38) = eax;
    ecx = MEM32(0x6CE2E4);
    edx = MEM32(ecx + 0x44);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x004A0821u); RECOMP_ABI_CALL(0x005D5800u, sub_005D5800); /* call 0x005D5800 */

loc_004A0821: ;
    PUSH32(esp, 0x43);
    PUSH32(esp, 0x641A18);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x004A082Fu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_004A082F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A0844; /* je: equal / zero */

loc_004A0836: ;
    PUSH32(esp, 0x6419F8);
    ecx = eax;
    PUSH32(esp, 0x004A0842u); RECOMP_ABI_CALL(0x005D5BD0u, sub_005D5BD0); /* call 0x005D5BD0 */

loc_004A0842: ;
    goto loc_004A0846;

loc_004A0844: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004A0846: ;
    MEM32(esi + 0x3C) = eax;
    ecx = MEM32(0x6CE2E4);
    edx = MEM32(ecx + 0x44);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x004A085Au); RECOMP_ABI_CALL(0x005D5800u, sub_005D5800); /* call 0x005D5800 */

loc_004A085A: ;
    PUSH32(esp, 1);
    ecx = esi;
    MEM32(esi + 0x48) = 0;
    PUSH32(esp, 0x004A086Au); RECOMP_ABI_CALL(0x0049E240u, sub_0049E240); /* call 0x0049E240 */

loc_004A086A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004A0880
 * Original: 0x004A0880 - 0x004A0CD2 (1106 bytes, 346 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0880(void)
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

loc_004A0880: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A0892u); RECOMP_ABI_CALL(0x004690F0u, sub_004690F0); /* call 0x004690F0 */

loc_004A0892: ;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0x48);
    fp_push(MEMF(ecx + 0x18C)); /* fld float */
    edi = MEM32(ecx + 0x1D4);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    ebp = MEM32(0x698568);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    eax = MEM32(esi + 0x40);
    fp_push((double)SMEM32(eax + 0x1C)); /* fild */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004A0A6D; /* jp: parity */

loc_004A08C4: ;
    edx = MEM32(edi + 0x68);
    MEM32(esp + 0x10) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    PUSH32(esp, 0x004A08D4u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A08D4: ;
    ecx = edi;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x004A08DFu); RECOMP_ABI_CALL(0x004D4230u, sub_004D4230); /* call 0x004D4230 */

loc_004A08DF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A09A6; /* je: equal / zero */

loc_004A08E7: ;
    fp_push(MEMF(edi + 0x74)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004A08FF; /* jne: not equal / not zero */

loc_004A08F7: ;
    fp_push(MEMF(edi + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(edi + 0x78)); /* fdiv dword ptr [edi + 0x78] */
    goto loc_004A0905;

loc_004A08FF: ;
    fp_push(MEMF(0x65E384)); /* fld float */

loc_004A0905: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D370)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d370] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004A0920; /* jp: parity */

loc_004A0918: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D370)); /* fld float */

loc_004A0920: ;
    fp_push(MEMF(esi + 0x44)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x44)); /* fadd dword ptr [esi + 0x44] */
    MEMF(esi + 0x44) = (float)fp_top(); /* fst */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004A0957; /* jp: parity */

loc_004A0946: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004A0979; /* je: equal / zero */

loc_004A0957: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004A0989; /* jne: not equal / not zero */

loc_004A0968: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004A09C9; /* jp: parity */

loc_004A0979: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x004A0981u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A097Eu); } /* indirect call */
    }

loc_004A0981: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004A0989u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A0986u); } /* indirect call */
    }

loc_004A0989: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004A09C9; /* jp: parity */

loc_004A099A: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_004A09C9;

loc_004A09A6: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x004A09AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A09ABu); } /* indirect call */
    }

loc_004A09AE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A09BA; /* je: equal / zero */

loc_004A09B2: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004A09BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A09B7u); } /* indirect call */
    }

loc_004A09BA: ;
    MEM32(esi + 0x44) = 0;
    MEM32(esp + 0x14) = 0x3F800000;

loc_004A09C9: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D370)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d370] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004A0A44; /* jne: not equal / not zero */

loc_004A09DA: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004A0A44; /* jp: parity */

loc_004A09EB: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x004A09F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A09F0u); } /* indirect call */
    }

loc_004A09F3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A09FF; /* jne: not equal / not zero */

loc_004A09F7: ;
    ecx = MEM32(esi + 0x38);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004A09FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A09FCu); } /* indirect call */
    }

loc_004A09FF: ;
    fp_push(MEMF(esi + 0x48)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004A0A1D; /* jne: not equal / not zero */

loc_004A0A0D: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_004A0A22;

loc_004A0A1D: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);

loc_004A0A22: ;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, 0x004A0A2Au); RECOMP_ABI_CALL(0x005D5730u, sub_005D5730); /* call 0x005D5730 */

loc_004A0A2A: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x38);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D57C)); /* fadd dword ptr [0x62d57c] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x004A0A42u); RECOMP_ABI_CALL(0x005D57B0u, sub_005D57B0); /* call 0x005D57B0 */

loc_004A0A42: ;
    goto loc_004A0A58;

loc_004A0A44: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x004A0A4Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A0A49u); } /* indirect call */
    }

loc_004A0A4C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A0A58; /* je: equal / zero */

loc_004A0A50: ;
    ecx = MEM32(esi + 0x38);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004A0A58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A0A55u); } /* indirect call */
    }

loc_004A0A58: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0x48) = ecx;
    ecx = MEM32(0x69856C);
    edi = ecx + 0x10;
    ebx = ecx + 0x20;
    goto loc_004A0AA6;

loc_004A0A6D: ;
    edx = MEM32(ecx + 0x18C);
    MEM32(esp + 0x10) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    PUSH32(esp, 0x004A0A80u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A0A80: ;
    ebx = MEM32(0x69856C);
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx);
    edi = ebx + 0x30;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = 0x3F800000;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x40;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x004A0AA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A0A9Du); } /* indirect call */
    }

loc_004A0AA0: ;
    ecx = MEM32(0x69856C);

loc_004A0AA6: ;
    SET_LO8(eax, MEM8(esi + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A0CCA; /* je: equal / zero */

loc_004A0AB1: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x50)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x50] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004A0AC7; /* jp: parity */

loc_004A0ABF: ;
    fp_push(MEMF(0x65E384)); /* fld float */
    goto loc_004A0AFA;

loc_004A0AC7: ;
    fp_push(MEMF(ecx + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x50)); /* fsub dword ptr [ecx + 0x50] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_004A0AF2; /* jnp: not parity */

loc_004A0ADA: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x50)); /* fsub dword ptr [ecx + 0x50] */
    fp_st1() = RECOMP_FP_PC(fp_top() / fp_st1()); fp_pop(); /* fdivrp st(1) */
    fp_push(MEMF(0x62D57C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004A0AFA; /* jp: parity */

loc_004A0AF2: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_004A0AFA: ;
    fp_push(MEMF(0x62D57C)); /* fld float */
    PUSH32(esp, 8);
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 4)); /* fmul dword ptr [edi + 4] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 8)); /* fmul dword ptr [edi + 8] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0xC)); /* fmul dword ptr [edi + 0xc] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx)); /* fmul dword ptr [ebx] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 4)); /* fmul dword ptr [ebx + 4] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 8)); /* fmul dword ptr [ebx + 8] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0xC)); /* fmul dword ptr [ebx + 0xc] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x2C)); /* fadd dword ptr [esp + 0x2c] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x30)); /* fadd dword ptr [esp + 0x30] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x34)); /* fadd dword ptr [esp + 0x34] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x004A0B6Fu); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_004A0B6F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004A0B76u); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_004A0B76: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004A0B7Du); RECOMP_ABI_CALL(0x005EDF80u, sub_005EDF80); /* call 0x005EDF80 */

loc_004A0B7D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004A0B84u); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_004A0B84: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004A0B90u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_004A0B90: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004A0B99u); RECOMP_ABI_CALL(0x005EE5A0u, sub_005EE5A0); /* call 0x005EE5A0 */

loc_004A0B99: ;
    eax = MEM32(esi + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A0BA2u); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_004A0BA2: ;
    fp_push(MEMF(esp + 0x58)); /* fld float */
    eax = MEM32(esi + 0x40);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    edi = MEM32(eax + 0xC);
    ebx = MEM32(eax + 8);
    eax = MEM32(esi + 0x14);
    PUSH32(esp, 0);
    MEM32(esp + 0x3C) = ecx;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0);
    MEM32(esp + 0x48) = edx;
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x3C) = ecx;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004A0BDBu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A0BDB: ;
    ecx = MEM32(esp + 0x4C);
    edx = ZX8(LO8(eax));
    eax = MEM32(esp + 0x44);
    edx = edx << 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | 0xFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    fp_push((double)SMEM32(esp + 0x5C)); /* fild */
    PUSH32(esp, ebx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 0x64)); /* fiadd dword ptr [esp + 0x64] */
    PUSH32(esp, 0x004A0C08u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A0C08: ;
    fp_push((double)SMEM32(esp + 0x58)); /* fild */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 0x58)); /* fiadd dword ptr [esp + 0x58] */
    PUSH32(esp, 0x004A0C19u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A0C19: ;
    edx = MEM32(esp + 0x68);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x5C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A0C29u); RECOMP_ABI_CALL(0x005EF6F0u, sub_005EF6F0); /* call 0x005EF6F0 */

loc_004A0C29: ;
    fp_push((double)SMEM32(esi + 0x14)); /* fild */
    eax = MEM32(esi + 0x40);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x14);
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(esi + 0x10);
    ebx = edx + ecx;
    edx = MEM32(eax + 0x10);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(eax);
    eax = MEM32(eax + 0x1C);
    PUSH32(esp, 0);
    edi = eax + ecx;
    PUSH32(esp, 0);
    ecx = esp + 0x30;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x34) = edi;
    MEM32(esp + 0x20) = esi;
    PUSH32(esp, 0x004A0C6Du); RECOMP_ABI_CALL(0x0044F880u, sub_0044F880); /* call 0x0044F880 */

loc_004A0C6D: ;
    fp_push((double)SMEM32(esp + 0x34)); /* fild */
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ebx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x34)); /* fadd dword ptr [esp + 0x34] */
    ecx = eax + edx;
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A0C96u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A0C96: ;
    fp_push((double)SMEM32(esp + 0x34)); /* fild */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 0x34)); /* fiadd dword ptr [esp + 0x34] */
    PUSH32(esp, 0x004A0CA7u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A0CA7: ;
    _fb = (uint32_t)(MEM32(esp + 0x3C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(esp + 0x3C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x48) = edi;
    fp_push((double)SMEM32(esp + 0x48)); /* fild */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x48)); /* fadd dword ptr [esp + 0x48] */
    PUSH32(esp, 0x004A0CC0u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A0CC0: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004A0CC7u); RECOMP_ABI_CALL(0x005EF6F0u, sub_005EF6F0); /* call 0x005EF6F0 */

loc_004A0CC7: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A0CCA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
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
 * sub_004A0CE0
 * Original: 0x004A0CE0 - 0x004A0D01 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0CE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A0CE0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0x80;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_004A0D10
 * Original: 0x004A0D10 - 0x004A0EA2 (402 bytes, 139 insns)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0D10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A0D10: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xB4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x641A84);
    eax = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x004A0D37u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A0D37: ;
    ebx = MEM32(esp + 0xC0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = ebx;
    PUSH32(esp, 0x004A0D54u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A0D54: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x6414E4);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A0D69u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A0D69: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = ebx;
    PUSH32(esp, 0x004A0D82u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A0D82: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x64191C);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A0D97u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A0D97: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = ebx;
    PUSH32(esp, 0x004A0DB0u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A0DB0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x641904);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A0DC5u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A0DC5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = ebx;
    PUSH32(esp, 0x004A0DDEu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A0DDE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x641A6C);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A0DF3u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A0DF3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = ebx;
    PUSH32(esp, 0x004A0E0Cu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A0E0C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x641A54);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A0E21u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A0E21: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = ebx;
    PUSH32(esp, 0x004A0E3Au); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A0E3A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x6418B8);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A0E4Fu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A0E4F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = ebx;
    PUSH32(esp, 0x004A0E68u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A0E68: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x6418A0);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A0E7Du); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A0E7D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    ecx = ebx;
    PUSH32(esp, 0x004A0E96u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A0E96: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004A0EB0
 * Original: 0x004A0EB0 - 0x004A0EC9 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0EB0(void)
{

loc_004A0EB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A0EB8u); RECOMP_ABI_CALL(0x0049EB40u, sub_0049EB40); /* call 0x0049EB40 */

loc_004A0EB8: ;
    MEM32(esi) = 0x641A98;
    MEM32(esi + 0x10) = 0x3F800000;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A0ED0
 * Original: 0x004A0ED0 - 0x004A0ED6 (6 bytes, 2 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0ED0(void)
{

loc_004A0ED0: ;
    eax = 0x641AB8;
    esp += 4; return; /* ret */

}
