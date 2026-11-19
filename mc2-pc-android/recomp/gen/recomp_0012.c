/**
 * Midnight Club II (PC) - Recompiled code chunk 12
 * Functions: 250 (0x004A0EE0 - 0x004AAA50)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_004A0EE0
 * Original: 0x004A0EE0 - 0x004A0F5F (127 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0EE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A0EE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x641AD8;
    if (CMP_EQ(_fa, _fb)) goto loc_004A0EF9; /* je: equal / zero */

loc_004A0EF0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A0EF6u); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_004A0EF6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A0EF9: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A0F06; /* je: equal / zero */

loc_004A0F00: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004A0F06u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A0F04u); } /* indirect call */
    }

loc_004A0F06: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A0F13; /* je: equal / zero */

loc_004A0F0D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004A0F13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A0F11u); } /* indirect call */
    }

loc_004A0F13: ;
    MEM32(0x698574) = MEM32(0x698574) - 1;
    _fa = (uint32_t)(MEM32(0x698574)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004A0F35; /* jne: not equal / not zero */

loc_004A0F1B: ;
    ecx = MEM32(0x698568);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A0F2B; /* je: equal / zero */

loc_004A0F25: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004A0F2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A0F29u); } /* indirect call */
    }

loc_004A0F2B: ;
    MEM32(0x698568) = 0;

loc_004A0F35: ;
    MEM32(0x698570) = MEM32(0x698570) - 1;
    _fa = (uint32_t)(MEM32(0x698570)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004A0F57; /* jne: not equal / not zero */

loc_004A0F3D: ;
    ecx = MEM32(0x69856C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A0F4D; /* je: equal / zero */

loc_004A0F47: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004A0F4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A0F4Bu); } /* indirect call */
    }

loc_004A0F4D: ;
    MEM32(0x69856C) = 0;

loc_004A0F57: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0049E1A0(); return; /* tail jmp 0x0049E1A0 */

}

/**
 * sub_004A0F60
 * Original: 0x004A0F60 - 0x004A0F66 (6 bytes, 2 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0F60(void)
{

loc_004A0F60: ;
    eax = 0x641B14;
    esp += 4; return; /* ret */

}

/**
 * sub_004A0F70
 * Original: 0x004A0F70 - 0x004A0FF2 (130 bytes, 43 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A0F70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A0F79u); RECOMP_ABI_CALL(0x0049EB40u, sub_0049EB40); /* call 0x0049EB40 */

loc_004A0F79: ;
    MEM32(esi) = 0x641B20;
    eax = 0x3F800000;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    ecx = 0x3E4CCCCD;
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x3C) = ecx;
    MEM32(esi + 0x30) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x4C) = eax;
    ecx = esi + 0x58;
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x54) = eax;
    PUSH32(esp, 0x004A0FC9u); RECOMP_ABI_CALL(0x004A0CE0u, sub_004A0CE0); /* call 0x004A0CE0 */

loc_004A0FC9: ;
    ecx = esi + 0x78;
    PUSH32(esp, 0x004A0FD1u); RECOMP_ABI_CALL(0x004A0CE0u, sub_004A0CE0); /* call 0x004A0CE0 */

loc_004A0FD1: ;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xC), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A0FED; /* jne: not equal / not zero */

loc_004A0FD6: ;
    PUSH32(esp, 0x641A44);
    ecx = esi;
    PUSH32(esp, 0x004A0FE2u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_004A0FE2: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004A0FE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A0FE6u); } /* indirect call */
    }

loc_004A0FE9: ;
    MEM8(esi + 0xC) = 1;

loc_004A0FED: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004A1000
 * Original: 0x004A1000 - 0x004A1006 (6 bytes, 2 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A1000(void)
{

loc_004A1000: ;
    eax = 0x641B40;
    esp += 4; return; /* ret */

}

/**
 * sub_004A1010
 * Original: 0x004A1010 - 0x004A10C3 (179 bytes, 65 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A1010(void)
{

loc_004A1010: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004A101Eu); RECOMP_ABI_CALL(0x00406990u, sub_00406990); /* call 0x00406990 */

loc_004A101E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, 0x641BC0);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A1034u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A1034: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x54;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x641BA8);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A104Au); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A104A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x641B94);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A1060u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A1060: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x641B80);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A1076u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A1076: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x641B6C);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A108Cu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A108C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0x641B54);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A10A2u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A10A2: ;
    PUSH32(esp, 0x6419E8);
    PUSH32(esp, edi);
    ecx = esi + 0x58;
    PUSH32(esp, 0x004A10B0u); RECOMP_ABI_CALL(0x004A0D10u, sub_004A0D10); /* call 0x004A0D10 */

loc_004A10B0: ;
    PUSH32(esp, 0x63F784);
    PUSH32(esp, edi);
    ecx = esi + 0x78;
    PUSH32(esp, 0x004A10BEu); RECOMP_ABI_CALL(0x004A0D10u, sub_004A0D10); /* call 0x004A0D10 */

loc_004A10BE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A10D0
 * Original: 0x004A10D0 - 0x004A111E (78 bytes, 24 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A10D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A10D0: ;
    eax = MEM32(0x69856C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004A1114; /* jne: not equal / not zero */

loc_004A10DC: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x640C58);
    PUSH32(esp, 0x98);
    PUSH32(esp, 0x004A10EDu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_004A10ED: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A110A; /* je: equal / zero */

loc_004A10F4: ;
    ecx = eax;
    PUSH32(esp, 0x004A10FBu); RECOMP_ABI_CALL(0x004A0F70u, sub_004A0F70); /* call 0x004A0F70 */

loc_004A10FB: ;
    MEM32(0x69856C) = eax;
    MEM32(0x698570) = MEM32(0x698570) + 1;
    _fa = (uint32_t)(MEM32(0x698570)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004A110A: ;
    MEM32(0x69856C) = 0;

loc_004A1114: ;
    MEM32(0x698570) = MEM32(0x698570) + 1;
    _fa = (uint32_t)(MEM32(0x698570)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A1120
 * Original: 0x004A1120 - 0x004A11A4 (132 bytes, 44 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A1120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A1120: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004A1129u); RECOMP_ABI_CALL(0x0049E150u, sub_0049E150); /* call 0x0049E150 */

loc_004A1129: ;
    ecx = esi + 0x30;
    MEM32(esi) = 0x641AD8;
    PUSH32(esp, 0x004A1137u); RECOMP_ABI_CALL(0x004A10D0u, sub_004A10D0); /* call 0x004A10D0 */

loc_004A1137: ;
    eax = MEM32(0x698568);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A116B; /* jne: not equal / not zero */

loc_004A1142: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x640C58);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x004A1150u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_004A1150: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A1165; /* je: equal / zero */

loc_004A1157: ;
    ecx = eax;
    PUSH32(esp, 0x004A115Eu); RECOMP_ABI_CALL(0x004A0EB0u, sub_004A0EB0); /* call 0x004A0EB0 */

loc_004A115E: ;
    MEM32(0x698568) = eax;
    goto loc_004A116B;

loc_004A1165: ;
    MEM32(0x698568) = edi;

loc_004A116B: ;
    MEM32(0x698574) = MEM32(0x698574) + 1;
    _fa = (uint32_t)(MEM32(0x698574)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), 1 (32-bit) */
    MEM32(esi + 0x34) = edi;
    MEM32(esi + 0x38) = edi;
    MEM32(esi + 0x3C) = edi;
    MEM32(esi + 0x44) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_004A1193; /* jne: not equal / not zero */

loc_004A1183: ;
    eax = MEM32(0x69856C);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x58;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x40) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004A1193: ;
    ecx = MEM32(0x69856C);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x78;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x40) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A11B0
 * Original: 0x004A11B0 - 0x004A11CE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A11B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A11B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A11B8u); RECOMP_ABI_CALL(0x004A0EE0u, sub_004A0EE0); /* call 0x004A0EE0 */

loc_004A11B8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004A11C8; /* je: equal / zero */

loc_004A11BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004A11C5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_004A11C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A11C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A11D0
 * Original: 0x004A11D0 - 0x004A1274 (164 bytes, 58 insns)
 * Category: game_ui
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A11D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A11D0: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A11E5; /* jne: not equal / not zero */

loc_004A11E0: ;
    esi = 4;

loc_004A11E5: ;
    eax = MEM32(esp + 0x7C);
    ecx = MEM32(esp + 0x78);
    edx = MEM32(esp + 0x74);
    PUSH32(esp, 0x641C00);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x004A1200u); RECOMP_ABI_CALL(0x0049E1B0u, sub_0049E1B0); /* call 0x0049E1B0 */

loc_004A1200: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x641BE8);
    eax = esp + 0x14;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A1212u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A1212: ;
    ecx = MEM32(0x698578);
    SET_LO8(eax, MEM8(ecx + 0xC));
    esi = ecx + 0xC;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004A123B; /* jne: not equal / not zero */

loc_004A1227: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A1231u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_004A1231: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004A1238u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A1235u); } /* indirect call */
    }

loc_004A1238: ;
    MEM8(esi) = 1;

loc_004A123B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x641BD8);
    PUSH32(esp, 0x004A1249u); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_004A1249: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0x38) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004A126B; /* je: equal / zero */

loc_004A1253: ;
    PUSH32(esp, 0x004A1258u); RECOMP_ABI_CALL(0x005ED990u, sub_005ED990); /* call 0x005ED990 */

loc_004A1258: ;
    ecx = eax;
    MEM32(edi + 0x34) = eax;
    PUSH32(esp, 0x004A1262u); RECOMP_ABI_CALL(0x00419DB0u, sub_00419DB0); /* call 0x00419DB0 */

loc_004A1262: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x004A126Bu); RECOMP_ABI_CALL(0x0049E240u, sub_0049E240); /* call 0x0049E240 */

loc_004A126B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004A1280
 * Original: 0x004A1280 - 0x004A1612 (914 bytes, 211 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A1280(void)
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

loc_004A1280: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x69857C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(0x698578);
    ebp = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004A12A4; /* je: equal / zero */

loc_004A129F: ;
    fp_push(MEMF(esi + 0x20)); /* fld float */
    goto loc_004A12A7;

loc_004A12A4: ;
    fp_push(MEMF(esi + 0x1C)); /* fld float */

loc_004A12A7: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x90)); /* fmul dword ptr [esp + 0x90] */
    eax = MEM32(ebp + 0x38);
    ecx = ZX16(MEM16(eax + 8));
    MEM32(esp + 0x94) = ecx;
    MEMF(esp + 0x90) = (float)fp_top(); fp_pop(); /* fstp */
    edx = ZX16(MEM16(eax + 0xA));
    fp_push((double)SMEM32(esi + 0xDC)); /* fild */
    fp_push((double)SMEM32(esp + 0x94)); /* fild */
    MEM32(esp + 0x94) = edx;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    ecx = esp + 0x20;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esi + 0xD4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push((double)SMEM32(esi + 0xE0)); /* fild */
    fp_push((double)SMEM32(esp + 0x98)); /* fild */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esi + 0xD8)); /* fild */
    MEM32(esp + 0x20) = 0x3F800000;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x30) = 0x3F800000;
    MEM32(esp + 0x34) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEM32(esp + 0x38) = 0;
    MEM32(esp + 0x3C) = 0;
    MEM32(esp + 0x40) = 0x3F800000;
    MEM32(esp + 0x4C) = 0;
    MEM32(esp + 0x48) = 0;
    MEM32(esp + 0x44) = 0;
    MEMF(esp + 0x98) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x84)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63EDBC)); /* fmul dword ptr [0x63edbc] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x004A1399u); RECOMP_ABI_CALL(0x00607150u, sub_00607150); /* call 0x00607150 */

loc_004A1399: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    MEM32(esp + 0x4C) = eax;
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x50) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(esp + 0x58) = eax;
    eax = MEM32(esp + 0x34);
    MEM32(esp + 0x5C) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(esp + 0x54) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(esp + 0x64) = eax;
    eax = MEM32(esp + 0x40);
    MEM32(esp + 0x68) = ecx;
    ecx = MEM32(esp + 0x44);
    MEM32(esp + 0x60) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(esp + 0x70) = eax;
    MEM32(esp + 0x74) = ecx;
    ecx = MEM32(esp + 0x98);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    MEM32(esp + 0x70) = edx;
    edx = MEM32(esp + 0x4C);
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    MEM32(esp + 0x80) = edx;
    PUSH32(esp, 0x004A1412u); RECOMP_ABI_CALL(0x00606860u, sub_00606860); /* call 0x00606860 */

loc_004A1412: ;
    edx = MEM32(esp + 0x9C);
    PUSH32(esp, edx);
    ecx = esp + 0x20;
    PUSH32(esp, 0x004A1423u); RECOMP_ABI_CALL(0x006066D0u, sub_006066D0); /* call 0x006066D0 */

loc_004A1423: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A142Du); RECOMP_ABI_CALL(0x005EDB20u, sub_005EDB20); /* call 0x005EDB20 */

loc_004A142D: ;
    ecx = MEM32(ebp + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004A1436u); RECOMP_ABI_CALL(0x005FB260u, sub_005FB260); /* call 0x005FB260 */

loc_004A1436: ;
    PUSH32(esp, 4);
    PUSH32(esp, 5);
    PUSH32(esp, 0x004A143Fu); RECOMP_ABI_CALL(0x005FB070u, sub_005FB070); /* call 0x005FB070 */

loc_004A143F: ;
    edx = esp + 0x94;
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A144Cu); RECOMP_ABI_CALL(0x0045F8D0u, sub_0045F8D0); /* call 0x0045F8D0 */

loc_004A144C: ;
    ecx = MEM32(esp + 0xA8);
    eax = MEM32(esp + 0x24);
    MEM32(0x85B2A4) = eax;
    MEM32(0x85B2B0) = ecx;
    fp_push((double)SMEM32(esi + 0xE0)); /* fild */
    ebp = MEM32(esi + 0xD8);
    edx = MEM32(esi + 0xDC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    eax = MEM32(0x85B2AC);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x94) = edx;
    fp_push((double)SMEM32(esp + 0x94)); /* fild */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    MEM32(eax + 8) = ebx;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(0x85B2B0);
    edx = MEM32(esp + 0x14);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(0x85B2AC);
    ecx = MEM32(esp + 0x94);
    MEM32(0x85B2A4) = edx;
    MEM32(0x85B2B0) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    edx = MEM32(esi + 0xE0);
    ebp = MEM32(esi + 0xD4);
    ecx = MEM32(esi + 0xDC);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x94) = edx;
    edx = MEM32(esi + 0xD8);
    fp_push((double)SMEM32(esp + 0x94)); /* fild */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x94) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    fp_push((double)SMEM32(esp + 0x94)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    MEM32(eax + 8) = ebx;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(0x85B2B0);
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x14) = edx;
    eax = MEM32(0x85B2AC);
    edx = MEM32(esp + 0x18);
    MEM32(0x85B2A4) = ecx;
    MEM32(0x85B2B0) = edx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    fp_push((double)SMEM32(esi + 0xE0)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    fp_push((double)SMEM32(esi + 0xDC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = ebx;
    ecx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(0x85B2B0);
    edx = MEM32(esp + 0x14);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(0x85B2AC);
    ecx = MEM32(esp + 0x18);
    MEM32(0x85B2A4) = edx;
    MEM32(0x85B2B0) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    ecx = MEM32(esi + 0xD4);
    edx = MEM32(esi + 0xE0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x94) = edx;
    fp_push((double)SMEM32(esp + 0x94)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    fp_push((double)SMEM32(esi + 0xDC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    MEM32(eax + 8) = ebx;
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
    PUSH32(esp, 0x004A1608u); RECOMP_ABI_CALL(0x005FB150u, sub_005FB150); /* call 0x005FB150 */

loc_004A1608: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004A1620
 * Original: 0x004A1620 - 0x004A1756 (310 bytes, 107 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A1620(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A1620: ;
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
    PUSH32(esp, 0x004A1647u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A1647: ;
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
    PUSH32(esp, 0x004A1664u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A1664: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x6414E4);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A1679u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A1679: ;
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
    PUSH32(esp, 0x004A1692u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A1692: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x6414D4);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A16A7u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A16A7: ;
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
    PUSH32(esp, 0x004A16C0u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A16C0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x6414C4);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A16D5u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A16D5: ;
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
    PUSH32(esp, 0x004A16EEu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A16EE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x641C18);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A1703u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A1703: ;
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
    PUSH32(esp, 0x004A171Cu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A171C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x641C0C);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A1731u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A1731: ;
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
    PUSH32(esp, 0x004A174Au); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A174A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004A1760
 * Original: 0x004A1760 - 0x004A1766 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A1760(void)
{

loc_004A1760: ;
    eax = 0x641794;
    esp += 4; return; /* ret */

}

/**
 * sub_004A1770
 * Original: 0x004A1770 - 0x004A17F7 (135 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A1770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A1770: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi) = 0x641C24;
    if (CMP_EQ(_fa, _fb)) goto loc_004A1789; /* je: equal / zero */

loc_004A1780: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A1786u); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_004A1786: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A1789: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x34);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A17A5; /* je: equal / zero */

loc_004A1791: ;
    MEM32(esi) = MEM32(esi) - 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004A17A5; /* jne: not equal / not zero */

loc_004A1795: ;
    ecx = esi;
    PUSH32(esp, 0x004A179Cu); RECOMP_ABI_CALL(0x005FA390u, sub_005FA390); /* call 0x005FA390 */

loc_004A179C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004A17A2u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_004A17A2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A17A5: ;
    eax = MEM32(0x698584);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x698584) = eax;
    if ((_fa != 0)) goto loc_004A17CD; /* jne: not equal / not zero */

loc_004A17B3: ;
    ecx = MEM32(0x698578);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A17C3; /* je: equal / zero */

loc_004A17BD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004A17C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A17C1u); } /* indirect call */
    }

loc_004A17C3: ;
    MEM32(0x698578) = 0;

loc_004A17CD: ;
    MEM32(0x698580) = MEM32(0x698580) - 1;
    _fa = (uint32_t)(MEM32(0x698580)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004A17EF; /* jne: not equal / not zero */

loc_004A17D5: ;
    ecx = MEM32(0x69857C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A17E5; /* je: equal / zero */

loc_004A17DF: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004A17E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A17E3u); } /* indirect call */
    }

loc_004A17E5: ;
    MEM32(0x69857C) = 0;

loc_004A17EF: ;
    ecx = edi;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_0049E1A0(); return; /* tail jmp 0x0049E1A0 */

}

/**
 * sub_004A1800
 * Original: 0x004A1800 - 0x004A1806 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A1800(void)
{

loc_004A1800: ;
    eax = 0x6417F4;
    esp += 4; return; /* ret */

}

/**
 * sub_004A1810
 * Original: 0x004A1810 - 0x004A1AE1 (721 bytes, 174 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A1810(void)
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

loc_004A1810: ;
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_004A1AD6; /* je: equal / zero */

loc_004A1827: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A1830u); RECOMP_ABI_CALL(0x004690F0u, sub_004690F0); /* call 0x004690F0 */

loc_004A1830: ;
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax + 0x54);
    edx = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x58);
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, 0x004A1846u); RECOMP_ABI_CALL(0x004690F0u, sub_004690F0); /* call 0x004690F0 */

loc_004A1846: ;
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax + 0x54);
    fp_push(MEMF(eax + 0x18)); /* fld float */
    eax = MEM32(0x8583A0);
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x18) / fp_top()); /* fdivr dword ptr [esp + 0x18] */
    edi = MEM32(0x69857C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x858548);
    ecx = esp + 0x98;
    MEM32(esp + 0x24) = eax;
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x004A187Eu); RECOMP_ABI_CALL(0x00457640u, sub_00457640); /* call 0x00457640 */

loc_004A187E: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    ecx = MEM32(0x698578);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004A189D; /* jne: not equal / not zero */

loc_004A1895: ;
    MEM32(esp + 0x14) = 0x3F800000;

loc_004A189D: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edi + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edi + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004A18B5; /* jp: parity */

loc_004A18AB: ;
    MEM32(esp + 0x1C) = 0x3F800000;
    goto loc_004A18E6;

loc_004A18B5: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x8602E0)); /* fmul dword ptr [0x8602e0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6306E8)); /* fmul dword ptr [0x6306e8] */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63032C)); /* fmul dword ptr [0x63032c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004A18DC; /* jp: parity */

loc_004A18DA: ;
    fp_top() = -fp_top(); /* fchs */

loc_004A18DC: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x639994)); /* fadd dword ptr [0x639994] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */

loc_004A18E6: ;
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
    fp_push((double)SMEM32(edi + 0xE8)); /* fild */
    PUSH32(esp, 8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x10)); /* fmul dword ptr [ecx + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x630320)); /* fmul dword ptr [0x630320] */
    fp_push((double)SMEM32(edi + 0xE4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x10)); /* fmul dword ptr [ecx + 0x10] */
    MEM32(esp + 0x64) = 0;
    MEM32(esp + 0x68) = 0x3F800000;
    MEM32(esp + 0x6C) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x630320)); /* fmul dword ptr [0x630320] */
    MEM32(esp + 0x70) = 0;
    MEM32(esp + 0x74) = 0;
    MEM32(esp + 0x78) = 0x3F800000;
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x7C) = 0;
    MEM32(esp + 0x80) = 0;
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x84) = 0;
    fp_push((double)SMEM32(esi + 0x14)); /* fild */
    MEM32(esp + 0x88) = 0x3F800000;
    fp_push((double)SMEM32(esi + 0x10)); /* fild */
    MEM32(esp + 0x94) = 0;
    MEMF(esp + 0x8C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x90) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x004A19EBu); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_004A19EB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004A19F2u); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_004A19F2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004A19F9u); RECOMP_ABI_CALL(0x005EDF80u, sub_005EDF80); /* call 0x005EDF80 */

loc_004A19F9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004A1A00u); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_004A1A00: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004A1A0Cu); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_004A1A0C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004A1A15u); RECOMP_ABI_CALL(0x005EE5A0u, sub_005EE5A0); /* call 0x005EE5A0 */

loc_004A1A15: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004A1A1Eu); RECOMP_ABI_CALL(0x005F23A0u, sub_005F23A0); /* call 0x005F23A0 */

loc_004A1A1E: ;
    edx = MEM32(edi + 0x14);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x10) = ebx;
    ebp = edi + 0x24;

loc_004A1A31: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    eax = ebp;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x641C60)); /* fmul dword ptr [0x641c60] */
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x28) = edx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x14] */
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = edx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004A1A67; /* jp: parity */

loc_004A1A63: ;
    SET_LO8(eax, 1);
    goto loc_004A1A69;

loc_004A1A67: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_004A1A69: ;
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x38);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004A1AA0u); RECOMP_ABI_CALL(0x004A1280u, sub_004A1280); /* call 0x004A1280 */

loc_004A1AA0: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x18)); /* fadd dword ptr [edi + 0x18] */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xB (32-bit) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x10) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_004A1A31; /* jl: less (signed <) */

loc_004A1ABC: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004A1AC6u); RECOMP_ABI_CALL(0x005F23A0u, sub_005F23A0); /* call 0x005F23A0 */

loc_004A1AC6: ;
    edx = esp + 0x98;
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A1AD3u); RECOMP_ABI_CALL(0x005EE8D0u, sub_005EE8D0); /* call 0x005EE8D0 */

loc_004A1AD3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A1AD6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004A1AF0
 * Original: 0x004A1AF0 - 0x004A1B68 (120 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A1AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A1AF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A1AF8u); RECOMP_ABI_CALL(0x0049EB40u, sub_0049EB40); /* call 0x0049EB40 */

loc_004A1AF8: ;
    edx = 0x3F800000;
    ecx = esi + 0xD4;
    MEM32(esi) = 0x641C64;
    MEM32(esi + 0x10) = 0x3F68BA2F;
    MEM32(esi + 0x14) = 0;
    MEM32(esi + 0x18) = 0x41700000;
    MEM32(esi + 0x1C) = 0x3E4CCCCD;
    MEM32(esi + 0x20) = edx;
    PUSH32(esp, 0x004A1B2Du); RECOMP_ABI_CALL(0x004A7140u, sub_004A7140); /* call 0x004A7140 */

loc_004A1B2D: ;
    eax = esi + 0x2C;
    ecx = 0xB;

loc_004A1B35: ;
    MEM32(eax + -8) = edx;
    MEM32(eax + -4) = edx;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004A1B35; /* jne: not equal / not zero */

loc_004A1B46: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A1B64; /* jne: not equal / not zero */

loc_004A1B4D: ;
    PUSH32(esp, 0x641C00);
    ecx = esi;
    PUSH32(esp, 0x004A1B59u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_004A1B59: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004A1B60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A1B5Du); } /* indirect call */
    }

loc_004A1B60: ;
    MEM8(esi + 0xC) = 1;

loc_004A1B64: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A1B70
 * Original: 0x004A1B70 - 0x004A1B76 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A1B70(void)
{

loc_004A1B70: ;
    eax = 0x641820;
    esp += 4; return; /* ret */

}

/**
 * sub_004A1B80
 * Original: 0x004A1B80 - 0x004A1C58 (216 bytes, 81 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A1B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A1B80: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x78);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 0x004A1B93u); RECOMP_ABI_CALL(0x00406990u, sub_00406990); /* call 0x00406990 */

loc_004A1B93: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x641CE4);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A1BA9u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A1BA9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = ebp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x641CCC);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A1BBFu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A1BBF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = ebp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x641CBC);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A1BD5u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A1BD5: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebp + 0x24;
    /* nop */

loc_004A1BE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x641CB0);
    eax = esp + 0x18;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A1BF2u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A1BF2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A1C08u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A1C08: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xB (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004A1BE0; /* jl: less (signed <) */

loc_004A1C11: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = ebp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x641C98);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A1C27u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A1C27: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = ebp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x641C84);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A1C3Du); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A1C3D: ;
    PUSH32(esp, 0x6419E8);
    PUSH32(esp, edi);
    ecx = ebp + 0xD4;
    PUSH32(esp, 0x004A1C4Eu); RECOMP_ABI_CALL(0x004A1620u, sub_004A1620); /* call 0x004A1620 */

loc_004A1C4E: ;
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
 * sub_004A1C60
 * Original: 0x004A1C60 - 0x004A1CAE (78 bytes, 24 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A1C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A1C60: ;
    eax = MEM32(0x69857C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004A1CA4; /* jne: not equal / not zero */

loc_004A1C6C: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x640C58);
    PUSH32(esp, 0xEC);
    PUSH32(esp, 0x004A1C7Du); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_004A1C7D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A1C9A; /* je: equal / zero */

loc_004A1C84: ;
    ecx = eax;
    PUSH32(esp, 0x004A1C8Bu); RECOMP_ABI_CALL(0x004A1AF0u, sub_004A1AF0); /* call 0x004A1AF0 */

loc_004A1C8B: ;
    MEM32(0x69857C) = eax;
    MEM32(0x698580) = MEM32(0x698580) + 1;
    _fa = (uint32_t)(MEM32(0x698580)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004A1C9A: ;
    MEM32(0x69857C) = 0;

loc_004A1CA4: ;
    MEM32(0x698580) = MEM32(0x698580) + 1;
    _fa = (uint32_t)(MEM32(0x698580)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A1CB0
 * Original: 0x004A1CB0 - 0x004A1D14 (100 bytes, 27 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A1CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A1CB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A1CB8u); RECOMP_ABI_CALL(0x0049E150u, sub_0049E150); /* call 0x0049E150 */

loc_004A1CB8: ;
    ecx = esi + 0x30;
    MEM32(esi) = 0x641C24;
    PUSH32(esp, 0x004A1CC6u); RECOMP_ABI_CALL(0x004A1C60u, sub_004A1C60); /* call 0x004A1C60 */

loc_004A1CC6: ;
    eax = MEM32(0x698578);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A1CFC; /* jne: not equal / not zero */

loc_004A1CCF: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x640C58);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x004A1CDDu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_004A1CDD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A1CF2; /* je: equal / zero */

loc_004A1CE4: ;
    ecx = eax;
    PUSH32(esp, 0x004A1CEBu); RECOMP_ABI_CALL(0x0049F830u, sub_0049F830); /* call 0x0049F830 */

loc_004A1CEB: ;
    MEM32(0x698578) = eax;
    goto loc_004A1CFC;

loc_004A1CF2: ;
    MEM32(0x698578) = 0;

loc_004A1CFC: ;
    MEM32(0x698584) = MEM32(0x698584) + 1;
    _fa = (uint32_t)(MEM32(0x698584)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x34) = 0;
    MEM32(esi + 0x38) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A1D20
 * Original: 0x004A1D20 - 0x004A1D3E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A1D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A1D20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A1D28u); RECOMP_ABI_CALL(0x004A1770u, sub_004A1770); /* call 0x004A1770 */

loc_004A1D28: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004A1D38; /* je: equal / zero */

loc_004A1D2F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004A1D35u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_004A1D35: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A1D38: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A1D40
 * Original: 0x004A1D40 - 0x004A1E08 (200 bytes, 72 insns)
 * Category: game_vehicle
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A1D40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A1D40: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A1D54; /* jne: not equal / not zero */

loc_004A1D4F: ;
    edi = 4;

loc_004A1D54: ;
    eax = MEM32(esp + 0x78);
    ecx = MEM32(esp + 0x74);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x78);
    PUSH32(esp, 0x641D04);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x004A1D71u); RECOMP_ABI_CALL(0x0049E1B0u, sub_0049E1B0); /* call 0x0049E1B0 */

loc_004A1D71: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x641CF4);
    edx = esp + 0x18;
    PUSH32(esp, 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A1D83u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A1D83: ;
    ecx = MEM32(0x698588);
    SET_LO8(eax, MEM8(ecx + 0xC));
    edi = ecx + 0xC;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004A1DAC; /* jne: not equal / not zero */

loc_004A1D98: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A1DA2u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_004A1DA2: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004A1DA9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A1DA6u); } /* indirect call */
    }

loc_004A1DA9: ;
    MEM8(edi) = 1;

loc_004A1DAC: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x004A1DB2u); RECOMP_ABI_CALL(0x004690F0u, sub_004690F0); /* call 0x004690F0 */

loc_004A1DB2: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x48);
    edx = MEM32(ecx + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0x62F3B4);
    MEM32(esi + 0x3C) = edx;
    PUSH32(esp, 0x004A1DCAu); RECOMP_ABI_CALL(0x005E11E0u, sub_005E11E0); /* call 0x005E11E0 */

loc_004A1DCA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebp);
    MEM32(esi + 0x34) = eax;
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_004A1E00; /* je: equal / zero */

loc_004A1DD6: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x004A1DDFu); RECOMP_ABI_CALL(0x005E0520u, sub_005E0520); /* call 0x005E0520 */

loc_004A1DDF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x64149C);
    PUSH32(esp, 0x004A1DEDu); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_004A1DED: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x38) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004A1E00; /* je: equal / zero */

loc_004A1DF7: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x004A1E00u); RECOMP_ABI_CALL(0x0049E240u, sub_0049E240); /* call 0x0049E240 */

loc_004A1E00: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004A1E10
 * Original: 0x004A1E10 - 0x004A1FEB (475 bytes, 170 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004A1E10(void)
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

loc_004A1E10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_004A1FE1; /* je: equal / zero */

loc_004A1E26: ;
    eax = MEM32(esi + 0xC);
    edi = MEM32(0x69858C);
    ebx = MEM32(0x698588);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A1E3Bu); RECOMP_ABI_CALL(0x004690F0u, sub_004690F0); /* call 0x004690F0 */

loc_004A1E3B: ;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + 0x48);
    eax = MEM32(edx + 0x18);
    ecx = MEM32(eax + 0x18);
    MEM32(ebp + -16) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp + -92;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A1E55u); RECOMP_ABI_CALL(0x005E1AF0u, sub_005E1AF0); /* call 0x005E1AF0 */

loc_004A1E55: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x40) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_004A1E74; /* jne: not equal / not zero */

loc_004A1E5F: ;
    PUSH32(esp, 0x641D10);
    edx = ebp + -28;
    PUSH32(esp, 0xA);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A1E6Fu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A1E6F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004A1EA3;

loc_004A1E74: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A1E8E; /* jne: not equal / not zero */

loc_004A1E79: ;
    PUSH32(esp, 0x641D0C);
    eax = ebp + -28;
    PUSH32(esp, 0xA);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A1E89u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A1E89: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004A1EA3;

loc_004A1E8E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x63FB3C);
    ecx = ebp + -28;
    PUSH32(esp, 0xA);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A1EA0u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A1EA0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A1EA3: ;
    PUSH32(esp, 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A1EAAu); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_004A1EAA: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A1EB1u); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_004A1EB1: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A1EB8u); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_004A1EB8: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A1EC4u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_004A1EC4: ;
    ecx = MEM32(esi + 0x3C);
    fp_push(MEMF(ecx + 0x64)); /* fld float */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004A1F5D; /* jne: not equal / not zero */

loc_004A1EDB: ;
    edx = MEM32(ecx + 0x84);
    _fa = (uint32_t)(MEM32(edx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x18), 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004A1F5D; /* jl: less (signed <) */

loc_004A1EE7: ;
    eax = MEM32(esi + 0x38);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A1EF0u); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_004A1EF0: ;
    edx = MEM32(edi + 0x10);
    eax = MEM32(edi + 0x1C);
    ecx = MEM32(edi + 0x18);
    MEM32(ebp + -8) = edx;
    edx = MEM32(edi + 0x14);
    MEM32(ebp + -4) = edx;
    edx = MEM32(esi + 0x14);
    fp_push((double)SMEM32(ebp + -4)); /* fild */
    PUSH32(esp, 0);
    MEM32(ebp + -12) = edx;
    edx = MEM32(esi + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x10)); /* fmul dword ptr [ebx + 0x10] */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(ebp + -12)); /* fiadd dword ptr [ebp - 0xc] */
    MEM32(ebp + -16) = edx;
    edx = MEM32(ebp + -8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    edx = MEM32(ebp + -4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A1F32u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A1F32: ;
    fp_push((double)SMEM32(ebp + -8)); /* fild */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x10)); /* fmul dword ptr [ebx + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(ebp + -16)); /* fiadd dword ptr [ebp - 0x10] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A1F41u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A1F41: ;
    ecx = MEM32(ebp + -16);
    PUSH32(esp, eax);
    eax = MEM32(ebp + -12);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A1F4Fu); RECOMP_ABI_CALL(0x005EF6F0u, sub_005EF6F0); /* call 0x005EF6F0 */

loc_004A1F4F: ;
    edx = edi + 0x38;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A1F58u); RECOMP_ABI_CALL(0x0044F880u, sub_0044F880); /* call 0x0044F880 */

loc_004A1F58: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004A1F69;

loc_004A1F5D: ;
    eax = edi + 0x28;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A1F66u); RECOMP_ABI_CALL(0x0044F880u, sub_0044F880); /* call 0x0044F880 */

loc_004A1F66: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A1F69: ;
    MEM32(ebp + -36) = eax;
    MEM32(ebp + -92) = MEM32(ebp + -92) | 0x80;
    _fa = (uint32_t)(MEM32(ebp + -92)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ebp + -28;
    edx = eax + 1;
    /* nop */

loc_004A1F80: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A1F80; /* jne: not equal / not zero */

loc_004A1F87: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -16) = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A1F9Au); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_004A1F9A: ;
    edx = MEM32(ebx + 0x10);
    eax = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ebp + -92;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edx;
    edx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebp + -28;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A1FB9u); RECOMP_ABI_CALL(0x004056C0u, sub_004056C0); /* call 0x004056C0 */

loc_004A1FB9: ;
    fp_push((double)SMEM32(edi + 0x24)); /* fild */
    ecx = MEM32(esi + 0x34);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x10)); /* fmul dword ptr [ebx + 0x10] */
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esi + 0x14)); /* fiadd dword ptr [esi + 0x14] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(edi + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x10)); /* fmul dword ptr [ebx + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esi + 0x10)); /* fiadd dword ptr [esi + 0x10] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A1FE1u); RECOMP_ABI_CALL(0x005DF5B0u, sub_005DF5B0); /* call 0x005DF5B0 */

loc_004A1FE1: ;
    esp = ebp + -104;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_004A1FF0
 * Original: 0x004A1FF0 - 0x004A2008 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A1FF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A1FF0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x20;
    MEM32(eax + 4) = 0x20;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_004A2010
 * Original: 0x004A2010 - 0x004A20EA (218 bytes, 75 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A2010(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A2010: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xB4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x641D60);
    eax = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x004A2037u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A2037: ;
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
    PUSH32(esp, 0x004A2054u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A2054: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x641D44);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A2069u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A2069: ;
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
    PUSH32(esp, 0x004A2082u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A2082: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x641D2C);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A2097u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A2097: ;
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
    PUSH32(esp, 0x004A20B0u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A20B0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x641D14);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A20C5u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A20C5: ;
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
    PUSH32(esp, 0x004A20DEu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A20DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004A20F0
 * Original: 0x004A20F0 - 0x004A2109 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A20F0(void)
{

loc_004A20F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A20F8u); RECOMP_ABI_CALL(0x0049EB40u, sub_0049EB40); /* call 0x0049EB40 */

loc_004A20F8: ;
    MEM32(esi) = 0x641D78;
    MEM32(esi + 0x10) = 0x3F800000;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A2110
 * Original: 0x004A2110 - 0x004A2116 (6 bytes, 2 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A2110(void)
{

loc_004A2110: ;
    eax = 0x641D98;
    esp += 4; return; /* ret */

}

/**
 * sub_004A2120
 * Original: 0x004A2120 - 0x004A2196 (118 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A2120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A2120: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x641DB4;
    if (CMP_EQ(_fa, _fb)) goto loc_004A2139; /* je: equal / zero */

loc_004A2130: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A2136u); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_004A2136: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A2139: ;
    eax = MEM32(esi + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A2142u); RECOMP_ABI_CALL(0x005E1010u, sub_005E1010); /* call 0x005E1010 */

loc_004A2142: ;
    eax = MEM32(0x698594);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x698594) = eax;
    if ((_fa != 0)) goto loc_004A216C; /* jne: not equal / not zero */

loc_004A2152: ;
    ecx = MEM32(0x698588);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A2162; /* je: equal / zero */

loc_004A215C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004A2162u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A2160u); } /* indirect call */
    }

loc_004A2162: ;
    MEM32(0x698588) = 0;

loc_004A216C: ;
    MEM32(0x698590) = MEM32(0x698590) - 1;
    _fa = (uint32_t)(MEM32(0x698590)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004A218E; /* jne: not equal / not zero */

loc_004A2174: ;
    ecx = MEM32(0x69858C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A2184; /* je: equal / zero */

loc_004A217E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004A2184u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A2182u); } /* indirect call */
    }

loc_004A2184: ;
    MEM32(0x69858C) = 0;

loc_004A218E: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0049E1A0(); return; /* tail jmp 0x0049E1A0 */

}

/**
 * sub_004A21A0
 * Original: 0x004A21A0 - 0x004A21A6 (6 bytes, 2 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A21A0(void)
{

loc_004A21A0: ;
    eax = 0x641DF0;
    esp += 4; return; /* ret */

}

/**
 * sub_004A21B0
 * Original: 0x004A21B0 - 0x004A2213 (99 bytes, 30 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A21B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A21B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A21B8u); RECOMP_ABI_CALL(0x0049EB40u, sub_0049EB40); /* call 0x0049EB40 */

loc_004A21B8: ;
    ecx = esi + 0x10;
    MEM32(esi) = 0x641DF8;
    PUSH32(esp, 0x004A21C6u); RECOMP_ABI_CALL(0x004A1FF0u, sub_004A1FF0); /* call 0x004A1FF0 */

loc_004A21C6: ;
    eax = 0x3F800000;
    MEM32(esi + 0x20) = 6;
    MEM32(esi + 0x24) = 0;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = eax;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A220F; /* jne: not equal / not zero */

loc_004A21F8: ;
    PUSH32(esp, 0x641D04);
    ecx = esi;
    PUSH32(esp, 0x004A2204u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_004A2204: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004A220Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A2208u); } /* indirect call */
    }

loc_004A220B: ;
    MEM8(esi + 0xC) = 1;

loc_004A220F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A2220
 * Original: 0x004A2220 - 0x004A2226 (6 bytes, 2 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A2220(void)
{

loc_004A2220: ;
    eax = 0x641E18;
    esp += 4; return; /* ret */

}

/**
 * sub_004A2230
 * Original: 0x004A2230 - 0x004A22A9 (121 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A2230(void)
{

loc_004A2230: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004A223Eu); RECOMP_ABI_CALL(0x00406990u, sub_00406990); /* call 0x00406990 */

loc_004A223E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x641E34);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x004A2254u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A2254: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x641E28);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x004A226Au); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A226A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x6415B8);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A2280u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A2280: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, 0x641628);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A2296u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A2296: ;
    PUSH32(esp, 0x641830);
    PUSH32(esp, edi);
    ecx = esi + 0x10;
    PUSH32(esp, 0x004A22A4u); RECOMP_ABI_CALL(0x004A2010u, sub_004A2010); /* call 0x004A2010 */

loc_004A22A4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A22B0
 * Original: 0x004A22B0 - 0x004A234A (154 bytes, 47 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A22B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A22B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004A22B9u); RECOMP_ABI_CALL(0x0049E150u, sub_0049E150); /* call 0x0049E150 */

loc_004A22B9: ;
    MEM32(esi) = 0x641DB4;
    eax = MEM32(0x69858C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A22F3; /* jne: not equal / not zero */

loc_004A22CA: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x640C58);
    PUSH32(esp, 0x48);
    PUSH32(esp, 0x004A22D8u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_004A22D8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A22ED; /* je: equal / zero */

loc_004A22DF: ;
    ecx = eax;
    PUSH32(esp, 0x004A22E6u); RECOMP_ABI_CALL(0x004A21B0u, sub_004A21B0); /* call 0x004A21B0 */

loc_004A22E6: ;
    MEM32(0x69858C) = eax;
    goto loc_004A22F3;

loc_004A22ED: ;
    MEM32(0x69858C) = edi;

loc_004A22F3: ;
    ecx = MEM32(0x698590);
    eax = MEM32(0x698588);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(0x698590) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004A2332; /* jne: not equal / not zero */

loc_004A2309: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x640C58);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x004A2317u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_004A2317: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A232C; /* je: equal / zero */

loc_004A231E: ;
    ecx = eax;
    PUSH32(esp, 0x004A2325u); RECOMP_ABI_CALL(0x004A20F0u, sub_004A20F0); /* call 0x004A20F0 */

loc_004A2325: ;
    MEM32(0x698588) = eax;
    goto loc_004A2332;

loc_004A232C: ;
    MEM32(0x698588) = edi;

loc_004A2332: ;
    MEM32(0x698594) = MEM32(0x698594) + 1;
    _fa = (uint32_t)(MEM32(0x698594)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x34) = edi;
    MEM32(esi + 0x38) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x40) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A2350
 * Original: 0x004A2350 - 0x004A236E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A2350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A2350: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A2358u); RECOMP_ABI_CALL(0x004A2120u, sub_004A2120); /* call 0x004A2120 */

loc_004A2358: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004A2368; /* je: equal / zero */

loc_004A235F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004A2365u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_004A2365: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A2368: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A2370
 * Original: 0x004A2370 - 0x004A23D9 (105 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A2370(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A2370: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A2378u); RECOMP_ABI_CALL(0x005E33D0u, sub_005E33D0); /* call 0x005E33D0 */

loc_004A2378: ;
    eax = 0x3F800000;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi) = 0x641E40;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 0xC) = LO8(ecx);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = ecx;
    MEM32(esi + 0x24) = ecx;
    MEM32(esi + 0x28) = ecx;
    edx = 0x3F000000;
    MEM32(esi + 0x2C) = edx;
    MEM32(esi + 0x30) = edx;
    MEM32(esi + 0x34) = edx;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0x5C) = eax;
    MEM32(esi + 0x60) = eax;
    MEM32(esi + 0x64) = eax;
    MEM32(esi + 0x68) = ecx;
    MEM32(esi + 0x6C) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A23E0
 * Original: 0x004A23E0 - 0x004A23E6 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A23E0(void)
{

loc_004A23E0: ;
    eax = 0x641E60;
    esp += 4; return; /* ret */

}

/**
 * sub_004A23F0
 * Original: 0x004A23F0 - 0x004A24A2 (178 bytes, 55 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A23F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A23F0: ;
    edx = MEM32(0x6C3308);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x70);
    eax = edi + edi * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ecx;
    ecx = MEM32(eax + 0x6C3450);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x641EB4);
    eax = esp + 0x14;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A2420u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A2420: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x004A242Fu); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_004A242F: ;
    PUSH32(esp, 0x112);
    PUSH32(esp, 0);
    PUSH32(esp, 0x641EA4);
    MEM32(esi + 0x10) = edi;
    PUSH32(esp, 0x004A2443u); RECOMP_ABI_CALL(0x005F3E20u, sub_005F3E20); /* call 0x005F3E20 */

loc_004A2443: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_004A245F; /* jne: not equal / not zero */

loc_004A244D: ;
    PUSH32(esp, 0x641EA4);
    PUSH32(esp, 0x641E78);
    PUSH32(esp, 0x004A245Cu); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_004A245C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A245F: ;
    PUSH32(esp, 0x004A2464u); RECOMP_ABI_CALL(0x005ED990u, sub_005ED990); /* call 0x005ED990 */

loc_004A2464: ;
    PUSH32(esp, 0x41200000);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x42200000);
    ecx = eax;
    MEM32(esi + 0x24) = eax;
    PUSH32(esp, 0x004A247Fu); RECOMP_ABI_CALL(0x005FA880u, sub_005FA880); /* call 0x005FA880 */

loc_004A247F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x641E6C);
    PUSH32(esp, 0x004A248Du); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_004A248D: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEM32(esi + 0x28) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004A249Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A2497u); } /* indirect call */
    }

loc_004A249A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A24B0
 * Original: 0x004A24B0 - 0x004A24B5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A24B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A24B0: ;
    g_seh_ebp = ebp; sub_00499910(); return; /* tail jmp 0x00499910 */

}

/**
 * sub_004A24C0
 * Original: 0x004A24C0 - 0x004A2599 (217 bytes, 81 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A24C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A24C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004A24CEu); RECOMP_ABI_CALL(0x00406990u, sub_00406990); /* call 0x00406990 */

loc_004A24CE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x641F28);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A24E4u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A24E4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x641F14);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A24FAu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A24FA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x640AD0);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A2510u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A2510: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x641F04);
    PUSH32(esp, 8);
    ecx = edi;
    PUSH32(esp, 0x004A2526u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A2526: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x641EF4);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A253Cu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A253C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, 0x641EE8);
    PUSH32(esp, 8);
    ecx = edi;
    PUSH32(esp, 0x004A2552u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A2552: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, 0x641EDC);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A2568u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A2568: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x68;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x641ED4);
    PUSH32(esp, 7);
    ecx = edi;
    PUSH32(esp, 0x004A257Eu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A257E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x58;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x641EC8);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A2594u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A2594: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A25A0
 * Original: 0x004A25A0 - 0x004A25EA (74 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A25A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A25A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi) = 0x641E40;
    if (CMP_EQ(_fa, _fb)) goto loc_004A25C5; /* je: equal / zero */

loc_004A25B1: ;
    MEM32(edi) = MEM32(edi) - 1;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004A25C5; /* jne: not equal / not zero */

loc_004A25B5: ;
    ecx = edi;
    PUSH32(esp, 0x004A25BCu); RECOMP_ABI_CALL(0x005FA390u, sub_005FA390); /* call 0x005FA390 */

loc_004A25BC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004A25C2u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_004A25C2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A25C5: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A25D5; /* je: equal / zero */

loc_004A25CC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A25D2u); RECOMP_ABI_CALL(0x005F3D80u, sub_005F3D80); /* call 0x005F3D80 */

loc_004A25D2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A25D5: ;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A25DEu); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_004A25DE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005E3280(); return; /* tail jmp 0x005E3280 */

}

/**
 * sub_004A25F0
 * Original: 0x004A25F0 - 0x004A2B94 (1444 bytes, 336 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A25F0(void)
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

loc_004A25F0: ;
    _fb = (uint32_t)(0x138) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x138;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A2B8C; /* je: equal / zero */

loc_004A2604: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A2B8C; /* je: equal / zero */

loc_004A260F: ;
    eax = MEM32(0x697B88);
    ecx = MEM32(eax + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(0x8583A0);
    eax = esp + 0x80;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x004A2632u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A262Cu); } /* indirect call */
    }

loc_004A2632: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A2B8B; /* je: equal / zero */

loc_004A263A: ;
    edx = MEM32(0x85841C);
    SET_LO8(ecx, MEM8(0x674FCA));
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x4C) = LO8(ecx);
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, 0x858548);
    ecx = esp + 0x90;
    MEM8(esp + 0x4C) = LO8(edx);
    PUSH32(esp, 0x004A2664u); RECOMP_ABI_CALL(0x00457640u, sub_00457640); /* call 0x00457640 */

loc_004A2664: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A266Du); RECOMP_ABI_CALL(0x005F23A0u, sub_005F23A0); /* call 0x005F23A0 */

loc_004A266D: ;
    ecx = MEM32(edi + 0x178);
    edx = MEM32(edi + 0x174);
    eax = MEM32(edi + 0x170);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x16C);
    PUSH32(esp, edx);
    edx = MEM32(edi + 0x168);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x164);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A26A2u); RECOMP_ABI_CALL(0x005FAA80u, sub_005FAA80); /* call 0x005FAA80 */

loc_004A26A2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004A26ABu); RECOMP_ABI_CALL(0x005EE5A0u, sub_005EE5A0); /* call 0x005EE5A0 */

loc_004A26AB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xFF000000u);
    PUSH32(esp, 2);
    PUSH32(esp, 0x004A26BEu); RECOMP_ABI_CALL(0x005EF420u, sub_005EF420); /* call 0x005EF420 */

loc_004A26BE: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004A26C7u); RECOMP_ABI_CALL(0x005EE5A0u, sub_005EE5A0); /* call 0x005EE5A0 */

loc_004A26C7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004A26CEu); RECOMP_ABI_CALL(0x005EDF80u, sub_005EDF80); /* call 0x005EDF80 */

loc_004A26CE: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x004A26D5u); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_004A26D5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004A26DCu); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_004A26DC: ;
    PUSH32(esp, 0x6796F0);
    PUSH32(esp, 0x004A26E6u); RECOMP_ABI_CALL(0x005EE8D0u, sub_005EE8D0); /* call 0x005EE8D0 */

loc_004A26E6: ;
    eax = MEM32(esi + 0x28);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A27F0; /* je: equal / zero */

loc_004A26F4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A26FAu); RECOMP_ABI_CALL(0x005FB260u, sub_005FB260); /* call 0x005FB260 */

loc_004A26FA: ;
    PUSH32(esp, 4);
    PUSH32(esp, 5);
    PUSH32(esp, 0x004A2703u); RECOMP_ABI_CALL(0x005FB070u, sub_005FB070); /* call 0x005FB070 */

loc_004A2703: ;
    ecx = esi + 0x58;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004A270Cu); RECOMP_ABI_CALL(0x0045F8D0u, sub_0045F8D0); /* call 0x0045F8D0 */

loc_004A270C: ;
    MEM32(0x85B2A4) = 0x3F800000;
    MEM32(0x85B2B0) = 0x3F800000;
    fp_push(MEMF(esi + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x54)); /* fsub dword ptr [esi + 0x54] */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xC1200000u);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x68)); /* fadd dword ptr [esi + 0x68] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x004A2743u); RECOMP_ABI_CALL(0x0045CA70u, sub_0045CA70); /* call 0x0045CA70 */

loc_004A2743: ;
    MEM32(0x85B2A4) = 0x3F800000;
    MEM32(0x85B2B0) = 0;
    fp_push(MEMF(esi + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x6C)); /* fadd dword ptr [esi + 0x6c] */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xC1200000u);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x68)); /* fadd dword ptr [esi + 0x68] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x004A277Au); RECOMP_ABI_CALL(0x0045CA70u, sub_0045CA70); /* call 0x0045CA70 */

loc_004A277A: ;
    MEM32(0x85B2A4) = 0;
    MEM32(0x85B2B0) = 0x3F800000;
    fp_push(MEMF(esi + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x54)); /* fsub dword ptr [esi + 0x54] */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xC1200000u);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x54)); /* fsub dword ptr [esi + 0x54] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x004A27B1u); RECOMP_ABI_CALL(0x0045CA70u, sub_0045CA70); /* call 0x0045CA70 */

loc_004A27B1: ;
    MEM32(0x85B2A4) = 0;
    MEM32(0x85B2B0) = 0;
    fp_push(MEMF(esi + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x6C)); /* fadd dword ptr [esi + 0x6c] */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xC1200000u);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x54)); /* fsub dword ptr [esi + 0x54] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x004A27E8u); RECOMP_ABI_CALL(0x0045CA70u, sub_0045CA70); /* call 0x0045CA70 */

loc_004A27E8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004A27F0u); RECOMP_ABI_CALL(0x005FB150u, sub_005FB150); /* call 0x005FB150 */

loc_004A27F0: ;
    edx = esp + 0x8C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A27FDu); RECOMP_ABI_CALL(0x005EE8D0u, sub_005EE8D0); /* call 0x005EE8D0 */

loc_004A27FD: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004A2804u); RECOMP_ABI_CALL(0x005EDF80u, sub_005EDF80); /* call 0x005EDF80 */

loc_004A2804: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x004A280Bu); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_004A280B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004A2812u); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_004A2812: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xCC;
    PUSH32(esp, 0x004A2821u); RECOMP_ABI_CALL(0x005EDA70u, sub_005EDA70); /* call 0x005EDA70 */

loc_004A2821: ;
    eax = esi + 0x38;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0xD0) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0xD4) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0xD8) = ecx;
    eax = esi + 0x48;
    ecx = MEM32(eax);
    MEM32(esp + 0xDC) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x10C) = ecx;
    ecx = esp + 0x10C;
    MEM32(esp + 0xCC) = 3;
    MEM32(esp + 0xF0) = 0;
    MEM32(esp + 0xF4) = 0;
    MEM32(esp + 0xF8) = 0;
    MEM32(esp + 0xFC) = 0;
    MEM32(esp + 0xE0) = 0;
    MEM32(esp + 0xE4) = 0;
    MEM32(esp + 0xE8) = 0;
    MEM32(esp + 0xEC) = 0;
    MEM32(esp + 0x110) = edx;
    MEM32(esp + 0x114) = eax;
    PUSH32(esp, 0x004A28DAu); RECOMP_ABI_CALL(0x004572A0u, sub_004572A0); /* call 0x004572A0 */

loc_004A28DA: ;
    ecx = esp + 0xCC;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    MEM32(esp + 0x120) = 0;
    MEM32(esp + 0x128) = 0x3F800000;
    MEM32(esp + 0x12C) = 0;
    MEM32(esp + 0x130) = 0;
    MEM32(esp + 0x134) = 0;
    MEM32(esp + 0x138) = 0;
    PUSH32(esp, 0x004A292Bu); RECOMP_ABI_CALL(0x005EE940u, sub_005EE940); /* call 0x005EE940 */

loc_004A292B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004A2934u); RECOMP_ABI_CALL(0x005EE020u, sub_005EE020); /* call 0x005EE020 */

loc_004A2934: ;
    edx = esi + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A293Du); RECOMP_ABI_CALL(0x0045C9C0u, sub_0045C9C0); /* call 0x0045C9C0 */

loc_004A293D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A2943u); RECOMP_ABI_CALL(0x005EE760u, sub_005EE760); /* call 0x005EE760 */

loc_004A2943: ;
    fp_push(MEMF(esp + 0xD8)); /* fld float */
    eax = MEM32(esp + 0xA4);
    fp_push(MEMF(esp + 0xDC)); /* fld float */
    ecx = MEM32(esp + 0xA8);
    fp_push(MEMF(esp + 0xC4)); /* fld float */
    edx = MEM32(esp + 0xAC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x641F3C)); /* fmul dword ptr [0x641f3c] */
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esp + 0xB4);
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0xD4) - fp_top()); /* fsubr dword ptr [esp + 0xd4] */
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(esp + 0xB8);
    MEM32(esp + 0x38) = edx;
    edx = MEM32(esp + 0xBC);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(esp + 0xC4);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(esp + 0xC8);
    MEM32(esp + 0x44) = edx;
    edx = MEM32(esp + 0xCC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x38) = edx;
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x18;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x641F3C)); /* fmul dword ptr [0x641f3c] */
    ecx = esp + 0x54;
    fp_top() = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] - fp_top()); /* fsubr st(2) */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x641F3C)); /* fmul dword ptr [0x641f3c] */
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    fp_push(MEMF(esp + 0xA0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x40)); /* fadd dword ptr [esp + 0x40] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x44)); /* fadd dword ptr [esp + 0x44] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x004A2A3Fu); RECOMP_ABI_CALL(0x00419860u, sub_00419860); /* call 0x00419860 */

loc_004A2A3F: ;
    fp_push(MEMF(esi + 0x18)); /* fld float */
    ecx = esp + 0x80;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    edx = esp + 0x40;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    PUSH32(esp, edx);
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    ecx = esp + 0x20;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x44)); /* fadd dword ptr [esp + 0x44] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x48)); /* fadd dword ptr [esp + 0x48] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x4C)); /* fadd dword ptr [esp + 0x4c] */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x004A2A94u); RECOMP_ABI_CALL(0x00608410u, sub_00608410); /* call 0x00608410 */

loc_004A2A94: ;
    eax = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x004A2AA1u); RECOMP_ABI_CALL(0x00607C60u, sub_00607C60); /* call 0x00607C60 */

loc_004A2AA1: ;
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x630320)); /* fmul dword ptr [0x630320] */
    ecx = MEM32(esi + 0x18);
    fp_push(MEMF(esp + 0x54)); /* fld float */
    MEM32(esp + 8) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x630320)); /* fmul dword ptr [0x630320] */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x630320)); /* fmul dword ptr [0x630320] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    MEMF(esp + 0x134) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    edx = esp + 0x80;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    PUSH32(esp, edx);
    fp_push(MEMF(esp + 0x138)); /* fld float */
    eax = esp + 0x78;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x78)); /* fadd dword ptr [esp + 0x78] */
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    MEMF(esp + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x80)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(esp + 0x80) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x84)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x84) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x004A2B2Cu); RECOMP_ABI_CALL(0x00608410u, sub_00608410); /* call 0x00608410 */

loc_004A2B2C: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, ecx);
    ecx = esp + 0x54;
    PUSH32(esp, 0x004A2B39u); RECOMP_ABI_CALL(0x00607C60u, sub_00607C60); /* call 0x00607C60 */

loc_004A2B39: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004A2B40u); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_004A2B40: ;
    edx = esp + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A2B4Au); RECOMP_ABI_CALL(0x005EDB20u, sub_005EDB20); /* call 0x005EDB20 */

loc_004A2B4A: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A2B5Bu); RECOMP_ABI_CALL(0x005F25C0u, sub_005F25C0); /* call 0x005F25C0 */

loc_004A2B5B: ;
    PUSH32(esp, 0x674FD0);
    PUSH32(esp, 0x004A2B65u); RECOMP_ABI_CALL(0x005EDB00u, sub_005EDB00); /* call 0x005EDB00 */

loc_004A2B65: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004A2B6Cu); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_004A2B6C: ;
    ecx = MEM32(esp + 0x54);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004A2B76u); RECOMP_ABI_CALL(0x005EDF80u, sub_005EDF80); /* call 0x005EDF80 */

loc_004A2B76: ;
    edx = MEM32(esp + 0x54);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004A2B82u); RECOMP_ABI_CALL(0x005EE020u, sub_005EE020); /* call 0x005EE020 */

loc_004A2B82: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004A2B88u); RECOMP_ABI_CALL(0x005F23A0u, sub_005F23A0); /* call 0x005F23A0 */

loc_004A2B88: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A2B8B: ;
    POP32(esp, edi);

loc_004A2B8C: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x138) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x138;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004A2BA0
 * Original: 0x004A2BA0 - 0x004A2BBE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A2BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A2BA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A2BA8u); RECOMP_ABI_CALL(0x004A25A0u, sub_004A25A0); /* call 0x004A25A0 */

loc_004A2BA8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004A2BB8; /* je: equal / zero */

loc_004A2BAF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004A2BB5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_004A2BB5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A2BB8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A2BC0
 * Original: 0x004A2BC0 - 0x004A2C64 (164 bytes, 57 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A2BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A2BC0: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A2BD5; /* jne: not equal / not zero */

loc_004A2BD0: ;
    edi = 4;

loc_004A2BD5: ;
    eax = MEM32(esp + 0x7C);
    ecx = MEM32(esp + 0x78);
    edx = MEM32(esp + 0x74);
    PUSH32(esp, 0x641F58);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x004A2BF0u); RECOMP_ABI_CALL(0x0049E1B0u, sub_0049E1B0); /* call 0x0049E1B0 */

loc_004A2BF0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x641F40);
    eax = esp + 0x14;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A2C02u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A2C02: ;
    ecx = MEM32(0x698598);
    SET_LO8(eax, MEM8(ecx + 0xC));
    edi = ecx + 0xC;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004A2C2B; /* jne: not equal / not zero */

loc_004A2C17: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A2C21u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_004A2C21: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004A2C28u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A2C25u); } /* indirect call */
    }

loc_004A2C28: ;
    MEM8(edi) = 1;

loc_004A2C2B: ;
    ecx = MEM32(0x697B88);
    edx = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x62F39C);
    MEM32(esi + 0x78) = edx;
    PUSH32(esp, 0x004A2C43u); RECOMP_ABI_CALL(0x005E11E0u, sub_005E11E0); /* call 0x005E11E0 */

loc_004A2C43: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = eax;
    MEM32(esi + 0x74) = eax;
    PUSH32(esp, 0x004A2C52u); RECOMP_ABI_CALL(0x005E0520u, sub_005E0520); /* call 0x005E0520 */

loc_004A2C52: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x004A2C5Bu); RECOMP_ABI_CALL(0x0049E240u, sub_0049E240); /* call 0x0049E240 */

loc_004A2C5B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004A2C70
 * Original: 0x004A2C70 - 0x004A2C9B (43 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A2C70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A2C70: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x40) = eax;
    MEM32(ecx + 0x48) = eax;
    MEM32(ecx + 0x44) = 0x12C;
    MEM32(ecx + 0x4C) = 0xC8;
    eax = MEM32(ecx + 0x34);
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x34) = eax;
    eax = eax & 0xFFFFFF7Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x34) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_004A2CA0
 * Original: 0x004A2CA0 - 0x004A2CE5 (69 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A2CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A2CA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A2CA8u); RECOMP_ABI_CALL(0x0049EB40u, sub_0049EB40); /* call 0x0049EB40 */

loc_004A2CA8: ;
    eax = 0x3F000000;
    MEM32(esi) = 0x641F74;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = 0x3F4CCCCD;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A2CE1; /* jne: not equal / not zero */

loc_004A2CCA: ;
    PUSH32(esp, 0x641F68);
    ecx = esi;
    PUSH32(esp, 0x004A2CD6u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_004A2CD6: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004A2CDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A2CDAu); } /* indirect call */
    }

loc_004A2CDD: ;
    MEM8(esi + 0xC) = 1;

loc_004A2CE1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A2CF0
 * Original: 0x004A2CF0 - 0x004A2CF6 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A2CF0(void)
{

loc_004A2CF0: ;
    eax = 0x641F94;
    esp += 4; return; /* ret */

}

/**
 * sub_004A2D00
 * Original: 0x004A2D00 - 0x004A2D20 (32 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A2D00(void)
{

loc_004A2D00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A2D08u); RECOMP_ABI_CALL(0x0049EB40u, sub_0049EB40); /* call 0x0049EB40 */

loc_004A2D08: ;
    MEM32(esi) = 0x641FAC;
    MEM32(esi + 0x10) = 0x3F000000;
    MEM32(esi + 0x14) = 0x3F800000;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A2D20
 * Original: 0x004A2D20 - 0x004A2D26 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A2D20(void)
{

loc_004A2D20: ;
    eax = 0x641FCC;
    esp += 4; return; /* ret */

}

/**
 * sub_004A2D30
 * Original: 0x004A2D30 - 0x004A2DD7 (167 bytes, 52 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A2D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A2D30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004A2D39u); RECOMP_ABI_CALL(0x0049E150u, sub_0049E150); /* call 0x0049E150 */

loc_004A2D39: ;
    MEM32(esi) = 0x642008;
    eax = MEM32(0x6985A0);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A2D73; /* jne: not equal / not zero */

loc_004A2D4A: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x640C58);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x004A2D58u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_004A2D58: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A2D6D; /* je: equal / zero */

loc_004A2D5F: ;
    ecx = eax;
    PUSH32(esp, 0x004A2D66u); RECOMP_ABI_CALL(0x004A2CA0u, sub_004A2CA0); /* call 0x004A2CA0 */

loc_004A2D66: ;
    MEM32(0x6985A0) = eax;
    goto loc_004A2D73;

loc_004A2D6D: ;
    MEM32(0x6985A0) = edi;

loc_004A2D73: ;
    ecx = MEM32(0x69859C);
    eax = MEM32(0x698598);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(0x69859C) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004A2DB2; /* jne: not equal / not zero */

loc_004A2D89: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x640C58);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x004A2D97u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_004A2D97: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A2DAC; /* je: equal / zero */

loc_004A2D9E: ;
    ecx = eax;
    PUSH32(esp, 0x004A2DA5u); RECOMP_ABI_CALL(0x004A2D00u, sub_004A2D00); /* call 0x004A2D00 */

loc_004A2DA5: ;
    MEM32(0x698598) = eax;
    goto loc_004A2DB2;

loc_004A2DAC: ;
    MEM32(0x698598) = edi;

loc_004A2DB2: ;
    eax = MEM32(0x6985A4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi + 0x34;
    MEM32(0x6985A4) = eax;
    PUSH32(esp, 0x004A2DC5u); RECOMP_ABI_CALL(0x005E1AF0u, sub_005E1AF0); /* call 0x005E1AF0 */

loc_004A2DC5: ;
    ecx = esi;
    MEM32(esi + 0x74) = edi;
    MEM32(esi + 0x78) = edi;
    PUSH32(esp, 0x004A2DD2u); RECOMP_ABI_CALL(0x004A2C70u, sub_004A2C70); /* call 0x004A2C70 */

loc_004A2DD2: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A2DE0
 * Original: 0x004A2DE0 - 0x004A2DE6 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A2DE0(void)
{

loc_004A2DE0: ;
    eax = 0x642048;
    esp += 4; return; /* ret */

}

/**
 * sub_004A2DF0
 * Original: 0x004A2DF0 - 0x004A2E56 (102 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A2DF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A2DF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x74);
    PUSH32(esp, eax);
    MEM32(esi) = 0x642008;
    PUSH32(esp, 0x004A2E02u); RECOMP_ABI_CALL(0x005E1010u, sub_005E1010); /* call 0x005E1010 */

loc_004A2E02: ;
    eax = MEM32(0x6985A4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x6985A4) = eax;
    if ((_fa != 0)) goto loc_004A2E2C; /* jne: not equal / not zero */

loc_004A2E12: ;
    ecx = MEM32(0x698598);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A2E22; /* je: equal / zero */

loc_004A2E1C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004A2E22u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A2E20u); } /* indirect call */
    }

loc_004A2E22: ;
    MEM32(0x698598) = 0;

loc_004A2E2C: ;
    MEM32(0x69859C) = MEM32(0x69859C) - 1;
    _fa = (uint32_t)(MEM32(0x69859C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004A2E4E; /* jne: not equal / not zero */

loc_004A2E34: ;
    ecx = MEM32(0x6985A0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A2E44; /* je: equal / zero */

loc_004A2E3E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004A2E44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A2E42u); } /* indirect call */
    }

loc_004A2E44: ;
    MEM32(0x6985A0) = 0;

loc_004A2E4E: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0049E1A0(); return; /* tail jmp 0x0049E1A0 */

}

/**
 * sub_004A2E60
 * Original: 0x004A2E60 - 0x004A30A8 (584 bytes, 196 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004A2E60(void)
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

loc_004A2E60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x78);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_004A2E82; /* je: equal / zero */

loc_004A2E79: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A309B; /* jne: not equal / not zero */

loc_004A2E82: ;
    eax = MEM32(esi + 0xC);
    edi = MEM32(0x698598);
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x8C);
    ecx = edx + ecx + 0x88;
    edx = MEM32(0x6C32E8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ebp + -4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_004A2EC8; /* je: equal / zero */

loc_004A2EA7: ;
    ecx = MEM32(0x69585C);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A2EB3u); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_004A2EB3: ;
    eax = MEM32(eax + 0x24);
    ecx = MEM32(esi + 0x78);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    edx = MEM32(eax + ecx + 0x4F8);
    MEM32(ebp + -8) = edx;
    goto loc_004A2ECE;

loc_004A2EC8: ;
    eax = MEM32(ecx + 0x30);
    MEM32(ebp + -8) = eax;

loc_004A2ECE: ;
    PUSH32(esp, 0x64205C);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A2EDDu); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_004A2EDD: ;
    ebx = MEM32(eax + 8);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A2EE7u); RECOMP_ABI_CALL(0x004A2C70u, sub_004A2C70); /* call 0x004A2C70 */

loc_004A2EE7: ;
    ecx = MEM32(0x6985A0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A2EF6u); RECOMP_ABI_CALL(0x0044F880u, sub_0044F880); /* call 0x0044F880 */

loc_004A2EF6: ;
    edx = MEM32(ebp + -4);
    MEM32(esi + 0x6C) = eax;
    fp_push(MEMF(edi + 0x10)); /* fld float */
    eax = MEM32(edx + 0x10);
    MEMF(esi + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi + 0x34;
    MEM32(edi + 0x30) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3F800000);
    MEM32(edi + 4) = eax;
    MEM32(edi + 8) = eax;
    fp_push((double)SMEM32(esi + 0x14)); /* fild */
    ecx = MEM32(esi + 0x74);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esi + 0x10)); /* fild */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A2F3Cu); RECOMP_ABI_CALL(0x005DF5B0u, sub_005DF5B0); /* call 0x005DF5B0 */

loc_004A2F3C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x74);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ebp + -20;
    PUSH32(esp, edx);
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -12) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A2F60u); RECOMP_ABI_CALL(0x005E0E00u, sub_005E0E00); /* call 0x005E0E00 */

loc_004A2F60: ;
    ecx = MEM32(esi + 0x78);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x004A2F6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A2F65u); } /* indirect call */
    }

loc_004A2F6B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A2FC7; /* je: equal / zero */

loc_004A2F6F: ;
    ecx = MEM32(esi + 0x78);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x004A2F7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A2F74u); } /* indirect call */
    }

loc_004A2F7A: ;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x637618);
    ecx = ebp + -60;
    PUSH32(esp, 0x28);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A2F8Fu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A2F8F: ;
    eax = ebp + -60;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 1;

loc_004A2F98: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A2F98; /* jne: not equal / not zero */

loc_004A2F9F: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = eax + 1;
    eax = ebx + ebx;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A2FB2u); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_004A2FB2: ;
    eax = esp;
    PUSH32(esp, ebx);
    edx = ebp + -60;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A2FBFu); RECOMP_ABI_CALL(0x004056C0u, sub_004056C0); /* call 0x004056C0 */

loc_004A2FBF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004A3053;

loc_004A2FC7: ;
    eax = MEM32(ebp + -8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x642058);
    ecx = ebp + -60;
    PUSH32(esp, 0x28);
    PUSH32(esp, ecx);
    MEM16(ebp + -16) = 0x221E;
    MEM16(ebp + -14) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A2FE7u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A2FE7: ;
    eax = ebp + -60;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 1;

loc_004A2FF0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A2FF0; /* jne: not equal / not zero */

loc_004A2FF7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = eax + 1;
    eax = ebx + ebx;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A300Au); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_004A300A: ;
    eax = esp;
    PUSH32(esp, ebx);
    edx = ebp + -60;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A3017u); RECOMP_ABI_CALL(0x004056C0u, sub_004056C0); /* call 0x004056C0 */

loc_004A3017: ;
    ebx = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A3026u); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_004A3026: ;
    eax = esp;
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 5);
    PUSH32(esp, 0x6335D8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A303Au); RECOMP_ABI_CALL(0x004056C0u, sub_004056C0); /* call 0x004056C0 */

loc_004A303A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    edx = ebp + -140;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A304Au); RECOMP_ABI_CALL(0x00619A4Au, sub_00619A4A); /* call 0x00619A4A */

loc_004A304A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + -140;

loc_004A3053: ;
    ecx = MEM32(ebp + -4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 4) = edx;
    MEM32(edi + 8) = edx;
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    ecx = MEM32(ecx + 0x14);
    MEMF(edi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    MEM32(edi + 0x30) = ecx;
    edx = MEM32(esi + 0x14);
    edi = MEM32(ebp + -12);
    ecx = MEM32(esi + 0x74);
    PUSH32(esp, 0x3F800000);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F800000);
    MEM32(ebp + -4) = edx;
    fp_push((double)SMEM32(ebp + -4)); /* fild */
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esi + 0x10)); /* fild */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A309Bu); RECOMP_ABI_CALL(0x005DF5B0u, sub_005DF5B0); /* call 0x005DF5B0 */

loc_004A309B: ;
    esp = ebp + -152;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_004A30B0
 * Original: 0x004A30B0 - 0x004A30CE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A30B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A30B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A30B8u); RECOMP_ABI_CALL(0x004A2DF0u, sub_004A2DF0); /* call 0x004A2DF0 */

loc_004A30B8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004A30C8; /* je: equal / zero */

loc_004A30BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004A30C5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_004A30C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A30C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A30D0
 * Original: 0x004A30D0 - 0x004A31AF (223 bytes, 66 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A30D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A30D0: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A30E5; /* jne: not equal / not zero */

loc_004A30E0: ;
    edi = 4;

loc_004A30E5: ;
    eax = MEM32(esp + 0x7C);
    ecx = MEM32(esp + 0x78);
    edx = MEM32(esp + 0x74);
    PUSH32(esp, 0x64207C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x004A3100u); RECOMP_ABI_CALL(0x0049E1B0u, sub_0049E1B0); /* call 0x0049E1B0 */

loc_004A3100: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x642064);
    eax = esp + 0x14;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A3112u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A3112: ;
    ecx = MEM32(0x6985A8);
    SET_LO8(eax, MEM8(ecx + 0xC));
    edi = ecx + 0xC;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebp = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004A313C; /* jne: not equal / not zero */

loc_004A3127: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A3131u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_004A3131: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004A3139u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A3136u); } /* indirect call */
    }

loc_004A3139: ;
    MEM8(edi) = 1;

loc_004A313C: ;
    ecx = MEM32(0x697B88);
    edx = MEM32(ecx + 4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x62F39C);
    MEM32(esi + 0xA4) = edx;
    PUSH32(esp, 0x004A3158u); RECOMP_ABI_CALL(0x005E11E0u, sub_005E11E0); /* call 0x005E11E0 */

loc_004A3158: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = eax;
    MEM32(esi + 0x74) = eax;
    PUSH32(esp, 0x004A3167u); RECOMP_ABI_CALL(0x005E0520u, sub_005E0520); /* call 0x005E0520 */

loc_004A3167: ;
    eax = MEM32(esi + 0xA4);
    ecx = MEM32(eax + 0x544);
    MEM32(esi + 0x78) = ecx;
    PUSH32(esp, 1);
    ecx = esi;
    MEM32(esi + 0x9C) = edi;
    MEM32(esi + 0x94) = edi;
    MEM32(esi + 0x98) = 0x461C4000;
    MEM32(esi + 0x80) = 1;
    MEM32(esi + 0x7C) = 1;
    PUSH32(esp, 0x004A31A6u); RECOMP_ABI_CALL(0x0049E240u, sub_0049E240); /* call 0x0049E240 */

loc_004A31A6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004A31B0
 * Original: 0x004A31B0 - 0x004A31DD (45 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A31B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A31B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 1;
    MEM32(ecx + 0x9C) = eax;
    MEM32(ecx + 0x94) = eax;
    MEM32(ecx + 0x98) = 0x461C4000;
    MEM32(ecx + 0x80) = edx;
    MEM32(ecx + 0x7C) = edx;
    MEM8(ecx + 0xA0) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_004A31E0
 * Original: 0x004A31E0 - 0x004A32F5 (277 bytes, 82 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_004A31E0(void)
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

loc_004A31E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A31E9u); RECOMP_ABI_CALL(0x005C3530u, sub_005C3530); /* call 0x005C3530 */

loc_004A31E9: ;
    eax = MEM32(esi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004A32F2; /* jle: less or equal (signed <=) */

loc_004A31F5: ;
    ecx = MEM32(0x6C38A4);
    fp_push(MEMF(0x63F2A0)); /* fld float */
    edx = MEM32(ecx + 0xC);
    ecx = MEM32(esi + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x8C);
    MEM32(esp + 4) = edx;
    edx = MEM32(esi + 0xA4);
    ecx = ecx + edx + 0x88;
    ecx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004A3228; /* jle: less or equal (signed <=) */

loc_004A3225: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004A3228: ;
    edx = MEM32(esi + 0x80);
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esi + 0x7C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004A326D; /* je: equal / zero */

loc_004A3237: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004A326D; /* jne: not equal / not zero */

loc_004A3248: ;
    PUSH32(esp, edx);
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x642088);
    PUSH32(esp, 0x004A3256u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_004A3256: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    eax = MEM32(esp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x9C)); /* fsub dword ptr [esi + 0x9c] */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x9C) = eax;

loc_004A326D: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(0x697B88);
    eax = MEM32(edx + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x8C);
    _fa = (uint32_t)(MEM8(ecx + eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A32AB; /* jne: not equal / not zero */

loc_004A3286: ;
    ecx = MEM32(0x6C38A4);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A3299; /* je: equal / zero */

loc_004A3294: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A32AB; /* jne: not equal / not zero */

loc_004A3299: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x9C)); /* fsub dword ptr [esi + 0x9c] */
    MEMF(esi + 0x94) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_004A32B3;

loc_004A32AB: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x94)); /* fld float */

loc_004A32B3: ;
    ecx = MEM32(esi + 0x7C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004A32F0; /* jle: less or equal (signed <=) */

loc_004A32BB: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x98)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esi + 0x98] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004A32DE; /* jp: parity */

loc_004A32C8: ;
    MEMF(esi + 0x98) = (float)fp_top(); fp_pop(); /* fstp */
    MEM8(esi + 0xA0) = 1;
    MEM32(esi + 0x80) = ecx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004A32DE: ;
    MEM8(esi + 0xA0) = 0;
    fp_pop(); /* fstp st(0) */
    MEM32(esi + 0x80) = ecx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004A32F0: ;
    fp_pop(); /* fstp st(0) */

loc_004A32F2: ;
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
 * sub_004A3300
 * Original: 0x004A3300 - 0x004A3305 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A3300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A3300: ;
    g_seh_ebp = ebp; sub_004A2C70(); return; /* tail jmp 0x004A2C70 */

}

/**
 * sub_004A3310
 * Original: 0x004A3310 - 0x004A3369 (89 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A3310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A3310: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A334F; /* je: equal / zero */

loc_004A331A: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = esi + 0x88;
    PUSH32(esp, edi);
    ebx = esi + 0x84;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A3333u); RECOMP_ABI_CALL(0x00499B30u, sub_00499B30); /* call 0x00499B30 */

loc_004A3333: ;
    edx = MEM32(ebx);
    ecx = MEM32(esi + 0x8C);
    eax = MEM32(edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = edx;
    edx = MEM32(esi + 0x90);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004A334F: ;
    eax = MEM32(esi + 0x8C);
    ecx = MEM32(esi + 0x90);
    MEM32(esi + 0x84) = eax;
    MEM32(esi + 0x88) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A3370
 * Original: 0x004A3370 - 0x004A33B5 (69 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A3370(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A3370: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004A337Eu); RECOMP_ABI_CALL(0x0049E2A0u, sub_0049E2A0); /* call 0x0049E2A0 */

loc_004A337E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x8C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6420AC);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x004A3397u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A3397: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x90;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x6420A0);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x004A33B0u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A33B0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A33C0
 * Original: 0x004A33C0 - 0x004A33D0 (16 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A33C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A33C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A33C8u); RECOMP_ABI_CALL(0x0049E2E0u, sub_0049E2E0); /* call 0x0049E2E0 */

loc_004A33C8: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004A3310(); return; /* tail jmp 0x004A3310 */

}

/**
 * sub_004A33D0
 * Original: 0x004A33D0 - 0x004A3415 (69 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A33D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A33D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A33D8u); RECOMP_ABI_CALL(0x0049EB40u, sub_0049EB40); /* call 0x0049EB40 */

loc_004A33D8: ;
    eax = 0x3F000000;
    MEM32(esi) = 0x6420C4;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = 0x3F4CCCCD;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A3411; /* jne: not equal / not zero */

loc_004A33FA: ;
    PUSH32(esp, 0x6420B8);
    ecx = esi;
    PUSH32(esp, 0x004A3406u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_004A3406: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004A340Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A340Au); } /* indirect call */
    }

loc_004A340D: ;
    MEM8(esi + 0xC) = 1;

loc_004A3411: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A3420
 * Original: 0x004A3420 - 0x004A3426 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A3420(void)
{

loc_004A3420: ;
    eax = 0x6420E4;
    esp += 4; return; /* ret */

}

/**
 * sub_004A3430
 * Original: 0x004A3430 - 0x004A3450 (32 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A3430(void)
{

loc_004A3430: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A3438u); RECOMP_ABI_CALL(0x0049EB40u, sub_0049EB40); /* call 0x0049EB40 */

loc_004A3438: ;
    MEM32(esi) = 0x6420F8;
    MEM32(esi + 0x10) = 0x3F000000;
    MEM32(esi + 0x14) = 0x3F800000;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A3450
 * Original: 0x004A3450 - 0x004A3456 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A3450(void)
{

loc_004A3450: ;
    eax = 0x642118;
    esp += 4; return; /* ret */

}

/**
 * sub_004A3460
 * Original: 0x004A3460 - 0x004A3532 (210 bytes, 58 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A3460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A3460: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A3469u); RECOMP_ABI_CALL(0x0049E150u, sub_0049E150); /* call 0x0049E150 */

loc_004A3469: ;
    MEM32(esi) = 0x642138;
    eax = MEM32(0x6985B0);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A34A3; /* jne: not equal / not zero */

loc_004A347A: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x640C58);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x004A3488u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_004A3488: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A349D; /* je: equal / zero */

loc_004A348F: ;
    ecx = eax;
    PUSH32(esp, 0x004A3496u); RECOMP_ABI_CALL(0x004A33D0u, sub_004A33D0); /* call 0x004A33D0 */

loc_004A3496: ;
    MEM32(0x6985B0) = eax;
    goto loc_004A34A3;

loc_004A349D: ;
    MEM32(0x6985B0) = ebx;

loc_004A34A3: ;
    ecx = MEM32(0x6985AC);
    eax = MEM32(0x6985A8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(0x6985AC) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004A34E2; /* jne: not equal / not zero */

loc_004A34B9: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x640C58);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x004A34C7u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_004A34C7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A34DC; /* je: equal / zero */

loc_004A34CE: ;
    ecx = eax;
    PUSH32(esp, 0x004A34D5u); RECOMP_ABI_CALL(0x004A3430u, sub_004A3430); /* call 0x004A3430 */

loc_004A34D5: ;
    MEM32(0x6985A8) = eax;
    goto loc_004A34E2;

loc_004A34DC: ;
    MEM32(0x6985A8) = ebx;

loc_004A34E2: ;
    eax = MEM32(0x6985B4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi + 0x34;
    MEM32(0x6985B4) = eax;
    PUSH32(esp, 0x004A34F5u); RECOMP_ABI_CALL(0x005E1AF0u, sub_005E1AF0); /* call 0x005E1AF0 */

loc_004A34F5: ;
    ecx = esi;
    MEM32(esi + 0x74) = ebx;
    MEM32(esi + 0x84) = ebx;
    MEM32(esi + 0x88) = ebx;
    MEM32(esi + 0x8C) = ebx;
    MEM32(esi + 0x90) = ebx;
    MEM32(esi + 0xA4) = ebx;
    PUSH32(esp, 0x004A351Du); RECOMP_ABI_CALL(0x004A2C70u, sub_004A2C70); /* call 0x004A2C70 */

loc_004A351D: ;
    MEM8(esi + 0xA0) = LO8(ebx);
    MEM32(esi + 0x98) = 0x461C4000;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004A3540
 * Original: 0x004A3540 - 0x004A3546 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A3540(void)
{

loc_004A3540: ;
    eax = 0x64217C;
    esp += 4; return; /* ret */

}

/**
 * sub_004A3550
 * Original: 0x004A3550 - 0x004A35B6 (102 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A3550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A3550: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x74);
    PUSH32(esp, eax);
    MEM32(esi) = 0x642138;
    PUSH32(esp, 0x004A3562u); RECOMP_ABI_CALL(0x005E1010u, sub_005E1010); /* call 0x005E1010 */

loc_004A3562: ;
    eax = MEM32(0x6985B4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x6985B4) = eax;
    if ((_fa != 0)) goto loc_004A358C; /* jne: not equal / not zero */

loc_004A3572: ;
    ecx = MEM32(0x6985A8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A3582; /* je: equal / zero */

loc_004A357C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004A3582u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A3580u); } /* indirect call */
    }

loc_004A3582: ;
    MEM32(0x6985A8) = 0;

loc_004A358C: ;
    MEM32(0x6985AC) = MEM32(0x6985AC) - 1;
    _fa = (uint32_t)(MEM32(0x6985AC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004A35AE; /* jne: not equal / not zero */

loc_004A3594: ;
    ecx = MEM32(0x6985B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A35A4; /* je: equal / zero */

loc_004A359E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004A35A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A35A2u); } /* indirect call */
    }

loc_004A35A4: ;
    MEM32(0x6985B0) = 0;

loc_004A35AE: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0049E1A0(); return; /* tail jmp 0x0049E1A0 */

}

/**
 * sub_004A35C0
 * Original: 0x004A35C0 - 0x004A39F3 (1075 bytes, 357 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004A35C0(void)
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

loc_004A35C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xBC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xBC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_004A39E6; /* je: equal / zero */

loc_004A35D9: ;
    eax = MEM32(esi + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A39E6; /* je: equal / zero */

loc_004A35E7: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004A35FD; /* ja: above (unsigned >) */

loc_004A35EF: ;
    eax = ZX8(MEM8(eax + 0x4A39FC));
    { uint32_t _jt = MEM32(eax * 4 + 0x4A39F4); /* switch: 2 entries, 2 targets */
    if (_jt == 0x004A35FDu) goto loc_004A35FD;
    if (_jt == 0x004A39E6u) goto loc_004A39E6;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_004A35FD: ;
    _fa = (uint32_t)(MEM32(esi + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x78), 1 (32-bit) */
    ebx = MEM32(0x6985A8);
    if (CMP_LE(_fas, _fbs)) goto loc_004A39E6; /* jle: less or equal (signed <=) */

loc_004A360D: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A3614u); RECOMP_ABI_CALL(0x004A2C70u, sub_004A2C70); /* call 0x004A2C70 */

loc_004A3614: ;
    ecx = MEM32(0x6985B0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A3623u); RECOMP_ABI_CALL(0x0044F880u, sub_0044F880); /* call 0x0044F880 */

loc_004A3623: ;
    MEM32(esi + 0x6C) = eax;
    fp_push(MEMF(ebx + 0x10)); /* fld float */
    edx = MEM32(ebx + 0x10);
    MEMF(esi + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    edi = esi + 0x34;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x30) = edx;
    PUSH32(esp, 0x6421B0);
    ecx = 0x8582C8;
    MEM32(edi + 4) = eax;
    MEM32(edi + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A364Fu); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_004A364F: ;
    eax = MEM32(eax + 8);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(ebp + -4) = eax;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x74);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A366Bu); RECOMP_ABI_CALL(0x0044F910u, sub_0044F910); /* call 0x0044F910 */

loc_004A366B: ;
    edx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3F800000);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x3F800000);
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -8) = eax;
    PUSH32(esp, edx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x74);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A3692u); RECOMP_ABI_CALL(0x005E0E00u, sub_005E0E00); /* call 0x005E0E00 */

loc_004A3692: ;
    edx = MEM32(esi + 0x78);
    eax = MEM32(esi + 0x7C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x637618);
    ecx = ebp + -60;
    PUSH32(esp, 0x28);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A36AAu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A36AA: ;
    eax = ebp + -60;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + 1;

loc_004A36B3: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A36B3; /* jne: not equal / not zero */

loc_004A36BA: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A36CDu); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_004A36CD: ;
    edx = MEM32(ebp + -4);
    eax = esp;
    PUSH32(esp, edx);
    ecx = ebp + -60;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A36DDu); RECOMP_ABI_CALL(0x004056C0u, sub_004056C0); /* call 0x004056C0 */

loc_004A36DD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    MEM32(edi + 4) = ecx;
    MEM32(edi + 8) = ecx;
    fp_push(MEMF(ebx + 0x14)); /* fld float */
    edx = MEM32(ebx + 0x14);
    MEMF(edi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    MEM32(edi + 0x30) = edx;
    edx = MEM32(ebp + -8);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x74);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A370Du); RECOMP_ABI_CALL(0x0044F910u, sub_0044F910); /* call 0x0044F910 */

loc_004A370D: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A3714u); RECOMP_ABI_CALL(0x004A2C70u, sub_004A2C70); /* call 0x004A2C70 */

loc_004A3714: ;
    fp_push(MEMF(ebx + 0x10)); /* fld float */
    eax = MEM32(ebx + 0x10);
    edx = MEM32(esi + 0x88);
    MEMF(edi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edi + 0x30) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x6421A4);
    ecx = 0x8582C8;
    MEM32(ebp + -20) = edx;
    MEM32(edi + 4) = eax;
    MEM32(edi + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A3740u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_004A3740: ;
    eax = MEM32(eax + 8);
    ecx = MEM32(ebp + -20);
    edx = MEM32(esi + 0x84);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x74);
    PUSH32(esp, edx);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A375Fu); RECOMP_ABI_CALL(0x0044F910u, sub_0044F910); /* call 0x0044F910 */

loc_004A375F: ;
    eax = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x74);
    edx = ebp + -16;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A377Eu); RECOMP_ABI_CALL(0x005E0E00u, sub_005E0E00); /* call 0x005E0E00 */

loc_004A377E: ;
    fp_push(MEMF(esi + 0x94)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004A3838; /* jne: not equal / not zero */

loc_004A3795: ;
    fp_push(MEMF(esi + 0x94)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D40C)); /* fmul dword ptr [0x63d40c] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A37A6u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A37A6: ;
    fp_push(MEMF(esi + 0x94)); /* fld float */
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A37B4u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A37B4: ;
    fp_push(MEMF(esi + 0x94)); /* fld float */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x630308)); /* fmul dword ptr [0x630308] */
    ecx = 0x3C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebp + -12) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A37D0u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A37D0: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(ebp + -4);
    ecx = 0x63;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004A37F0; /* jle: less or equal (signed <=) */

loc_004A37E4: ;
    MEM32(ebp + -4) = ecx;
    eax = 0x3B;
    edx = ecx;
    goto loc_004A37F3;

loc_004A37F0: ;
    eax = MEM32(ebp + -12);

loc_004A37F3: ;
    PUSH32(esp, edx);
    edx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x63F2C8);
    eax = ebp + -60;
    PUSH32(esp, 0x28);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A3809u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A3809: ;
    eax = ebp + -60;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 1;

loc_004A3812: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A3812; /* jne: not equal / not zero */

loc_004A3819: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A382Cu); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_004A382C: ;
    ecx = MEM32(ebp + -4);
    eax = esp;
    PUSH32(esp, ecx);
    edx = ebp + -60;
    PUSH32(esp, edx);
    goto loc_004A384B;

loc_004A3838: ;
    eax = 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A3842u); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_004A3842: ;
    eax = esp;
    PUSH32(esp, 6);
    PUSH32(esp, 0x64219C);

loc_004A384B: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A3851u); RECOMP_ABI_CALL(0x004056C0u, sub_004056C0); /* call 0x004056C0 */

loc_004A3851: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = eax;
    edx = MEM32(ebp + -4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 4) = eax;
    MEM32(edi + 8) = eax;
    fp_push(MEMF(ebx + 0x14)); /* fld float */
    ecx = MEM32(ebx + 0x14);
    MEMF(edi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(ebp + -8);
    MEM32(edi + 0x30) = ecx;
    ecx = MEM32(ebp + -20);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x84);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x74);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A388Au); RECOMP_ABI_CALL(0x0044F910u, sub_0044F910); /* call 0x0044F910 */

loc_004A388A: ;
    eax = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x74);
    edx = ebp + -16;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A38A9u); RECOMP_ABI_CALL(0x005E0E00u, sub_005E0E00); /* call 0x005E0E00 */

loc_004A38A9: ;
    SET_LO8(eax, MEM8(esi + 0xA0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A39E6; /* je: equal / zero */

loc_004A38B7: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi + 0xA0) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_004A39E6; /* jle: less or equal (signed <=) */

loc_004A38CC: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A38D5u); RECOMP_ABI_CALL(0x004690F0u, sub_004690F0); /* call 0x004690F0 */

loc_004A38D5: ;
    fp_push(MEMF(esi + 0x98)); /* fld float */
    ecx = MEM32(eax + 0x50);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D40C)); /* fmul dword ptr [0x63d40c] */
    edi = MEM32(ecx + 0x3C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A38EFu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A38EF: ;
    fp_push(MEMF(esi + 0x98)); /* fld float */
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A38FCu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A38FC: ;
    fp_push(MEMF(esi + 0x98)); /* fld float */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x630308)); /* fmul dword ptr [0x630308] */
    ecx = 0x3C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebp + -12) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A3918u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A3918: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x63 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004A3933; /* jle: less or equal (signed <=) */

loc_004A3925: ;
    ebx = 0x63;
    eax = 0x3B;
    edx = ebx;
    goto loc_004A3936;

loc_004A3933: ;
    eax = MEM32(ebp + -12);

loc_004A3936: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64218C);
    edx = ebp + -60;
    PUSH32(esp, 0x28);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A3949u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A3949: ;
    eax = ebp + -60;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + 1;

loc_004A3952: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A3952; /* jne: not equal / not zero */

loc_004A3959: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
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
    PUSH32(esp, 0x004A396Cu); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_004A396C: ;
    eax = esp;
    PUSH32(esp, esi);
    ecx = ebp + -60;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A3979u); RECOMP_ABI_CALL(0x004056C0u, sub_004056C0); /* call 0x004056C0 */

loc_004A3979: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A3988u); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_004A3988: ;
    eax = esp;
    PUSH32(esp, 6);
    PUSH32(esp, 0x630298);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A3997u); RECOMP_ABI_CALL(0x004056C0u, sub_004056C0); /* call 0x004056C0 */

loc_004A3997: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x63F2A4);
    ecx = 0x8582C8;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A39ABu); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_004A39AB: ;
    edx = MEM32(eax + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    eax = ebp + -188;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A39BDu); RECOMP_ABI_CALL(0x00619A4Au, sub_00619A4A); /* call 0x00619A4A */

loc_004A39BD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp + -188;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xC);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A39D0u); RECOMP_ABI_CALL(0x0049D460u, sub_0049D460); /* call 0x0049D460 */

loc_004A39D0: ;
    PUSH32(esp, 0xC);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A39D9u); RECOMP_ABI_CALL(0x0049C4D0u, sub_0049C4D0); /* call 0x0049C4D0 */

loc_004A39D9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A39E6; /* jne: not equal / not zero */

loc_004A39DD: ;
    PUSH32(esp, 0xC);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A39E6u); RECOMP_ABI_CALL(0x0049C470u, sub_0049C470); /* call 0x0049C470 */

loc_004A39E6: ;
    esp = ebp + -200;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_004A3A10
 * Original: 0x004A3A10 - 0x004A3A15 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A3A10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A3A10: ;
    g_seh_ebp = ebp; sub_004A3310(); return; /* tail jmp 0x004A3310 */

}

/**
 * sub_004A3A20
 * Original: 0x004A3A20 - 0x004A3A3E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A3A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A3A20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A3A28u); RECOMP_ABI_CALL(0x004A3550u, sub_004A3550); /* call 0x004A3550 */

loc_004A3A28: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004A3A38; /* je: equal / zero */

loc_004A3A2F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004A3A35u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_004A3A35: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A3A38: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A3A40
 * Original: 0x004A3A40 - 0x004A3AEB (171 bytes, 58 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A3A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A3A40: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A3A55; /* jne: not equal / not zero */

loc_004A3A50: ;
    edi = 4;

loc_004A3A55: ;
    eax = MEM32(esp + 0x7C);
    ecx = MEM32(esp + 0x78);
    edx = MEM32(esp + 0x74);
    PUSH32(esp, 0x6421CC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x004A3A70u); RECOMP_ABI_CALL(0x0049E1B0u, sub_0049E1B0); /* call 0x0049E1B0 */

loc_004A3A70: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x6421B4);
    eax = esp + 0x14;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A3A82u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A3A82: ;
    ecx = MEM32(0x6985B8);
    SET_LO8(eax, MEM8(ecx + 0xC));
    edi = ecx + 0xC;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004A3AAB; /* jne: not equal / not zero */

loc_004A3A97: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A3AA1u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_004A3AA1: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004A3AA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A3AA5u); } /* indirect call */
    }

loc_004A3AA8: ;
    MEM8(edi) = 1;

loc_004A3AAB: ;
    ecx = MEM32(0x697B88);
    edx = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x62F39C);
    MEM32(esi + 0x7C) = edx;
    PUSH32(esp, 0x004A3AC3u); RECOMP_ABI_CALL(0x005E11E0u, sub_005E11E0); /* call 0x005E11E0 */

loc_004A3AC3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = eax;
    MEM32(esi + 0x74) = eax;
    PUSH32(esp, 0x004A3AD2u); RECOMP_ABI_CALL(0x005E0520u, sub_005E0520); /* call 0x005E0520 */

loc_004A3AD2: ;
    PUSH32(esp, 1);
    ecx = esi;
    MEM32(esi + 0x78) = 0xFFFFFFFFu;
    PUSH32(esp, 0x004A3AE2u); RECOMP_ABI_CALL(0x0049E240u, sub_0049E240); /* call 0x0049E240 */

loc_004A3AE2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004A3AF0
 * Original: 0x004A3AF0 - 0x004A3AF8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A3AF0(void)
{

loc_004A3AF0: ;
    MEM32(ecx + 0x78) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_004A3B00
 * Original: 0x004A3B00 - 0x004A3B2B (43 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A3B00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A3B00: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x40) = eax;
    MEM32(ecx + 0x48) = eax;
    MEM32(ecx + 0x44) = 0xC8;
    MEM32(ecx + 0x4C) = 0x8C;
    eax = MEM32(ecx + 0x34);
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x34) = eax;
    eax = eax & 0xFFFFFF7Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x34) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_004A3B30
 * Original: 0x004A3B30 - 0x004A3B35 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A3B30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A3B30: ;
    g_seh_ebp = ebp; sub_004A3B00(); return; /* tail jmp 0x004A3B00 */

}

/**
 * sub_004A3B40
 * Original: 0x004A3B40 - 0x004A3B97 (87 bytes, 28 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A3B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A3B40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A3B48u); RECOMP_ABI_CALL(0x0049EB40u, sub_0049EB40); /* call 0x0049EB40 */

loc_004A3B48: ;
    MEM32(esi) = 0x6421E8;
    eax = 0x3F000000;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    eax = 0x3E99999A;
    ecx = 0x3F4CCCCD;
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = ecx;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A3B93; /* jne: not equal / not zero */

loc_004A3B7C: ;
    PUSH32(esp, 0x6421DC);
    ecx = esi;
    PUSH32(esp, 0x004A3B88u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_004A3B88: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004A3B8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A3B8Cu); } /* indirect call */
    }

loc_004A3B8F: ;
    MEM8(esi + 0xC) = 1;

loc_004A3B93: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A3BA0
 * Original: 0x004A3BA0 - 0x004A3BA6 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A3BA0(void)
{

loc_004A3BA0: ;
    eax = 0x642208;
    esp += 4; return; /* ret */

}

/**
 * sub_004A3BB0
 * Original: 0x004A3BB0 - 0x004A3BEF (63 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A3BB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A3BB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004A3BBEu); RECOMP_ABI_CALL(0x00406990u, sub_00406990); /* call 0x00406990 */

loc_004A3BBE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6415B8);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A3BD4u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A3BD4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x642220);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A3BEAu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A3BEA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A3BF0
 * Original: 0x004A3BF0 - 0x004A3C10 (32 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A3BF0(void)
{

loc_004A3BF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A3BF8u); RECOMP_ABI_CALL(0x0049EB40u, sub_0049EB40); /* call 0x0049EB40 */

loc_004A3BF8: ;
    MEM32(esi) = 0x642230;
    MEM32(esi + 0x10) = 0x3F000000;
    MEM32(esi + 0x14) = 0x3F800000;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A3C10
 * Original: 0x004A3C10 - 0x004A3C16 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A3C10(void)
{

loc_004A3C10: ;
    eax = 0x642250;
    esp += 4; return; /* ret */

}

/**
 * sub_004A3C20
 * Original: 0x004A3C20 - 0x004A3C5F (63 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A3C20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A3C20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004A3C2Eu); RECOMP_ABI_CALL(0x00406990u, sub_00406990); /* call 0x00406990 */

loc_004A3C2E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x641FFC);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A3C44u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A3C44: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x641FF0);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A3C5Au); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A3C5A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A3C60
 * Original: 0x004A3C60 - 0x004A3D07 (167 bytes, 52 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A3C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A3C60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004A3C69u); RECOMP_ABI_CALL(0x0049E150u, sub_0049E150); /* call 0x0049E150 */

loc_004A3C69: ;
    MEM32(esi) = 0x642278;
    eax = MEM32(0x6985C0);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A3CA3; /* jne: not equal / not zero */

loc_004A3C7A: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x640C58);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x004A3C88u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_004A3C88: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A3C9D; /* je: equal / zero */

loc_004A3C8F: ;
    ecx = eax;
    PUSH32(esp, 0x004A3C96u); RECOMP_ABI_CALL(0x004A3B40u, sub_004A3B40); /* call 0x004A3B40 */

loc_004A3C96: ;
    MEM32(0x6985C0) = eax;
    goto loc_004A3CA3;

loc_004A3C9D: ;
    MEM32(0x6985C0) = edi;

loc_004A3CA3: ;
    ecx = MEM32(0x6985BC);
    eax = MEM32(0x6985B8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(0x6985BC) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004A3CE2; /* jne: not equal / not zero */

loc_004A3CB9: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x640C58);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x004A3CC7u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_004A3CC7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A3CDC; /* je: equal / zero */

loc_004A3CCE: ;
    ecx = eax;
    PUSH32(esp, 0x004A3CD5u); RECOMP_ABI_CALL(0x004A3BF0u, sub_004A3BF0); /* call 0x004A3BF0 */

loc_004A3CD5: ;
    MEM32(0x6985B8) = eax;
    goto loc_004A3CE2;

loc_004A3CDC: ;
    MEM32(0x6985B8) = edi;

loc_004A3CE2: ;
    eax = MEM32(0x6985C4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi + 0x34;
    MEM32(0x6985C4) = eax;
    PUSH32(esp, 0x004A3CF5u); RECOMP_ABI_CALL(0x005E1AF0u, sub_005E1AF0); /* call 0x005E1AF0 */

loc_004A3CF5: ;
    ecx = esi;
    MEM32(esi + 0x74) = edi;
    MEM32(esi + 0x7C) = edi;
    PUSH32(esp, 0x004A3D02u); RECOMP_ABI_CALL(0x004A3B00u, sub_004A3B00); /* call 0x004A3B00 */

loc_004A3D02: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A3D10
 * Original: 0x004A3D10 - 0x004A3D16 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A3D10(void)
{

loc_004A3D10: ;
    eax = 0x6422B8;
    esp += 4; return; /* ret */

}

/**
 * sub_004A3D20
 * Original: 0x004A3D20 - 0x004A3D86 (102 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A3D20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A3D20: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x74);
    PUSH32(esp, eax);
    MEM32(esi) = 0x642278;
    PUSH32(esp, 0x004A3D32u); RECOMP_ABI_CALL(0x005E1010u, sub_005E1010); /* call 0x005E1010 */

loc_004A3D32: ;
    eax = MEM32(0x6985C4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x6985C4) = eax;
    if ((_fa != 0)) goto loc_004A3D5C; /* jne: not equal / not zero */

loc_004A3D42: ;
    ecx = MEM32(0x6985B8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A3D52; /* je: equal / zero */

loc_004A3D4C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004A3D52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A3D50u); } /* indirect call */
    }

loc_004A3D52: ;
    MEM32(0x6985B8) = 0;

loc_004A3D5C: ;
    MEM32(0x6985BC) = MEM32(0x6985BC) - 1;
    _fa = (uint32_t)(MEM32(0x6985BC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004A3D7E; /* jne: not equal / not zero */

loc_004A3D64: ;
    ecx = MEM32(0x6985C0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A3D74; /* je: equal / zero */

loc_004A3D6E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004A3D74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A3D72u); } /* indirect call */
    }

loc_004A3D74: ;
    MEM32(0x6985C0) = 0;

loc_004A3D7E: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0049E1A0(); return; /* tail jmp 0x0049E1A0 */

}

/**
 * sub_004A3D90
 * Original: 0x004A3D90 - 0x004A409F (783 bytes, 274 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004A3D90(void)
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

loc_004A3D90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_004A4095; /* je: equal / zero */

loc_004A3DA6: ;
    edx = MEM32(esi + 0x7C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ebp + -4) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_004A4095; /* je: equal / zero */

loc_004A3DB4: ;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A4095; /* je: equal / zero */

loc_004A3DBF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A4095; /* je: equal / zero */

loc_004A3DC8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A4095; /* je: equal / zero */

loc_004A3DD1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A4095; /* je: equal / zero */

loc_004A3DDA: ;
    SET_LO8(eax, MEM8(0x6C3421));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = MEM32(0x6985B8);
    if (CMP_EQ(_fa, _fb)) goto loc_004A3E30; /* je: equal / zero */

loc_004A3DE9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x78) = eax;
    ecx = MEM32(0x6C3304);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004A3E42; /* jle: less or equal (signed <=) */

loc_004A3DF8: ;
    ecx = 8;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x8C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A3E03: ;
    edi = MEM32(0x69585C);
    _fa = (uint32_t)(MEM32(ecx + edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A3E14; /* jne: not equal / not zero */

loc_004A3E0F: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A3E17; /* je: equal / zero */

loc_004A3E14: ;
    MEM32(esi + 0x78) = MEM32(esi + 0x78) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x78)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004A3E17: ;
    edi = MEM32(0x6C3304);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x8C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004A3E03; /* jl: less (signed <) */

loc_004A3E2B: ;
    edx = MEM32(ebp + -4);
    goto loc_004A3E42;

loc_004A3E30: ;
    eax = MEM32(esi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004A3E42; /* jge: greater or equal (signed >=) */

loc_004A3E37: ;
    eax = MEM32(0x696768);
    ecx = MEM32(eax + 0x4C);
    MEM32(esi + 0x78) = ecx;

loc_004A3E42: ;
    edx = MEM32(edx + 8);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A3E4Bu); RECOMP_ABI_CALL(0x0053D6A0u, sub_0053D6A0); /* call 0x0053D6A0 */

loc_004A3E4B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A3F7F; /* je: equal / zero */

loc_004A3E56: ;
    edx = MEM32(esi + 0xC);
    eax = MEM32(esi + 0x7C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x8C);
    ecx = edx + eax + 0x88;
    _fa = (uint32_t)(MEM32(esi + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x78), 1 (32-bit) */
    MEM32(ebp + -16) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004A4095; /* je: equal / zero */

loc_004A3E76: ;
    edx = MEM32(ebx + 0x10);
    fp_push(MEMF(ebx + 0x10)); /* fld float */
    edi = esi + 0x34;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(edi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edi + 0x30) = edx;
    MEM32(edi + 4) = eax;
    MEM32(edi + 8) = eax;
    eax = MEM32(0x6985C0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A3E9Bu); RECOMP_ABI_CALL(0x0044F880u, sub_0044F880); /* call 0x0044F880 */

loc_004A3E9B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x6422DC);
    ecx = 0x8582C8;
    MEM32(esi + 0x6C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A3EB0u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_004A3EB0: ;
    eax = MEM32(eax + 8);
    ecx = MEM32(esi + 0x14);
    edx = MEM32(esi + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x74);
    PUSH32(esp, edx);
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A3ECCu); RECOMP_ABI_CALL(0x0044F910u, sub_0044F910); /* call 0x0044F910 */

loc_004A3ECC: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -8);
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x74);
    edx = ebp + -12;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A3EF3u); RECOMP_ABI_CALL(0x005E0E00u, sub_005E0E00); /* call 0x005E0E00 */

loc_004A3EF3: ;
    fp_push(MEMF(ebx + 0x14)); /* fld float */
    eax = MEM32(ebx + 0x14);
    MEMF(edi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ebp + -16);
    MEM32(edi + 0x30) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 4) = eax;
    MEM32(edi + 8) = eax;
    ecx = MEM32(esi + 0x78);
    eax = MEM32(edx + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x637618);
    ecx = ebp + -48;
    PUSH32(esp, 0x1E);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A3F22u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A3F22: ;
    eax = ebp + -48;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + 1;
    goto loc_004A3F30;

    /* nop */

loc_004A3F30: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A3F30; /* jne: not equal / not zero */

loc_004A3F37: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = eax + 1;
    eax = ebx + ebx;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A3F4Au); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_004A3F4A: ;
    eax = esp;
    PUSH32(esp, ebx);
    edx = ebp + -48;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A3F57u); RECOMP_ABI_CALL(0x004056C0u, sub_004056C0); /* call 0x004056C0 */

loc_004A3F57: ;
    edx = MEM32(ebp + -4);
    ecx = MEM32(esi + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x74);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A3F75u); RECOMP_ABI_CALL(0x0044F910u, sub_0044F910); /* call 0x0044F910 */

loc_004A3F75: ;
    esp = ebp + -60;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_004A3F7F: ;
    edx = MEM32(esi + 0x7C);
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 8), 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A4095; /* jne: not equal / not zero */

loc_004A3F8C: ;
    _fa = (uint32_t)(MEM32(esi + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x78), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A4095; /* je: equal / zero */

loc_004A3F96: ;
    eax = MEM32(ebx + 0x10);
    fp_push(MEMF(ebx + 0x10)); /* fld float */
    edi = esi + 0x34;
    MEM32(edi + 0x30) = eax;
    MEMF(edi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 4) = eax;
    MEM32(edi + 8) = eax;
    ecx = MEM32(0x6985C0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A3FBCu); RECOMP_ABI_CALL(0x0044F880u, sub_0044F880); /* call 0x0044F880 */

loc_004A3FBC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x6422C8);
    ecx = 0x8582C8;
    MEM32(esi + 0x6C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A3FD1u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_004A3FD1: ;
    eax = MEM32(eax + 8);
    edx = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x74);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(ebp + -16) = eax;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A3FEDu); RECOMP_ABI_CALL(0x0044F910u, sub_0044F910); /* call 0x0044F910 */

loc_004A3FED: ;
    ecx = MEM32(ebp + -16);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x74);
    edx = ebp + -4;
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -4) = eax;
    PUSH32(esp, edx);
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A4014u); RECOMP_ABI_CALL(0x005E0E00u, sub_005E0E00); /* call 0x005E0E00 */

loc_004A4014: ;
    fp_push(MEMF(ebx + 0x14)); /* fld float */
    ecx = MEM32(ebx + 0x14);
    MEMF(edi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edi + 0x30) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 4) = eax;
    MEM32(edi + 8) = eax;
    edx = MEM32(esi + 0x78);
    ecx = MEM32(esi + 0x7C);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A4035u); RECOMP_ABI_CALL(0x004951C0u, sub_004951C0); /* call 0x004951C0 */

loc_004A4035: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x637618);
    eax = ebp + -48;
    PUSH32(esp, 0x1E);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A4046u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A4046: ;
    eax = ebp + -48;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + 1;
    /* nop */

loc_004A4050: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A4050; /* jne: not equal / not zero */

loc_004A4057: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = eax + 1;
    eax = ebx + ebx;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A406Au); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_004A406A: ;
    eax = esp;
    PUSH32(esp, ebx);
    ecx = ebp + -48;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A4077u); RECOMP_ABI_CALL(0x004056C0u, sub_004056C0); /* call 0x004056C0 */

loc_004A4077: ;
    edx = MEM32(esi + 0x14);
    ebx = MEM32(ebp + -4);
    ecx = MEM32(esi + 0x74);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A4095u); RECOMP_ABI_CALL(0x0044F910u, sub_0044F910); /* call 0x0044F910 */

loc_004A4095: ;
    esp = ebp + -60;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_004A40A0
 * Original: 0x004A40A0 - 0x004A40BE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A40A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A40A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A40A8u); RECOMP_ABI_CALL(0x004A3D20u, sub_004A3D20); /* call 0x004A3D20 */

loc_004A40A8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004A40B8; /* je: equal / zero */

loc_004A40AF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004A40B5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_004A40B5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A40B8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A40C0
 * Original: 0x004A40C0 - 0x004A416B (171 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A40C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A40C0: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A40D5; /* jne: not equal / not zero */

loc_004A40D0: ;
    edi = 4;

loc_004A40D5: ;
    eax = MEM32(esp + 0x7C);
    ecx = MEM32(esp + 0x78);
    edx = MEM32(esp + 0x74);
    PUSH32(esp, 0x6422F8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x004A40F0u); RECOMP_ABI_CALL(0x0049E1B0u, sub_0049E1B0); /* call 0x0049E1B0 */

loc_004A40F0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x6422E8);
    eax = esp + 0x14;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A4102u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A4102: ;
    ecx = MEM32(0x6985C8);
    SET_LO8(eax, MEM8(ecx + 0xC));
    edi = ecx + 0xC;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004A412B; /* jne: not equal / not zero */

loc_004A4117: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A4121u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_004A4121: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004A4128u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A4125u); } /* indirect call */
    }

loc_004A4128: ;
    MEM8(edi) = 1;

loc_004A412B: ;
    ecx = MEM32(0x697B88);
    edx = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x62F39C);
    MEM32(esi + 0x78) = edx;
    PUSH32(esp, 0x004A4143u); RECOMP_ABI_CALL(0x005E11E0u, sub_005E11E0); /* call 0x005E11E0 */

loc_004A4143: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = eax;
    MEM32(esi + 0x74) = eax;
    PUSH32(esp, 0x004A4152u); RECOMP_ABI_CALL(0x005E0520u, sub_005E0520); /* call 0x005E0520 */

loc_004A4152: ;
    PUSH32(esp, 1);
    ecx = esi;
    MEM32(esi + 0x7C) = 0;
    PUSH32(esp, 0x004A4162u); RECOMP_ABI_CALL(0x0049E240u, sub_0049E240); /* call 0x0049E240 */

loc_004A4162: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004A4170
 * Original: 0x004A4170 - 0x004A418A (26 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A4170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A4170: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A4181; /* jne: not equal / not zero */

loc_004A417A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x004A4181u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A417Eu); } /* indirect call */
    }

loc_004A4181: ;
    MEM32(esi + 0x7C) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A4190
 * Original: 0x004A4190 - 0x004A41BB (43 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A4190(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A4190: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x40) = eax;
    MEM32(ecx + 0x48) = eax;
    MEM32(ecx + 0x44) = 0x32;
    MEM32(ecx + 0x4C) = 0xFA;
    eax = MEM32(ecx + 0x34);
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x34) = eax;
    eax = eax & 0xFFFFFF7Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x34) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_004A41C0
 * Original: 0x004A41C0 - 0x004A420C (76 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A41C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A41C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A41C8u); RECOMP_ABI_CALL(0x0049EB40u, sub_0049EB40); /* call 0x0049EB40 */

loc_004A41C8: ;
    MEM32(esi) = 0x642308;
    MEM32(esi + 0x10) = 0;
    MEM32(esi + 0x14) = 0x3F333333;
    MEM32(esi + 0x18) = 0x3ECCCCCD;
    MEM32(esi + 0x1C) = 0x3F4CCCCD;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A4208; /* jne: not equal / not zero */

loc_004A41F1: ;
    PUSH32(esp, 0x642300);
    ecx = esi;
    PUSH32(esp, 0x004A41FDu); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_004A41FD: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004A4204u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A4201u); } /* indirect call */
    }

loc_004A4204: ;
    MEM8(esi + 0xC) = 1;

loc_004A4208: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A4210
 * Original: 0x004A4210 - 0x004A4216 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A4210(void)
{

loc_004A4210: ;
    eax = 0x642328;
    esp += 4; return; /* ret */

}

/**
 * sub_004A4220
 * Original: 0x004A4220 - 0x004A4249 (41 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A4220(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A4220: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004A422Eu); RECOMP_ABI_CALL(0x00406990u, sub_00406990); /* call 0x00406990 */

loc_004A422E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x6415B8);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A4244u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A4244: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A4250
 * Original: 0x004A4250 - 0x004A4269 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A4250(void)
{

loc_004A4250: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A4258u); RECOMP_ABI_CALL(0x0049EB40u, sub_0049EB40); /* call 0x0049EB40 */

loc_004A4258: ;
    MEM32(esi) = 0x64233C;
    MEM32(esi + 0x10) = 0x3F800000;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A4270
 * Original: 0x004A4270 - 0x004A4276 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A4270(void)
{

loc_004A4270: ;
    eax = 0x64235C;
    esp += 4; return; /* ret */

}

/**
 * sub_004A4280
 * Original: 0x004A4280 - 0x004A4327 (167 bytes, 52 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A4280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A4280: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004A4289u); RECOMP_ABI_CALL(0x0049E150u, sub_0049E150); /* call 0x0049E150 */

loc_004A4289: ;
    MEM32(esi) = 0x642380;
    eax = MEM32(0x6985D0);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A42C3; /* jne: not equal / not zero */

loc_004A429A: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x640C58);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x004A42A8u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_004A42A8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A42BD; /* je: equal / zero */

loc_004A42AF: ;
    ecx = eax;
    PUSH32(esp, 0x004A42B6u); RECOMP_ABI_CALL(0x004A41C0u, sub_004A41C0); /* call 0x004A41C0 */

loc_004A42B6: ;
    MEM32(0x6985D0) = eax;
    goto loc_004A42C3;

loc_004A42BD: ;
    MEM32(0x6985D0) = edi;

loc_004A42C3: ;
    ecx = MEM32(0x6985CC);
    eax = MEM32(0x6985C8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(0x6985CC) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004A4302; /* jne: not equal / not zero */

loc_004A42D9: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x640C58);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x004A42E7u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_004A42E7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A42FC; /* je: equal / zero */

loc_004A42EE: ;
    ecx = eax;
    PUSH32(esp, 0x004A42F5u); RECOMP_ABI_CALL(0x004A4250u, sub_004A4250); /* call 0x004A4250 */

loc_004A42F5: ;
    MEM32(0x6985C8) = eax;
    goto loc_004A4302;

loc_004A42FC: ;
    MEM32(0x6985C8) = edi;

loc_004A4302: ;
    eax = MEM32(0x6985D4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi + 0x34;
    MEM32(0x6985D4) = eax;
    PUSH32(esp, 0x004A4315u); RECOMP_ABI_CALL(0x005E1AF0u, sub_005E1AF0); /* call 0x005E1AF0 */

loc_004A4315: ;
    ecx = esi;
    MEM32(esi + 0x74) = edi;
    MEM32(esi + 0x78) = edi;
    PUSH32(esp, 0x004A4322u); RECOMP_ABI_CALL(0x004A4190u, sub_004A4190); /* call 0x004A4190 */

loc_004A4322: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A4330
 * Original: 0x004A4330 - 0x004A4336 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A4330(void)
{

loc_004A4330: ;
    eax = 0x6423C0;
    esp += 4; return; /* ret */

}

/**
 * sub_004A4340
 * Original: 0x004A4340 - 0x004A43A6 (102 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A4340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A4340: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x74);
    PUSH32(esp, eax);
    MEM32(esi) = 0x642380;
    PUSH32(esp, 0x004A4352u); RECOMP_ABI_CALL(0x005E1010u, sub_005E1010); /* call 0x005E1010 */

loc_004A4352: ;
    eax = MEM32(0x6985D4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x6985D4) = eax;
    if ((_fa != 0)) goto loc_004A437C; /* jne: not equal / not zero */

loc_004A4362: ;
    ecx = MEM32(0x6985C8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A4372; /* je: equal / zero */

loc_004A436C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004A4372u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A4370u); } /* indirect call */
    }

loc_004A4372: ;
    MEM32(0x6985C8) = 0;

loc_004A437C: ;
    MEM32(0x6985CC) = MEM32(0x6985CC) - 1;
    _fa = (uint32_t)(MEM32(0x6985CC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004A439E; /* jne: not equal / not zero */

loc_004A4384: ;
    ecx = MEM32(0x6985D0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A4394; /* je: equal / zero */

loc_004A438E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004A4394u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A4392u); } /* indirect call */
    }

loc_004A4394: ;
    MEM32(0x6985D0) = 0;

loc_004A439E: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0049E1A0(); return; /* tail jmp 0x0049E1A0 */

}

/**
 * sub_004A43B0
 * Original: 0x004A43B0 - 0x004A455A (426 bytes, 140 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004A43B0(void)
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

loc_004A43B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A4550; /* je: equal / zero */

loc_004A43C6: ;
    eax = MEM32(edi + 0x78);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A4550; /* je: equal / zero */

loc_004A43D3: ;
    SET_LO8(ecx, MEM8(eax + 0x574));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A4550; /* jne: not equal / not zero */

loc_004A43E1: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A4550; /* je: equal / zero */

loc_004A43EC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A4550; /* je: equal / zero */

loc_004A43F5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A4550; /* je: equal / zero */

loc_004A43FE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A4550; /* je: equal / zero */

loc_004A4407: ;
    ecx = MEM32(edi + 0xC);
    edx = MEM32(0x6985C8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x8C);
    eax = ecx + eax + 0x88;
    ecx = MEM32(0x6C38A4);
    MEM32(ebp + -12) = edx;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    MEMF(edi + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A4439; /* je: equal / zero */

loc_004A4433: ;
    edx = MEM32(eax + 0xC);
    MEM32(edi + 0x7C) = edx;

loc_004A4439: ;
    fp_push(MEMF(edi + 0x7C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D40C)); /* fmul dword ptr [0x63d40c] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A4447u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A4447: ;
    fp_push(MEMF(edi + 0x7C)); /* fld float */
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A4451u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A4451: ;
    fp_push(MEMF(edi + 0x7C)); /* fld float */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x630308)); /* fmul dword ptr [0x630308] */
    ecx = 0x3C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebp + -8) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A446Au); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A446A: ;
    fp_push(MEMF(edi + 0x7C)); /* fld float */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x6423CC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x6423cc] */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    MEM32(ebp + -4) = edx;
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004A448F; /* jp: parity */

loc_004A4485: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -8) = esi;
    MEM32(ebp + -4) = esi;
    goto loc_004A44A3;

loc_004A448F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x63 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004A44A3; /* jle: less or equal (signed <=) */

loc_004A4494: ;
    ebx = 0x63;
    MEM32(ebp + -8) = 0x3B;
    MEM32(ebp + -4) = ebx;

loc_004A44A3: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A44AAu); RECOMP_ABI_CALL(0x004A4190u, sub_004A4190); /* call 0x004A4190 */

loc_004A44AA: ;
    edx = MEM32(edi + 0x34);
    esi = edi + 0x34;
    edx = edx & 0xFFFFFF7Fu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = edx;
    edx = edx & 0xFFFFFFF9u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi) = edx;
    eax = MEM32(0x6985D0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A44CEu); RECOMP_ABI_CALL(0x0044F880u, sub_0044F880); /* call 0x0044F880 */

loc_004A44CE: ;
    edx = MEM32(ebp + -4);
    MEM32(edi + 0x6C) = eax;
    eax = MEM32(ebp + -12);
    ecx = MEM32(eax + 0x10);
    fp_push(MEMF(eax + 0x10)); /* fld float */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x30) = ecx;
    PUSH32(esp, edx);
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    eax = MEM32(ebp + -8);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x63F2C8);
    ecx = ebp + -52;
    PUSH32(esp, 0x28);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A4501u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A4501: ;
    eax = ebp + -52;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + 1;
    /* nop */

loc_004A4510: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A4510; /* jne: not equal / not zero */

loc_004A4517: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = eax + 1;
    eax = ebx + ebx;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A452Au); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_004A452A: ;
    eax = esp;
    PUSH32(esp, ebx);
    edx = ebp + -52;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A4537u); RECOMP_ABI_CALL(0x004056C0u, sub_004056C0); /* call 0x004056C0 */

loc_004A4537: ;
    ecx = MEM32(edi + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x74);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A4550u); RECOMP_ABI_CALL(0x0044F910u, sub_0044F910); /* call 0x0044F910 */

loc_004A4550: ;
    esp = ebp + -64;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_004A4560
 * Original: 0x004A4560 - 0x004A457E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A4560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A4560: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A4568u); RECOMP_ABI_CALL(0x004A4340u, sub_004A4340); /* call 0x004A4340 */

loc_004A4568: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004A4578; /* je: equal / zero */

loc_004A456F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004A4575u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_004A4575: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A4578: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A4580
 * Original: 0x004A4580 - 0x004A4618 (152 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A4580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A4580: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A4595; /* jne: not equal / not zero */

loc_004A4590: ;
    esi = 4;

loc_004A4595: ;
    eax = MEM32(esp + 0x7C);
    ecx = MEM32(esp + 0x78);
    edx = MEM32(esp + 0x74);
    PUSH32(esp, 0x6422F8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x004A45B0u); RECOMP_ABI_CALL(0x0049E1B0u, sub_0049E1B0); /* call 0x0049E1B0 */

loc_004A45B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x6422E8);
    eax = esp + 0x14;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A45C2u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A45C2: ;
    ecx = MEM32(0x6985D8);
    SET_LO8(eax, MEM8(ecx + 0xC));
    esi = ecx + 0xC;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004A45EB; /* jne: not equal / not zero */

loc_004A45D7: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A45E1u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_004A45E1: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004A45E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A45E5u); } /* indirect call */
    }

loc_004A45E8: ;
    MEM8(esi) = 1;

loc_004A45EB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x62F39C);
    PUSH32(esp, 0x004A45F7u); RECOMP_ABI_CALL(0x005E11E0u, sub_005E11E0); /* call 0x005E11E0 */

loc_004A45F7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = eax;
    MEM32(edi + 0x74) = eax;
    PUSH32(esp, 0x004A4606u); RECOMP_ABI_CALL(0x005E0520u, sub_005E0520); /* call 0x005E0520 */

loc_004A4606: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x004A460Fu); RECOMP_ABI_CALL(0x0049E240u, sub_0049E240); /* call 0x0049E240 */

loc_004A460F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004A4620
 * Original: 0x004A4620 - 0x004A4637 (23 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A4620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A4620: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A4631; /* jne: not equal / not zero */

loc_004A462A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x004A4631u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A462Eu); } /* indirect call */
    }

loc_004A4631: ;
    MEM8(esi + 0x78) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A4640
 * Original: 0x004A4640 - 0x004A4671 (49 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A4640(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A4640: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x40) = eax;
    MEM32(ecx + 0x48) = eax;
    MEM32(ecx + 0x44) = 0x32;
    MEM32(ecx + 0x4C) = 0x8C;
    MEM32(ecx + 0x38) = eax;
    MEM32(ecx + 0x3C) = eax;
    eax = MEM32(ecx + 0x34);
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x34) = eax;
    eax = eax & 0xFFFFFF7Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x34) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_004A4680
 * Original: 0x004A4680 - 0x004A4685 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A4680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A4680: ;
    g_seh_ebp = ebp; sub_004A4640(); return; /* tail jmp 0x004A4640 */

}

/**
 * sub_004A4690
 * Original: 0x004A4690 - 0x004A470E (126 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A4690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A4690: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A4698u); RECOMP_ABI_CALL(0x0049EB40u, sub_0049EB40); /* call 0x0049EB40 */

loc_004A4698: ;
    MEM32(esi) = 0x6423D0;
    MEM32(esi + 0x1C) = 0x3E4CCCCD;
    eax = 0x3F000000;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    eax = 0x3E99999A;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    ecx = 0x3F800000;
    MEM32(esi + 0x2C) = ecx;
    edx = 0x3F4CCCCD;
    MEM32(esi + 0x20) = edx;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x38) = edx;
    MEM32(esi + 0x3C) = ecx;
    SET_LO8(ecx, MEM8(esi + 0xC));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x4C) = 0x40400000;
    if (CMP_NE(_fa, _fb)) goto loc_004A470A; /* jne: not equal / not zero */

loc_004A46F3: ;
    PUSH32(esp, 0x6422F8);
    ecx = esi;
    PUSH32(esp, 0x004A46FFu); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_004A46FF: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004A4706u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A4703u); } /* indirect call */
    }

loc_004A4706: ;
    MEM8(esi + 0xC) = 1;

loc_004A470A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A4710
 * Original: 0x004A4710 - 0x004A4716 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A4710(void)
{

loc_004A4710: ;
    eax = 0x6423F0;
    esp += 4; return; /* ret */

}

/**
 * sub_004A4720
 * Original: 0x004A4720 - 0x004A47CD (173 bytes, 65 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A4720(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A4720: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004A472Eu); RECOMP_ABI_CALL(0x00406990u, sub_00406990); /* call 0x00406990 */

loc_004A472E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x641BC0);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A4744u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A4744: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x641BA8);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A475Au); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A475A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, 0x642444);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A4770u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A4770: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64242C);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A4786u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A4786: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6415B8);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A479Cu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A479C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x642414);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A47B2u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A47B2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x642404);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A47C8u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A47C8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A47D0
 * Original: 0x004A47D0 - 0x004A47E9 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A47D0(void)
{

loc_004A47D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A47D8u); RECOMP_ABI_CALL(0x0049EB40u, sub_0049EB40); /* call 0x0049EB40 */

loc_004A47D8: ;
    MEM32(esi) = 0x64245C;
    MEM32(esi + 0x10) = 0x3F800000;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A47F0
 * Original: 0x004A47F0 - 0x004A47F6 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A47F0(void)
{

loc_004A47F0: ;
    eax = 0x64247C;
    esp += 4; return; /* ret */

}

/**
 * sub_004A4800
 * Original: 0x004A4800 - 0x004A4829 (41 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A4800(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A4800: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004A480Eu); RECOMP_ABI_CALL(0x00406990u, sub_00406990); /* call 0x00406990 */

loc_004A480E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x641FF0);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A4824u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A4824: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A4830
 * Original: 0x004A4830 - 0x004A48EE (190 bytes, 57 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A4830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A4830: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A4839u); RECOMP_ABI_CALL(0x0049E150u, sub_0049E150); /* call 0x0049E150 */

loc_004A4839: ;
    MEM32(esi) = 0x6424A0;
    eax = MEM32(0x6985E0);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A4873; /* jne: not equal / not zero */

loc_004A484A: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x640C58);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x004A4858u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_004A4858: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A486D; /* je: equal / zero */

loc_004A485F: ;
    ecx = eax;
    PUSH32(esp, 0x004A4866u); RECOMP_ABI_CALL(0x004A4690u, sub_004A4690); /* call 0x004A4690 */

loc_004A4866: ;
    MEM32(0x6985E0) = eax;
    goto loc_004A4873;

loc_004A486D: ;
    MEM32(0x6985E0) = ebx;

loc_004A4873: ;
    ecx = MEM32(0x6985DC);
    eax = MEM32(0x6985D8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(0x6985DC) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004A48B2; /* jne: not equal / not zero */

loc_004A4889: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x640C58);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x004A4897u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_004A4897: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A48AC; /* je: equal / zero */

loc_004A489E: ;
    ecx = eax;
    PUSH32(esp, 0x004A48A5u); RECOMP_ABI_CALL(0x004A47D0u, sub_004A47D0); /* call 0x004A47D0 */

loc_004A48A5: ;
    MEM32(0x6985D8) = eax;
    goto loc_004A48B2;

loc_004A48AC: ;
    MEM32(0x6985D8) = ebx;

loc_004A48B2: ;
    eax = MEM32(0x6985E4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi + 0x34;
    MEM32(0x6985E4) = eax;
    PUSH32(esp, 0x004A48C5u); RECOMP_ABI_CALL(0x005E1AF0u, sub_005E1AF0); /* call 0x005E1AF0 */

loc_004A48C5: ;
    MEM32(esi + 0x80) = ebx;
    MEM32(esi + 0x74) = ebx;
    MEM8(esi + 0x78) = LO8(ebx);
    MEM32(esi + 0x7C) = ebx;
    eax = MEM32(0x697B88);
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x80) = ecx;
    ecx = esi;
    PUSH32(esp, 0x004A48E9u); RECOMP_ABI_CALL(0x004A4640u, sub_004A4640); /* call 0x004A4640 */

loc_004A48E9: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004A48F0
 * Original: 0x004A48F0 - 0x004A48F6 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A48F0(void)
{

loc_004A48F0: ;
    eax = 0x6424E0;
    esp += 4; return; /* ret */

}

/**
 * sub_004A4900
 * Original: 0x004A4900 - 0x004A4966 (102 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A4900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A4900: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x74);
    PUSH32(esp, eax);
    MEM32(esi) = 0x6424A0;
    PUSH32(esp, 0x004A4912u); RECOMP_ABI_CALL(0x005E1010u, sub_005E1010); /* call 0x005E1010 */

loc_004A4912: ;
    eax = MEM32(0x6985E4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x6985E4) = eax;
    if ((_fa != 0)) goto loc_004A493C; /* jne: not equal / not zero */

loc_004A4922: ;
    ecx = MEM32(0x6985D8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A4932; /* je: equal / zero */

loc_004A492C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004A4932u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A4930u); } /* indirect call */
    }

loc_004A4932: ;
    MEM32(0x6985D8) = 0;

loc_004A493C: ;
    MEM32(0x6985DC) = MEM32(0x6985DC) - 1;
    _fa = (uint32_t)(MEM32(0x6985DC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004A495E; /* jne: not equal / not zero */

loc_004A4944: ;
    ecx = MEM32(0x6985E0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A4954; /* je: equal / zero */

loc_004A494E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004A4954u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A4952u); } /* indirect call */
    }

loc_004A4954: ;
    MEM32(0x6985E0) = 0;

loc_004A495E: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0049E1A0(); return; /* tail jmp 0x0049E1A0 */

}

/**
 * sub_004A4970
 * Original: 0x004A4970 - 0x004A4C32 (706 bytes, 234 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004A4970(void)
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

loc_004A4970: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_004A4C28; /* je: equal / zero */

loc_004A4986: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A4C28; /* je: equal / zero */

loc_004A4994: ;
    SET_LO8(ecx, MEM8(eax + 0x574));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A4C28; /* je: equal / zero */

loc_004A49A2: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(0x6985D8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x8C);
    fp_push(MEMF(ecx + eax + 0x90)); /* fld float */
    MEMF(ebp + -4) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x63D40C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    eax = ecx + eax + 0x88;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -12) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A49D5u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A49D5: ;
    edi = eax;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A49DEu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A49DE: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    fp_push(MEMF(0x630308)); /* fld float */
    ecx = 0x3C;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebx = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A49F5u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A49F5: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x636EB0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x636eb0] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004A4A12; /* jp: parity */

loc_004A4A0A: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004A4A23;

loc_004A4A12: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x63 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004A4A23; /* jle: less or equal (signed <=) */

loc_004A4A17: ;
    edi = 0x63;
    ebx = 0x3B;
    edx = edi;

loc_004A4A23: ;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x63F2C8);
    edx = ebp + -76;
    PUSH32(esp, 0x1E);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A4A36u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A4A36: ;
    eax = ebp + -76;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 1;
    /* nop */

loc_004A4A40: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A4A40; /* jne: not equal / not zero */

loc_004A4A47: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax + 1;
    eax = edi + edi;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A4A5Au); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_004A4A5A: ;
    eax = esp;
    PUSH32(esp, edi);
    ecx = ebp + -76;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A4A67u); RECOMP_ABI_CALL(0x004056C0u, sub_004056C0); /* call 0x004056C0 */

loc_004A4A67: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    edi = MEM32(0x6985E0);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edi + 0x40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edi + 0x40] */
    ebx = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004A4A87; /* jp: parity */

loc_004A4A7F: ;
    fp_push(MEMF(0x65E384)); /* fld float */
    goto loc_004A4AAC;

loc_004A4A87: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x40)); /* fsub dword ptr [edi + 0x40] */
    fp_push(MEMF(edi + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x40)); /* fsub dword ptr [edi + 0x40] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_push(MEMF(0x62D57C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004A4AAC; /* jp: parity */

loc_004A4AA4: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_004A4AAC: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    edx = MEM32(ebp + -8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    SET_LO8(ecx, MEM8(edx + 7));
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    SET_LO8(eax, 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x14)); /* fmul dword ptr [edi + 0x14] */
    MEMF(ebp + -24) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x18)); /* fmul dword ptr [edi + 0x18] */
    MEMF(ebp + -20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1C)); /* fmul dword ptr [edi + 0x1c] */
    MEMF(ebp + -16) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x20)); /* fmul dword ptr [edi + 0x20] */
    MEMF(ebp + -44) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x24)); /* fmul dword ptr [edi + 0x24] */
    MEMF(ebp + -40) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x28)); /* fmul dword ptr [edi + 0x28] */
    MEMF(ebp + -36) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x2C)); /* fmul dword ptr [edi + 0x2c] */
    MEMF(ebp + -32) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(ebp + -28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + -40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + -24)); /* fadd dword ptr [ebp - 0x18] */
    MEMF(ebp + -24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -36)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + -20)); /* fadd dword ptr [ebp - 0x14] */
    MEMF(ebp + -20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -32)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + -16)); /* fadd dword ptr [ebp - 0x10] */
    MEMF(ebp + -16) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_NE(_fa, _fb)) goto loc_004A4B32; /* jne: not equal / not zero */

loc_004A4B22: ;
    MEM32(esi + 0x7C) = 0;
    MEM8(esi + 0x78) = LO8(eax);
    edi = MEM32(0x6985E0);

loc_004A4B32: ;
    _fa = (uint32_t)(MEM8(esi + 0x78)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x78), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A4BD8; /* jne: not equal / not zero */

loc_004A4B3B: ;
    eax = MEM32(0x6C3890);
    SET_LO8(ecx, MEM8(eax + 9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A4B5C; /* jne: not equal / not zero */

loc_004A4B47: ;
    ecx = MEM32(0x6C38A4);
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x7C)); /* fadd dword ptr [esi + 0x7c] */
    MEMF(esi + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(0x6985E0);

loc_004A4B5C: ;
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edi + 0x4C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edi + 0x4c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004A4B6F; /* jne: not equal / not zero */

loc_004A4B69: ;
    MEM8(esi + 0x78) = 0;
    goto loc_004A4BD8;

loc_004A4B6F: ;
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edi + 0x48)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edi + 0x48] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004A4B85; /* jp: parity */

loc_004A4B7C: ;
    MEM32(ebp + -4) = 0;
    goto loc_004A4BA7;

loc_004A4B85: ;
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x48)); /* fsub dword ptr [edi + 0x48] */
    fp_push(MEMF(edi + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x48)); /* fsub dword ptr [edi + 0x48] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x3F800000);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A4BA1u); RECOMP_ABI_CALL(0x00426370u, sub_00426370); /* call 0x00426370 */

loc_004A4BA1: ;
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A4BA7: ;
    edx = MEM32(ebp + -4);
    PUSH32(esp, edx);
    ecx = ebp + -28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A4BB3u); RECOMP_ABI_CALL(0x004214E0u, sub_004214E0); /* call 0x004214E0 */

loc_004A4BB3: ;
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + -4)); /* fsub dword ptr [ebp - 4] */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp + -44;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A4BCCu); RECOMP_ABI_CALL(0x004352A0u, sub_004352A0); /* call 0x004352A0 */

loc_004A4BCC: ;
    eax = ebp + -44;
    PUSH32(esp, eax);
    ecx = ebp + -28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A4BD8u); RECOMP_ABI_CALL(0x00435270u, sub_00435270); /* call 0x00435270 */

loc_004A4BD8: ;
    ecx = ebp + -28;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A4BE1u); RECOMP_ABI_CALL(0x0044F880u, sub_0044F880); /* call 0x0044F880 */

loc_004A4BE1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEM32(esi + 0x6C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A4BEEu); RECOMP_ABI_CALL(0x004A4640u, sub_004A4640); /* call 0x004A4640 */

loc_004A4BEE: ;
    ecx = MEM32(ebp + -12);
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    edx = MEM32(ecx + 0x10);
    PUSH32(esp, 0);
    MEMF(esi + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    eax = esi + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F800000);
    MEM32(eax + 0x30) = edx;
    fp_push((double)SMEM32(esi + 0x14)); /* fild */
    ecx = MEM32(esi + 0x74);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esi + 0x10)); /* fild */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A4C28u); RECOMP_ABI_CALL(0x005DF5B0u, sub_005DF5B0); /* call 0x005DF5B0 */

loc_004A4C28: ;
    esp = ebp + -88;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_004A4C40
 * Original: 0x004A4C40 - 0x004A4C5E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A4C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A4C40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A4C48u); RECOMP_ABI_CALL(0x004A4900u, sub_004A4900); /* call 0x004A4900 */

loc_004A4C48: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004A4C58; /* je: equal / zero */

loc_004A4C4F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004A4C55u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_004A4C55: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A4C58: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A4C60
 * Original: 0x004A4C60 - 0x004A4E17 (439 bytes, 153 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004A4C60(void)
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

loc_004A4C60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_004A4E0D; /* je: equal / zero */

loc_004A4C76: ;
    edi = MEM32(esi + 0x38);
    eax = MEM32(edi + 0x18);
    fp_push(MEMF(edi + 0xB0)); /* fld float */
    fp_push(MEMF(eax + 0xD0)); /* fld float */
    ecx = MEM32(0x6985EC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x642500)); /* fmul dword ptr [0x642500] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6424FC)); /* fmul dword ptr [0x6424fc] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x30)); /* fmul dword ptr [ecx + 0x30] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004A4CB6; /* jp: parity */

loc_004A4CAA: ;
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x65E384)); /* fld float */
    goto loc_004A4CDE;

loc_004A4CB6: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x30)); /* fsub dword ptr [ecx + 0x30] */
    fp_push(MEMF(ecx + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x30)); /* fsub dword ptr [ecx + 0x30] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(0x62D57C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004A4CDE; /* jp: parity */

loc_004A4CD6: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_004A4CDE: ;
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x10)); /* fmul dword ptr [ecx + 0x10] */
    MEMF(ebp + -20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x14)); /* fmul dword ptr [ecx + 0x14] */
    MEMF(ebp + -16) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x18)); /* fmul dword ptr [ecx + 0x18] */
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x1C)); /* fmul dword ptr [ecx + 0x1c] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x20)); /* fmul dword ptr [ecx + 0x20] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x24)); /* fmul dword ptr [ecx + 0x24] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x28)); /* fmul dword ptr [ecx + 0x28] */
    MEMF(ebp + -28) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x2C)); /* fmul dword ptr [ecx + 0x2c] */
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    MEMF(ebp + -24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + -20)); /* fadd dword ptr [ebp - 0x14] */
    MEMF(ebp + -20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + -16)); /* fadd dword ptr [ebp - 0x10] */
    MEMF(ebp + -16) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + -12)); /* fadd dword ptr [ebp - 0xc] */
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A4D45u); RECOMP_ABI_CALL(0x0044F880u, sub_0044F880); /* call 0x0044F880 */

loc_004A4D45: ;
    MEM32(esi + 0x74) = eax;
    fp_push(MEMF(edi + 0xB0)); /* fld float */
    SET_LO8(eax, MEM8(esi + 0x7C));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A4D71; /* je: equal / zero */

loc_004A4D58: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6424F8)); /* fmul dword ptr [0x6424f8] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A4D63u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A4D63: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6424F0);
    PUSH32(esp, 0x10);
    edx = ebp + -36;
    PUSH32(esp, edx);
    goto loc_004A4D88;

loc_004A4D71: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6424EC)); /* fmul dword ptr [0x6424ec] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A4D7Cu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A4D7C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6424F0);
    PUSH32(esp, 0x10);
    eax = ebp + -36;
    PUSH32(esp, eax);

loc_004A4D88: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A4D8Du); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A4D8D: ;
    eax = MEM32(0x6985E8);
    ecx = MEM32(eax + 0x10);
    fp_push(MEMF(eax + 0x10)); /* fld float */
    edi = esi + 0x3C;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x30) = ecx;
    MEM32(edi + 4) = eax;
    MEM32(edi + 8) = eax;
    eax = ebp + -36;
    ecx = eax + 1;

loc_004A4DB2: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A4DB2; /* jne: not equal / not zero */

loc_004A4DB9: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = eax + 1;
    eax = ebx + ebx;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A4DCCu); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_004A4DCC: ;
    eax = esp;
    PUSH32(esp, ebx);
    edx = ebp + -36;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A4DD9u); RECOMP_ABI_CALL(0x004056C0u, sub_004056C0); /* call 0x004056C0 */

loc_004A4DD9: ;
    fp_push((double)SMEM32(esi + 0x14)); /* fild */
    ecx = MEM32(esi + 0x34);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x64;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ebp + -4) = eax;
    fp_push((double)SMEM32(ebp + -4)); /* fild */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A4E0Du); RECOMP_ABI_CALL(0x005DF5B0u, sub_005DF5B0); /* call 0x005DF5B0 */

loc_004A4E0D: ;
    esp = ebp + -48;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_004A4E20
 * Original: 0x004A4E20 - 0x004A4E43 (35 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A4E20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A4E20: ;
    MEM32(ecx + 0x4C) = 0x32;
    MEM32(ecx + 0x54) = 0x64;
    eax = MEM32(ecx + 0x3C);
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x3C) = eax;
    eax = eax & 0xFFFFFF7Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x3C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_004A4E50
 * Original: 0x004A4E50 - 0x004A4E5A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A4E50(void)
{

loc_004A4E50: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x7C) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A4E60
 * Original: 0x004A4E60 - 0x004A4E65 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A4E60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A4E60: ;
    g_seh_ebp = ebp; sub_004A4E20(); return; /* tail jmp 0x004A4E20 */

}

/**
 * sub_004A4E70
 * Original: 0x004A4E70 - 0x004A4ED5 (101 bytes, 30 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A4E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A4E70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A4E78u); RECOMP_ABI_CALL(0x0049EB40u, sub_0049EB40); /* call 0x0049EB40 */

loc_004A4E78: ;
    MEM32(esi) = 0x642504;
    eax = 0x3F000000;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = 0x3E4CCCCD;
    eax = 0x3F4CCCCD;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    eax = 0x3F800000;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x34) = eax;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esi + 0x30) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_004A4ED1; /* jne: not equal / not zero */

loc_004A4EBA: ;
    PUSH32(esp, 0x640CD8);
    ecx = esi;
    PUSH32(esp, 0x004A4EC6u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_004A4EC6: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004A4ECDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A4ECAu); } /* indirect call */
    }

loc_004A4ECD: ;
    MEM8(esi + 0xC) = 1;

loc_004A4ED1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A4EE0
 * Original: 0x004A4EE0 - 0x004A4EE6 (6 bytes, 2 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A4EE0(void)
{

loc_004A4EE0: ;
    eax = 0x642524;
    esp += 4; return; /* ret */

}

/**
 * sub_004A4EF0
 * Original: 0x004A4EF0 - 0x004A4F5B (107 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A4EF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A4EF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004A4EFEu); RECOMP_ABI_CALL(0x00406990u, sub_00406990); /* call 0x00406990 */

loc_004A4EFE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64255C);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A4F14u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A4F14: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64253C);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A4F2Au); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A4F2A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x6415B8);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A4F40u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A4F40: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x642220);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A4F56u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A4F56: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A4F60
 * Original: 0x004A4F60 - 0x004A4F79 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A4F60(void)
{

loc_004A4F60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A4F68u); RECOMP_ABI_CALL(0x0049EB40u, sub_0049EB40); /* call 0x0049EB40 */

loc_004A4F68: ;
    MEM32(esi) = 0x64257C;
    MEM32(esi + 0x10) = 0x3F800000;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A4F80
 * Original: 0x004A4F80 - 0x004A4F86 (6 bytes, 2 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A4F80(void)
{

loc_004A4F80: ;
    eax = 0x64259C;
    esp += 4; return; /* ret */

}

/**
 * sub_004A4F90
 * Original: 0x004A4F90 - 0x004A5035 (165 bytes, 51 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A4F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A4F90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A4F99u); RECOMP_ABI_CALL(0x0049E150u, sub_0049E150); /* call 0x0049E150 */

loc_004A4F99: ;
    MEM32(esi) = 0x6425E0;
    eax = MEM32(0x6985EC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A4FD3; /* jne: not equal / not zero */

loc_004A4FAA: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x6425C0);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x004A4FB8u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_004A4FB8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A4FCD; /* je: equal / zero */

loc_004A4FBF: ;
    ecx = eax;
    PUSH32(esp, 0x004A4FC6u); RECOMP_ABI_CALL(0x004A4E70u, sub_004A4E70); /* call 0x004A4E70 */

loc_004A4FC6: ;
    MEM32(0x6985EC) = eax;
    goto loc_004A4FD3;

loc_004A4FCD: ;
    MEM32(0x6985EC) = ebx;

loc_004A4FD3: ;
    ecx = MEM32(0x6985F0);
    eax = MEM32(0x6985E8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(0x6985F0) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004A5012; /* jne: not equal / not zero */

loc_004A4FE9: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x6425C0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x004A4FF7u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_004A4FF7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A500C; /* je: equal / zero */

loc_004A4FFE: ;
    ecx = eax;
    PUSH32(esp, 0x004A5005u); RECOMP_ABI_CALL(0x004A4F60u, sub_004A4F60); /* call 0x004A4F60 */

loc_004A5005: ;
    MEM32(0x6985E8) = eax;
    goto loc_004A5012;

loc_004A500C: ;
    MEM32(0x6985E8) = ebx;

loc_004A5012: ;
    MEM32(0x6985F4) = MEM32(0x6985F4) + 1;
    _fa = (uint32_t)(MEM32(0x6985F4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi + 0x3C;
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x38) = ebx;
    PUSH32(esp, 0x004A5026u); RECOMP_ABI_CALL(0x005E1AF0u, sub_005E1AF0); /* call 0x005E1AF0 */

loc_004A5026: ;
    ecx = esi;
    MEM8(esi + 0x7C) = LO8(ebx);
    PUSH32(esp, 0x004A5030u); RECOMP_ABI_CALL(0x004A4E20u, sub_004A4E20); /* call 0x004A4E20 */

loc_004A5030: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004A5040
 * Original: 0x004A5040 - 0x004A5046 (6 bytes, 2 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A5040(void)
{

loc_004A5040: ;
    eax = 0x642620;
    esp += 4; return; /* ret */

}

/**
 * sub_004A5050
 * Original: 0x004A5050 - 0x004A50B6 (102 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A5050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A5050: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x34);
    PUSH32(esp, eax);
    MEM32(esi) = 0x6425E0;
    PUSH32(esp, 0x004A5062u); RECOMP_ABI_CALL(0x005E1010u, sub_005E1010); /* call 0x005E1010 */

loc_004A5062: ;
    eax = MEM32(0x6985F4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x6985F4) = eax;
    if ((_fa != 0)) goto loc_004A508C; /* jne: not equal / not zero */

loc_004A5072: ;
    ecx = MEM32(0x6985E8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A5082; /* je: equal / zero */

loc_004A507C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004A5082u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A5080u); } /* indirect call */
    }

loc_004A5082: ;
    MEM32(0x6985E8) = 0;

loc_004A508C: ;
    MEM32(0x6985F0) = MEM32(0x6985F0) - 1;
    _fa = (uint32_t)(MEM32(0x6985F0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004A50AE; /* jne: not equal / not zero */

loc_004A5094: ;
    ecx = MEM32(0x6985EC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A50A4; /* je: equal / zero */

loc_004A509E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004A50A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A50A2u); } /* indirect call */
    }

loc_004A50A4: ;
    MEM32(0x6985EC) = 0;

loc_004A50AE: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0049E1A0(); return; /* tail jmp 0x0049E1A0 */

}

/**
 * sub_004A50C0
 * Original: 0x004A50C0 - 0x004A518C (204 bytes, 70 insns)
 * Category: game_vehicle
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A50C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A50C0: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_004A50D6; /* jne: not equal / not zero */

loc_004A50D1: ;
    ebx = 4;

loc_004A50D6: ;
    eax = MEM32(esp + 0x80);
    ecx = MEM32(esp + 0x7C);
    edi = MEM32(esp + 0x78);
    PUSH32(esp, 0x640CD8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004A50F4u); RECOMP_ABI_CALL(0x0049E1B0u, sub_0049E1B0); /* call 0x0049E1B0 */

loc_004A50F4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x642630);
    edx = esp + 0x18;
    PUSH32(esp, 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A5106u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A5106: ;
    ecx = MEM32(0x6985E8);
    SET_LO8(eax, MEM8(ecx + 0xC));
    ebx = ecx + 0xC;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebp = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004A5130; /* jne: not equal / not zero */

loc_004A511B: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A5125u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_004A5125: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004A512Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A512Au); } /* indirect call */
    }

loc_004A512D: ;
    MEM8(ebx) = 1;

loc_004A5130: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x62F39C);
    PUSH32(esp, 0x004A513Cu); RECOMP_ABI_CALL(0x005E11E0u, sub_005E11E0); /* call 0x005E11E0 */

loc_004A513C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = eax;
    MEM32(esi + 0x34) = eax;
    PUSH32(esp, 0x004A514Bu); RECOMP_ABI_CALL(0x005E0520u, sub_005E0520); /* call 0x005E0520 */

loc_004A514B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004A5151u); RECOMP_ABI_CALL(0x004690F0u, sub_004690F0); /* call 0x004690F0 */

loc_004A5151: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x48);
    MEM32(esi + 0x38) = ecx;
    ecx = edi + edi * 2;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x6C3434) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6C3434;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004A516Eu); RECOMP_ABI_CALL(0x005407A0u, sub_005407A0); /* call 0x005407A0 */

loc_004A516E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A517Bu); RECOMP_ABI_CALL(0x004A4E50u, sub_004A4E50); /* call 0x004A4E50 */

loc_004A517B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004A5182u); RECOMP_ABI_CALL(0x0049E240u, sub_0049E240); /* call 0x0049E240 */

loc_004A5182: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004A5190
 * Original: 0x004A5190 - 0x004A51AE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A5190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A5190: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A5198u); RECOMP_ABI_CALL(0x004A5050u, sub_004A5050); /* call 0x004A5050 */

loc_004A5198: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004A51A8; /* je: equal / zero */

loc_004A519F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004A51A5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_004A51A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A51A8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A51B0
 * Original: 0x004A51B0 - 0x004A51BC (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A51B0(void)
{

loc_004A51B0: ;
    MEM32(ecx + 0x4C) = 4;
    MEM8(ecx + 0x50) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_004A51C0
 * Original: 0x004A51C0 - 0x004A53DE (542 bytes, 143 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A51C0(void)
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

loc_004A51C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(0x6985F8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004A520E; /* jne: not equal / not zero */

loc_004A51D6: ;
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(eax + 0x24)); /* fld float */
    ecx = MEM32(esp + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x24)); /* fsub dword ptr [ecx + 0x24] */
    fp_push(MEMF(eax + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x2C)); /* fsub dword ptr [ecx + 0x2c] */
    fp_push(MEMF(esi + 0x14)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (TEST_Z(_fa, _fb)) goto loc_004A53D7; /* je: equal / zero */

loc_004A520E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    eax = MEM32(0x858430);
    MEM32(esp + 0x1C) = eax;
    if (CMP_A(_fa, _fb)) goto loc_004A53D7; /* ja: above (unsigned >) */

loc_004A5220: ;
    { uint32_t _jt = MEM32(ebp * 4 + 0x4A53E0); /* switch: 4 entries, 3 targets */
    if (_jt == 0x004A5227u) goto loc_004A5227;
    if (_jt == 0x004A5277u) goto loc_004A5277;
    if (_jt == 0x004A527Cu) goto loc_004A527C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_004A5227: ;
    _fa = (uint32_t)(MEM8(edi + 0x50)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x50), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A5240; /* jne: not equal / not zero */

loc_004A522C: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x004A5233u); RECOMP_ABI_CALL(0x005EE1A0u, sub_005EE1A0); /* call 0x005EE1A0 */

loc_004A5233: ;
    MEM8(edi + 0x50) = 1;
    esi = MEM32(0x6985F8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A5240: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x58;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A524D; /* je: equal / zero */

loc_004A5248: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A525F; /* jne: not equal / not zero */

loc_004A524D: ;
    _fa = (uint32_t)(MEM8(edi + 0x50)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x50), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A525F; /* je: equal / zero */

loc_004A5252: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004A5259u); RECOMP_ABI_CALL(0x005EE1A0u, sub_005EE1A0); /* call 0x005EE1A0 */

loc_004A5259: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + 0x50) = LO8(ebx);

loc_004A525F: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004A5269u); RECOMP_ABI_CALL(0x005EDB20u, sub_005EDB20); /* call 0x005EDB20 */

loc_004A5269: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A5281; /* jne: not equal / not zero */

loc_004A5271: ;
    edx = MEM32(edi + 0x44);
    PUSH32(esp, edx);
    goto loc_004A5285;

loc_004A5277: ;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x68;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004A524D;

loc_004A527C: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x78;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004A524D;

loc_004A5281: ;
    eax = MEM32(edi + 0x40);
    PUSH32(esp, eax);

loc_004A5285: ;
    PUSH32(esp, 0x004A528Au); RECOMP_ABI_CALL(0x005FB260u, sub_005FB260); /* call 0x005FB260 */

loc_004A528A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 4);
    PUSH32(esp, 5);
    PUSH32(esp, 0x004A5296u); RECOMP_ABI_CALL(0x005FB070u, sub_005FB070); /* call 0x005FB070 */

loc_004A5296: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004A529Cu); RECOMP_ABI_CALL(0x0045F8D0u, sub_0045F8D0); /* call 0x0045F8D0 */

loc_004A529C: ;
    eax = MEM32(0x85B2AC);
    MEM32(0x85B2A4) = 0;
    MEM32(0x85B2B0) = 0;
    MEM32(eax) = 0x3F800000;
    MEM32(eax + 8) = ebx;
    edx = 0xBF000000u;
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(0x85B2AC);
    MEM32(0x85B2A4) = 0;
    MEM32(0x85B2B0) = 0x3F800000;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    MEM32(eax) = 0x3F800000;
    MEM32(eax + 8) = ebx;
    ecx = 0x3F000000;
    MEM32(eax + 4) = ecx;
    esi = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = esi;
    esi = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = esi;
    esi = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = esi;
    eax = MEM32(0x85B2AC);
    MEM32(0x85B2A4) = 0x3F800000;
    MEM32(0x85B2B0) = 0;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    MEM32(eax + 4) = edx;
    MEM32(eax) = 0xBF800000u;
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
    MEM32(0x85B2A4) = 0x3F800000;
    MEM32(0x85B2B0) = 0x3F800000;
    MEM32(eax) = 0xBF800000u;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ebx;
    ecx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x85B2AC) = MEM32(0x85B2AC) + 0x18;
    _fa = (uint32_t)(MEM32(0x85B2AC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004A53CAu); RECOMP_ABI_CALL(0x005FB150u, sub_005FB150); /* call 0x005FB150 */

loc_004A53CA: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A53D4u); RECOMP_ABI_CALL(0x005EE1A0u, sub_005EE1A0); /* call 0x005EE1A0 */

loc_004A53D4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A53D7: ;
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
 * sub_004A53F0
 * Original: 0x004A53F0 - 0x004A5462 (114 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A53F0(void)
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

loc_004A53F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A5460; /* je: equal / zero */

loc_004A53FA: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A5460; /* je: equal / zero */

loc_004A5401: ;
    eax = MEM32(esi + 0x48);
    fp_push((double)SMEM32(eax)); /* fild */
    edx = MEM32(0x6985F8);
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(eax + 4)); /* fidiv dword ptr [eax + 4] */
    eax = MEM32(edx + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(0x6985FC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A542Du); RECOMP_ABI_CALL(0x005FA880u, sub_005FA880); /* call 0x005FA880 */

loc_004A542D: ;
    ebx = MEM32(esi + 0x48);
    fp_push((double)SMEM32(ebx + 4)); /* fild */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    PUSH32(esp, 0x004A5442u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A5442: ;
    fp_push((double)SMEM32(ebx)); /* fild */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    PUSH32(esp, 0x004A544Du); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A544D: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A545Eu); RECOMP_ABI_CALL(0x005FAA80u, sub_005FAA80); /* call 0x005FAA80 */

loc_004A545E: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_004A5460: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004A5470
 * Original: 0x004A5470 - 0x004A5475 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A5470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A5470: ;
    g_seh_ebp = ebp; sub_0049E2A0(); return; /* tail jmp 0x0049E2A0 */

}

/**
 * sub_004A5480
 * Original: 0x004A5480 - 0x004A5484 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A5480(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A5480: ;
    MEM32(ecx + 0x24) = MEM32(ecx + 0x24) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_004A5490
 * Original: 0x004A5490 - 0x004A54A0 (16 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A5490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A5490: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A5498u); RECOMP_ABI_CALL(0x005C3530u, sub_005C3530); /* call 0x005C3530 */

loc_004A5498: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004A5480(); return; /* tail jmp 0x004A5480 */

}

/**
 * sub_004A54A0
 * Original: 0x004A54A0 - 0x004A55D6 (310 bytes, 107 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A54A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A54A0: ;
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
    PUSH32(esp, 0x004A54C7u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A54C7: ;
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
    PUSH32(esp, 0x004A54E4u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A54E4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x6414E4);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A54F9u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A54F9: ;
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
    PUSH32(esp, 0x004A5512u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A5512: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x642684);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A5527u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A5527: ;
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
    PUSH32(esp, 0x004A5540u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A5540: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x642670);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A5555u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A5555: ;
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
    PUSH32(esp, 0x004A556Eu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A556E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x64265C);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A5583u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A5583: ;
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
    PUSH32(esp, 0x004A559Cu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A559C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x642648);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A55B1u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A55B1: ;
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
    PUSH32(esp, 0x004A55CAu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A55CA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004A55E0
 * Original: 0x004A55E0 - 0x004A5600 (32 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A55E0(void)
{

loc_004A55E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A55E8u); RECOMP_ABI_CALL(0x0049EB40u, sub_0049EB40); /* call 0x0049EB40 */

loc_004A55E8: ;
    MEM32(esi) = 0x642698;
    MEM32(esi + 0x10) = 0x3F800000;
    MEM32(esi + 0x14) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A5600
 * Original: 0x004A5600 - 0x004A5606 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A5600(void)
{

loc_004A5600: ;
    eax = 0x6426B8;
    esp += 4; return; /* ret */

}

/**
 * sub_004A5610
 * Original: 0x004A5610 - 0x004A5614 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A5610(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A5610: ;
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_004A5620
 * Original: 0x004A5620 - 0x004A5630 (16 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A5620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A5620: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A5628u); RECOMP_ABI_CALL(0x005C3530u, sub_005C3530); /* call 0x005C3530 */

loc_004A5628: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004A5610(); return; /* tail jmp 0x004A5610 */

}

/**
 * sub_004A5630
 * Original: 0x004A5630 - 0x004A5659 (41 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A5630(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A5630: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004A563Eu); RECOMP_ABI_CALL(0x00406990u, sub_00406990); /* call 0x00406990 */

loc_004A563E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x6417B0);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A5654u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A5654: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A5660
 * Original: 0x004A5660 - 0x004A5712 (178 bytes, 60 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A5660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A5660: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x34);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi) = 0x6426E0;
    if (CMP_EQ(_fa, _fb)) goto loc_004A5685; /* je: equal / zero */

loc_004A5671: ;
    MEM32(edi) = MEM32(edi) - 1;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004A5685; /* jne: not equal / not zero */

loc_004A5675: ;
    ecx = edi;
    PUSH32(esp, 0x004A567Cu); RECOMP_ABI_CALL(0x005FA390u, sub_005FA390); /* call 0x005FA390 */

loc_004A567C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004A5682u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_004A5682: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A5685: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A5695; /* je: equal / zero */

loc_004A568C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A5692u); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_004A5692: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A5695: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A56A5; /* je: equal / zero */

loc_004A569C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A56A2u); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_004A56A2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A56A5: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A56B5; /* je: equal / zero */

loc_004A56AC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A56B2u); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_004A56B2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A56B5: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A56C5; /* je: equal / zero */

loc_004A56BC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A56C2u); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_004A56C2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A56C5: ;
    MEM32(0x698604) = MEM32(0x698604) - 1;
    _fa = (uint32_t)(MEM32(0x698604)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004A56E7; /* jne: not equal / not zero */

loc_004A56CD: ;
    ecx = MEM32(0x6985FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A56DD; /* je: equal / zero */

loc_004A56D7: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004A56DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A56DBu); } /* indirect call */
    }

loc_004A56DD: ;
    MEM32(0x6985FC) = 0;

loc_004A56E7: ;
    MEM32(0x698600) = MEM32(0x698600) - 1;
    _fa = (uint32_t)(MEM32(0x698600)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004A5709; /* jne: not equal / not zero */

loc_004A56EF: ;
    ecx = MEM32(0x6985F8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A56FF; /* je: equal / zero */

loc_004A56F9: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004A56FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A56FDu); } /* indirect call */
    }

loc_004A56FF: ;
    MEM32(0x6985F8) = 0;

loc_004A5709: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0049E1A0(); return; /* tail jmp 0x0049E1A0 */

}

/**
 * sub_004A5720
 * Original: 0x004A5720 - 0x004A5726 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A5720(void)
{

loc_004A5720: ;
    eax = 0x642720;
    esp += 4; return; /* ret */

}

/**
 * sub_004A5730
 * Original: 0x004A5730 - 0x004A581C (236 bytes, 82 insns)
 * Category: game_ui
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A5730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A5730: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A5744; /* jne: not equal / not zero */

loc_004A573F: ;
    edi = 4;

loc_004A5744: ;
    eax = MEM32(esp + 0x78);
    ecx = MEM32(esp + 0x74);
    edx = MEM32(esp + 0x70);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64277C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x004A5760u); RECOMP_ABI_CALL(0x0049E1B0u, sub_0049E1B0); /* call 0x0049E1B0 */

loc_004A5760: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x64276C);
    eax = esp + 0x14;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A5772u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A5772: ;
    ecx = MEM32(0x6985FC);
    SET_LO8(eax, MEM8(ecx + 0xC));
    edi = ecx + 0xC;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004A579B; /* jne: not equal / not zero */

loc_004A5787: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A5791u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_004A5791: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004A5798u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A5795u); } /* indirect call */
    }

loc_004A5798: ;
    MEM8(edi) = 1;

loc_004A579B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x64275C);
    PUSH32(esp, 0x004A57A9u); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_004A57A9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x38) = eax;
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_004A5814; /* je: equal / zero */

loc_004A57B4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x64275C);
    PUSH32(esp, 0x004A57C2u); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_004A57C2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x3C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004A5814; /* je: equal / zero */

loc_004A57CC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x642748);
    PUSH32(esp, 0x004A57DAu); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_004A57DA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x40) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004A5814; /* je: equal / zero */

loc_004A57E4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x642734);
    PUSH32(esp, 0x004A57F2u); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_004A57F2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x44) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004A5814; /* je: equal / zero */

loc_004A57FC: ;
    PUSH32(esp, 0x004A5801u); RECOMP_ABI_CALL(0x005ED990u, sub_005ED990); /* call 0x005ED990 */

loc_004A5801: ;
    ecx = esi;
    MEM32(esi + 0x34) = eax;
    PUSH32(esp, 0x004A580Bu); RECOMP_ABI_CALL(0x004A53F0u, sub_004A53F0); /* call 0x004A53F0 */

loc_004A580B: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x004A5814u); RECOMP_ABI_CALL(0x0049E240u, sub_0049E240); /* call 0x0049E240 */

loc_004A5814: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004A5820
 * Original: 0x004A5820 - 0x004A5947 (295 bytes, 100 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A5820(void)
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

loc_004A5820: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x34));
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x38);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esp + 8) = ecx;
    PUSH32(esp, 0x004A5832u); RECOMP_ABI_CALL(0x005EE8D0u, sub_005EE8D0); /* call 0x005EE8D0 */

loc_004A5832: ;
    eax = MEM32(0x698624);
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_004A5940; /* jle: less or equal (signed <=) */

loc_004A5846: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x44);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_004A5850: ;
    esi = MEM32(eax + 8);
    eax = MEM32(esi + edi + 0x1C);
    ecx = MEM32(eax + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x10)) >> 32) & 1);
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ecx;
    edx = MEM32(eax + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(edi)) >> 32) & 1);
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x1C) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x20) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(esp + 0x24) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(esp + 0x28) = edx;
    ecx = MEM32(eax + 0x18);
    MEM32(esp + 0x2C) = ecx;
    edx = MEM32(eax + 0x1C);
    MEM32(esp + 0x30) = edx;
    ecx = MEM32(eax + 0x20);
    MEM32(esp + 0x34) = ecx;
    edx = MEM32(eax + 0x24);
    MEM32(esp + 0x38) = edx;
    ecx = MEM32(eax + 0x28);
    MEM32(esp + 0x3C) = ecx;
    edx = MEM32(eax + 0x2C);
    MEM32(esp + 0x40) = edx;
    _fa = (uint32_t)(MEM32(esi + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x64), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004A58E3; /* jne: not equal / not zero */

loc_004A58B6: ;
    ecx = MEM32(esi + 0x58);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004A58BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A58BBu); } /* indirect call */
    }

loc_004A58BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004A58DF; /* je: equal / zero */

loc_004A58C2: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(ecx + 0x4C);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edx + 0x95E8));
    if (0xA) _cf = (int)(((eax) >> ((0xA) - 1)) & 1);
    eax = eax >> 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004A58F8;

loc_004A58DF: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004A58FA;

loc_004A58E3: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(ecx + 0x48);
    esi = MEM32(edx + 0x1C);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004A58F8: ;
    esi = eax;

loc_004A58FA: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    eax = MEM32(0x6985F8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x20)); /* fmul dword ptr [eax + 0x20] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x004A5917u); RECOMP_ABI_CALL(0x00607C60u, sub_00607C60); /* call 0x00607C60 */

loc_004A5917: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x004A5927u); RECOMP_ABI_CALL(0x004A51C0u, sub_004A51C0); /* call 0x004A51C0 */

loc_004A5927: ;
    eax = MEM32(0x698624);
    ecx = MEM32(eax);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x42C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x42C)) >> 32) & 1);
    edi = edi + 0x42C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_004A5850; /* jl: less (signed <) */

loc_004A593D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_004A5940: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x34)) >> 32) & 1);
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
 * sub_004A5950
 * Original: 0x004A5950 - 0x004A5A65 (277 bytes, 88 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A5950(void)
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

loc_004A5950: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x38);
    PUSH32(esp, ebx);
    ebx = MEM32(0x6C3304);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edi = ecx;
    MEM32(esp + 0x10) = ebx;
    PUSH32(esp, 0x004A596Cu); RECOMP_ABI_CALL(0x005EE8D0u, sub_005EE8D0); /* call 0x005EE8D0 */

loc_004A596C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004A5A5C; /* jle: less or equal (signed <=) */

loc_004A5979: ;
    ebx = MEM32(esp + 0x48);
    PUSH32(esp, ebp);
    ebp = 8;

loc_004A5983: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A5A4B; /* je: equal / zero */

loc_004A598C: ;
    ecx = MEM32(0x69585C);
    _fa = (uint32_t)(MEM32(ecx + ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + ebp), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A5A4B; /* je: equal / zero */

loc_004A599C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004A59A2u); RECOMP_ABI_CALL(0x004690F0u, sub_004690F0); /* call 0x004690F0 */

loc_004A59A2: ;
    eax = MEM32(eax + 0x10);
    edx = MEM32(eax + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x1C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x20) = edx;
    ecx = MEM32(eax + 0xC);
    MEM32(esp + 0x24) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(esp + 0x28) = edx;
    ecx = MEM32(eax + 0x14);
    MEM32(esp + 0x2C) = ecx;
    edx = MEM32(eax + 0x18);
    MEM32(esp + 0x30) = edx;
    ecx = MEM32(eax + 0x1C);
    MEM32(esp + 0x34) = ecx;
    edx = MEM32(eax + 0x20);
    MEM32(esp + 0x38) = edx;
    ecx = MEM32(eax + 0x24);
    MEM32(esp + 0x3C) = ecx;
    edx = MEM32(eax + 0x28);
    MEM32(esp + 0x40) = edx;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    eax = MEM32(eax + 0x2C);
    MEM32(esp + 0x44) = eax;
    eax = MEM32(0x6985F8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x20)); /* fmul dword ptr [eax + 0x20] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x004A5A1Cu); RECOMP_ABI_CALL(0x00607C60u, sub_00607C60); /* call 0x00607C60 */

loc_004A5A1C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004A5A22u); RECOMP_ABI_CALL(0x004690F0u, sub_004690F0); /* call 0x004690F0 */

loc_004A5A22: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + 0x48);
    ecx = MEM32(eax + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A5A3C; /* jne: not equal / not zero */

loc_004A5A33: ;
    PUSH32(esp, 3);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    goto loc_004A5A43;

loc_004A5A3C: ;
    PUSH32(esp, 0);
    edx = esp + 0x18;
    PUSH32(esp, edx);

loc_004A5A43: ;
    ecx = edi;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004A5A4Bu); RECOMP_ABI_CALL(0x004A51C0u, sub_004A51C0); /* call 0x004A51C0 */

loc_004A5A4B: ;
    eax = MEM32(esp + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004A5983; /* jl: less (signed <) */

loc_004A5A5B: ;
    POP32(esp, ebp);

loc_004A5A5C: ;
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
 * sub_004A5A70
 * Original: 0x004A5A70 - 0x004A5A75 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A5A70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A5A70: ;
    g_seh_ebp = ebp; sub_004A53F0(); return; /* tail jmp 0x004A53F0 */

}

/**
 * sub_004A5A80
 * Original: 0x004A5A80 - 0x004A5B12 (146 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A5A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A5A80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A5A88u); RECOMP_ABI_CALL(0x0049EB40u, sub_0049EB40); /* call 0x0049EB40 */

loc_004A5A88: ;
    edx = 0x3F800000;
    ecx = esi + 0x28;
    MEM32(esi) = 0x642784;
    MEM32(esi + 0x10) = 0x42700000;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = 0x447A0000;
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x20) = edx;
    MEM32(esi + 0x24) = 0;
    PUSH32(esp, 0x004A5AB9u); RECOMP_ABI_CALL(0x004A7140u, sub_004A7140); /* call 0x004A7140 */

loc_004A5AB9: ;
    ecx = esi + 0x40;
    PUSH32(esp, 0x004A5AC1u); RECOMP_ABI_CALL(0x004A7140u, sub_004A7140); /* call 0x004A7140 */

loc_004A5AC1: ;
    MEM32(esi + 0x58) = edx;
    MEM32(esi + 0x5C) = edx;
    MEM32(esi + 0x60) = edx;
    MEM32(esi + 0x64) = edx;
    eax = 0x3E4CCCCD;
    MEM32(esi + 0x68) = edx;
    MEM32(esi + 0x6C) = eax;
    MEM32(esi + 0x70) = eax;
    MEM32(esi + 0x74) = edx;
    MEM32(esi + 0x78) = eax;
    MEM32(esi + 0x7C) = eax;
    MEM32(esi + 0x80) = edx;
    MEM32(esi + 0x84) = edx;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A5B0E; /* jne: not equal / not zero */

loc_004A5AF7: ;
    PUSH32(esp, 0x64277C);
    ecx = esi;
    PUSH32(esp, 0x004A5B03u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_004A5B03: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004A5B0Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A5B07u); } /* indirect call */
    }

loc_004A5B0A: ;
    MEM8(esi + 0xC) = 1;

loc_004A5B0E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A5B20
 * Original: 0x004A5B20 - 0x004A5B26 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A5B20(void)
{

loc_004A5B20: ;
    eax = 0x6427A4;
    esp += 4; return; /* ret */

}

/**
 * sub_004A5B30
 * Original: 0x004A5B30 - 0x004A5C0F (223 bytes, 81 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A5B30(void)
{

loc_004A5B30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004A5B3Eu); RECOMP_ABI_CALL(0x00406990u, sub_00406990); /* call 0x00406990 */

loc_004A5B3E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x642848);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A5B54u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A5B54: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x642830);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A5B6Au); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A5B6A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x642814);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A5B80u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A5B80: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x642800);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A5B96u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A5B96: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6427EC);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A5BACu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A5BAC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x58;
    PUSH32(esp, edx);
    PUSH32(esp, 0x6427D4);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A5BC2u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A5BC2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x68;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6427C8);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A5BD8u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A5BD8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x78;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6427BC);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A5BEEu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A5BEE: ;
    PUSH32(esp, 0x6419E8);
    PUSH32(esp, edi);
    ecx = esi + 0x28;
    PUSH32(esp, 0x004A5BFCu); RECOMP_ABI_CALL(0x004A54A0u, sub_004A54A0); /* call 0x004A54A0 */

loc_004A5BFC: ;
    PUSH32(esp, 0x63F784);
    PUSH32(esp, edi);
    ecx = esi + 0x40;
    PUSH32(esp, 0x004A5C0Au); RECOMP_ABI_CALL(0x004A54A0u, sub_004A54A0); /* call 0x004A54A0 */

loc_004A5C0A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A5C10
 * Original: 0x004A5C10 - 0x004A5C5E (78 bytes, 24 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A5C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A5C10: ;
    eax = MEM32(0x6985F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004A5C54; /* jne: not equal / not zero */

loc_004A5C1C: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x640C58);
    PUSH32(esp, 0x88);
    PUSH32(esp, 0x004A5C2Du); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_004A5C2D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A5C4A; /* je: equal / zero */

loc_004A5C34: ;
    ecx = eax;
    PUSH32(esp, 0x004A5C3Bu); RECOMP_ABI_CALL(0x004A5A80u, sub_004A5A80); /* call 0x004A5A80 */

loc_004A5C3B: ;
    MEM32(0x6985F8) = eax;
    MEM32(0x698600) = MEM32(0x698600) + 1;
    _fa = (uint32_t)(MEM32(0x698600)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004A5C4A: ;
    MEM32(0x6985F8) = 0;

loc_004A5C54: ;
    MEM32(0x698600) = MEM32(0x698600) + 1;
    _fa = (uint32_t)(MEM32(0x698600)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A5C60
 * Original: 0x004A5C60 - 0x004A5CF7 (151 bytes, 49 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A5C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A5C60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A5C69u); RECOMP_ABI_CALL(0x0049E150u, sub_0049E150); /* call 0x0049E150 */

loc_004A5C69: ;
    ecx = esi + 0x30;
    MEM32(esi) = 0x6426E0;
    PUSH32(esp, 0x004A5C77u); RECOMP_ABI_CALL(0x004A5C10u, sub_004A5C10); /* call 0x004A5C10 */

loc_004A5C77: ;
    eax = MEM32(0x6985FC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A5CAB; /* jne: not equal / not zero */

loc_004A5C82: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x640C58);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x004A5C90u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_004A5C90: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A5CA5; /* je: equal / zero */

loc_004A5C97: ;
    ecx = eax;
    PUSH32(esp, 0x004A5C9Eu); RECOMP_ABI_CALL(0x004A55E0u, sub_004A55E0); /* call 0x004A55E0 */

loc_004A5C9E: ;
    MEM32(0x6985FC) = eax;
    goto loc_004A5CAB;

loc_004A5CA5: ;
    MEM32(0x6985FC) = ebx;

loc_004A5CAB: ;
    MEM32(0x698604) = MEM32(0x698604) + 1;
    _fa = (uint32_t)(MEM32(0x698604)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), 1 (32-bit) */
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 0x3C) = ebx;
    MEM32(esi + 0x40) = ebx;
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x4C) = 4;
    MEM8(esi + 0x50) = LO8(ebx);
    MEM32(esi + 0x54) = ebx;
    MEM32(esi + 0x58) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_004A5CE6; /* jne: not equal / not zero */

loc_004A5CD6: ;
    eax = MEM32(0x6985F8);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x48) = eax;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_004A5CE6: ;
    ecx = MEM32(0x6985F8);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x48) = ecx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004A5D00
 * Original: 0x004A5D00 - 0x004A5D1E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A5D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A5D00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A5D08u); RECOMP_ABI_CALL(0x004A5660u, sub_004A5660); /* call 0x004A5660 */

loc_004A5D08: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004A5D18; /* je: equal / zero */

loc_004A5D0F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004A5D15u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_004A5D15: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A5D18: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A5D20
 * Original: 0x004A5D20 - 0x004A6047 (807 bytes, 245 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A5D20(void)
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

loc_004A5D20: ;
    _fb = (uint32_t)(0xE4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xE4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A603F; /* je: equal / zero */

loc_004A5D34: ;
    SET_LO8(eax, MEM8(esi + 0x29));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A603F; /* je: equal / zero */

loc_004A5D3F: ;
    eax = MEM32(esi + 0xC);
    ecx = eax + eax * 2;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x6C3434) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6C3434;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004A5D53u); RECOMP_ABI_CALL(0x00540770u, sub_00540770); /* call 0x00540770 */

loc_004A5D53: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A603F; /* je: equal / zero */

loc_004A5D5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A5D78; /* jne: not equal / not zero */

loc_004A5D61: ;
    _fa = (uint32_t)(MEM32(0x6C3304)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C3304), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A5D78; /* jne: not equal / not zero */

loc_004A5D6A: ;
    eax = MEM32(0x698624);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A603F; /* je: equal / zero */

loc_004A5D78: ;
    ecx = MEM32(0x8583A0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEM32(esp + 0x2C) = ecx;
    PUSH32(esp, 0x858548);
    ecx = esp + 0xB8;
    PUSH32(esp, 0x004A5D96u); RECOMP_ABI_CALL(0x00457640u, sub_00457640); /* call 0x00457640 */

loc_004A5D96: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A5D9Fu); RECOMP_ABI_CALL(0x004690F0u, sub_004690F0); /* call 0x004690F0 */

loc_004A5D9F: ;
    edi = MEM32(eax + 0x10);
    fp_push(MEMF(edi + 0x28)); /* fld float */
    eax = MEM32(0x858430);
    ecx = MEM32(0x6985F8);
    fp_top() = -fp_top(); /* fchs */
    edx = MEM32(ecx + 0x24);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x30)); /* fld float */
    ebx = MEM32(0x6985FC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = -fp_top(); /* fchs */
    MEM32(esp + 0x34) = eax;
    eax = MEM32(esi + 0x54);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x24) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_004A5DE9; /* jne: not equal / not zero */

loc_004A5DE1: ;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x58) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A5E02; /* je: equal / zero */

loc_004A5DE9: ;
    ecx = esi;
    PUSH32(esp, 0x004A5DF0u); RECOMP_ABI_CALL(0x004A53F0u, sub_004A53F0); /* call 0x004A53F0 */

loc_004A5DF0: ;
    ecx = MEM32(0x6985F8);
    edx = MEM32(ecx + 0x24);
    MEM32(esi + 0x54) = edx;
    eax = MEM32(ebx + 0x14);
    MEM32(esi + 0x58) = eax;

loc_004A5E02: ;
    ecx = esi;
    PUSH32(esp, 0x004A5E09u); RECOMP_ABI_CALL(0x004A51B0u, sub_004A51B0); /* call 0x004A51B0 */

loc_004A5E09: ;
    ecx = esp + 0x74;
    PUSH32(esp, 0x004A5E12u); RECOMP_ABI_CALL(0x00609C80u, sub_00609C80); /* call 0x00609C80 */

loc_004A5E12: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x004A5E1Bu); RECOMP_ABI_CALL(0x004572A0u, sub_004572A0); /* call 0x004572A0 */

loc_004A5E1B: ;
    ecx = esp + 0x34;
    PUSH32(esp, 0x004A5E24u); RECOMP_ABI_CALL(0x00609C80u, sub_00609C80); /* call 0x00609C80 */

loc_004A5E24: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    ecx = MEM32(esp + 0x20);
    fp_top() = -fp_top(); /* fchs */
    eax = MEM32(esp + 0x28);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    edx = ecx;
    MEM32(esp + 0x3C) = ecx;
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = esp + 0x78;
    MEM32(esp + 0x58) = edx;
    MEM32(esp + 0x60) = eax;
    PUSH32(esp, 0x004A5E52u); RECOMP_ABI_CALL(0x00609E70u, sub_00609E70); /* call 0x00609E70 */

loc_004A5E52: ;
    ecx = esp + 0x34;
    PUSH32(esp, 0x004A5E5Bu); RECOMP_ABI_CALL(0x00609C80u, sub_00609C80); /* call 0x00609C80 */

loc_004A5E5B: ;
    edx = MEM32(edi + 0x24);
    eax = MEM32(0x6985F8);
    MEM32(esp + 0x64) = edx;
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x28)); /* fmul dword ptr [edi + 0x28] */
    edx = esp + 0x34;
    PUSH32(esp, edx);
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(edi + 0x2C);
    MEM32(esp + 0x70) = ecx;
    ecx = esp + 0x78;
    PUSH32(esp, 0x004A5E86u); RECOMP_ABI_CALL(0x00609E70u, sub_00609E70); /* call 0x00609E70 */

loc_004A5E86: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x004A5E8Du); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_004A5E8D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004A5E94u); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_004A5E94: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004A5E9Bu); RECOMP_ABI_CALL(0x005EDF80u, sub_005EDF80); /* call 0x005EDF80 */

loc_004A5E9B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004A5EA2u); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_004A5EA2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004A5EA9u); RECOMP_ABI_CALL(0x005EE3E0u, sub_005EE3E0); /* call 0x005EE3E0 */

loc_004A5EA9: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x004A5EB0u); RECOMP_ABI_CALL(0x005EE4E0u, sub_005EE4E0); /* call 0x005EE4E0 */

loc_004A5EB0: ;
    PUSH32(esp, 0x674FD0);
    PUSH32(esp, 0x004A5EBAu); RECOMP_ABI_CALL(0x005EDB00u, sub_005EDB00); /* call 0x005EDB00 */

loc_004A5EBA: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004A5EC1u); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_004A5EC1: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004A5ECDu); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_004A5ECD: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004A5ED6u); RECOMP_ABI_CALL(0x005EE5A0u, sub_005EE5A0); /* call 0x005EE5A0 */

loc_004A5ED6: ;
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A5EDFu); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_004A5EDF: ;
    eax = MEM32(esi + 0x48);
    ebp = MEM32(eax);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0);
    MEM32(esp + 0x50) = eax;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(esp + 0x54) = eax;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, 0xFFFFFFFFu);
    MEM32(esp + 0x54) = eax;
    eax = MEM32(esp + 0x5C);
    MEM32(esp + 0x60) = ebp;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    fp_push((double)SMEM32(esp + 0x68)); /* fild */
    PUSH32(esp, edx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x10)); /* fmul dword ptr [ebx + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 0x68)); /* fiadd dword ptr [esp + 0x68] */
    PUSH32(esp, 0x004A5F27u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A5F27: ;
    fp_push((double)SMEM32(esp + 0x70)); /* fild */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x10)); /* fmul dword ptr [ebx + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 0x68)); /* fiadd dword ptr [esp + 0x68] */
    PUSH32(esp, 0x004A5F38u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A5F38: ;
    ecx = MEM32(esp + 0x6C);
    edx = MEM32(esp + 0x68);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A5F48u); RECOMP_ABI_CALL(0x005EF6F0u, sub_005EF6F0); /* call 0x005EF6F0 */

loc_004A5F48: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x80);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x004A5F57u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_004A5F57: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004A5F60u); RECOMP_ABI_CALL(0x005EE5A0u, sub_005EE5A0); /* call 0x005EE5A0 */

loc_004A5F60: ;
    eax = MEM32(esi + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A5F69u); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_004A5F69: ;
    eax = MEM32(esi + 0x48);
    ecx = MEM32(eax + 0x14);
    edx = MEM32(eax + 0x10);
    ebp = MEM32(eax);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esi + 0x14);
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    PUSH32(esp, 0);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esi + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x10)); /* fmul dword ptr [ebx + 0x10] */
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 0x38)); /* fiadd dword ptr [esp + 0x38] */
    PUSH32(esp, ecx);
    MEM32(esp + 0x38) = eax;
    eax = edx + ebp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x44);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    MEM32(esp + 0x4C) = ebp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A5FB2u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A5FB2: ;
    fp_push((double)SMEM32(esp + 0x50)); /* fild */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x10)); /* fmul dword ptr [ebx + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 0x48)); /* fiadd dword ptr [esp + 0x48] */
    PUSH32(esp, 0x004A5FC3u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A5FC3: ;
    ecx = MEM32(esp + 0x4C);
    edx = MEM32(esp + 0x48);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A5FD3u); RECOMP_ABI_CALL(0x005EF6F0u, sub_005EF6F0); /* call 0x005EF6F0 */

loc_004A5FD3: ;
    eax = MEM32(esi + 0x34);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A5FDFu); RECOMP_ABI_CALL(0x005F23A0u, sub_005F23A0); /* call 0x005F23A0 */

loc_004A5FDF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004A5FE6u); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_004A5FE6: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x004A5FF2u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_004A5FF2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004A5FFBu); RECOMP_ABI_CALL(0x005EE5A0u, sub_005EE5A0); /* call 0x005EE5A0 */

loc_004A5FFB: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esp + 0x78;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x004A600Bu); RECOMP_ABI_CALL(0x004A5820u, sub_004A5820); /* call 0x004A5820 */

loc_004A600B: ;
    PUSH32(esp, edi);
    edx = esp + 0x78;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x004A6018u); RECOMP_ABI_CALL(0x004A5950u, sub_004A5950); /* call 0x004A5950 */

loc_004A6018: ;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A6022u); RECOMP_ABI_CALL(0x005F23A0u, sub_005F23A0); /* call 0x005F23A0 */

loc_004A6022: ;
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004A602Cu); RECOMP_ABI_CALL(0x005EE1A0u, sub_005EE1A0); /* call 0x005EE1A0 */

loc_004A602C: ;
    edx = esp + 0xBC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A6039u); RECOMP_ABI_CALL(0x005EE8D0u, sub_005EE8D0); /* call 0x005EE8D0 */

loc_004A6039: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_004A603F: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xE4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xE4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004A6050
 * Original: 0x004A6050 - 0x004A611E (206 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A6050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A6050: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004A60F5; /* je: equal / zero */

loc_004A605E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004A60CC; /* je: equal / zero */

loc_004A6061: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004A60A3; /* je: equal / zero */

loc_004A6064: ;
    eax = MEM32(0x6C263C);
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x404;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 8) = eax;
    ecx = MEM32(0x6C263C);
    _fb = (uint32_t)(0x410) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x410;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    esp += 4; return; /* ret */

loc_004A60A3: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = 0xC4ED8000u;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = 0xC4ED8000u;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = 0x44B7C000;
    MEM32(eax + 8) = 0x44B7C000;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

loc_004A60CC: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = 0xC4C80000u;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = 0xC4C80000u;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = 0x44BB8000;
    MEM32(eax + 8) = 0x44BB8000;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

loc_004A60F5: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = 0xC4ED8000u;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = 0xC4ED8000u;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = 0x44C1C000;
    MEM32(eax + 8) = 0x44BB8000;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_004A6120
 * Original: 0x004A6120 - 0x004A620E (238 bytes, 77 insns)
 * Category: game_ui
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A6120(void)
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

loc_004A6120: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x63CC4C);
    esi = ecx;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x004A6141u); RECOMP_ABI_CALL(0x0049E1B0u, sub_0049E1B0); /* call 0x0049E1B0 */

loc_004A6141: ;
    edx = MEM32(0x6C32C8);
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A6157u); RECOMP_ABI_CALL(0x004A6050u, sub_004A6050); /* call 0x004A6050 */

loc_004A6157: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x1C)); /* fsub dword ptr [esp + 0x1c] */
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x10);
    MEMF(esi + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x48) = eax;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    eax = MEM32(esp + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0x54) = ecx;
    MEM32(esi + 0x4C) = edx;
    MEMF(esi + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x6C32C8);
    eax = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004A61C2; /* je: equal / zero */

loc_004A6199: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004A61BB; /* je: equal / zero */

loc_004A619C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004A61B4; /* je: equal / zero */

loc_004A619F: ;
    ecx = MEM32(ecx * 4 + 0x663174);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x642894);
    PUSH32(esp, 0x004A61B1u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_004A61B1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A61B4: ;
    eax = 0x642884;
    goto loc_004A61C7;

loc_004A61BB: ;
    eax = 0x642874;
    goto loc_004A61C7;

loc_004A61C2: ;
    eax = 0x642868;

loc_004A61C7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A61D1u); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_004A61D1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x34) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004A6207; /* je: equal / zero */

loc_004A61DB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x642858);
    PUSH32(esp, 0x004A61E9u); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_004A61E9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x38) = eax;
    PUSH32(esp, 0x004A61F4u); RECOMP_ABI_CALL(0x005ED990u, sub_005ED990); /* call 0x005ED990 */

loc_004A61F4: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esi + 0x3C) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x004A61FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A61FBu); } /* indirect call */
    }

loc_004A61FE: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x004A6207u); RECOMP_ABI_CALL(0x0049E240u, sub_0049E240); /* call 0x0049E240 */

loc_004A6207: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004A6210
 * Original: 0x004A6210 - 0x004A6230 (32 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A6210(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A6210: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x004A6217u); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_004A6217: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004A621Eu); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_004A621E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004A6225u); RECOMP_ABI_CALL(0x005EE3E0u, sub_005EE3E0); /* call 0x005EE3E0 */

loc_004A6225: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004A622Cu); RECOMP_ABI_CALL(0x005EDF80u, sub_005EDF80); /* call 0x005EDF80 */

loc_004A622C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004A6230
 * Original: 0x004A6230 - 0x004A6395 (357 bytes, 86 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A6230(void)
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

loc_004A6230: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x004A623Du); RECOMP_ABI_CALL(0x005EE8D0u, sub_005EE8D0); /* call 0x005EE8D0 */

loc_004A623D: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004A6246u); RECOMP_ABI_CALL(0x005FB260u, sub_005FB260); /* call 0x005FB260 */

loc_004A6246: ;
    PUSH32(esp, 4);
    PUSH32(esp, 5);
    PUSH32(esp, 0x004A624Fu); RECOMP_ABI_CALL(0x005FB070u, sub_005FB070); /* call 0x005FB070 */

loc_004A624F: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004A6261u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A6261: ;
    MEM32(0x85B2A4) = 0x3F800000;
    MEM32(0x85B2B0) = 0x3F800000;
    edx = ZX8(LO8(eax));
    eax = MEM32(0x85B2AC);
    edx = edx << 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | 0xFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x85B2C0) = edx;
    ecx = MEM32(esi + 0x4C);
    fp_push(MEMF(esi + 0x54)); /* fld float */
    MEM32(eax) = ecx;
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    edx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = edx;
    eax = MEM32(0x85B2AC);
    MEM32(0x85B2B0) = ecx;
    MEM32(0x85B2A4) = 0x3F800000;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    edx = MEM32(esi + 0x4C);
    fp_push(MEMF(esi + 0x58)); /* fld float */
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = edx;
    eax = MEM32(0x85B2AC);
    MEM32(0x85B2A4) = ecx;
    MEM32(0x85B2B0) = 0x3F800000;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    edx = MEM32(esi + 0x48);
    fp_push(MEMF(esi + 0x54)); /* fld float */
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = edx;
    eax = MEM32(0x85B2AC);
    MEM32(0x85B2A4) = ecx;
    MEM32(0x85B2B0) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    edx = MEM32(esi + 0x48);
    fp_push(MEMF(esi + 0x58)); /* fld float */
    MEM32(eax) = edx;
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x85B2AC) = MEM32(0x85B2AC) + 0x18;
    _fa = (uint32_t)(MEM32(0x85B2AC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004A6391u); RECOMP_ABI_CALL(0x005FB150u, sub_005FB150); /* call 0x005FB150 */

loc_004A6391: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004A63A0
 * Original: 0x004A63A0 - 0x004A662D (653 bytes, 164 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A63A0(void)
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

loc_004A63A0: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x58);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x54);
    fp_push(MEMF(edi + 0x20)); /* fld float */
    eax = MEM32(edi + 0x18);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x5C)); /* fild */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x5C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6428BC)); /* fmul dword ptr [0x6428bc] */
    edx = MEM32(esp + 0x60);
    ebx = MEM32(0x8583F8);
    MEM32(esp + 0x5C) = eax;
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    esi = ecx;
    fp_push((double)SMEM32(esp + 0x5C)); /* fild */
    SET_LO8(ecx, MEM8(0x85843E));
    MEM8(esp + 0xC) = LO8(ecx);
    ecx = MEM32(esp + 0x68);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6428BC)); /* fmul dword ptr [0x6428bc] */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    MEM32(esp + 0x14) = 0;
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x60)); /* fild */
    MEM32(esp + 0x60) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6428BC)); /* fmul dword ptr [0x6428bc] */
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x60)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6428BC)); /* fmul dword ptr [0x6428bc] */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x004A642Fu); RECOMP_ABI_CALL(0x004572A0u, sub_004572A0); /* call 0x004572A0 */

loc_004A642F: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    ecx = MEM32(esp + 0x10);
    fp_top() = -fp_top(); /* fchs */
    eax = MEM32(esp + 0x18);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x34) = ecx;
    fp_push(MEMF(esp + 0x58)); /* fld float */
    ecx = MEM32(edi + 0x28);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6307D0)); /* fmul dword ptr [0x6307d0] */
    edx = eax;
    fp_push((double)SMEM32(esi + 0x40)); /* fild */
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(edi + 0x24);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x44)); /* fmul dword ptr [esi + 0x44] */
    MEM32(esp + 0x40) = edx;
    edx = MEM32(edi + 0x2C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    MEM32(esp + 0x48) = ecx;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x30) = 0x3F800000;
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x3C) = 0;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x4C) = edx;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x5C)); /* fmul dword ptr [esi + 0x5c] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x50)); /* fmul dword ptr [esi + 0x50] */
    ecx = esp + 0x28;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x004A64BAu); RECOMP_ABI_CALL(0x00607CC0u, sub_00607CC0); /* call 0x00607CC0 */

loc_004A64BA: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A64C4u); RECOMP_ABI_CALL(0x005EDB20u, sub_005EDB20); /* call 0x005EDB20 */

loc_004A64C4: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004A64CBu); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_004A64CB: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004A64D6u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_004A64D6: ;
    PUSH32(esp, 4);
    PUSH32(esp, 5);
    PUSH32(esp, 0x004A64DFu); RECOMP_ABI_CALL(0x005FB070u, sub_005FB070); /* call 0x005FB070 */

loc_004A64DF: ;
    ecx = MEM32(esp + 0x68);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004A64E9u); RECOMP_ABI_CALL(0x0045F8D0u, sub_0045F8D0); /* call 0x0045F8D0 */

loc_004A64E9: ;
    edx = MEM32(esp + 0x78);
    eax = MEM32(esp + 0x7C);
    MEM32(0x85B2B0) = eax;
    eax = MEM32(0x85B2AC);
    MEM32(0x85B2A4) = edx;
    MEM32(eax + 4) = edi;
    edx = 0x3F800000;
    MEM32(eax) = edx;
    ecx = 0xBF800000u;
    MEM32(eax + 8) = ecx;
    esi = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = esi;
    esi = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = esi;
    esi = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = esi;
    eax = MEM32(0x85B2AC);
    esi = MEM32(esp + 0x78);
    MEM32(0x85B2A4) = esi;
    esi = MEM32(esp + 0x80);
    MEM32(0x85B2B0) = esi;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    MEM32(eax) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 4) = edi;
    esi = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = esi;
    esi = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = esi;
    esi = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = esi;
    eax = MEM32(0x85B2AC);
    esi = MEM32(esp + 0x70);
    MEM32(0x85B2A4) = esi;
    esi = MEM32(esp + 0x7C);
    MEM32(0x85B2B0) = esi;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = edi;
    esi = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = esi;
    esi = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = esi;
    esi = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = esi;
    eax = MEM32(0x85B2AC);
    esi = MEM32(esp + 0x70);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2A4) = esi;
    esi = MEM32(esp + 0x80);
    MEM32(0x85B2AC) = eax;
    MEM32(0x85B2B0) = esi;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edx;
    ecx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x85B2AC) = MEM32(0x85B2AC) + 0x18;
    _fa = (uint32_t)(MEM32(0x85B2AC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004A660Cu); RECOMP_ABI_CALL(0x005FB150u, sub_005FB150); /* call 0x005FB150 */

loc_004A660C: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A6616u); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_004A6616: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004A6621u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_004A6621: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004A6630
 * Original: 0x004A6630 - 0x004A6643 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A6630(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A6630: ;
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A6639u); RECOMP_ABI_CALL(0x004690F0u, sub_004690F0); /* call 0x004690F0 */

loc_004A6639: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A663Fu); RECOMP_ABI_CALL(0x004AA730u, sub_004AA730); /* call 0x004AA730 */

loc_004A663F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004A6650
 * Original: 0x004A6650 - 0x004A6679 (41 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A6650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A6650: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004A665Eu); RECOMP_ABI_CALL(0x0049E2A0u, sub_0049E2A0); /* call 0x0049E2A0 */

loc_004A665E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x6428C0);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x004A6674u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A6674: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A6680
 * Original: 0x004A6680 - 0x004A6685 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A6680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A6680: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x58)); return; /* indirect tail jmp */

}

/**
 * sub_004A6690
 * Original: 0x004A6690 - 0x004A68C8 (568 bytes, 120 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A6690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A6690: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004A669Au); RECOMP_ABI_CALL(0x0049EB40u, sub_0049EB40); /* call 0x0049EB40 */

loc_004A669A: ;
    MEM32(esi) = 0x6428D0;
    edx = 0x3F4CCCCD;
    edi = 0x3E4CCCCD;
    eax = 0x40A00000;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    eax = 0x3F800000;
    ecx = 0x3FC00000;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = edx;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = edx;
    MEM32(esi + 0x34) = edi;
    MEM32(esi + 0x38) = edx;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x40) = edx;
    MEM32(esi + 0x44) = edi;
    MEM32(esi + 0x48) = edi;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = edi;
    MEM32(esi + 0x54) = edx;
    MEM32(esi + 0x58) = edx;
    MEM32(esi + 0x5C) = eax;
    MEM32(esi + 0x60) = eax;
    MEM32(esi + 0x64) = edi;
    MEM32(esi + 0x68) = edi;
    MEM32(esi + 0x6C) = eax;
    MEM32(esi + 0x70) = edi;
    MEM32(esi + 0x74) = edi;
    MEM32(esi + 0x78) = eax;
    MEM32(esi + 0x7C) = eax;
    MEM32(esi + 0x80) = edx;
    MEM32(esi + 0x8C) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0x3DCCCCCD;
    MEM32(esi + 0x84) = ebx;
    MEM32(esi + 0x88) = ebx;
    MEM32(esi + 0x90) = ebx;
    MEM32(esi + 0x94) = ebx;
    MEM32(esi + 0x98) = edx;
    MEM32(esi + 0x9C) = eax;
    MEM32(esi + 0xA0) = ecx;
    MEM32(esi + 0xA4) = ecx;
    MEM32(esi + 0xA8) = ecx;
    MEM32(esi + 0xAC) = eax;
    MEM32(esi + 0xB0) = edx;
    MEM32(esi + 0xB4) = ecx;
    MEM32(esi + 0xB8) = edx;
    MEM32(esi + 0xBC) = eax;
    MEM32(esi + 0xC0) = edx;
    MEM32(esi + 0xC4) = edi;
    MEM32(esi + 0xC8) = edx;
    MEM32(esi + 0xCC) = eax;
    MEM32(esi + 0xD0) = edi;
    MEM32(esi + 0xD4) = 0x3F19999A;
    MEM32(esi + 0xD8) = 0x3F333333;
    MEM32(esi + 0xDC) = 0x3E99999A;
    MEM32(esi + 0xE0) = eax;
    MEM32(esi + 0xE4) = eax;
    MEM32(esi + 0xE8) = ecx;
    MEM32(esi + 0xEC) = eax;
    MEM32(esi + 0xF0) = ecx;
    MEM32(esi + 0xF4) = eax;
    MEM32(esi + 0xF8) = eax;
    MEM32(esi + 0xFC) = eax;
    MEM32(esi + 0x100) = edx;
    MEM32(esi + 0x104) = ebx;
    MEM32(esi + 0x108) = ecx;
    MEM32(esi + 0x10C) = eax;
    MEM32(esi + 0x110) = eax;
    MEM32(esi + 0x114) = 0x3F000000;
    MEM32(esi + 0x118) = ecx;
    MEM32(esi + 0x11C) = eax;
    MEM32(esi + 0x12C) = eax;
    MEM32(esi + 0x120) = ecx;
    MEM32(esi + 0x124) = ecx;
    MEM32(esi + 0x128) = ecx;
    MEM32(esi + 0x13C) = eax;
    MEM32(esi + 0x130) = edx;
    MEM32(esi + 0x134) = edx;
    MEM32(esi + 0x138) = edx;
    MEM8(esi + 0x140) = LO8(ecx);
    MEM8(esi + 0x141) = LO8(ecx);
    SET_LO8(eax, 0x20);
    MEM8(esi + 0x142) = LO8(eax);
    MEM8(esi + 0x143) = LO8(eax);
    MEM8(esi + 0x144) = LO8(ecx);
    MEM8(esi + 0x145) = LO8(ecx);
    MEM8(esi + 0x146) = LO8(eax);
    MEM8(esi + 0x147) = LO8(eax);
    MEM8(esi + 0x148) = LO8(ecx);
    MEM8(esi + 0x149) = LO8(ecx);
    MEM8(esi + 0x14A) = LO8(eax);
    MEM8(esi + 0x14B) = LO8(eax);
    MEM8(esi + 0x14C) = LO8(ecx);
    MEM8(esi + 0x14D) = LO8(ecx);
    MEM8(esi + 0x14E) = LO8(eax);
    MEM8(esi + 0x14F) = LO8(eax);
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xC), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A68C2; /* jne: not equal / not zero */

loc_004A68AB: ;
    PUSH32(esp, 0x63CC4C);
    ecx = esi;
    PUSH32(esp, 0x004A68B7u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_004A68B7: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004A68BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A68BBu); } /* indirect call */
    }

loc_004A68BE: ;
    MEM8(esi + 0xC) = 1;

loc_004A68C2: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004A68D0
 * Original: 0x004A68D0 - 0x004A68D6 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A68D0(void)
{

loc_004A68D0: ;
    eax = 0x6428F0;
    esp += 4; return; /* ret */

}

/**
 * sub_004A68E0
 * Original: 0x004A68E0 - 0x004A69A5 (197 bytes, 75 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A68E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A68E0: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x78);
    PUSH32(esp, edi);
    PUSH32(esp, 0x642914);
    eax = esp + 0x14;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x004A68FEu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A68FE: ;
    ebx = MEM32(esp + 0x84);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    ecx = ebx;
    PUSH32(esp, 0x004A691Bu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A691B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x642908);
    edx = esp + 0x14;
    PUSH32(esp, 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A692Du); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A692D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 1;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    ecx = ebx;
    PUSH32(esp, 0x004A6946u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A6946: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x63B644);
    edx = esp + 0x14;
    PUSH32(esp, 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A6958u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A6958: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 2;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    ecx = ebx;
    PUSH32(esp, 0x004A6971u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A6971: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x640FC4);
    edx = esp + 0x14;
    PUSH32(esp, 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A6983u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A6983: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    ecx = ebx;
    PUSH32(esp, 0x004A699Cu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A699C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004A69B0
 * Original: 0x004A69B0 - 0x004A6A11 (97 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A69B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A69B0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004A69CAu); RECOMP_ABI_CALL(0x004A6120u, sub_004A6120); /* call 0x004A6120 */

loc_004A69CA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x642858);
    PUSH32(esp, 0x004A69D8u); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_004A69D8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x64) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004A6A0C; /* je: equal / zero */

loc_004A69E2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x642858);
    PUSH32(esp, 0x004A69F0u); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_004A69F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x68) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004A6A0C; /* je: equal / zero */

loc_004A69FA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004A6A00u); RECOMP_ABI_CALL(0x004690F0u, sub_004690F0); /* call 0x004690F0 */

loc_004A6A00: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + 0x48);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x6C) = eax;

loc_004A6A0C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004A6A20
 * Original: 0x004A6A20 - 0x004A6A92 (114 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A6A20(void)
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

loc_004A6A20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A6A8D; /* je: equal / zero */

loc_004A6A2D: ;
    eax = MEM32(esi + 0x40);
    MEM32(esp + 8) = eax;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xBF800000u);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A6A71u); RECOMP_ABI_CALL(0x005FA3C0u, sub_005FA3C0); /* call 0x005FA3C0 */

loc_004A6A71: ;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, 0x004A6A8Du); RECOMP_ABI_CALL(0x005FAA80u, sub_005FAA80); /* call 0x005FAA80 */

loc_004A6A8D: ;
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
 * sub_004A6AA0
 * Original: 0x004A6AA0 - 0x004A6AEA (74 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A6AA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A6AA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A6AACu); RECOMP_ABI_CALL(0x004690F0u, sub_004690F0); /* call 0x004690F0 */

loc_004A6AAC: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + 0x44);
    eax = MEM32(eax + 0x40);
    ecx = MEM32(0x698608);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004A6AE8; /* ja: above (unsigned >) */

loc_004A6AC3: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x4A6AEC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x004A6ACAu) goto loc_004A6ACA;
    if (_jt == 0x004A6AD2u) goto loc_004A6AD2;
    if (_jt == 0x004A6ADAu) goto loc_004A6ADA;
    if (_jt == 0x004A6AE2u) goto loc_004A6AE2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_004A6ACA: ;
    ecx = MEM32(ecx + 0x10);
    MEM32(esi + 0x44) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004A6AD2: ;
    edx = MEM32(ecx + 0x14);
    MEM32(esi + 0x44) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004A6ADA: ;
    eax = MEM32(ecx + 0x18);
    MEM32(esi + 0x44) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004A6AE2: ;
    ecx = MEM32(ecx + 0x1C);
    MEM32(esi + 0x44) = ecx;

loc_004A6AE8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A6B00
 * Original: 0x004A6B00 - 0x004A6C2E (302 bytes, 95 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A6B00(void)
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

loc_004A6B00: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x1C);
    fp_push(MEMF(eax)); /* fld float */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi)); /* fsub dword ptr [esi] */
    edx = MEM32(0x698608);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0xC) = 0;
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 8)); /* fsub dword ptr [esi + 8] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0x5C)); /* fdiv dword ptr [ecx + 0x5c] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(ecx + 0x40)); /* fild */
    fp_push((double)SMEM32(edx + 0xA8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_st1() / fp_top()); /* fdivr st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x34)); /* fmul dword ptr [edx + 0x34] */
    edx = MEM32(eax);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0x44)); /* fdiv dword ptr [ecx + 0x44] */
    fp_push(MEMF(ecx + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / g_fp_stack[(g_fp_top + 2) & 7]); /* fdiv st(2) */
    ecx = edi;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004A6C1F; /* jp: parity */

loc_004A6B98: ;
    ecx = esp + 8;
    PUSH32(esp, 0x004A6BA1u); RECOMP_ABI_CALL(0x004572A0u, sub_004572A0); /* call 0x004572A0 */

loc_004A6BA1: ;
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x24)); /* fdiv dword ptr [esp + 0x24] */
    ecx = edi;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) / fp_top()); /* fdivr dword ptr [0x62d57c] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x14);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 4)); /* fadd dword ptr [esi + 4] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    eax = MEM32(esp + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = eax;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + 8) = edx;

loc_004A6C1F: ;
    MEM32(edi + 4) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004A6C30
 * Original: 0x004A6C30 - 0x004A713E (1294 bytes, 342 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A6C30(void)
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

loc_004A6C30: ;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x698608);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x858548);
    ecx = esp + 0x64;
    PUSH32(esp, 0x004A6C4Fu); RECOMP_ABI_CALL(0x00457640u, sub_00457640); /* call 0x00457640 */

loc_004A6C4F: ;
    eax = MEM32(esp + 0xA4);
    ecx = MEM32(eax + 4);
    fp_push(MEMF(eax)); /* fld float */
    edx = MEM32(eax);
    fp_top() = -fp_top(); /* fchs */
    eax = ecx;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x30) = ecx;
    ecx = edi;
    MEM32(esp + 0x38) = 0;
    MEM32(esp + 0x44) = 0;
    MEM32(esp + 0x48) = 0;
    MEM32(esp + 0x4C) = 0;
    MEM32(esp + 0x50) = 0x3F800000;
    MEM32(esp + 0x5C) = 0;
    MEM32(esp + 0x58) = 0;
    MEM32(esp + 0x54) = 0;
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x40) = eax;
    PUSH32(esp, 0x004A6CB8u); RECOMP_ABI_CALL(0x004A6630u, sub_004A6630); /* call 0x004A6630 */

loc_004A6CB8: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A6D1E; /* je: equal / zero */

loc_004A6CBE: ;
    fp_push(MEMF(0x8602E0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x84)); /* fmul dword ptr [esi + 0x84] */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004A6CDB; /* jp: parity */

loc_004A6CD9: ;
    fp_top() = -fp_top(); /* fchs */

loc_004A6CDB: ;
    fp_push(MEMF(esi + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x64)); /* fsub dword ptr [esi + 0x64] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x64)); /* fadd dword ptr [esi + 0x64] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x68)); /* fsub dword ptr [esi + 0x68] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x68)); /* fadd dword ptr [esi + 0x68] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x6C)); /* fsub dword ptr [esi + 0x6c] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x6C)); /* fadd dword ptr [esi + 0x6c] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x80)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x70)); /* fsub dword ptr [esi + 0x70] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x70)); /* fadd dword ptr [esi + 0x70] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    goto loc_004A6D79;

loc_004A6D1E: ;
    eax = MEM32(0x6C32E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    ecx = MEM32(0x6C32E8);
    if (CMP_EQ(_fa, _fb)) goto loc_004A6D33; /* je: equal / zero */

loc_004A6D2E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A6D5B; /* jne: not equal / not zero */

loc_004A6D33: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A6D5B; /* je: equal / zero */

loc_004A6D37: ;
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004A6D40u); RECOMP_ABI_CALL(0x004690F0u, sub_004690F0); /* call 0x004690F0 */

loc_004A6D40: ;
    ecx = MEM32(eax + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A6D53; /* jne: not equal / not zero */

loc_004A6D4B: ;
    edx = esi + 0x88;
    goto loc_004A6D5E;

loc_004A6D53: ;
    edx = esi + 0x98;
    goto loc_004A6D5E;

loc_004A6D5B: ;
    edx = esi + 0x54;

loc_004A6D5E: ;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(edx + 8);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(edx + 0xC);
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = ecx;

loc_004A6D79: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A6D83u); RECOMP_ABI_CALL(0x005EE900u, sub_005EE900); /* call 0x005EE900 */

loc_004A6D83: ;
    PUSH32(esp, 0x679684);
    PUSH32(esp, 0x004A6D8Du); RECOMP_ABI_CALL(0x005EDB20u, sub_005EDB20); /* call 0x005EDB20 */

loc_004A6D8D: ;
    fp_push((double)SMEM32(esi + 0xB0)); /* fild */
    eax = MEM32(edi + 0x68);
    ecx = ZX16(MEM16(eax + 8));
    MEM32(esp + 0x14) = ecx;
    edx = ZX16(MEM16(eax + 0xA));
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 1);
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esi + 0xA8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push((double)SMEM32(esi + 0xB4)); /* fild */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esi + 0xAC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push((double)SMEM32(edi + 0x40)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x38)); /* fmul dword ptr [esi + 0x38] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x004A6DFFu); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_004A6DFF: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004A6E0Au); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_004A6E0A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004A6E13u); RECOMP_ABI_CALL(0x005EE5A0u, sub_005EE5A0); /* call 0x005EE5A0 */

loc_004A6E13: ;
    eax = MEM32(edi + 0x68);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A6E1Cu); RECOMP_ABI_CALL(0x005FB260u, sub_005FB260); /* call 0x005FB260 */

loc_004A6E1C: ;
    PUSH32(esp, 4);
    PUSH32(esp, 5);
    PUSH32(esp, 0x004A6E25u); RECOMP_ABI_CALL(0x005FB070u, sub_005FB070); /* call 0x005FB070 */

loc_004A6E25: ;
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004A6E2Fu); RECOMP_ABI_CALL(0x0045F8D0u, sub_0045F8D0); /* call 0x0045F8D0 */

loc_004A6E2F: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    eax = MEM32(esp + 0x48);
    fp_top() = -fp_top(); /* fchs */
    edx = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x3C);
    MEM32(0x85B2B0) = eax;
    eax = MEM32(0x85B2AC);
    MEM32(0x85B2A4) = edx;
    MEMF(eax + 4) = (float)fp_top(); /* fst */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ebx;
    edx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(0x85B2B0);
    ecx = MEM32(esp + 0x44);
    MEM32(eax + 0x14) = edx;
    eax = MEM32(0x85B2AC);
    edx = MEM32(esp + 0x38);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2A4) = ecx;
    ecx = MEM32(esp + 0x3C);
    MEM32(0x85B2AC) = eax;
    MEM32(0x85B2B0) = edx;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ebx;
    edx = ecx;
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(0x85B2B0);
    edx = MEM32(esp + 0x40);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(0x85B2AC);
    ecx = MEM32(esp + 0x48);
    MEM32(0x85B2A4) = edx;
    MEM32(0x85B2B0) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    MEMF(eax) = (float)fp_top(); /* fst */
    MEMF(eax + 4) = (float)fp_top(); /* fst */
    MEM32(eax + 8) = ebx;
    edx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(0x85B2B0);
    ecx = MEM32(esp + 0x40);
    MEM32(eax + 0x14) = edx;
    eax = MEM32(0x85B2AC);
    edx = MEM32(esp + 0x38);
    MEM32(0x85B2A4) = ecx;
    ecx = MEM32(esp + 0x3C);
    MEM32(0x85B2B0) = edx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ebx;
    edx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = edx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x85B2AC) = MEM32(0x85B2AC) + 0x18;
    _fa = (uint32_t)(MEM32(0x85B2AC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004A6F56u); RECOMP_ABI_CALL(0x005FB150u, sub_005FB150); /* call 0x005FB150 */

loc_004A6F56: ;
    fp_push((double)SMEM32(esi + 0xB8)); /* fild */
    eax = MEM32(edi + 0x64);
    ecx = ZX16(MEM16(eax + 8));
    MEM32(esp + 0x38) = ecx;
    edx = ZX16(MEM16(eax + 0xA));
    fp_push((double)SMEM32(esp + 0x38)); /* fild */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEM32(esp + 0x38) = edx;
    PUSH32(esp, ebx);
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esi + 0xA8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push((double)SMEM32(esi + 0xBC)); /* fild */
    fp_push((double)SMEM32(esp + 0x3C)); /* fild */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esi + 0xAC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push((double)SMEM32(edi + 0x40)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x004A6FC4u); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_004A6FC4: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x004A6FD0u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_004A6FD0: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004A6FD8u); RECOMP_ABI_CALL(0x005EE5A0u, sub_005EE5A0); /* call 0x005EE5A0 */

loc_004A6FD8: ;
    eax = MEM32(edi + 0x64);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A6FE4u); RECOMP_ABI_CALL(0x005FB260u, sub_005FB260); /* call 0x005FB260 */

loc_004A6FE4: ;
    PUSH32(esp, 4);
    PUSH32(esp, 5);
    PUSH32(esp, 0x004A6FEDu); RECOMP_ABI_CALL(0x005FB070u, sub_005FB070); /* call 0x005FB070 */

loc_004A6FED: ;
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004A6FF7u); RECOMP_ABI_CALL(0x0045F8D0u, sub_0045F8D0); /* call 0x0045F8D0 */

loc_004A6FF7: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    eax = MEM32(esp + 0x2C);
    fp_top() = -fp_top(); /* fchs */
    edx = MEM32(esp + 0x28);
    MEM32(0x85B2A4) = edx;
    ecx = MEM32(esp + 0x20);
    MEM32(0x85B2B0) = eax;
    eax = MEM32(0x85B2AC);
    MEM32(eax) = ecx;
    MEMF(eax + 4) = (float)fp_top(); /* fst */
    MEM32(eax + 8) = ebx;
    edx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = edx;
    eax = MEM32(0x85B2AC);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x1C);
    MEM32(0x85B2A4) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(0x85B2B0) = edx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ebx;
    edx = ecx;
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(0x85B2B0);
    edx = MEM32(esp + 0x24);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(0x85B2AC);
    ecx = MEM32(esp + 0x2C);
    MEM32(0x85B2A4) = edx;
    MEM32(0x85B2B0) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    MEMF(eax) = (float)fp_top(); /* fst */
    MEMF(eax + 4) = (float)fp_top(); /* fst */
    MEM32(eax + 8) = ebx;
    edx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(0x85B2B0);
    ecx = MEM32(esp + 0x24);
    MEM32(eax + 0x14) = edx;
    eax = MEM32(0x85B2AC);
    edx = MEM32(esp + 0x1C);
    MEM32(0x85B2A4) = ecx;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2B0) = edx;
    MEM32(0x85B2AC) = eax;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ebx;
    edx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = edx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x85B2AC) = MEM32(0x85B2AC) + 0x18;
    _fa = (uint32_t)(MEM32(0x85B2AC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004A711Eu); RECOMP_ABI_CALL(0x005FB150u, sub_005FB150); /* call 0x005FB150 */

loc_004A711E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004A7125u); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_004A7125: ;
    eax = esp + 0x74;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A712Fu); RECOMP_ABI_CALL(0x005EE8D0u, sub_005EE8D0); /* call 0x005EE8D0 */

loc_004A712F: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004A7140
 * Original: 0x004A7140 - 0x004A715E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A7140(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A7140: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x80;
    MEM32(eax + 4) = 0x80;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_004A7160
 * Original: 0x004A7160 - 0x004A7296 (310 bytes, 107 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A7160(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A7160: ;
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
    PUSH32(esp, 0x004A7187u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A7187: ;
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
    PUSH32(esp, 0x004A71A4u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A71A4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x6414E4);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A71B9u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A71B9: ;
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
    PUSH32(esp, 0x004A71D2u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A71D2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x642930);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A71E7u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A71E7: ;
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
    PUSH32(esp, 0x004A7200u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7200: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x64291C);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A7215u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A7215: ;
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
    PUSH32(esp, 0x004A722Eu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A722E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x64265C);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A7243u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A7243: ;
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
    PUSH32(esp, 0x004A725Cu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A725C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x642648);
    edx = esp + 0x14;
    PUSH32(esp, 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A7271u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_004A7271: ;
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
    PUSH32(esp, 0x004A728Au); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A728A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004A72A0
 * Original: 0x004A72A0 - 0x004A72EA (74 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A72A0(void)
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

loc_004A72A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A72E7; /* je: equal / zero */

loc_004A72AB: ;
    fp_push((double)SMEM32(esi + 0x40)); /* fild */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004A72CBu); RECOMP_ABI_CALL(0x005FA3C0u, sub_005FA3C0); /* call 0x005FA3C0 */

loc_004A72CB: ;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, 0x004A72E7u); RECOMP_ABI_CALL(0x005FAA80u, sub_005FAA80); /* call 0x005FAA80 */

loc_004A72E7: ;
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
 * sub_004A72F0
 * Original: 0x004A72F0 - 0x004A7549 (601 bytes, 212 insns)
 * Category: game_vtable
 * CC: thiscall, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004A72F0(void)
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

loc_004A72F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(0x6C32E0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C32E0), 1 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004A753D; /* jne: not equal / not zero */

loc_004A7308: ;
    eax = MEM32(esi + 0x68);
    ecx = MEM32(ebp + 8);
    MEM32(eax + 0x38) = 0xDCDCDCDCu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A731Au); RECOMP_ABI_CALL(0x00469FA0u, sub_00469FA0); /* call 0x00469FA0 */

loc_004A731A: ;
    ecx = MEM32(eax);
    MEM32(ebp + -60) = ecx;
    edx = MEM32(eax + 4);
    MEM32(ebp + -56) = edx;
    ecx = MEM32(eax + 8);
    MEM32(ebp + -52) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(ebp + -48) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(ebp + -44) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(ebp + -40) = edx;
    ecx = MEM32(eax + 0x18);
    MEM32(ebp + -36) = ecx;
    edx = MEM32(eax + 0x1C);
    MEM32(ebp + -32) = edx;
    ecx = MEM32(eax + 0x20);
    MEM32(ebp + -28) = ecx;
    edx = MEM32(eax + 0x24);
    MEM32(ebp + -24) = edx;
    ecx = MEM32(eax + 0x28);
    MEM32(ebp + -20) = ecx;
    fp_push(MEMF(eax + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x642948)); /* fsub dword ptr [0x642948] */
    eax = MEM32(esi + 0x68);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(ebp + -16) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x642944)); /* fsub dword ptr [0x642944] */
    MEMF(ebp + -24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esi + 0x10)); /* fild */
    fp_push((double)SMEM32(esi + 0x14)); /* fild */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_push((double)SMEM32(esi + 0x40)); /* fild */
    fp_push(MEMF(esi + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x48)); /* fsub dword ptr [esi + 0x48] */
    fp_top() = RECOMP_FP_PC(fp_st1() / fp_top()); /* fdivr st(1) */
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x48)); /* fsub dword ptr [esi + 0x48] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x54)); /* fsub dword ptr [esi + 0x54] */
    fp_top() = RECOMP_FP_PC(fp_st1() / fp_top()); /* fdivr st(1) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x54)); /* fsub dword ptr [esi + 0x54] */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] * fp_top()); fp_pop(); /* fmulp st(2) */
    fp_pop(); /* fstp st(0) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + -8)); /* fadd dword ptr [ebp - 8] */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push((double)SMEM32(esi + 0x10)); /* fild */
    fp_push(MEMF(ebp + -8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004A73D1; /* jp: parity */

loc_004A73CC: ;
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_004A73D3;

loc_004A73D1: ;
    fp_pop(); /* fstp st(0) */

loc_004A73D3: ;
    fp_push((double)SMEM32(esi + 0x14)); /* fild */
    fp_push(MEMF(ebp + -4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004A73E7; /* jp: parity */

loc_004A73E2: ;
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_004A73E9;

loc_004A73E7: ;
    fp_pop(); /* fstp st(0) */

loc_004A73E9: ;
    ebx = MEM32(ebp + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A73F4; /* jne: not equal / not zero */

loc_004A73F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004A7427;

loc_004A73F4: ;
    eax = ebx;
    edx = eax + 1;
    /* nop */

loc_004A7400: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A7400; /* jne: not equal / not zero */

loc_004A7407: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax + 1;
    eax = edi + edi;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A741Au); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_004A741A: ;
    eax = esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A7424u); RECOMP_ABI_CALL(0x004056C0u, sub_004056C0); /* call 0x004056C0 */

loc_004A7424: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A7427: ;
    edx = MEM32(esi + 0x68);
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    eax = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x64);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A744Au); RECOMP_ABI_CALL(0x005DF5B0u, sub_005DF5B0); /* call 0x005DF5B0 */

loc_004A744A: ;
    edx = MEM32(ebp + -36);
    eax = MEM32(ebp + -28);
    ecx = ebp + -12;
    MEM32(ebp + -12) = edx;
    MEM32(ebp + -8) = 0;
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A7465u); RECOMP_ABI_CALL(0x004572A0u, sub_004572A0); /* call 0x004572A0 */

loc_004A7465: ;
    fp_push(MEMF(ebp + -12)); /* fld float */
    ecx = MEM32(ebp + -4);
    fp_top() = -fp_top(); /* fchs */
    edx = MEM32(ebp + -12);
    MEMF(ebp + -100) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ecx;
    MEM32(ebp + -108) = ecx;
    ecx = MEM32(ebp + -24);
    MEM32(ebp + -84) = edx;
    edx = MEM32(ebp + -20);
    MEM32(ebp + -76) = eax;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -72) = ecx;
    MEM32(ebp + -68) = edx;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(ebp + -104) = 0;
    MEM32(ebp + -96) = 0;
    MEM32(ebp + -92) = 0x3F800000;
    MEM32(ebp + -88) = 0;
    MEM32(ebp + -80) = 0;
    MEM32(ebp + -64) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x004A74BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A74B7u); } /* indirect call */
    }

loc_004A74BA: ;
    fp_push((double)SMEM32(esi + 0x40)); /* fild */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x44)); /* fmul dword ptr [esi + 0x44] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x5C)); /* fmul dword ptr [esi + 0x5c] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x50)); /* fmul dword ptr [esi + 0x50] */
    ecx = ebp + -108;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A74DCu); RECOMP_ABI_CALL(0x00607CC0u, sub_00607CC0); /* call 0x00607CC0 */

loc_004A74DC: ;
    eax = ebp + -108;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A74E5u); RECOMP_ABI_CALL(0x005EDB20u, sub_005EDB20); /* call 0x005EDB20 */

loc_004A74E5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A74F0; /* jne: not equal / not zero */

loc_004A74EC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004A751C;

loc_004A74F0: ;
    eax = ebx;
    edx = eax + 1;

loc_004A74F5: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A74F5; /* jne: not equal / not zero */

loc_004A74FC: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax + 1;
    eax = edi + edi;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A750Fu); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_004A750F: ;
    eax = esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A7519u); RECOMP_ABI_CALL(0x004056C0u, sub_004056C0); /* call 0x004056C0 */

loc_004A7519: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A751C: ;
    ecx = MEM32(esi + 0x68);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    edx = ebp + -24;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004A753Du); RECOMP_ABI_CALL(0x005E0CE0u, sub_005E0CE0); /* call 0x005E0CE0 */

loc_004A753D: ;
    esp = ebp + -120;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004A7550
 * Original: 0x004A7550 - 0x004A75A9 (89 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A7550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A7550: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A7558u); RECOMP_ABI_CALL(0x0049EB40u, sub_0049EB40); /* call 0x0049EB40 */

loc_004A7558: ;
    eax = 0x40A00000;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    ecx = 0x3F000000;
    MEM32(esi + 0x10) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x64294C;
    MEM32(esi + 0x18) = 0x40900000;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = ecx;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xC), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A75A5; /* jne: not equal / not zero */

loc_004A758E: ;
    PUSH32(esp, 0x63CC4C);
    ecx = esi;
    PUSH32(esp, 0x004A759Au); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_004A759A: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004A75A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A759Eu); } /* indirect call */
    }

loc_004A75A1: ;
    MEM8(esi + 0xC) = 1;

loc_004A75A5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A75B0
 * Original: 0x004A75B0 - 0x004A75B6 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A75B0(void)
{

loc_004A75B0: ;
    eax = 0x64296C;
    esp += 4; return; /* ret */

}

/**
 * sub_004A75C0
 * Original: 0x004A75C0 - 0x004A7657 (151 bytes, 57 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A75C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A75C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004A75CEu); RECOMP_ABI_CALL(0x00406990u, sub_00406990); /* call 0x00406990 */

loc_004A75CE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6429CC);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A75E4u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A75E4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6429BC);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A75FAu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A75FA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x6429A8);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A7610u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7610: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64299C);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A7626u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7626: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x642990);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A763Cu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A763C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x642980);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A7652u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7652: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A7660
 * Original: 0x004A7660 - 0x004A76AE (78 bytes, 24 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A7660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A7660: ;
    eax = MEM32(0x698610);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004A76A4; /* jne: not equal / not zero */

loc_004A766C: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x640C58);
    PUSH32(esp, 0x150);
    PUSH32(esp, 0x004A767Du); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_004A767D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A769A; /* je: equal / zero */

loc_004A7684: ;
    ecx = eax;
    PUSH32(esp, 0x004A768Bu); RECOMP_ABI_CALL(0x004A6690u, sub_004A6690); /* call 0x004A6690 */

loc_004A768B: ;
    MEM32(0x698610) = eax;
    MEM32(0x69860C) = MEM32(0x69860C) + 1;
    _fa = (uint32_t)(MEM32(0x69860C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004A769A: ;
    MEM32(0x698610) = 0;

loc_004A76A4: ;
    MEM32(0x69860C) = MEM32(0x69860C) + 1;
    _fa = (uint32_t)(MEM32(0x69860C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A76B0
 * Original: 0x004A76B0 - 0x004A76EF (63 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A76B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A76B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A76B8u); RECOMP_ABI_CALL(0x0049E150u, sub_0049E150); /* call 0x0049E150 */

loc_004A76B8: ;
    ecx = esi + 0x30;
    MEM32(esi) = 0x6429E0;
    PUSH32(esp, 0x004A76C6u); RECOMP_ABI_CALL(0x004A7660u, sub_004A7660); /* call 0x004A7660 */

loc_004A76C6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x5C) = eax;
    MEM32(esi + 0x40) = 0x80;
    MEM32(esi + 0x44) = 0x3F800000;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A76F0
 * Original: 0x004A76F0 - 0x004A76F6 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A76F0(void)
{

loc_004A76F0: ;
    eax = 0x642A3C;
    esp += 4; return; /* ret */

}

/**
 * sub_004A7700
 * Original: 0x004A7700 - 0x004A7703 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A7700(void)
{

loc_004A7700: ;
    esp += 32; return; /* ret 28 */

}

/**
 * sub_004A7710
 * Original: 0x004A7710 - 0x004A772B (27 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A7710(void)
{

loc_004A7710: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004A7730
 * Original: 0x004A7730 - 0x004A77A0 (112 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A7730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A7730: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x3C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi) = 0x6429E0;
    if (CMP_EQ(_fa, _fb)) goto loc_004A7755; /* je: equal / zero */

loc_004A7741: ;
    MEM32(edi) = MEM32(edi) - 1;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004A7755; /* jne: not equal / not zero */

loc_004A7745: ;
    ecx = edi;
    PUSH32(esp, 0x004A774Cu); RECOMP_ABI_CALL(0x005FA390u, sub_005FA390); /* call 0x005FA390 */

loc_004A774C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004A7752u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_004A7752: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A7755: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A7765; /* je: equal / zero */

loc_004A775C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A7762u); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_004A7762: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A7765: ;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A7775; /* je: equal / zero */

loc_004A776C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A7772u); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_004A7772: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A7775: ;
    MEM32(0x69860C) = MEM32(0x69860C) - 1;
    _fa = (uint32_t)(MEM32(0x69860C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004A7797; /* jne: not equal / not zero */

loc_004A777D: ;
    ecx = MEM32(0x698610);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A778D; /* je: equal / zero */

loc_004A7787: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004A778Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A778Bu); } /* indirect call */
    }

loc_004A778D: ;
    MEM32(0x698610) = 0;

loc_004A7797: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0049E1A0(); return; /* tail jmp 0x0049E1A0 */

}

/**
 * sub_004A77A0
 * Original: 0x004A77A0 - 0x004A78AC (268 bytes, 69 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A77A0(void)
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

loc_004A77A0: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x698610);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x004A77B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A77AFu); } /* indirect call */
    }

loc_004A77B2: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x48);
    edx = MEM32(edi);
    eax = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
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
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x004A7832u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A782Fu); } /* indirect call */
    }

loc_004A7832: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    ecx = ZX8(MEM8(esi + 0x14B));
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x10)); /* fmul dword ptr [esi + 0x10] */
    edx = ZX8(MEM8(esi + 0x14A));
    eax = ZX8(MEM8(esi + 0x149));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x148));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x58);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    ecx = edi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A786Eu); RECOMP_ABI_CALL(0x004A63A0u, sub_004A63A0); /* call 0x004A63A0 */

loc_004A786E: ;
    ecx = ZX8(MEM8(esi + 0x14B));
    edx = ZX8(MEM8(esi + 0x14A));
    eax = ZX8(MEM8(esi + 0x149));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x148));
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x004A78A4u); RECOMP_ABI_CALL(0x004A63A0u, sub_004A63A0); /* call 0x004A63A0 */

loc_004A78A4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004A78B0
 * Original: 0x004A78B0 - 0x004A7A30 (384 bytes, 99 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A78B0(void)
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

loc_004A78B0: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x4C);
    eax = MEM32(edi + 0x18);
    fp_push(MEMF(edi + 0x20)); /* fld float */
    esi = ecx;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 8;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x004A78DAu); RECOMP_ABI_CALL(0x004572A0u, sub_004572A0); /* call 0x004572A0 */

loc_004A78DA: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    ecx = MEM32(esp + 0x10);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    fp_push((double)SMEM32(esi + 0x40)); /* fild */
    eax = ecx;
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(edi + 0x24);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x44)); /* fmul dword ptr [esi + 0x44] */
    PUSH32(esp, ecx);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(edi + 0x28);
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x54) / fp_top()); /* fdivr dword ptr [esp + 0x54] */
    MEM32(esp + 0x38) = eax;
    eax = MEM32(edi + 0x2C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = 0x3F800000;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x44) = eax;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x5C)); /* fmul dword ptr [esi + 0x5c] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x50)); /* fmul dword ptr [esi + 0x50] */
    ecx = esp + 0x20;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x004A795Du); RECOMP_ABI_CALL(0x00607CC0u, sub_00607CC0); /* call 0x00607CC0 */

loc_004A795D: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004A7967u); RECOMP_ABI_CALL(0x005EDB20u, sub_005EDB20); /* call 0x005EDB20 */

loc_004A7967: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004A796Du); RECOMP_ABI_CALL(0x005FB260u, sub_005FB260); /* call 0x005FB260 */

loc_004A796D: ;
    PUSH32(esp, 3);
    PUSH32(esp, 4);
    PUSH32(esp, 0x004A7976u); RECOMP_ABI_CALL(0x005FB070u, sub_005FB070); /* call 0x005FB070 */

loc_004A7976: ;
    edx = MEM32(esp + 0x58);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A7980u); RECOMP_ABI_CALL(0x0045F8D0u, sub_0045F8D0); /* call 0x0045F8D0 */

loc_004A7980: ;
    eax = MEM32(0x85B2AC);
    MEM32(eax) = edi;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = 0xBF8CCCCDu;
    ecx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(0x85B2AC);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    MEM32(eax) = 0xBF333333u;
    MEM32(eax + 4) = edi;
    ecx = 0x3F8CCCCD;
    MEM32(eax + 8) = ecx;
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
    MEM32(eax) = 0x3F333333;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x85B2AC) = MEM32(0x85B2AC) + 0x18;
    _fa = (uint32_t)(MEM32(0x85B2AC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004A7A28u); RECOMP_ABI_CALL(0x005FB150u, sub_005FB150); /* call 0x005FB150 */

loc_004A7A28: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004A7A30
 * Original: 0x004A7A30 - 0x004A7C5D (557 bytes, 185 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A7A30(void)
{

loc_004A7A30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004A7A3Eu); RECOMP_ABI_CALL(0x00406990u, sub_00406990); /* call 0x00406990 */

loc_004A7A3E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x642BEC);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A7A54u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7A54: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x642BC8);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A7A6Au); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7A6A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x642BB0);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A7A80u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7A80: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x642B94);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A7A96u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7A96: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x642B88);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A7AACu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7AAC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x642B74);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A7AC2u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7AC2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x642B64);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A7AD8u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7AD8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x642B54);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A7AEEu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7AEE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x60;
    PUSH32(esp, edx);
    PUSH32(esp, 0x6427C8);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A7B04u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7B04: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x70;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6427BC);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A7B1Au); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7B1A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x80;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x642B40);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A7B33u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7B33: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x90;
    PUSH32(esp, edx);
    PUSH32(esp, 0x642B2C);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A7B4Cu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7B4C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0xA0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x642B18);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A7B65u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7B65: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0xB0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x642B0C);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A7B7Eu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7B7E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0xE0;
    PUSH32(esp, edx);
    PUSH32(esp, 0x642AF4);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A7B97u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7B97: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0xF0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x642ADC);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A7BB0u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7BB0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x100;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x642AC8);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A7BC9u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7BC9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x110;
    PUSH32(esp, edx);
    PUSH32(esp, 0x642AAC);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A7BE2u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7BE2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x120;
    PUSH32(esp, eax);
    PUSH32(esp, 0x642A94);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A7BFBu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7BFB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x130;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x642A7C);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A7C14u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7C14: ;
    PUSH32(esp, 0x642A70);
    PUSH32(esp, edi);
    ecx = esi + 0x140;
    PUSH32(esp, 0x004A7C25u); RECOMP_ABI_CALL(0x004A68E0u, sub_004A68E0); /* call 0x004A68E0 */

loc_004A7C25: ;
    PUSH32(esp, 0x642A64);
    PUSH32(esp, edi);
    ecx = esi + 0x144;
    PUSH32(esp, 0x004A7C36u); RECOMP_ABI_CALL(0x004A68E0u, sub_004A68E0); /* call 0x004A68E0 */

loc_004A7C36: ;
    PUSH32(esp, 0x642A50);
    PUSH32(esp, edi);
    ecx = esi + 0x148;
    PUSH32(esp, 0x004A7C47u); RECOMP_ABI_CALL(0x004A68E0u, sub_004A68E0); /* call 0x004A68E0 */

loc_004A7C47: ;
    PUSH32(esp, 0x642A44);
    PUSH32(esp, edi);
    ecx = esi + 0x14C;
    PUSH32(esp, 0x004A7C58u); RECOMP_ABI_CALL(0x004A68E0u, sub_004A68E0); /* call 0x004A68E0 */

loc_004A7C58: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A7C60
 * Original: 0x004A7C60 - 0x004A7CB3 (83 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A7C60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A7C60: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x642C10;
    if (CMP_EQ(_fa, _fb)) goto loc_004A7C79; /* je: equal / zero */

loc_004A7C70: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A7C76u); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_004A7C76: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A7C79: ;
    eax = MEM32(esi + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A7C89; /* je: equal / zero */

loc_004A7C80: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A7C86u); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_004A7C86: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A7C89: ;
    MEM32(0x698614) = MEM32(0x698614) - 1;
    _fa = (uint32_t)(MEM32(0x698614)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004A7CAB; /* jne: not equal / not zero */

loc_004A7C91: ;
    ecx = MEM32(0x698608);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A7CA1; /* je: equal / zero */

loc_004A7C9B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004A7CA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A7C9Fu); } /* indirect call */
    }

loc_004A7CA1: ;
    MEM32(0x698608) = 0;

loc_004A7CAB: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004A7730(); return; /* tail jmp 0x004A7730 */

}

/**
 * sub_004A7CC0
 * Original: 0x004A7CC0 - 0x004A7CC6 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A7CC0(void)
{

loc_004A7CC0: ;
    eax = 0x642C6C;
    esp += 4; return; /* ret */

}

/**
 * sub_004A7CD0
 * Original: 0x004A7CD0 - 0x004A7CD9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A7CD0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_004A7CD0: ;
    eax = MEM32(0x698608);
    fp_push(MEMF(eax + 0x24)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004A7CE0
 * Original: 0x004A7CE0 - 0x004A7CE9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A7CE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_004A7CE0: ;
    eax = MEM32(0x698608);
    fp_push(MEMF(eax + 0x28)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004A7CF0
 * Original: 0x004A7CF0 - 0x004A7CF9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A7CF0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_004A7CF0: ;
    eax = MEM32(0x698608);
    fp_push(MEMF(eax + 0x2C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004A7D00
 * Original: 0x004A7D00 - 0x004A7D09 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A7D00(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_004A7D00: ;
    eax = MEM32(0x698608);
    fp_push(MEMF(eax + 0x30)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004A7D10
 * Original: 0x004A7D10 - 0x004A7E14 (260 bytes, 62 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A7D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A7D10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A7D18u); RECOMP_ABI_CALL(0x0049EB40u, sub_0049EB40); /* call 0x0049EB40 */

loc_004A7D18: ;
    MEM32(esi) = 0x642C78;
    MEM32(esi + 0x14) = 0x40000000;
    MEM32(esi + 0x28) = 0x40900000;
    MEM32(esi + 0x34) = 0x42480000;
    MEM32(esi + 0x3C) = 0x41F00000;
    MEM32(esi + 0x40) = 0x42C80000;
    MEM32(esi + 0x44) = 0x3F000000;
    eax = 0x3F800000;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x38) = eax;
    ecx = 0x40400000;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x1C) = ecx;
    ecx = 0x40A00000;
    MEM32(esi + 0x24) = ecx;
    MEM32(esi + 0x2C) = ecx;
    MEM32(esi + 0x30) = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x48) = edx;
    MEM32(esi + 0x4C) = edx;
    MEM32(esi + 0x50) = edx;
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0x5C) = eax;
    MEM32(esi + 0x60) = eax;
    MEM32(esi + 0x64) = eax;
    MEM32(esi + 0x70) = eax;
    ecx = 0x3E99999A;
    MEM32(esi + 0x68) = ecx;
    MEM32(esi + 0x6C) = ecx;
    MEM32(esi + 0x74) = ecx;
    MEM32(esi + 0x78) = ecx;
    MEM32(esi + 0x7C) = eax;
    MEM32(esi + 0x80) = eax;
    MEM32(esi + 0x84) = eax;
    ecx = 0x3DCCCCCD;
    MEM32(esi + 0x8C) = ecx;
    MEM32(esi + 0x90) = ecx;
    MEM32(esi + 0x88) = 0x3F4CCCCD;
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 0x98) = ecx;
    MEM32(esi + 0x9C) = ecx;
    ecx = esi + 0xA8;
    MEM32(esi + 0xA0) = 0x3F4CCCCD;
    MEM32(esi + 0xA4) = eax;
    PUSH32(esp, 0x004A7DF4u); RECOMP_ABI_CALL(0x004A7140u, sub_004A7140); /* call 0x004A7140 */

loc_004A7DF4: ;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xC), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A7E10; /* jne: not equal / not zero */

loc_004A7DF9: ;
    PUSH32(esp, 0x63CC4C);
    ecx = esi;
    PUSH32(esp, 0x004A7E05u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_004A7E05: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004A7E0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A7E09u); } /* indirect call */
    }

loc_004A7E0C: ;
    MEM8(esi + 0xC) = 1;

loc_004A7E10: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A7E20
 * Original: 0x004A7E20 - 0x004A7E26 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A7E20(void)
{

loc_004A7E20: ;
    eax = 0x642C98;
    esp += 4; return; /* ret */

}

/**
 * sub_004A7E30
 * Original: 0x004A7E30 - 0x004A802B (507 bytes, 181 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A7E30(void)
{

loc_004A7E30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004A7E3Eu); RECOMP_ABI_CALL(0x00406990u, sub_00406990); /* call 0x00406990 */

loc_004A7E3E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x642DCC);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A7E54u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7E54: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x642DC0);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A7E6Au); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7E6A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x642DB4);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A7E80u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7E80: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x642DA0);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A7E96u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7E96: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x642D90);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A7EACu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7EAC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x6429BC);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A7EC2u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7EC2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6429A8);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A7ED8u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7ED8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64299C);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A7EEEu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7EEE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x642990);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A7F04u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7F04: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x642D80);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A7F1Au); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7F1A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x642D74);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A7F30u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7F30: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x642D60);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A7F46u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7F46: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x642D4C);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A7F5Cu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7F5C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x642D38);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A7F72u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7F72: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, 0x642980);
    PUSH32(esp, 8);
    ecx = edi;
    PUSH32(esp, 0x004A7F88u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7F88: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, 0x642D24);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A7F9Eu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7F9E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x64;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x642D0C);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A7FB4u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7FB4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x74;
    PUSH32(esp, edx);
    PUSH32(esp, 0x642CF4);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A7FCAu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7FCA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x84;
    PUSH32(esp, eax);
    PUSH32(esp, 0x642CD4);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004A7FE3u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7FE3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x88;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x642CC0);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A7FFCu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A7FFC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x98;
    PUSH32(esp, edx);
    PUSH32(esp, 0x642CAC);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x004A8015u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004A8015: ;
    PUSH32(esp, 0x641830);
    PUSH32(esp, edi);
    ecx = esi + 0xA8;
    PUSH32(esp, 0x004A8026u); RECOMP_ABI_CALL(0x004A7160u, sub_004A7160); /* call 0x004A7160 */

loc_004A8026: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A8030
 * Original: 0x004A8030 - 0x004A80BF (143 bytes, 44 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A8030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A8030: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A8038u); RECOMP_ABI_CALL(0x004A76B0u, sub_004A76B0); /* call 0x004A76B0 */

loc_004A8038: ;
    MEM32(esi) = 0x642DE8;
    eax = MEM32(0x69861C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A8074; /* jne: not equal / not zero */

loc_004A8047: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x640C58);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x004A8055u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_004A8055: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A806A; /* je: equal / zero */

loc_004A805C: ;
    ecx = eax;
    PUSH32(esp, 0x004A8063u); RECOMP_ABI_CALL(0x004A7550u, sub_004A7550); /* call 0x004A7550 */

loc_004A8063: ;
    MEM32(0x69861C) = eax;
    goto loc_004A8074;

loc_004A806A: ;
    MEM32(0x69861C) = 0;

loc_004A8074: ;
    ecx = MEM32(0x698618);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    PUSH32(esp, 0x639A50);
    MEM32(0x698618) = ecx;
    PUSH32(esp, 0x004A808Du); RECOMP_ABI_CALL(0x005E11E0u, sub_005E11E0); /* call 0x005E11E0 */

loc_004A808D: ;
    PUSH32(esp, 0x7A2);
    PUSH32(esp, 0x642DDC);
    PUSH32(esp, 0x40);
    MEM32(esi + 0x64) = eax;
    PUSH32(esp, 0x004A80A1u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_004A80A1: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A80B6; /* je: equal / zero */

loc_004A80A8: ;
    ecx = eax;
    PUSH32(esp, 0x004A80AFu); RECOMP_ABI_CALL(0x005E1AF0u, sub_005E1AF0); /* call 0x005E1AF0 */

loc_004A80AF: ;
    MEM32(esi + 0x68) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004A80B6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x68) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A80C0
 * Original: 0x004A80C0 - 0x004A80C6 (6 bytes, 2 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A80C0(void)
{

loc_004A80C0: ;
    eax = 0x642E44;
    esp += 4; return; /* ret */

}

/**
 * sub_004A80D0
 * Original: 0x004A80D0 - 0x004A80D8 (8 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A80D0(void)
{

loc_004A80D0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x004A80D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A80D4u); } /* indirect call */
    }

loc_004A80D7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004A80E0
 * Original: 0x004A80E0 - 0x004A80E9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A80E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_004A80E0: ;
    eax = MEM32(0x69861C);
    fp_push(MEMF(eax + 0x14)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004A80F0
 * Original: 0x004A80F0 - 0x004A80F9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A80F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_004A80F0: ;
    eax = MEM32(0x69861C);
    fp_push(MEMF(eax + 0x18)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004A8100
 * Original: 0x004A8100 - 0x004A8109 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A8100(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_004A8100: ;
    eax = MEM32(0x69861C);
    fp_push(MEMF(eax + 0x1C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004A8110
 * Original: 0x004A8110 - 0x004A8119 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A8110(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_004A8110: ;
    eax = MEM32(0x69861C);
    fp_push(MEMF(eax + 0x20)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004A8120
 * Original: 0x004A8120 - 0x004A816D (77 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A8120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A8120: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x64);
    PUSH32(esp, eax);
    MEM32(esi) = 0x642DE8;
    PUSH32(esp, 0x004A8132u); RECOMP_ABI_CALL(0x005E1010u, sub_005E1010); /* call 0x005E1010 */

loc_004A8132: ;
    ecx = MEM32(esi + 0x68);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004A813Bu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_004A813B: ;
    eax = MEM32(0x698618);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x698618) = eax;
    if ((_fa != 0)) goto loc_004A8165; /* jne: not equal / not zero */

loc_004A814B: ;
    ecx = MEM32(0x69861C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A815B; /* je: equal / zero */

loc_004A8155: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004A815Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A8159u); } /* indirect call */
    }

loc_004A815B: ;
    MEM32(0x69861C) = 0;

loc_004A8165: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004A7730(); return; /* tail jmp 0x004A7730 */

}

/**
 * sub_004A8170
 * Original: 0x004A8170 - 0x004A81BE (78 bytes, 24 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A8170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A8170: ;
    eax = MEM32(0x698608);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004A81B4; /* jne: not equal / not zero */

loc_004A817C: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x640C58);
    PUSH32(esp, 0xC0);
    PUSH32(esp, 0x004A818Du); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_004A818D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A81AA; /* je: equal / zero */

loc_004A8194: ;
    ecx = eax;
    PUSH32(esp, 0x004A819Bu); RECOMP_ABI_CALL(0x004A7D10u, sub_004A7D10); /* call 0x004A7D10 */

loc_004A819B: ;
    MEM32(0x698608) = eax;
    MEM32(0x698614) = MEM32(0x698614) + 1;
    _fa = (uint32_t)(MEM32(0x698614)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004A81AA: ;
    MEM32(0x698608) = 0;

loc_004A81B4: ;
    MEM32(0x698614) = MEM32(0x698614) + 1;
    _fa = (uint32_t)(MEM32(0x698614)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A81C0
 * Original: 0x004A81C0 - 0x004A81DE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A81C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A81C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A81C8u); RECOMP_ABI_CALL(0x004A7730u, sub_004A7730); /* call 0x004A7730 */

loc_004A81C8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004A81D8; /* je: equal / zero */

loc_004A81CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004A81D5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_004A81D5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A81D8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A81E0
 * Original: 0x004A81E0 - 0x004A85B0 (976 bytes, 299 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A81E0(void)
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

loc_004A81E0: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x58);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(esp + 0x74));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(0x698610);
    if (CMP_NE(_fa, _fb)) goto loc_004A820E; /* jne: not equal / not zero */

loc_004A81FD: ;
    ecx = MEM32(eax + 0x4C);
    SET_LO8(edx, MEM8(ecx + 0x965C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A85A7; /* je: equal / zero */

loc_004A820E: ;
    edx = MEM32(eax + 0x78);
    SET_LO8(eax, MEM8(edx + 0x29));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A845B; /* je: equal / zero */

loc_004A821C: ;
    fp_push(MEMF(0x8602E0)); /* fld float */
    eax = MEM32(esp + 0x64);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x18)); /* fmul dword ptr [edi + 0x18] */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0xC) = ecx;
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(eax + 0xC);
    eax = MEM32(edi + 0xB0);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(edi + 0xBC);
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(edi + 0xB4);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(edi + 0xB8);
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = edx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004A827D; /* jp: parity */

loc_004A827B: ;
    fp_top() = -fp_top(); /* fchs */

loc_004A827D: ;
    eax = MEM32(esi + 0x38);
    MEMF(esp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(MEM32(0x8583F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8583F4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A8295; /* je: equal / zero */

loc_004A828C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A8292u); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_004A8292: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A8295: ;
    ecx = ebp;
    MEM32(esp + 0x2C) = 0x3F800000;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x38) = 0;
    MEM32(esp + 0x3C) = 0x3F800000;
    MEM32(esp + 0x40) = 0;
    MEM32(esp + 0x44) = 0;
    MEM32(esp + 0x48) = 0;
    MEM32(esp + 0x4C) = 0x3F800000;
    MEM32(esp + 0x58) = 0;
    MEM32(esp + 0x54) = 0;
    MEM32(esp + 0x50) = 0;
    PUSH32(esp, 0x004A82FCu); RECOMP_ABI_CALL(0x00469FA0u, sub_00469FA0); /* call 0x00469FA0 */

loc_004A82FC: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    MEM32(esp + 0x50) = ecx;
    edx = MEM32(eax + 4);
    ecx = MEM32(esp + 0x6C);
    MEM32(esp + 0x54) = edx;
    eax = MEM32(eax + 8);
    edx = MEM32(esi);
    MEM32(esp + 0x58) = eax;
    eax = esp + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x004A832Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A8329u); } /* indirect call */
    }

loc_004A832C: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x70)); /* fmul dword ptr [esp + 0x70] */
    eax = MEM32(esp + 0x68);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    ecx = MEM32(eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x70)); /* fmul dword ptr [esp + 0x70] */
    edx = MEM32(eax + 4);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    eax = MEM32(0x697B88);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x70)); /* fmul dword ptr [esp + 0x70] */
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x4C) = edx;
    ecx = MEM32(eax + 4);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x70)); /* fmul dword ptr [esp + 0x70] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x70)); /* fsub dword ptr [esp + 0x70] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 3) & 7]); /* fadd st(3) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_NE(_fa, _fb)) goto loc_004A8416; /* jne: not equal / not zero */

loc_004A83D1: ;
    edx = ZX8(MEM8(edi + 0x147));
    eax = ZX8(MEM8(edi + 0x146));
    ecx = ZX8(MEM8(edi + 0x145));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = ZX8(MEM8(edi + 0x144));
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x004A83F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A83F5u); } /* indirect call */
    }

loc_004A83F8: ;
    PUSH32(esp, ecx);
    ecx = esp + 0x40;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x004A840Du); RECOMP_ABI_CALL(0x004A63A0u, sub_004A63A0); /* call 0x004A63A0 */

loc_004A840D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

loc_004A8416: ;
    eax = ZX8(MEM8(edi + 0x143));
    ecx = ZX8(MEM8(edi + 0x142));
    edx = ZX8(MEM8(edi + 0x141));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ZX8(MEM8(edi + 0x140));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x004A843Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A843Au); } /* indirect call */
    }

loc_004A843D: ;
    PUSH32(esp, ecx);
    eax = esp + 0x40;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x004A8452u); RECOMP_ABI_CALL(0x004A63A0u, sub_004A63A0); /* call 0x004A63A0 */

loc_004A8452: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

loc_004A845B: ;
    SET_LO8(eax, MEM8(esp + 0x74));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_004A8544; /* je: equal / zero */

loc_004A8468: ;
    ecx = ebp;
    PUSH32(esp, 0x004A846Fu); RECOMP_ABI_CALL(0x00469FA0u, sub_00469FA0); /* call 0x00469FA0 */

loc_004A846F: ;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, 0x004A8479u); RECOMP_ABI_CALL(0x00419860u, sub_00419860); /* call 0x00419860 */

loc_004A8479: ;
    ecx = MEM32(esp + 0x70);
    edx = MEM32(0x8583F8);
    ebx = MEM32(esi);
    eax = esp + 0x10;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(esp + 0x84) = edx;
    PUSH32(esp, 0x004A849Cu); RECOMP_ABI_CALL(0x00469FA0u, sub_00469FA0); /* call 0x00469FA0 */

loc_004A849C: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x54); PUSH32(esp, 0x004A84A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A84A2u); } /* indirect call */
    }

loc_004A84A5: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0);
    MEM32(esp + 0x5C) = edx;
    MEM32(esp + 0x60) = eax;
    MEM32(esp + 0x64) = ecx;
    PUSH32(esp, 0x004A84C9u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_004A84C9: ;
    SET_LO8(ebx, MEM8(esp + 0x7C));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_004A84DD; /* je: equal / zero */

loc_004A84D6: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x004A84DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A84D8u); } /* indirect call */
    }

loc_004A84DB: ;
    goto loc_004A84E2;

loc_004A84DD: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x004A84E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A84DFu); } /* indirect call */
    }

loc_004A84E2: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1C)); /* fmul dword ptr [edi + 0x1c] */
    PUSH32(esp, ecx);
    ecx = esp + 0x34;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004A84FCu); RECOMP_ABI_CALL(0x004A78B0u, sub_004A78B0); /* call 0x004A78B0 */

loc_004A84FC: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_004A8509; /* je: equal / zero */

loc_004A8502: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x004A8507u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A8504u); } /* indirect call */
    }

loc_004A8507: ;
    goto loc_004A850E;

loc_004A8509: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x004A850Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A850Bu); } /* indirect call */
    }

loc_004A850E: ;
    eax = MEM32(esp + 0x68);
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x74);
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004A8528u); RECOMP_ABI_CALL(0x004A78B0u, sub_004A78B0); /* call 0x004A78B0 */

loc_004A8528: ;
    ecx = MEM32(esp + 0x7C);
    PUSH32(esp, 0x80);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004A8537u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_004A8537: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

loc_004A8544: ;
    SET_LO8(ebx, MEM8(esp + 0x74));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_004A8555; /* je: equal / zero */

loc_004A854E: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x004A8553u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A8550u); } /* indirect call */
    }

loc_004A8553: ;
    goto loc_004A855A;

loc_004A8555: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x004A855Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A8557u); } /* indirect call */
    }

loc_004A855A: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1C)); /* fmul dword ptr [edi + 0x1c] */
    PUSH32(esp, ecx);
    ecx = ebp;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x004A8568u); RECOMP_ABI_CALL(0x00469FA0u, sub_00469FA0); /* call 0x00469FA0 */

loc_004A8568: ;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004A8577u); RECOMP_ABI_CALL(0x004A78B0u, sub_004A78B0); /* call 0x004A78B0 */

loc_004A8577: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_004A8584; /* je: equal / zero */

loc_004A857D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x004A8582u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A857Fu); } /* indirect call */
    }

loc_004A8582: ;
    goto loc_004A8589;

loc_004A8584: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x004A8589u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A8586u); } /* indirect call */
    }

loc_004A8589: ;
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x74);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x004A8599u); RECOMP_ABI_CALL(0x00469FA0u, sub_00469FA0); /* call 0x00469FA0 */

loc_004A8599: ;
    edx = MEM32(esp + 0x6C);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x004A85A6u); RECOMP_ABI_CALL(0x004A78B0u, sub_004A78B0); /* call 0x004A78B0 */

loc_004A85A6: ;
    POP32(esp, ebx);

loc_004A85A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004A85B0
 * Original: 0x004A85B0 - 0x004A8A0A (1114 bytes, 329 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A85B0(void)
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

loc_004A85B0: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x697B88);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x698610);
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004A8A02; /* je: equal / zero */

loc_004A85D9: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_004A8A00; /* je: equal / zero */

loc_004A85EA: ;
    edx = MEM32(edi + 0xC);
    eax = MEM32(esp + 0x78);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x8C);
    esi = edx + ebp + 0x88;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0x004A8608u); RECOMP_ABI_CALL(0x005EE8D0u, sub_005EE8D0); /* call 0x005EE8D0 */

loc_004A8608: ;
    ecx = MEM32(edi + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004A8611u); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_004A8611: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A861Au); RECOMP_ABI_CALL(0x0053D6C0u, sub_0053D6C0); /* call 0x0053D6C0 */

loc_004A861A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A88D3; /* je: equal / zero */

loc_004A8625: ;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A8A00; /* jne: not equal / not zero */

loc_004A8630: ;
    ecx = esp + 0x44;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x004A863Bu); RECOMP_ABI_CALL(0x0040BC80u, sub_0040BC80); /* call 0x0040BC80 */

loc_004A863B: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x20);
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    esi = MEM32(ebp + 0x18);
    ebx = edx;
    edx = MEM32(esp + 0x18);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x114);
    eax = MEM32(edx + 0x14);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    eax = ecx + 1;
    if (CMP_L(_fas, _fbs)) goto loc_004A8669; /* jl: less (signed <) */

loc_004A8660: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 0x14)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 0x14))); }
    edi = edx;
    goto loc_004A8672;

loc_004A8669: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x14) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004A867A; /* jge: greater or equal (signed >=) */

loc_004A866F: ;
    edi = ecx + 1;

loc_004A8672: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x114);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A867A: ;
    SET_LO8(eax, MEM8(esp + 0x80));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A8763; /* je: equal / zero */

loc_004A8689: ;
    eax = MEM32(esp + 0x14);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004A875F; /* jle: less or equal (signed <=) */

loc_004A8697: ;
    MEM32(esp + 0x80) = ebp;
    edi = edi;

loc_004A86A0: ;
    ecx = MEM32(esp + 0x20);
    esi = MEM32(ecx + 0x18);
    _fb = (uint32_t)(MEM32(esp + 0x80)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(esp + 0x80);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A873E; /* je: equal / zero */

loc_004A86B6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A873E; /* je: equal / zero */

loc_004A86BE: ;
    edx = esi + 0xF0;
    eax = MEM32(edx);
    MEM32(esp + 0x68) = eax;
    ecx = MEM32(edx + 4);
    MEM32(esp + 0x6C) = ecx;
    edx = MEM32(edx + 8);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    MEM32(esp + 0x74) = edx;
    PUSH32(esp, 0x004A86E2u); RECOMP_ABI_CALL(0x0048C410u, sub_0048C410); /* call 0x0048C410 */

loc_004A86E2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A873E; /* jne: not equal / not zero */

loc_004A86E6: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004A8705; /* jge: greater or equal (signed >=) */

loc_004A86F0: ;
    ecx = MEM32(esp + 0x14);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A8705; /* jne: not equal / not zero */

loc_004A86F9: ;
    eax = MEM32(esp + 0x10);
    ecx = eax + 0x100;
    goto loc_004A8713;

loc_004A8705: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xF0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A8713: ;
    SET_LO8(edx, MEM8(esi + 0x110));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A8724; /* jne: not equal / not zero */

loc_004A871D: ;
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x120;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004A8729;

loc_004A8724: ;
    _fb = (uint32_t)(0x130) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x130;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A8729: ;
    edx = MEM32(esp + 0x7C);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, 0x004A873Eu); RECOMP_ABI_CALL(0x004A77A0u, sub_004A77A0); /* call 0x004A77A0 */

loc_004A873E: ;
    ecx = MEM32(esp + 0x80);
    eax = MEM32(esp + 0x14);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x114;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x80) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_004A86A0; /* jl: less (signed <) */

loc_004A875F: ;
    ebp = MEM32(esp + 0x20);

loc_004A8763: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A87EA; /* je: equal / zero */

loc_004A876B: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x14), 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004A8795; /* jge: greater or equal (signed >=) */

loc_004A8775: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(ebp + 0x18);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x114);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A8795; /* jne: not equal / not zero */

loc_004A8789: ;
    esi = MEM32(esp + 0x10);
    ecx = esi + 0x100;
    goto loc_004A87A3;

loc_004A8795: ;
    ecx = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x110;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A87A3: ;
    eax = edi + 0xF0;
    edx = MEM32(eax);
    MEM32(esp + 0x68) = edx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x6C) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x70) = eax;
    SET_LO8(eax, MEM8(edi + 0x110));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = esi + 0x120;
    if (CMP_EQ(_fa, _fb)) goto loc_004A87D3; /* je: equal / zero */

loc_004A87CD: ;
    eax = esi + 0x130;

loc_004A87D3: ;
    edx = MEM32(esp + 0x7C);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, 0x004A87E8u); RECOMP_ABI_CALL(0x004A77A0u, sub_004A77A0); /* call 0x004A77A0 */

loc_004A87E8: ;
    goto loc_004A87EE;

loc_004A87EA: ;
    esi = MEM32(esp + 0x10);

loc_004A87EE: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x14), 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004A8812; /* jge: greater or equal (signed >=) */

loc_004A87F8: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(ebp + 0x18);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x114);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    eax = esi + 0x100;
    if (CMP_EQ(_fa, _fb)) goto loc_004A8818; /* je: equal / zero */

loc_004A8812: ;
    eax = esi + 0xE0;

loc_004A8818: ;
    ecx = MEM32(eax);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    edx = MEM32(eax + 4);
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(eax + 8);
    SET_LO8(eax, MEM8(ebx + 0x110));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x3C) = ecx;
    eax = esi + 0x120;
    if (CMP_EQ(_fa, _fb)) goto loc_004A8845; /* je: equal / zero */

loc_004A883F: ;
    eax = esi + 0x130;

loc_004A8845: ;
    fp_push(MEMF(eax + 0xC)); /* fld float */
    edx = MEM32(eax);
    fp_push(MEMF(0x8602E0)); /* fld float */
    ecx = MEM32(eax + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x14)); /* fmul dword ptr [esi + 0x14] */
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x28) = ecx;
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    MEM32(esp + 0x2C) = edx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004A8876; /* jp: parity */

loc_004A8874: ;
    fp_top() = -fp_top(); /* fchs */

loc_004A8876: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D57C)); /* fadd dword ptr [0x62d57c] */
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xF0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebx);
    MEM32(esp + 0x68) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    ecx = MEM32(ebx + 4);
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEM32(esp + 0x6C) = ecx;
    edx = MEM32(ebx + 8);
    ecx = MEM32(esp + 0x7C);
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    eax = esp + 0x24;
    PUSH32(esp, eax);
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEM32(esp + 0x78) = edx;
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x40;
    PUSH32(esp, eax);
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x004A88C9u); RECOMP_ABI_CALL(0x004A77A0u, sub_004A77A0); /* call 0x004A77A0 */

loc_004A88C9: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_004A88D3: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A88DCu); RECOMP_ABI_CALL(0x0053D6E0u, sub_0053D6E0); /* call 0x0053D6E0 */

loc_004A88DC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A88ED; /* jne: not equal / not zero */

loc_004A88E3: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xC (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A8A00; /* jne: not equal / not zero */

loc_004A88ED: ;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A8A00; /* jne: not equal / not zero */

loc_004A88F8: ;
    ecx = esp + 0x44;
    PUSH32(esp, 0x004A8901u); RECOMP_ABI_CALL(0x0040BC80u, sub_0040BC80); /* call 0x0040BC80 */

loc_004A8901: ;
    eax = ebx + -1;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004A899F; /* jle: less or equal (signed <=) */

loc_004A890E: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004A8910: ;
    eax = MEM32(ebp + 0x18);
    ebx = MEM32(esp + 0x18);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + 0xF0;
    edx = MEM32(ecx);
    MEM32(esp + 0x68) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x6C) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x70) = ecx;
    ecx = esi;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(MEM32(ebx + ecx * 4 + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + ecx * 4 + 0x38), edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004A8983; /* jne: not equal / not zero */

loc_004A894A: ;
    SET_LO8(ecx, MEM8(eax + 0x110));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(esp + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_004A895F; /* jne: not equal / not zero */

loc_004A8958: ;
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x120;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004A8964;

loc_004A895F: ;
    _fb = (uint32_t)(0x130) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x130;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A8964: ;
    edx = MEM32(esp + 0x7C);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xE0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, 0x004A8983u); RECOMP_ABI_CALL(0x004A77A0u, sub_004A77A0); /* call 0x004A77A0 */

loc_004A8983: ;
    eax = MEM32(esp + 0x14);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x114;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004A8910; /* jl: less (signed <) */

loc_004A8997: ;
    edi = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x14);

loc_004A899F: ;
    edx = MEM32(ebp + 0x18);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x114);
    eax = ebx + edx + -276;
    ecx = eax + 0xF0;
    edx = MEM32(ecx);
    MEM32(esp + 0x68) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x6C) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x70) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x110));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(esp + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_004A89DE; /* jne: not equal / not zero */

loc_004A89D7: ;
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x120;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004A89E3;

loc_004A89DE: ;
    _fb = (uint32_t)(0x130) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x130;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A89E3: ;
    edx = MEM32(esp + 0x7C);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x100;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x004A8A00u); RECOMP_ABI_CALL(0x004A77A0u, sub_004A77A0); /* call 0x004A77A0 */

loc_004A8A00: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_004A8A02: ;
    POP32(esp, edi);
    POP32(esp, ebp);
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
 * sub_004A8A10
 * Original: 0x004A8A10 - 0x004A8E0A (1018 bytes, 250 insns)
 * Category: game_ui
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A8A10(void)
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

loc_004A8A10: ;
    eax = MEM32(0x697B88);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x698610);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A8DFF; /* je: equal / zero */

loc_004A8A30: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A8A41; /* je: equal / zero */

loc_004A8A38: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A8DFF; /* jne: not equal / not zero */

loc_004A8A41: ;
    fp_push(MEMF(0x8602E0)); /* fld float */
    PUSH32(esp, ebx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x18)); /* fmul dword ptr [esi + 0x18] */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    MEM8(esp + 0x13) = 0;
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004A8A64; /* jp: parity */

loc_004A8A62: ;
    fp_top() = -fp_top(); /* fchs */

loc_004A8A64: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x100);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x642E84)); /* fmul dword ptr [0x642e84] */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esi + 0x104);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esi + 0x108);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x63813C)); /* fadd dword ptr [0x63813c] */
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esi + 0x10C);
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x6C) = 0x3F800000;
    MEM32(esp + 0x70) = 0;
    MEM32(esp + 0x74) = 0;
    MEM32(esp + 0x78) = 0;
    MEM32(esp + 0x7C) = 0x3F800000;
    MEM32(esp + 0x80) = 0;
    MEM32(esp + 0x84) = 0;
    MEM32(esp + 0x88) = 0;
    MEM32(esp + 0x8C) = 0x3F800000;
    MEM32(esp + 0x98) = 0;
    MEM32(esp + 0x94) = 0;
    MEM32(esp + 0x90) = 0;
    MEM32(esp + 0x38) = 0x3F800000;
    MEM32(esp + 0x3C) = 0;
    MEM32(esp + 0x40) = 0;
    MEM32(esp + 0x44) = 0;
    MEM32(esp + 0x48) = 0x3F800000;
    MEM32(esp + 0x4C) = 0;
    MEM32(esp + 0x50) = 0;
    MEM32(esp + 0x54) = 0;
    MEM32(esp + 0x58) = 0x3F800000;
    MEM32(esp + 0x64) = 0;
    MEM32(esp + 0x60) = 0;
    MEM32(esp + 0x5C) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_004A8BD1; /* jne: not equal / not zero */

loc_004A8B7E: ;
    edx = ecx + 0x1118;
    eax = MEM32(edx);
    MEM32(esp + 0x90) = eax;
    eax = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x94) = eax;
    SET_LO8(eax, MEM8(ecx + 0x10EA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x98) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_004A8C34; /* je: equal / zero */

loc_004A8BAF: ;
    _fb = (uint32_t)(0x1100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1100;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x5C) = eax;
    eax = MEM32(ecx + 8);
    SET_LO8(ebx, 1);
    MEM32(esp + 0x60) = edx;
    MEM32(esp + 0x64) = eax;
    MEM8(esp + 0x13) = LO8(ebx);
    goto loc_004A8C34;

loc_004A8BD1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A8C26; /* jne: not equal / not zero */

loc_004A8BD6: ;
    edx = ecx + 0x1114;
    eax = MEM32(edx);
    MEM32(esp + 0x90) = eax;
    eax = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x94) = eax;
    SET_LO8(eax, MEM8(ecx + 0x10EA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x98) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_004A8C34; /* je: equal / zero */

loc_004A8C03: ;
    _fb = (uint32_t)(0x10F8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10F8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x5C) = eax;
    eax = MEM32(ecx + 8);
    MEM32(esp + 0x60) = edx;
    MEM32(esp + 0x64) = eax;
    SET_LO8(ebx, 1);
    MEM8(esp + 0x13) = 0;
    goto loc_004A8C34;

loc_004A8C26: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x642E54);
    PUSH32(esp, 0x004A8C31u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_004A8C31: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A8C34: ;
    ecx = MEM32(esp + 0xA0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004A8C41u); RECOMP_ABI_CALL(0x005EE8D0u, sub_005EE8D0); /* call 0x005EE8D0 */

loc_004A8C41: ;
    edx = MEM32(edi + 0x38);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A8C4Au); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_004A8C4A: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    ebp = MEM32(esp + 0xB0);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x70)); /* fmul dword ptr [esp + 0x70] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + 0x120;
    PUSH32(esp, eax);
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebp);
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x004A8C79u); RECOMP_ABI_CALL(0x004A77A0u, sub_004A77A0); /* call 0x004A77A0 */

loc_004A8C79: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A8DFD; /* je: equal / zero */

loc_004A8C81: ;
    fp_push(MEMF(esi + 0xE0)); /* fld float */
    eax = MEM32(esi + 0xE8);
    fp_push(MEMF(esi + 0xE4)); /* fld float */
    ecx = MEM32(esi + 0xEC);
    edx = MEM32(esi + 0xB0);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esi + 0xB4);
    MEM32(esp + 0x24) = ecx;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0xB8);
    MEM32(esp + 0x28) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    edx = MEM32(esi + 0xBC);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    MEM32(esp + 0x2C) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEM32(esp + 0x30) = ecx;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    MEM32(esp + 0x34) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    eax = MEM32(esp + 0xA4);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edi);
    fp_push(MEMF(0x62D57C)); /* fld float */
    MEM32(esp + 0x50) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    ecx = esp + 0x5C;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x5C) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x24;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    PUSH32(esp, ebp);
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    edx = esp + 0x64;
    PUSH32(esp, edx);
    ecx = edi;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x24)); /* fadd dword ptr [esp + 0x24] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x30)); /* fadd dword ptr [esp + 0x30] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x004A8D70u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A8D6Du); } /* indirect call */
    }

loc_004A8D70: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A8DC1; /* je: equal / zero */

loc_004A8D78: ;
    eax = ZX8(MEM8(esi + 0x147));
    ecx = ZX8(MEM8(esi + 0x146));
    edx = ZX8(MEM8(esi + 0x145));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x144));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(edi);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x004A8D9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A8D9Cu); } /* indirect call */
    }

loc_004A8D9F: ;
    PUSH32(esp, ecx);
    eax = esp + 0x4C;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x004A8DB4u); RECOMP_ABI_CALL(0x004A63A0u, sub_004A63A0); /* call 0x004A63A0 */

loc_004A8DB4: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_004A8DC1: ;
    edx = ZX8(MEM8(esi + 0x143));
    eax = ZX8(MEM8(esi + 0x142));
    ecx = ZX8(MEM8(esi + 0x141));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x140));
    PUSH32(esp, eax);
    eax = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x004A8DE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A8DE5u); } /* indirect call */
    }

loc_004A8DE8: ;
    PUSH32(esp, ecx);
    ecx = esp + 0x4C;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x004A8DFDu); RECOMP_ABI_CALL(0x004A63A0u, sub_004A63A0); /* call 0x004A63A0 */

loc_004A8DFD: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_004A8DFF: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_004A8E10
 * Original: 0x004A8E10 - 0x004A8E32 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A8E10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A8E10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A8E18u); RECOMP_ABI_CALL(0x004A76B0u, sub_004A76B0); /* call 0x004A76B0 */

loc_004A8E18: ;
    ecx = esi + 0x60;
    MEM32(esi) = 0x642C10;
    PUSH32(esp, 0x004A8E26u); RECOMP_ABI_CALL(0x004A8170u, sub_004A8170); /* call 0x004A8170 */

loc_004A8E26: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x64) = eax;
    MEM32(esi + 0x68) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A8E40
 * Original: 0x004A8E40 - 0x004A8E5E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A8E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A8E40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A8E48u); RECOMP_ABI_CALL(0x004A7C60u, sub_004A7C60); /* call 0x004A7C60 */

loc_004A8E48: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004A8E58; /* je: equal / zero */

loc_004A8E4F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004A8E55u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_004A8E55: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A8E58: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A8E60
 * Original: 0x004A8E60 - 0x004A8E7E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A8E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A8E60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004A8E68u); RECOMP_ABI_CALL(0x004A8120u, sub_004A8120); /* call 0x004A8120 */

loc_004A8E68: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004A8E78; /* je: equal / zero */

loc_004A8E6F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004A8E75u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_004A8E75: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A8E78: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A8E80
 * Original: 0x004A8E80 - 0x004A901D (413 bytes, 142 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A8E80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A8E80: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(0x6C3304);
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = edi;
    PUSH32(esp, 0x004A8E9Cu); RECOMP_ABI_CALL(0x004690F0u, sub_004690F0); /* call 0x004690F0 */

loc_004A8E9C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x004A8EA6u); RECOMP_ABI_CALL(0x00469FA0u, sub_00469FA0); /* call 0x00469FA0 */

loc_004A8EA6: ;
    ebp = eax;
    eax = MEM32(0x6C32E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A8EBC; /* je: equal / zero */

loc_004A8EB2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    MEM8(esp + 0x13) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_004A8EC1; /* jne: not equal / not zero */

loc_004A8EBC: ;
    MEM8(esp + 0x13) = 1;

loc_004A8EC1: ;
    edx = MEM32(esp + 0x24);
    ecx = MEM32(0x6C32E8);
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    PUSH32(esp, 0x004A8EDDu); RECOMP_ABI_CALL(0x005EE8D0u, sub_005EE8D0); /* call 0x005EE8D0 */

loc_004A8EDD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004A9013; /* jle: less or equal (signed <=) */

loc_004A8EEA: ;
    edi = MEM32(esp + 0x28);
    MEM32(esp + 0x24) = 8;

loc_004A8EF6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A8F7F; /* je: equal / zero */

loc_004A8EFF: ;
    eax = MEM32(0x69585C);
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(MEM32(ecx + eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A8F7F; /* je: equal / zero */

loc_004A8F0E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004A8F14u); RECOMP_ABI_CALL(0x004690F0u, sub_004690F0); /* call 0x004690F0 */

loc_004A8F14: ;
    SET_LO8(ecx, MEM8(esp + 0x17));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A8F65; /* je: equal / zero */

loc_004A8F1F: ;
    edx = MEM32(eax + 0x10);
    ecx = MEM32(edx + 0x78);
    SET_LO8(edx, MEM8(ecx + 0x29));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A8F32; /* je: equal / zero */

loc_004A8F2C: ;
    MEM32(esp + 0x14) = ebx;
    goto loc_004A8F7F;

loc_004A8F32: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A8F65; /* je: equal / zero */

loc_004A8F3A: ;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), 1 (32-bit) */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_004A8F56; /* jne: not equal / not zero */

loc_004A8F48: ;
    edx = MEM32(0x698610);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x80;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004A8F76;

loc_004A8F56: ;
    ecx = MEM32(0x698610);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x90;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    goto loc_004A8F77;

loc_004A8F65: ;
    edx = MEM32(0x698610);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A8F76: ;
    PUSH32(esp, edx);

loc_004A8F77: ;
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A8F7Fu); RECOMP_ABI_CALL(0x004A81E0u, sub_004A81E0); /* call 0x004A81E0 */

loc_004A8F7F: ;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x1C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x24) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_004A8EF6; /* jl: less (signed <) */

loc_004A8F97: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004A9013; /* jl: less (signed <) */

loc_004A8F9F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A9013; /* je: equal / zero */

loc_004A8FA4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A8FAAu); RECOMP_ABI_CALL(0x004690F0u, sub_004690F0); /* call 0x004690F0 */

loc_004A8FAA: ;
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_004A9001; /* je: equal / zero */

loc_004A8FBD: ;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A8FE2; /* jne: not equal / not zero */

loc_004A8FC3: ;
    ecx = MEM32(0x698610);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A8FD8u); RECOMP_ABI_CALL(0x004A81E0u, sub_004A81E0); /* call 0x004A81E0 */

loc_004A8FD8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_004A8FE2: ;
    edx = MEM32(0x698610);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x90;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A8FF7u); RECOMP_ABI_CALL(0x004A81E0u, sub_004A81E0); /* call 0x004A81E0 */

loc_004A8FF7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_004A9001: ;
    ecx = MEM32(0x698610);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A9013u); RECOMP_ABI_CALL(0x004A81E0u, sub_004A81E0); /* call 0x004A81E0 */

loc_004A9013: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004A9020
 * Original: 0x004A9020 - 0x004A907A (90 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A9020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A9020: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A902Du); RECOMP_ABI_CALL(0x004690F0u, sub_004690F0); /* call 0x004690F0 */

loc_004A902D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x004A9037u); RECOMP_ABI_CALL(0x00469FA0u, sub_00469FA0); /* call 0x00469FA0 */

loc_004A9037: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    edi = eax;
    PUSH32(esp, 0x004A9043u); RECOMP_ABI_CALL(0x005EE8D0u, sub_005EE8D0); /* call 0x005EE8D0 */

loc_004A9043: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A9075; /* je: equal / zero */

loc_004A904E: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(0x698610);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A906Au); RECOMP_ABI_CALL(0x004690F0u, sub_004690F0); /* call 0x004690F0 */

loc_004A906A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004A9075u); RECOMP_ABI_CALL(0x004A81E0u, sub_004A81E0); /* call 0x004A81E0 */

loc_004A9075: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004A9080
 * Original: 0x004A9080 - 0x004A93B4 (820 bytes, 277 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A9080(void)
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

loc_004A9080: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x698624);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x697B88);
    edx = MEM32(ecx + 4);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x2C) = edx;
    PUSH32(esp, 0x004A90AAu); RECOMP_ABI_CALL(0x004690F0u, sub_004690F0); /* call 0x004690F0 */

loc_004A90AA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x004A90B4u); RECOMP_ABI_CALL(0x00469FA0u, sub_00469FA0); /* call 0x00469FA0 */

loc_004A90B4: ;
    ebx = eax;
    eax = MEM32(0x6C32E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004A90CE; /* je: equal / zero */

loc_004A90C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    MEM8(esp + 0x13) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_004A90D3; /* jne: not equal / not zero */

loc_004A90CE: ;
    MEM8(esp + 0x13) = 1;

loc_004A90D3: ;
    edx = MEM32(esp + 0x30);
    ecx = MEM32(0x6C32E8);
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edx);
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x18) = ebp;
    PUSH32(esp, 0x004A90EEu); RECOMP_ABI_CALL(0x005EE8D0u, sub_005EE8D0); /* call 0x005EE8D0 */

loc_004A90EE: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    MEM32(esp + 0x30) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_004A922D; /* jle: less or equal (signed <=) */

loc_004A90FF: ;
    MEM32(esp + 0x18) = ecx;

loc_004A9103: ;
    eax = MEM32(0x698624);
    edi = MEM32(eax + 8);
    ecx = MEM32(esp + 0x18);
    eax = MEM32(edi + ecx + 0x64);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A9176; /* jne: not equal / not zero */

loc_004A911A: ;
    ecx = MEM32(edi + 0x58);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004A9122u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A911Fu); } /* indirect call */
    }

loc_004A9122: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A9206; /* je: equal / zero */

loc_004A912A: ;
    ebp = MEM32(edi + 0x1C);
    eax = MEM32(ebp + 0x4C);
    SET_LO8(ecx, MEM8(eax + 0xA164));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    edi = MEM32(0x698610);
    if (CMP_EQ(_fa, _fb)) goto loc_004A9153; /* je: equal / zero */

loc_004A9140: ;
    eax = ZX16(MEM16(eax + 0x95E8));
    eax = eax >> 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004A9153; /* je: equal / zero */

loc_004A914E: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004A9156;

loc_004A9153: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x70;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A9156: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x004A915Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A915Au); } /* indirect call */
    }

loc_004A915D: ;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004A916Du); RECOMP_ABI_CALL(0x004A78B0u, sub_004A78B0); /* call 0x004A78B0 */

loc_004A916D: ;
    ebp = MEM32(esp + 0x14);
    goto loc_004A9206;

loc_004A9176: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(edi + 0x58);
    if (CMP_EQ(_fa, _fb)) goto loc_004A9199; /* je: equal / zero */

loc_004A9181: ;
    edx = MEM32(edi + 0x1C);
    edx = MEM32(edx + 0x78);
    _fa = (uint32_t)(MEM8(edx + 0x29)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x29), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A9199; /* je: equal / zero */

loc_004A918D: ;
    eax = MEM32(esp + 0x30);
    MEM32(esp + 0x14) = eax;
    ebp = eax;
    goto loc_004A9206;

loc_004A9199: ;
    SET_LO8(edx, MEM8(eax + 0x18));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004A9206; /* jge: greater or equal (signed >=) */

loc_004A91A0: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A91E6; /* je: equal / zero */

loc_004A91A4: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A91E6; /* je: equal / zero */

loc_004A91AC: ;
    eax = MEM32(edi + 0x30);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_004A91D2; /* jne: not equal / not zero */

loc_004A91BE: ;
    ecx = MEM32(esp + 0x44);
    edx = MEM32(0x698610);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x80;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    goto loc_004A91FE;

loc_004A91D2: ;
    eax = MEM32(esp + 0x44);
    ecx = MEM32(0x698610);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x90;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    goto loc_004A91FE;

loc_004A91E6: ;
    edx = MEM32(esp + 0x34);
    eax = MEM32(0x698610);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A91FE: ;
    ecx = esi;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004A9206u); RECOMP_ABI_CALL(0x004A81E0u, sub_004A81E0); /* call 0x004A81E0 */

loc_004A9206: ;
    eax = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x42C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x42C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x18) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_004A9103; /* jl: less (signed <) */

loc_004A9229: ;
    edi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004A922D: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A9240; /* je: equal / zero */

loc_004A9236: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM8(esp + 0x1C) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_004A9245; /* jne: not equal / not zero */

loc_004A9240: ;
    MEM8(esp + 0x1C) = 1;

loc_004A9245: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004A9312; /* jle: less or equal (signed <=) */

loc_004A924D: ;
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x18) = edi;
    goto loc_004A9260;

    /* nop */
    edi = edi;

loc_004A9260: ;
    ecx = MEM32(0x698624);
    edi = MEM32(ecx + 8);
    _fb = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esp + 0x30);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edi + 0x58);
    ebp = (uint32_t)(int32_t)SMEM8(ecx + 0x18);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004A92F1; /* jl: less (signed <) */

loc_004A9278: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A929B; /* jne: not equal / not zero */

loc_004A927E: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A929B; /* jne: not equal / not zero */

loc_004A9288: ;
    SET_LO8(edx, MEM8(eax + 0x10F0));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A929B; /* je: equal / zero */

loc_004A9292: ;
    PUSH32(esp, 0x004A9297u); RECOMP_ABI_CALL(0x004AFA20u, sub_004AFA20); /* call 0x004AFA20 */

loc_004A9297: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A92F1; /* jne: not equal / not zero */

loc_004A929B: ;
    edx = MEM32(0x6C32C8);
    eax = MEM32(esp + 0x1C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x49E);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(edx * 4 + 0x663C74);
    edx = MEM32(0x698610);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x40;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004A92D4u); RECOMP_ABI_CALL(0x004A81E0u, sub_004A81E0); /* call 0x004A81E0 */

loc_004A92D4: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(0x698610);
    eax = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x40;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x004A92F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A92EEu); } /* indirect call */
    }

loc_004A92F1: ;
    ecx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x42C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x42C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_004A9260; /* jne: not equal / not zero */

loc_004A930E: ;
    ebp = MEM32(esp + 0x14);

loc_004A9312: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004A93AA; /* jl: less (signed <) */

loc_004A931A: ;
    eax = MEM32(0x698624);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x42C);
    edx = MEM32(eax + 8);
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_004A9381; /* je: equal / zero */

loc_004A9334: ;
    ecx = MEM32(eax + 0x30);
    edx = MEM32(0x698610);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_004A936A; /* jne: not equal / not zero */

loc_004A9353: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x80;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A9360u); RECOMP_ABI_CALL(0x004A81E0u, sub_004A81E0); /* call 0x004A81E0 */

loc_004A9360: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_004A936A: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x90;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A9377u); RECOMP_ABI_CALL(0x004A81E0u, sub_004A81E0); /* call 0x004A81E0 */

loc_004A9377: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_004A9381: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A938A; /* je: equal / zero */

loc_004A9385: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004A938C;

loc_004A938A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004A938C: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(0x698610);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x50;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A93AAu); RECOMP_ABI_CALL(0x004A81E0u, sub_004A81E0); /* call 0x004A81E0 */

loc_004A93AA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
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
 * sub_004A93C0
 * Original: 0x004A93C0 - 0x004A99AF (1519 bytes, 401 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A93C0(void)
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

loc_004A93C0: ;
    _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xE0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A99A7; /* je: equal / zero */

loc_004A93D4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004A93DCu); RECOMP_ABI_CALL(0x004A6210u, sub_004A6210); /* call 0x004A6210 */

loc_004A93DC: ;
    eax = MEM32(0x8583A0);
    PUSH32(esp, 0x858548);
    ecx = esp + 0xB4;
    MEM32(esp + 0x70) = eax;
    PUSH32(esp, 0x004A93F6u); RECOMP_ABI_CALL(0x00457640u, sub_00457640); /* call 0x00457640 */

loc_004A93F6: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004A93FFu); RECOMP_ABI_CALL(0x004690F0u, sub_004690F0); /* call 0x004690F0 */

loc_004A93FF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x004A9409u); RECOMP_ABI_CALL(0x00469FA0u, sub_00469FA0); /* call 0x00469FA0 */

loc_004A9409: ;
    edi = eax;
    fp_push(MEMF(edi + 0x20)); /* fld float */
    eax = MEM32(esi + 0xC);
    edx = MEM32(edi + 0x18);
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = 0;
    PUSH32(esp, 0x004A942Au); RECOMP_ABI_CALL(0x004690F0u, sub_004690F0); /* call 0x004690F0 */

loc_004A942A: ;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + 0x44);
    eax = MEM32(esi + 0xC);
    ebx = MEM32(edx + 0x40);
    ecx = eax + eax * 2;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x6C3434) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6C3434;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004A944Au); RECOMP_ABI_CALL(0x00540780u, sub_00540780); /* call 0x00540780 */

loc_004A944A: ;
    ebp = MEM32(0x698608);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A945Du); RECOMP_ABI_CALL(0x005F23A0u, sub_005F23A0); /* call 0x005F23A0 */

loc_004A945D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004A950A; /* ja: above (unsigned >) */

loc_004A9469: ;
    { uint32_t _jt = MEM32(ebx * 4 + 0x4A99B0); /* switch: 4 entries, 4 targets */
    if (_jt == 0x004A9470u) goto loc_004A9470;
    if (_jt == 0x004A947Bu) goto loc_004A947B;
    if (_jt == 0x004A9486u) goto loc_004A9486;
    if (_jt == 0x004A948Eu) goto loc_004A948E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_004A9470: ;
    ecx = MEM32(ebp + 0x10);
    MEM32(esi + 0x44) = ecx;
    goto loc_004A950A;

loc_004A947B: ;
    edx = MEM32(ebp + 0x14);
    MEM32(esi + 0x44) = edx;
    goto loc_004A950A;

loc_004A9486: ;
    eax = MEM32(ebp + 0x18);
    MEM32(esi + 0x44) = eax;
    goto loc_004A950A;

loc_004A948E: ;
    ecx = MEM32(esi + 0x6C);
    fp_push(MEMF(ecx + 0xB0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6424EC)); /* fmul dword ptr [0x6424ec] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x3C)); /* fsub dword ptr [ebp + 0x3c] */
    fp_push(MEMF(ebp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x3C)); /* fsub dword ptr [ebp + 0x3c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x62D57C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004A94C5; /* jp: parity */

loc_004A94BD: ;
    fp_push(MEMF(0x62D57C)); /* fld float */
    goto loc_004A94E2;

loc_004A94C5: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_push(MEMF(0x65E384)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004A94E2; /* jne: not equal / not zero */

loc_004A94DA: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x65E384)); /* fld float */

loc_004A94E2: ;
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x1C)); /* fmul dword ptr [ebp + 0x1c] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x20)); /* fmul dword ptr [ebp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x44)); /* fsub dword ptr [ebp + 0x44] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_push(MEMF(ebp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x44)); /* fmul dword ptr [esi + 0x44] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esi + 0x44) = (float)fp_top(); fp_pop(); /* fstp */

loc_004A950A: ;
    ecx = esp + 0x70;
    PUSH32(esp, 0x004A9513u); RECOMP_ABI_CALL(0x00609C80u, sub_00609C80); /* call 0x00609C80 */

loc_004A9513: ;
    edx = MEM32(esi + 0x44);
    ecx = esp + 0x2C;
    eax = edx;
    PUSH32(esp, ecx);
    ecx = esp + 0x74;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x38) = 0;
    MEM32(esp + 0x3C) = 0;
    MEM32(esp + 0x40) = 0;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x48) = 0;
    MEM32(esp + 0x4C) = 0;
    MEM32(esp + 0x50) = 0;
    MEM32(esp + 0x54) = 0;
    MEM32(esp + 0x58) = 0;
    MEM32(esp + 0x5C) = 0;
    MEM32(esp + 0x60) = 0;
    MEM32(esp + 0x64) = 0;
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x6C) = 0x3F800000;
    PUSH32(esp, 0x004A959Eu); RECOMP_ABI_CALL(0x00609E70u, sub_00609E70); /* call 0x00609E70 */

loc_004A959E: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A95F8; /* jne: not equal / not zero */

loc_004A95A6: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x004A95AFu); RECOMP_ABI_CALL(0x004572A0u, sub_004572A0); /* call 0x004572A0 */

loc_004A95AF: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x28);
    ecx = esp + 0x2C;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x004A95C8u); RECOMP_ABI_CALL(0x00609C80u, sub_00609C80); /* call 0x00609C80 */

loc_004A95C8: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    ecx = MEM32(esp + 0x28);
    fp_top() = -fp_top(); /* fchs */
    edx = MEM32(esp + 0x20);
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ecx;
    MEM32(esp + 0x2C) = ecx;
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = esp + 0x74;
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x44) = eax;
    PUSH32(esp, 0x004A95F6u); RECOMP_ABI_CALL(0x00609E70u, sub_00609E70); /* call 0x00609E70 */

loc_004A95F6: ;
    goto loc_004A9608;

loc_004A95F8: ;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0x3F800000;

loc_004A9608: ;
    PUSH32(esp, 0x3FC90FDB);
    ecx = esp + 0x30;
    PUSH32(esp, 0x004A9616u); RECOMP_ABI_CALL(0x0060CA30u, sub_0060CA30); /* call 0x0060CA30 */

loc_004A9616: ;
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = esp + 0x74;
    PUSH32(esp, 0x004A9624u); RECOMP_ABI_CALL(0x00609E70u, sub_00609E70); /* call 0x00609E70 */

loc_004A9624: ;
    ecx = esp + 0x2C;
    PUSH32(esp, 0x004A962Du); RECOMP_ABI_CALL(0x00609C80u, sub_00609C80); /* call 0x00609C80 */

loc_004A962D: ;
    fp_push((double)SMEM32(esi + 0x40)); /* fild */
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    ecx = esp + 0x74;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 0x50)); /* fdiv dword ptr [esi + 0x50] */
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x38) = 0;
    MEM32(esp + 0x3C) = 0;
    MEM32(esp + 0x40) = 0;
    MEM32(esp + 0x44) = 0x3F800000;
    MEM32(esp + 0x48) = 0;
    MEM32(esp + 0x4C) = 0;
    MEM32(esp + 0x50) = 0;
    MEM32(esp + 0x54) = 0;
    MEM32(esp + 0x5C) = 0;
    MEM32(esp + 0x60) = 0;
    MEM32(esp + 0x64) = 0;
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x6C) = 0x3F800000;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 0x5C)); /* fdiv dword ptr [esi + 0x5c] */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x004A96BEu); RECOMP_ABI_CALL(0x00609E70u, sub_00609E70); /* call 0x00609E70 */

loc_004A96BE: ;
    ecx = esp + 0x2C;
    PUSH32(esp, 0x004A96C7u); RECOMP_ABI_CALL(0x00609C80u, sub_00609C80); /* call 0x00609C80 */

loc_004A96C7: ;
    ecx = MEM32(edi + 0x24);
    MEM32(esp + 0x5C) = ecx;
    edx = MEM32(edi + 0x2C);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x74;
    MEM32(esp + 0x68) = edx;
    PUSH32(esp, 0x004A96E3u); RECOMP_ABI_CALL(0x00609E70u, sub_00609E70); /* call 0x00609E70 */

loc_004A96E3: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x004A96EAu); RECOMP_ABI_CALL(0x005EE4E0u, sub_005EE4E0); /* call 0x005EE4E0 */

loc_004A96EA: ;
    PUSH32(esp, 0x674FD0);
    PUSH32(esp, 0x004A96F4u); RECOMP_ABI_CALL(0x005EDB00u, sub_005EDB00); /* call 0x005EDB00 */

loc_004A96F4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004A96FBu); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_004A96FB: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x004A9707u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_004A9707: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004A970Eu); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_004A970E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004A9717u); RECOMP_ABI_CALL(0x005EE5A0u, sub_005EE5A0); /* call 0x005EE5A0 */

loc_004A9717: ;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(esi + 0x14);
    edx = MEM32(esi + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ebx = ecx + eax;
    PUSH32(esp, ebx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A973Eu); RECOMP_ABI_CALL(0x005EF6F0u, sub_005EF6F0); /* call 0x005EF6F0 */

loc_004A973E: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004A974Au); RECOMP_ABI_CALL(0x005EE5A0u, sub_005EE5A0); /* call 0x005EE5A0 */

loc_004A974A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x004A9759u); RECOMP_ABI_CALL(0x004A6C30u, sub_004A6C30); /* call 0x004A6C30 */

loc_004A9759: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004A9760u); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_004A9760: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004A9769u); RECOMP_ABI_CALL(0x005EE5A0u, sub_005EE5A0); /* call 0x005EE5A0 */

loc_004A9769: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 9);
    PUSH32(esp, 0x004A9775u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_004A9775: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004A977Cu); RECOMP_ABI_CALL(0x005FB270u, sub_005FB270); /* call 0x005FB270 */

loc_004A977C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004A9785u); RECOMP_ABI_CALL(0x005EDCA0u, sub_005EDCA0); /* call 0x005EDCA0 */

loc_004A9785: ;
    PUSH32(esp, 4);
    PUSH32(esp, 5);
    PUSH32(esp, 0x004A978Eu); RECOMP_ABI_CALL(0x005FB070u, sub_005FB070); /* call 0x005FB070 */

loc_004A978E: ;
    fp_push(MEMF(ebp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x004A979Cu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A979C: ;
    fp_push(MEMF(ebp + 0x4C)); /* fld float */
    ebx = ZX8(LO8(eax));
    ebx = ebx | 0xFFFFFF00u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x004A97B6u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A97B6: ;
    fp_push(MEMF(ebp + 0x50)); /* fld float */
    edx = ZX8(LO8(eax));
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x004A97CCu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004A97CC: ;
    eax = ZX8(LO8(eax));
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(0x85B2AC);
    MEM32(0x85B2C0) = ebx;
    ebx = MEM32(esi + 0x40);
    edx = MEM32(esi + 0x10);
    ecx = MEM32(esi + 0x14);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x3C) = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_push((double)SMEM32(esp + 0x38)); /* fild */
    MEM32(eax + 8) = ebx;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x3C)); /* fild */
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
    ecx = MEM32(esi + 0x40);
    edx = MEM32(esi + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(esi + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x38) = edx;
    fp_push((double)SMEM32(esp + 0x38)); /* fild */
    MEM32(eax + 8) = ebx;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x3C)); /* fild */
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
    fp_push((double)SMEM32(esi + 0x10)); /* fild */
    edx = MEM32(esi + 0x14);
    MEM32(eax + 8) = ebx;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x38) = edx;
    fp_push((double)SMEM32(esp + 0x38)); /* fild */
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
    fp_push((double)SMEM32(esi + 0x10)); /* fild */
    ecx = MEM32(esi + 0x40);
    edx = MEM32(esi + 0x14);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x38) = edx;
    fp_push((double)SMEM32(esp + 0x38)); /* fild */
    MEM32(eax + 8) = ebx;
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
    PUSH32(esp, 0x004A98F6u); RECOMP_ABI_CALL(0x005FB150u, sub_005FB150); /* call 0x005FB150 */

loc_004A98F6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004A98FCu); RECOMP_ABI_CALL(0x005FB270u, sub_005FB270); /* call 0x005FB270 */

loc_004A98FC: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F800000);
    edx = esp + 0x74;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x004A9910u); RECOMP_ABI_CALL(0x004A6230u, sub_004A6230); /* call 0x004A6230 */

loc_004A9910: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x004A9921u); RECOMP_ABI_CALL(0x004A9080u, sub_004A9080); /* call 0x004A9080 */

loc_004A9921: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x74;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004A9932u); RECOMP_ABI_CALL(0x004A8E80u, sub_004A8E80); /* call 0x004A8E80 */

loc_004A9932: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x004A993Eu); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_004A993E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esp + 0x78;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x004A994Fu); RECOMP_ABI_CALL(0x004A85B0u, sub_004A85B0); /* call 0x004A85B0 */

loc_004A994F: ;
    PUSH32(esp, edi);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x78;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004A9961u); RECOMP_ABI_CALL(0x004A8A10u, sub_004A8A10); /* call 0x004A8A10 */

loc_004A9961: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 9);
    PUSH32(esp, 0x004A996Du); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_004A996D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x74;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x004A9981u); RECOMP_ABI_CALL(0x004A9020u, sub_004A9020); /* call 0x004A9020 */

loc_004A9981: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004A998Au); RECOMP_ABI_CALL(0x005EE5A0u, sub_005EE5A0); /* call 0x005EE5A0 */

loc_004A998A: ;
    eax = MEM32(esp + 0x74);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A9994u); RECOMP_ABI_CALL(0x005F23A0u, sub_005F23A0); /* call 0x005F23A0 */

loc_004A9994: ;
    ecx = esp + 0xBC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004A99A1u); RECOMP_ABI_CALL(0x005EE8D0u, sub_005EE8D0); /* call 0x005EE8D0 */

loc_004A99A1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_004A99A7: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xE0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004A99C0
 * Original: 0x004A99C0 - 0x004A9E25 (1125 bytes, 267 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A99C0(void)
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

loc_004A99C0: ;
    _fb = (uint32_t)(0xEC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xEC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = ecx;
    SET_LO8(eax, MEM8(ebp + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A9E1D; /* je: equal / zero */

loc_004A99D4: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(0x697B88);
    edx = MEM32(ecx + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8C);
    _fa = (uint32_t)(MEM8(eax + edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A9E1D; /* jne: not equal / not zero */

loc_004A99F1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x004A99FBu); RECOMP_ABI_CALL(0x004A6210u, sub_004A6210); /* call 0x004A6210 */

loc_004A99FB: ;
    ebx = MEM32(0x8583A0);
    PUSH32(esp, 0x858548);
    ecx = esp + 0xC0;
    PUSH32(esp, 0x004A9A12u); RECOMP_ABI_CALL(0x00457640u, sub_00457640); /* call 0x00457640 */

loc_004A9A12: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A9A1Bu); RECOMP_ABI_CALL(0x004690F0u, sub_004690F0); /* call 0x004690F0 */

loc_004A9A1B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x004A9A25u); RECOMP_ABI_CALL(0x00469FA0u, sub_00469FA0); /* call 0x00469FA0 */

loc_004A9A25: ;
    esi = ebx + 0x164;
    ecx = 6;
    edi = esp + 0x64;
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
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    MEM32(esp + 0x68) = eax;
    PUSH32(esp, 0x004A9A44u); RECOMP_ABI_CALL(0x005EE5A0u, sub_005EE5A0); /* call 0x005EE5A0 */

loc_004A9A44: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004A9A4Bu); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_004A9A4B: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004A9A56u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_004A9A56: ;
    ecx = MEM32(0x858378);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004A9A62u); RECOMP_ABI_CALL(0x005F23A0u, sub_005F23A0); /* call 0x005F23A0 */

loc_004A9A62: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004A9A68u); RECOMP_ABI_CALL(0x005FB260u, sub_005FB260); /* call 0x005FB260 */

loc_004A9A68: ;
    PUSH32(esp, 4);
    PUSH32(esp, 5);
    PUSH32(esp, 0x004A9A71u); RECOMP_ABI_CALL(0x005FB070u, sub_005FB070); /* call 0x005FB070 */

loc_004A9A71: ;
    edx = MEM32(0x69861C);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x24;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A9A80u); RECOMP_ABI_CALL(0x0045F8D0u, sub_0045F8D0); /* call 0x0045F8D0 */

loc_004A9A80: ;
    fp_push((double)SMEM32(esp + 0x8C)); /* fild */
    ecx = MEM32(esp + 0x8C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(0x85B2AC);
    if (CMP_GE(_fas, _fbs)) goto loc_004A9A9D; /* jge: greater or equal (signed >=) */

loc_004A9A97: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_004A9A9D: ;
    edx = MEM32(esp + 0x90);
    MEMF(eax) = (float)fp_top(); /* fst */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push((double)SMEM32(esp + 0x90)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_004A9AB7; /* jge: greater or equal (signed >=) */

loc_004A9AB1: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_004A9AB7: ;
    MEMF(eax + 4) = (float)fp_top(); /* fst */
    MEM32(eax + 8) = esi;
    ecx = MEM32(0x85B2C0);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(0x85B2B0);
    edx = MEM32(esp + 0x98);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(0x85B2AC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(0x85B2AC) = eax;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x98)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_004A9B01; /* jge: greater or equal (signed >=) */

loc_004A9AFB: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_004A9B01: ;
    MEM32(eax + 8) = esi;
    MEMF(esp + 0x38) = (float)fp_top(); /* fst */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x85B2C0);
    fp_push((double)SMEM32(esp + 0x94)); /* fild */
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(0x85B2B0);
    edx = MEM32(esp + 0x94);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(0x85B2AC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(0x85B2AC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_004A9B4B; /* jge: greater or equal (signed >=) */

loc_004A9B45: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_004A9B4B: ;
    MEM32(eax + 8) = esi;
    MEMF(esp + 0x44) = (float)fp_top(); /* fst */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(0x85B2A4);
    fp_pop(); /* fstp st(0) */
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(0x85B2B0);
    edx = MEM32(esp + 0x44);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(0x85B2AC);
    ecx = MEM32(esp + 0x38);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = esi;
    edx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = edx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x85B2AC) = MEM32(0x85B2AC) + 0x18;
    _fa = (uint32_t)(MEM32(0x85B2AC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004A9BB8u); RECOMP_ABI_CALL(0x005FB150u, sub_005FB150); /* call 0x005FB150 */

loc_004A9BB8: ;
    eax = MEM32(ebp + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A9BC1u); RECOMP_ABI_CALL(0x005F23A0u, sub_005F23A0); /* call 0x005F23A0 */

loc_004A9BC1: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x7C;
    PUSH32(esp, 0x004A9BCDu); RECOMP_ABI_CALL(0x00609C80u, sub_00609C80); /* call 0x00609C80 */

loc_004A9BCD: ;
    ecx = MEM32(esp + 0x9C);
    edx = MEM32(esp + 0xA4);
    eax = MEM32(ebp + 0x44);
    MEM32(esp + 0x14) = ecx;
    ecx = eax;
    MEM32(esp + 0x18) = edx;
    edx = esp + 0x20;
    MEM32(esp + 0x34) = ecx;
    PUSH32(esp, edx);
    ecx = esp + 0x80;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = 0;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x3C) = 0;
    MEM32(esp + 0x40) = 0;
    MEM32(esp + 0x44) = 0;
    MEM32(esp + 0x48) = 0;
    MEM32(esp + 0x4C) = 0;
    MEM32(esp + 0x50) = 0;
    MEM32(esp + 0x54) = 0;
    MEM32(esp + 0x58) = 0;
    MEM32(esp + 0x5C) = 0;
    MEM32(esp + 0x60) = 0x3F800000;
    PUSH32(esp, 0x004A9C71u); RECOMP_ABI_CALL(0x00609E70u, sub_00609E70); /* call 0x00609E70 */

loc_004A9C71: ;
    PUSH32(esp, 0x3FC90FDB);
    ecx = esp + 0x24;
    PUSH32(esp, 0x004A9C7Fu); RECOMP_ABI_CALL(0x0060CA30u, sub_0060CA30); /* call 0x0060CA30 */

loc_004A9C7F: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x80;
    PUSH32(esp, 0x004A9C90u); RECOMP_ABI_CALL(0x00609E70u, sub_00609E70); /* call 0x00609E70 */

loc_004A9C90: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x004A9C99u); RECOMP_ABI_CALL(0x00609C80u, sub_00609C80); /* call 0x00609C80 */

loc_004A9C99: ;
    fp_push((double)SMEM32(ebp + 0x40)); /* fild */
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = 0;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEM32(esp + 0x2C) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + 0x50)); /* fdiv dword ptr [ebp + 0x50] */
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x34) = 0x3F800000;
    MEM32(esp + 0x38) = 0;
    MEM32(esp + 0x3C) = 0;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + 0x5C)); /* fdiv dword ptr [ebp + 0x5c] */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esp + 0x80;
    MEM32(esp + 0x44) = 0;
    MEM32(esp + 0x48) = 0;
    MEM32(esp + 0x50) = 0;
    MEM32(esp + 0x54) = 0;
    MEM32(esp + 0x58) = 0;
    MEM32(esp + 0x5C) = 0;
    MEM32(esp + 0x60) = 0x3F800000;
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x004A9D2Du); RECOMP_ABI_CALL(0x00609E70u, sub_00609E70); /* call 0x00609E70 */

loc_004A9D2D: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x004A9D36u); RECOMP_ABI_CALL(0x00609C80u, sub_00609C80); /* call 0x00609C80 */

loc_004A9D36: ;
    edx = MEM32(ebp + 0x48);
    eax = MEM32(ebp + 0x54);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esp + 0x80;
    MEM32(esp + 0x54) = edx;
    MEM32(esp + 0x5C) = eax;
    PUSH32(esp, 0x004A9D55u); RECOMP_ABI_CALL(0x00609E70u, sub_00609E70); /* call 0x00609E70 */

loc_004A9D55: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004A9D5Cu); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_004A9D5C: ;
    PUSH32(esp, 0x674FD0);
    PUSH32(esp, 0x004A9D66u); RECOMP_ABI_CALL(0x005EDB00u, sub_005EDB00); /* call 0x005EDB00 */

loc_004A9D66: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x004A9D6Du); RECOMP_ABI_CALL(0x005EE4E0u, sub_005EE4E0); /* call 0x005EE4E0 */

loc_004A9D6D: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004A9D78u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_004A9D78: ;
    edx = MEM32(0x69861C);
    eax = MEM32(edx + 0x10);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x004A9D94u); RECOMP_ABI_CALL(0x004A6230u, sub_004A6230); /* call 0x004A6230 */

loc_004A9D94: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x80;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x004A9DA8u); RECOMP_ABI_CALL(0x004A9080u, sub_004A9080); /* call 0x004A9080 */

loc_004A9DA8: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x80;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x004A9DBCu); RECOMP_ABI_CALL(0x004A8E80u, sub_004A8E80); /* call 0x004A8E80 */

loc_004A9DBC: ;
    esi = MEM32(esp + 0x60);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    eax = esp + 0x84;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x004A9DD2u); RECOMP_ABI_CALL(0x004A85B0u, sub_004A85B0); /* call 0x004A85B0 */

loc_004A9DD2: ;
    PUSH32(esp, esi);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x84;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x004A9DE7u); RECOMP_ABI_CALL(0x004A8A10u, sub_004A8A10); /* call 0x004A8A10 */

loc_004A9DE7: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x004A9DFBu); RECOMP_ABI_CALL(0x004A9020u, sub_004A9020); /* call 0x004A9020 */

loc_004A9DFB: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004A9E04u); RECOMP_ABI_CALL(0x005EE5A0u, sub_005EE5A0); /* call 0x005EE5A0 */

loc_004A9E04: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004A9E0Au); RECOMP_ABI_CALL(0x005F23A0u, sub_005F23A0); /* call 0x005F23A0 */

loc_004A9E0A: ;
    edx = esp + 0xC8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x004A9E17u); RECOMP_ABI_CALL(0x005EE8D0u, sub_005EE8D0); /* call 0x005EE8D0 */

loc_004A9E17: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_004A9E1D: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(0xEC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xEC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004A9E30
 * Original: 0x004A9E30 - 0x004A9E3D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A9E30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A9E30: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_004A9E40
 * Original: 0x004A9E40 - 0x004A9E65 (37 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A9E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A9E40: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A9E64; /* je: equal / zero */

loc_004A9E45: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A9E64; /* je: equal / zero */

loc_004A9E4C: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_004A9E5D; /* je: equal / zero */

loc_004A9E56: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004A9E5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A9E5Au); } /* indirect call */
    }

loc_004A9E5C: ;
    esp += 4; return; /* ret */

loc_004A9E5D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A9E63u); RECOMP_ABI_CALL(0x00577350u, sub_00577350); /* call 0x00577350 */

loc_004A9E63: ;
    POP32(esp, ecx);

loc_004A9E64: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004A9E70
 * Original: 0x004A9E70 - 0x004A9E9A (42 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A9E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A9E70: ;
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0x642E88);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x004A9E7Eu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_004A9E7E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A9E92; /* je: equal / zero */

loc_004A9E85: ;
    ecx = eax;
    PUSH32(esp, 0x004A9E8Cu); RECOMP_ABI_CALL(0x004A9E30u, sub_004A9E30); /* call 0x004A9E30 */

loc_004A9E8C: ;
    MEM32(0x698624) = eax;
    esp += 4; return; /* ret */

loc_004A9E92: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x698624) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_004A9EA0
 * Original: 0x004A9EA0 - 0x004A9EE6 (70 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A9EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A9EA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A9EE4; /* je: equal / zero */

loc_004A9EA8: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A9ED7; /* je: equal / zero */

loc_004A9EAF: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_004A9ECE; /* je: equal / zero */

loc_004A9EB9: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004A9EBFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A9EBDu); } /* indirect call */
    }

loc_004A9EBF: ;
    MEM32(esi) = 0;
    MEM32(esi + 8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004A9ECE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004A9ED4u); RECOMP_ABI_CALL(0x00577350u, sub_00577350); /* call 0x00577350 */

loc_004A9ED4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004A9ED7: ;
    MEM32(esi) = 0;
    MEM32(esi + 8) = 0;

loc_004A9EE4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A9EF0
 * Original: 0x004A9EF0 - 0x004A9F2F (63 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A9EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A9EF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esi + 0xC) = ebx;
    PUSH32(esp, 0x004A9EFFu); RECOMP_ABI_CALL(0x004AA590u, sub_004AA590); /* call 0x004AA590 */

loc_004A9EFF: ;
    eax = MEM32(esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004A9F2B; /* jle: less or equal (signed <=) */

loc_004A9F07: ;
    goto loc_004A9F10;

    /* nop */

loc_004A9F10: ;
    eax = MEM32(esi + 8);
    edx = MEM32(eax + ebx + 0xC);
    ecx = eax + ebx + 0xC;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x004A9F1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A9F1Bu); } /* indirect call */
    }

loc_004A9F1E: ;
    eax = MEM32(esi);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x42C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x42C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004A9F10; /* jl: less (signed <) */

loc_004A9F2B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004A9F30
 * Original: 0x004A9F30 - 0x004A9FB5 (133 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A9F30(void)
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

loc_004A9F30: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x6C38A4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 4);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004A9F9A; /* jle: less or equal (signed <=) */

loc_004A9F4D: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004A9F50: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004A9F5A; /* je: equal / zero */

loc_004A9F55: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004A9F7B; /* jne: not equal / not zero */

loc_004A9F5A: ;
    ecx = MEM32(esi + 8);
    fp_push(MEMF(ecx + edi + 0x5C)); /* fld float */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004A9F87; /* jp: parity */

loc_004A9F6E: ;
    edx = MEM32(ecx + 0x1C);
    ecx = MEM32(edx + 0x48);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004A9F7Bu); RECOMP_ABI_CALL(0x004D28D0u, sub_004D28D0); /* call 0x004D28D0 */

loc_004A9F7B: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004A9F85u); RECOMP_ABI_CALL(0x004B0D50u, sub_004B0D50); /* call 0x004B0D50 */

loc_004A9F85: ;
    goto loc_004A9F8C;

loc_004A9F87: ;
    PUSH32(esp, 0x004A9F8Cu); RECOMP_ABI_CALL(0x004B0830u, sub_004B0830); /* call 0x004B0830 */

loc_004A9F8C: ;
    eax = MEM32(esi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x42C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x42C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004A9F50; /* jl: less (signed <) */

loc_004A9F99: ;
    POP32(esp, edi);

loc_004A9F9A: ;
    edx = MEM32(esi + 0xC);
    ecx = MEM32(esi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 0xC) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_004A9FB0; /* jl: less (signed <) */

loc_004A9FA9: ;
    MEM32(esi + 0xC) = 0;

loc_004A9FB0: ;
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
 * sub_004A9FC0
 * Original: 0x004A9FC0 - 0x004A9FC5 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A9FC0(void)
{

loc_004A9FC0: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A9FD0
 * Original: 0x004A9FD0 - 0x004AA002 (50 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A9FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004A9FD0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004A9FFF; /* jle: less or equal (signed <=) */

loc_004A9FDC: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_004A9FE0: ;
    eax = MEM32(0x698624);
    ecx = MEM32(eax + 8);
    ecx = MEM32(ecx + edi + 0x58);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004A9FF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004A9FEEu); } /* indirect call */
    }

loc_004A9FF1: ;
    eax = MEM32(ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x42C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x42C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004A9FE0; /* jl: less (signed <) */

loc_004A9FFE: ;
    POP32(esp, edi);

loc_004A9FFF: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004AA010
 * Original: 0x004AA010 - 0x004AA03A (42 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AA010(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AA010: ;
    PUSH32(esp, 0x679684);
    PUSH32(esp, 0x004AA01Au); RECOMP_ABI_CALL(0x005EDB20u, sub_005EDB20); /* call 0x005EDB20 */

loc_004AA01A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004AA021u); RECOMP_ABI_CALL(0x005EDF80u, sub_005EDF80); /* call 0x005EDF80 */

loc_004AA021: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004AA028u); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_004AA028: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x004AA02Fu); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_004AA02F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004AA036u); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_004AA036: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004AA040
 * Original: 0x004AA040 - 0x004AA067 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AA040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AA040: ;
    ecx = MEM32(0x698624);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004AA05B; /* je: equal / zero */

loc_004AA04D: ;
    PUSH32(esp, 0x004AA052u); RECOMP_ABI_CALL(0x004A9E40u, sub_004A9E40); /* call 0x004A9E40 */

loc_004AA052: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004AA058u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_004AA058: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004AA05B: ;
    MEM32(0x698624) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004AA070
 * Original: 0x004AA070 - 0x004AA1BC (332 bytes, 114 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AA070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004AA070: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x642E94);
    esi = ecx;
    PUSH32(esp, 0x004AA080u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_004AA080: ;
    SET_LO8(eax, MEM8(0x6C342B));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004AA1B5; /* je: equal / zero */

loc_004AA090: ;
    eax = MEM32(0x697B88);
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x10) = eax;
    MEM32(esi) = ecx;
    MEM32(esi + 4) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_004AA1AC; /* je: equal / zero */

loc_004AA0B2: ;
    edx = MEM32(0x6C3304);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x42C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x63);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x642E88);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0x004AA0D5u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_004AA0D5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004AA0F4; /* je: equal / zero */

loc_004AA0DC: ;
    PUSH32(esp, 0x4B0030);
    PUSH32(esp, edi);
    ebx = eax + 4;
    PUSH32(esp, 0x42C);
    PUSH32(esp, ebx);
    MEM32(eax) = edi;
    PUSH32(esp, 0x004AA0F2u); RECOMP_ABI_CALL(0x00401750u, sub_00401750); /* call 0x00401750 */

loc_004AA0F2: ;
    goto loc_004AA0F6;

loc_004AA0F4: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004AA0F6: ;
    eax = MEM32(esi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 8) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_004AA1AB; /* jle: less or equal (signed <=) */

loc_004AA105: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004AA110;

    /* nop */

loc_004AA110: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 0x1C);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    eax = ebx + edx;
    edx = (uint32_t)(int32_t)SMEM8(eax);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(edx * 4 + 0x6631F0);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004AA137u); RECOMP_ABI_CALL(0x004B0110u, sub_004B0110); /* call 0x004B0110 */

loc_004AA137: ;
    ecx = MEM32(esi + 8);
    MEM8(ecx + ebp + 0x60) = 0;
    eax = MEM32(0x6C2EA8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0));
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004AA179; /* je: equal / zero */

loc_004AA149: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004AA15E; /* je: equal / zero */

loc_004AA14C: ;
    edx = MEM32(esp + 0x10);
    eax = edi + edx;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004AA17E;

loc_004AA15E: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((1) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edi)) >> 32) & 1);
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    goto loc_004AA17E;

loc_004AA179: ;
    eax = 1;

loc_004AA17E: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esp + 0x14);
    MEM32(ecx + ebp + 0x30) = eax;
    eax = MEM32(edx + 0x1C);
    SET_LO8(ecx, MEM8(ebx + eax + 0xA));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004AA197; /* je: equal / zero */

loc_004AA194: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004AA197: ;
    eax = MEM32(esi);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x42C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x42C)) >> 32) & 1);
    ebp = ebp + 0x42C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x7C)) >> 32) & 1);
    ebx = ebx + 0x7C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_004AA110; /* jl: less (signed <) */

loc_004AA1AB: ;
    POP32(esp, ebx);

loc_004AA1AC: ;
    POP32(esp, edi);
    MEM32(esi + 0xC) = 0;
    POP32(esp, ebp);

loc_004AA1B5: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AA1C0
 * Original: 0x004AA1C0 - 0x004AA233 (115 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AA1C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004AA1C0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_004AA217; /* je: equal / zero */

loc_004AA1CD: ;
    eax = MEM32(edi + -4);
    PUSH32(esp, ebp);
    ebp = edi + -4;
    PUSH32(esp, esi);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x42C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_004AA200; /* js: sign (negative) */

loc_004AA1E2: ;
    edi = eax + 1;
    goto loc_004AA1F0;

    /* nop */
    edi = edi;

loc_004AA1F0: ;
    _fb = (uint32_t)(0x42C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x42C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x004AA1FDu); RECOMP_ABI_CALL(0x004AFB10u, sub_004AFB10); /* call 0x004AFB10 */

loc_004AA1FD: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004AA1F0; /* jne: not equal / not zero */

loc_004AA200: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004AA20E; /* je: equal / zero */

loc_004AA205: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x004AA20Bu); RECOMP_ABI_CALL(0x00577350u, sub_00577350); /* call 0x00577350 */

loc_004AA20B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004AA20E: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_004AA217: ;
    ecx = edi;
    PUSH32(esp, 0x004AA21Eu); RECOMP_ABI_CALL(0x004AFB10u, sub_004AFB10); /* call 0x004AFB10 */

loc_004AA21E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004AA22C; /* je: equal / zero */

loc_004AA223: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004AA229u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_004AA229: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004AA22C: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AA240
 * Original: 0x004AA240 - 0x004AA257 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AA240(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AA240: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x698684) = eax;
    MEM32(0x69868C) = eax;
    MEM32(0x698678) = eax;
    MEM32(0x698688) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_004AA260
 * Original: 0x004AA260 - 0x004AA28E (46 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AA260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AA260: ;
    eax = MEM32(0x698684);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004AA27E; /* jge: greater or equal (signed >=) */

loc_004AA26A: ;
    ecx = MEM32(esp + 4);
    MEM32(eax * 4 + 0x698638) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x698684) = eax;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_004AA27E: ;
    PUSH32(esp, 0x642EAC);
    PUSH32(esp, 0x004AA288u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_004AA288: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_004AA290
 * Original: 0x004AA290 - 0x004AA2D7 (71 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AA290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AA290: ;
    ecx = MEM32(0x698684);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004AA2D6; /* jle: less or equal (signed <=) */

loc_004AA29E: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);

loc_004AA2A4: ;
    _fa = (uint32_t)(MEM32(edx * 4 + 0x698638)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx * 4 + 0x698638), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AA2B5; /* je: equal / zero */

loc_004AA2AD: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004AA2A4; /* jl: less (signed <) */

loc_004AA2B2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004AA2B5: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    SET_LO8(eax, 1);
    MEM32(0x698684) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_004AA2D4; /* jge: greater or equal (signed >=) */

loc_004AA2C2: ;
    edi = edx * 4 + 0x698638;
    esi = edx * 4 + 0x69863C;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
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

loc_004AA2D4: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_004AA2D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004AA2E0
 * Original: 0x004AA2E0 - 0x004AA35E (126 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AA2E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004AA2E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_004AA30C; /* je: equal / zero */

loc_004AA2F0: ;
    ecx = MEM32(ebx);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004AA2F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AA2F4u); } /* indirect call */
    }

loc_004AA2F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004AA30C; /* jne: not equal / not zero */

loc_004AA2FB: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, ecx);
    ecx = MEM32(0x6CE2E4);
    PUSH32(esp, 0x004AA30Cu); RECOMP_ABI_CALL(0x0052B360u, sub_0052B360); /* call 0x0052B360 */

loc_004AA30C: ;
    eax = MEM32(0x698684);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_004AA359; /* jle: less or equal (signed <=) */

loc_004AA31C: ;
    /* nop */

loc_004AA320: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x6628A4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(0x6628A4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004AA359; /* jge: greater or equal (signed >=) */

loc_004AA328: ;
    ecx = MEM32(esi * 4 + 0x698638);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AA34F; /* je: equal / zero */

loc_004AA333: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004AA339u); RECOMP_ABI_CALL(0x004B14F0u, sub_004B14F0); /* call 0x004B14F0 */

loc_004AA339: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AA34F; /* je: equal / zero */

loc_004AA33D: ;
    ecx = MEM32(esi * 4 + 0x698638);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004AA34Au); RECOMP_ABI_CALL(0x004B19E0u, sub_004B19E0); /* call 0x004B19E0 */

loc_004AA34A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AA34F; /* je: equal / zero */

loc_004AA34E: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004AA34F: ;
    eax = MEM32(0x698684);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004AA320; /* jl: less (signed <) */

loc_004AA359: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004AA360
 * Original: 0x004AA360 - 0x004AA3D6 (118 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AA360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AA360: ;
    eax = MEM32(0x698684);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004AA3CE; /* jle: less or equal (signed <=) */

loc_004AA372: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    goto loc_004AA380;

    /* nop */

loc_004AA380: ;
    ecx = MEM32(esi * 4 + 0x698638);
    eax = MEM32(ecx + 0x3D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AA39C; /* je: equal / zero */

loc_004AA392: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AA39C; /* je: equal / zero */

loc_004AA397: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004AA3C3; /* jne: not equal / not zero */

loc_004AA39C: ;
    edx = MEM32(ecx + 0x430);
    eax = MEM32(ecx + 0x42C);
    MEM32(esp + 0x10) = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004AA3C3; /* jne: not equal / not zero */

loc_004AA3B0: ;
    PUSH32(esp, 0x004AA3B5u); RECOMP_ABI_CALL(0x004B2AB0u, sub_004B2AB0); /* call 0x004B2AB0 */

loc_004AA3B5: ;
    eax = MEM32(eax + 0x48);
    ecx = MEM32(eax + 0x1B8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004AA3C3; /* jne: not equal / not zero */

loc_004AA3C2: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004AA3C3: ;
    eax = MEM32(0x698684);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004AA380; /* jl: less (signed <) */

loc_004AA3CD: ;
    POP32(esp, ebx);

loc_004AA3CE: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004AA3E0
 * Original: 0x004AA3E0 - 0x004AA58D (429 bytes, 164 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AA3E0(void)
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

loc_004AA3E0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(0x69C7D0);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004AA3F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AA3F3u); } /* indirect call */
    }

loc_004AA3F6: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004AA401u); RECOMP_ABI_CALL(0x004F9EB0u, sub_004F9EB0); /* call 0x004F9EB0 */

loc_004AA401: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004AA40F; /* jge: greater or equal (signed >=) */

loc_004AA407: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_004AA40F: ;
    ecx = MEM32(0x69C7D0);
    eax = MEM32(ecx + 0x3C);
    PUSH32(esp, ebx);
    edx = edi + edi * 4;
    ebx = eax + edx * 4;
    edx = ZX16(MEM16(ebx + 0x10));
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004AA42Au); RECOMP_ABI_CALL(0x004F9E50u, sub_004F9E50); /* call 0x004F9E50 */

loc_004AA42A: ;
    ecx = MEM32(esi);
    ebp = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004AA433u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AA430u); } /* indirect call */
    }

loc_004AA433: ;
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
    fp_push(MEMF(0x6628AC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63F0B0)); /* fmul dword ptr [0x63f0b0] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004AA481; /* jne: not equal / not zero */

loc_004AA46A: ;
    SET_LO8(edx, MEM8(esi + 4));
    fp_pop(); /* fstp st(0) */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_004AA481: ;
    fp_push(MEMF(0x6628A8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63F0B0)); /* fmul dword ptr [0x63f0b0] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004AA4EF; /* je: equal / zero */

loc_004AA498: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004AA49Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AA49Cu); } /* indirect call */
    }

loc_004AA49F: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x004AA4AAu); RECOMP_ABI_CALL(0x00500550u, sub_00500550); /* call 0x00500550 */

loc_004AA4AA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004AA4EF; /* je: equal / zero */

loc_004AA4AD: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004AA4EF; /* je: equal / zero */

loc_004AA4B0: ;
    eax = ZX8(MEM8(ebp + 5));
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004AA502; /* je: equal / zero */

loc_004AA4B9: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004AA502; /* je: equal / zero */

loc_004AA4BE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004AA583; /* jne: not equal / not zero */

loc_004AA4C5: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    ebx = MEM32(0x69C7D0);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004AA4D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AA4CFu); } /* indirect call */
    }

loc_004AA4D2: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x004AA4DEu); RECOMP_ABI_CALL(0x004FA0C0u, sub_004FA0C0); /* call 0x004FA0C0 */

loc_004AA4DE: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x6306E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x6306e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004AA583; /* jp: parity */

loc_004AA4EF: ;
    SET_LO8(edx, MEM8(esi + 4));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_004AA502: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    ebp = MEM32(0x69C7D0);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004AA50Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AA50Cu); } /* indirect call */
    }

loc_004AA50F: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x004AA51Bu); RECOMP_ABI_CALL(0x004FA0C0u, sub_004FA0C0); /* call 0x004FA0C0 */

loc_004AA51B: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x6306E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x6306e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004AA583; /* jp: parity */

loc_004AA528: ;
    ecx = ZX16(MEM16(ebx));
    edx = ZX16(MEM16(ebx + 2));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    eax = MEM32(0x69C7D0);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    eax = MEM32(eax + 0x34);
    ecx = ecx + eax + 0xC;
    eax = edx + eax + 0xC;
    fp_push(MEMF(ecx)); /* fld float */
    fp_push(MEMF(ecx + 8)); /* fld float */
    ecx = MEM32(esi);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    eax = MEM32(ecx);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004AA560u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AA55Du); } /* indirect call */
    }

loc_004AA560: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004AA4EF; /* je: equal / zero */

loc_004AA583: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
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
 * sub_004AA590
 * Original: 0x004AA590 - 0x004AA5AB (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AA590(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AA590: ;
    PUSH32(esp, edi);
    ecx = 0x20;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x698690;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x698688) = 0;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_004AA5B0
 * Original: 0x004AA5B0 - 0x004AA607 (87 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AA5B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AA5B0: ;
    ecx = MEM32(0x698688);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004AA5D1; /* jle: less or equal (signed <=) */

loc_004AA5C1: ;
    esi = MEM32(edx);

loc_004AA5C3: ;
    _fa = (uint32_t)(MEM32(eax * 8 + 0x698690)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 8 + 0x698690), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AA5F2; /* je: equal / zero */

loc_004AA5CC: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004AA5C3; /* jl: less (signed <) */

loc_004AA5D1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004AA5F0; /* jge: greater or equal (signed >=) */

loc_004AA5D6: ;
    eax = MEM32(edx);
    MEM32(ecx * 8 + 0x698690) = eax;
    edx = MEM32(edx + 4);
    MEM32(ecx * 8 + 0x698694) = edx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x698688) = ecx;

loc_004AA5F0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004AA5F2: ;
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x698694)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax * 8 + 0x698694) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004AA5F0; /* jle: less or equal (signed <=) */

loc_004AA5FE: ;
    MEM32(eax * 8 + 0x698694) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004AA610
 * Original: 0x004AA610 - 0x004AA639 (41 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AA610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AA610: ;
    ecx = MEM32(0x698688);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004AA62E; /* jle: less or equal (signed <=) */

loc_004AA61C: ;
    edx = MEM32(esp + 4);

loc_004AA620: ;
    _fa = (uint32_t)(MEM32(eax * 8 + 0x698690)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 8 + 0x698690), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AA631; /* je: equal / zero */

loc_004AA629: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004AA620; /* jl: less (signed <) */

loc_004AA62E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_004AA631: ;
    eax = eax * 8 + 0x698690;
    esp += 4; return; /* ret */

}

/**
 * sub_004AA640
 * Original: 0x004AA640 - 0x004AA6B0 (112 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AA640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AA640: ;
    eax = MEM32(0x698684);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004AA6A8; /* jle: less or equal (signed <=) */

loc_004AA652: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    goto loc_004AA660;

    /* nop */

loc_004AA660: ;
    ecx = MEM32(esi * 4 + 0x698638);
    _fa = (uint32_t)(MEM32(ecx + 0x3D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x3D8), 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004AA69D; /* jne: not equal / not zero */

loc_004AA670: ;
    edx = MEM32(ecx + 0x430);
    eax = MEM32(ecx + 0x42C);
    MEM32(esp + 0x10) = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004AA69D; /* jne: not equal / not zero */

loc_004AA684: ;
    PUSH32(esp, 0x004AA689u); RECOMP_ABI_CALL(0x004B2AA0u, sub_004B2AA0); /* call 0x004B2AA0 */

loc_004AA689: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x48);
    eax = MEM32(ecx + 0x1B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004AA69D; /* jne: not equal / not zero */

loc_004AA69C: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004AA69D: ;
    eax = MEM32(0x698684);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004AA660; /* jl: less (signed <) */

loc_004AA6A7: ;
    POP32(esp, ebx);

loc_004AA6A8: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004AA6B0
 * Original: 0x004AA6B0 - 0x004AA72A (122 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AA6B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004AA6B0: ;
    eax = MEM32(0x698684);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004AA716; /* jle: less or equal (signed <=) */

loc_004AA6C4: ;
    ebx = MEM32(esp + 0x20);
    ebp = MEM32(esp + 0x1C);
    /* nop */

loc_004AA6D0: ;
    ecx = MEM32(esi * 4 + 0x698638);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AA720; /* je: equal / zero */

loc_004AA6DB: ;
    _fa = (uint32_t)(MEM32(ecx + 0x3D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x3D8), 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004AA70C; /* jne: not equal / not zero */

loc_004AA6E4: ;
    edx = MEM32(ecx + 0x430);
    eax = MEM32(ecx + 0x42C);
    MEM32(esp + 0x14) = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004AA70C; /* jne: not equal / not zero */

loc_004AA6F9: ;
    PUSH32(esp, 0x004AA6FEu); RECOMP_ABI_CALL(0x004B2AB0u, sub_004B2AB0); /* call 0x004B2AB0 */

loc_004AA6FE: ;
    eax = MEM32(eax + 0x48);
    ecx = MEM32(eax + 0x1B8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004AA70C; /* jne: not equal / not zero */

loc_004AA70B: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004AA70C: ;
    eax = MEM32(0x698684);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004AA6D0; /* jl: less (signed <) */

loc_004AA716: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_004AA720: ;
    eax = edi;
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
 * sub_004AA730
 * Original: 0x004AA730 - 0x004AA7AD (125 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AA730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AA730: ;
    eax = MEM32(0x698684);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_004AA79D; /* jle: less or equal (signed <=) */

loc_004AA740: ;
    edi = MEM32(esp + 0x14);
    goto loc_004AA750;

    /* nop */
    /* nop */

loc_004AA750: ;
    ecx = MEM32(esi * 4 + 0x698638);
    eax = MEM32(ecx + 0x3D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AA767; /* je: equal / zero */

loc_004AA762: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004AA793; /* jne: not equal / not zero */

loc_004AA767: ;
    eax = MEM32(ecx + 0x42C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    edx = MEM32(ecx + 0x430);
    MEM32(esp + 0xC) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_004AA793; /* jne: not equal / not zero */

loc_004AA77B: ;
    PUSH32(esp, 0x004AA780u); RECOMP_ABI_CALL(0x004B2AA0u, sub_004B2AA0); /* call 0x004B2AA0 */

loc_004AA780: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x48);
    eax = MEM32(ecx + 0x1B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AA7A5; /* je: equal / zero */

loc_004AA793: ;
    eax = MEM32(0x698684);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004AA750; /* jl: less (signed <) */

loc_004AA79D: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_004AA7A5: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004AA7B0
 * Original: 0x004AA7B0 - 0x004AA827 (119 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AA7B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AA7B0: ;
    eax = MEM32(0x698684);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004AA81F; /* jle: less or equal (signed <=) */

loc_004AA7C2: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    goto loc_004AA7D0;

    /* nop */

loc_004AA7D0: ;
    ecx = MEM32(esi * 4 + 0x698638);
    eax = MEM32(ecx + 0x3D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004AA7E7; /* je: equal / zero */

loc_004AA7E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004AA814; /* jne: not equal / not zero */

loc_004AA7E7: ;
    eax = MEM32(ecx + 0x42C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    edx = MEM32(ecx + 0x430);
    MEM32(esp + 0x10) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_004AA814; /* jne: not equal / not zero */

loc_004AA7FB: ;
    PUSH32(esp, 0x004AA800u); RECOMP_ABI_CALL(0x004B2AA0u, sub_004B2AA0); /* call 0x004B2AA0 */

loc_004AA800: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x48);
    eax = MEM32(ecx + 0x1B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004AA814; /* jne: not equal / not zero */

loc_004AA813: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004AA814: ;
    eax = MEM32(0x698684);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004AA7D0; /* jl: less (signed <) */

loc_004AA81E: ;
    POP32(esp, ebx);

loc_004AA81F: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004AA830
 * Original: 0x004AA830 - 0x004AA855 (37 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AA830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AA830: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004AA83Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004AA83Cu); } /* indirect call */
    }

loc_004AA83F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004AA850; /* jl: less (signed <) */

loc_004AA843: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004AA850; /* jg: greater (signed >) */

loc_004AA848: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004AA850: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004AA860
 * Original: 0x004AA860 - 0x004AA88E (46 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AA860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AA860: ;
    eax = MEM32(0x69868C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004AA87E; /* jge: greater or equal (signed >=) */

loc_004AA86A: ;
    ecx = MEM32(esp + 4);
    MEM32(eax * 4 + 0x698628) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x69868C) = eax;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_004AA87E: ;
    PUSH32(esp, 0x642ECC);
    PUSH32(esp, 0x004AA888u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_004AA888: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_004AA890
 * Original: 0x004AA890 - 0x004AA8B8 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AA890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AA890: ;
    eax = MEM32(0x69868C);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004AA8B6; /* jle: less or equal (signed <=) */

loc_004AA89C: ;
    /* nop */

loc_004AA8A0: ;
    ecx = MEM32(esi * 4 + 0x698628);
    PUSH32(esp, 0x004AA8ACu); RECOMP_ABI_CALL(0x004AF260u, sub_004AF260); /* call 0x004AF260 */

loc_004AA8AC: ;
    eax = MEM32(0x69868C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004AA8A0; /* jl: less (signed <) */

loc_004AA8B6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004AA8C0
 * Original: 0x004AA8C0 - 0x004AA8E8 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AA8C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AA8C0: ;
    eax = MEM32(0x69868C);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004AA8E6; /* jle: less or equal (signed <=) */

loc_004AA8CC: ;
    /* nop */

loc_004AA8D0: ;
    ecx = MEM32(esi * 4 + 0x698628);
    PUSH32(esp, 0x004AA8DCu); RECOMP_ABI_CALL(0x004AEEC0u, sub_004AEEC0); /* call 0x004AEEC0 */

loc_004AA8DC: ;
    eax = MEM32(0x69868C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004AA8D0; /* jl: less (signed <) */

loc_004AA8E6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004AA8F0
 * Original: 0x004AA8F0 - 0x004AA918 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AA8F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AA8F0: ;
    eax = MEM32(0x69868C);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004AA916; /* jle: less or equal (signed <=) */

loc_004AA8FC: ;
    /* nop */

loc_004AA900: ;
    ecx = MEM32(esi * 4 + 0x698628);
    PUSH32(esp, 0x004AA90Cu); RECOMP_ABI_CALL(0x004ADF70u, sub_004ADF70); /* call 0x004ADF70 */

loc_004AA90C: ;
    eax = MEM32(0x69868C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004AA900; /* jl: less (signed <) */

loc_004AA916: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004AA920
 * Original: 0x004AA920 - 0x004AA948 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AA920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AA920: ;
    eax = MEM32(0x69868C);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004AA946; /* jle: less or equal (signed <=) */

loc_004AA92C: ;
    /* nop */

loc_004AA930: ;
    ecx = MEM32(esi * 4 + 0x698628);
    PUSH32(esp, 0x004AA93Cu); RECOMP_ABI_CALL(0x004AE1D0u, sub_004AE1D0); /* call 0x004AE1D0 */

loc_004AA93C: ;
    eax = MEM32(0x69868C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004AA930; /* jl: less (signed <) */

loc_004AA946: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004AA950
 * Original: 0x004AA950 - 0x004AA97E (46 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AA950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AA950: ;
    eax = MEM32(0x698678);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004AA96E; /* jge: greater or equal (signed >=) */

loc_004AA95A: ;
    ecx = MEM32(esp + 4);
    MEM32(eax * 4 + 0x69867C) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x698678) = eax;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_004AA96E: ;
    PUSH32(esp, 0x642EF4);
    PUSH32(esp, 0x004AA978u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_004AA978: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_004AA980
 * Original: 0x004AA980 - 0x004AA9C9 (73 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AA980(void)
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

loc_004AA980: ;
    PUSH32(esp, esi);
    esi = MEM32(0x698678);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004AA9C1; /* jle: less or equal (signed <=) */

loc_004AA98D: ;
    edx = MEM32(esp + 8);

loc_004AA991: ;
    eax = MEM32(ecx * 4 + 0x69867C);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx)); /* fsub dword ptr [edx] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 8)); /* fsub dword ptr [edx + 8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (TEST_Z(_fa, _fb)) goto loc_004AA9C5; /* je: equal / zero */

loc_004AA9BC: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004AA991; /* jl: less (signed <) */

loc_004AA9C1: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004AA9C5: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004AA9D0
 * Original: 0x004AA9D0 - 0x004AAA30 (96 bytes, 37 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_004AA9D0(void)
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

loc_004AA9D0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x698678);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004AAA11; /* jle: less or equal (signed <=) */

loc_004AA9DD: ;
    edx = MEM32(esp + 8);

loc_004AA9E1: ;
    eax = MEM32(ecx * 4 + 0x69867C);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx)); /* fsub dword ptr [edx] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 8)); /* fsub dword ptr [edx + 8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (TEST_Z(_fa, _fb)) goto loc_004AAA15; /* je: equal / zero */

loc_004AAA0C: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004AA9E1; /* jl: less (signed <) */

loc_004AAA11: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004AAA15: ;
    eax = MEM32(ecx * 4 + 0x69867C);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    edx = MEM32(esp + 0xC);
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    POP32(esp, esi);
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx * 4 + 0x69867C);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004AAA30
 * Original: 0x004AAA30 - 0x004AAA49 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AAA30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AAA30: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004AAA3Au); RECOMP_ABI_CALL(0x004AA360u, sub_004AA360); /* call 0x004AA360 */

loc_004AAA3A: ;
    ecx = MEM32(0x6628A4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    esp += 4; return; /* ret */

}

/**
 * sub_004AAA50
 * Original: 0x004AAA50 - 0x004AAA7E (46 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AAA50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004AAA50: ;
    eax = MEM32(ecx + 0x2C);
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x38E38E39;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    if ((_fas < 0)) goto loc_004AAA76; /* js: sign (negative) */

loc_004AAA6E: ;
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004AAA7B; /* jl: less (signed <) */

loc_004AAA76: ;
    eax = 0xFFFF;

loc_004AAA7B: ;
    esp += 8; return; /* ret 4 */

}
