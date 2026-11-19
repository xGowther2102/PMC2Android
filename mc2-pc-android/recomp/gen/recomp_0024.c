/**
 * Midnight Club II (PC) - Recompiled code chunk 24
 * Functions: 250 (0x0053B6A0 - 0x005425D0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0053B6A0
 * Original: 0x0053B6A0 - 0x0053B926 (646 bytes, 193 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B6A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053B6A0: ;
    _fb = (uint32_t)(0x1A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1A0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(0x679810);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    edi = ecx;
    ecx = MEM32(0x860220);
    PUSH32(esp, 0x62DF21);
    MEM32(0x679810) = 0x679884;
    eax = MEM32(ecx);
    PUSH32(esp, 0x64D5B4);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0053B6D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053B6D1u); } /* indirect call */
    }

loc_0053B6D4: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053B6F4; /* jne: not equal / not zero */

loc_0053B6DA: ;
    ecx = MEM32(0x860220);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x62DF21);
    PUSH32(esp, 0x64D5CC);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0053B6F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053B6EFu); } /* indirect call */
    }

loc_0053B6F2: ;
    esi = eax;

loc_0053B6F4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(0x679810) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_0053B70A; /* jne: not equal / not zero */

loc_0053B6FE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x1A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1A0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0053B70A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x635D38);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0053B719u); RECOMP_ABI_CALL(0x00616420u, sub_00616420); /* call 0x00616420 */

loc_0053B719: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x64D760);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0053B729u); RECOMP_ABI_CALL(0x006154D0u, sub_006154D0); /* call 0x006154D0 */

loc_0053B729: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053B75E; /* je: equal / zero */

loc_0053B72D: ;
    PUSH32(esp, 0xFF);
    eax = esp + 0xB0;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0053B743u); RECOMP_ABI_CALL(0x0047C920u, sub_0047C920); /* call 0x0047C920 */

loc_0053B743: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053B75E; /* jle: less or equal (signed <=) */

loc_0053B747: ;
    ecx = esp + 0xAC;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM8(esp + 0x1AF) = 0;
    PUSH32(esp, 0x0053B75Eu); RECOMP_ABI_CALL(0x0053B520u, sub_0053B520); /* call 0x0053B520 */

loc_0053B75E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x64D750);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0053B76Eu); RECOMP_ABI_CALL(0x006154D0u, sub_006154D0); /* call 0x006154D0 */

loc_0053B76E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053B783; /* je: equal / zero */

loc_0053B772: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x0053B77Bu); RECOMP_ABI_CALL(0x00615790u, sub_00615790); /* call 0x00615790 */

loc_0053B77B: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0053B783u); RECOMP_ABI_CALL(0x0053B550u, sub_0053B550); /* call 0x0053B550 */

loc_0053B783: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x64D740);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0053B793u); RECOMP_ABI_CALL(0x006154D0u, sub_006154D0); /* call 0x006154D0 */

loc_0053B793: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053B7A8; /* je: equal / zero */

loc_0053B797: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x0053B7A0u); RECOMP_ABI_CALL(0x00615790u, sub_00615790); /* call 0x00615790 */

loc_0053B7A0: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0053B7A8u); RECOMP_ABI_CALL(0x0053B570u, sub_0053B570); /* call 0x0053B570 */

loc_0053B7A8: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x64D730);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0053B7B8u); RECOMP_ABI_CALL(0x006154D0u, sub_006154D0); /* call 0x006154D0 */

loc_0053B7B8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053B7CD; /* je: equal / zero */

loc_0053B7BC: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x0053B7C5u); RECOMP_ABI_CALL(0x00615790u, sub_00615790); /* call 0x00615790 */

loc_0053B7C5: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0053B7CDu); RECOMP_ABI_CALL(0x0053B590u, sub_0053B590); /* call 0x0053B590 */

loc_0053B7CD: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x64D720);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0053B7DDu); RECOMP_ABI_CALL(0x006154D0u, sub_006154D0); /* call 0x006154D0 */

loc_0053B7DD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053B7F2; /* je: equal / zero */

loc_0053B7E1: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x0053B7EAu); RECOMP_ABI_CALL(0x00615790u, sub_00615790); /* call 0x00615790 */

loc_0053B7EA: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0053B7F2u); RECOMP_ABI_CALL(0x0053B5B0u, sub_0053B5B0); /* call 0x0053B5B0 */

loc_0053B7F2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x64D70C);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0053B802u); RECOMP_ABI_CALL(0x006154D0u, sub_006154D0); /* call 0x006154D0 */

loc_0053B802: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053B817; /* je: equal / zero */

loc_0053B806: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x0053B80Fu); RECOMP_ABI_CALL(0x00615790u, sub_00615790); /* call 0x00615790 */

loc_0053B80F: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0053B817u); RECOMP_ABI_CALL(0x0053B600u, sub_0053B600); /* call 0x0053B600 */

loc_0053B817: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x64D6FC);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0053B827u); RECOMP_ABI_CALL(0x006154D0u, sub_006154D0); /* call 0x006154D0 */

loc_0053B827: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053B83C; /* je: equal / zero */

loc_0053B82B: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x0053B834u); RECOMP_ABI_CALL(0x00615790u, sub_00615790); /* call 0x00615790 */

loc_0053B834: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0053B83Cu); RECOMP_ABI_CALL(0x0053B620u, sub_0053B620); /* call 0x0053B620 */

loc_0053B83C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x64D6F0);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0053B84Cu); RECOMP_ABI_CALL(0x006154D0u, sub_006154D0); /* call 0x006154D0 */

loc_0053B84C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053B861; /* je: equal / zero */

loc_0053B850: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x0053B859u); RECOMP_ABI_CALL(0x00615790u, sub_00615790); /* call 0x00615790 */

loc_0053B859: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0053B861u); RECOMP_ABI_CALL(0x0053B640u, sub_0053B640); /* call 0x0053B640 */

loc_0053B861: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x64D6DC);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0053B871u); RECOMP_ABI_CALL(0x006154D0u, sub_006154D0); /* call 0x006154D0 */

loc_0053B871: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053B886; /* je: equal / zero */

loc_0053B875: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x0053B87Eu); RECOMP_ABI_CALL(0x00615790u, sub_00615790); /* call 0x00615790 */

loc_0053B87E: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0053B886u); RECOMP_ABI_CALL(0x0053B660u, sub_0053B660); /* call 0x0053B660 */

loc_0053B886: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x64D6D0);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0053B896u); RECOMP_ABI_CALL(0x006154D0u, sub_006154D0); /* call 0x006154D0 */

loc_0053B896: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053B8D9; /* je: equal / zero */

loc_0053B89A: ;
    PUSH32(esp, 0xFF);
    edx = esp + 0xB0;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0053B8B0u); RECOMP_ABI_CALL(0x0047C920u, sub_0047C920); /* call 0x0047C920 */

loc_0053B8B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053B8D9; /* jle: less or equal (signed <=) */

loc_0053B8B4: ;
    eax = esp + 0xAC;
    PUSH32(esp, eax);
    MEM8(esp + 0x1AF) = 0;
    PUSH32(esp, 0x0053B8C9u); RECOMP_ABI_CALL(0x005E1B50u, sub_005E1B50); /* call 0x005E1B50 */

loc_0053B8C9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053B8D9; /* je: equal / zero */

loc_0053B8D1: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0053B8D9u); RECOMP_ABI_CALL(0x0053B680u, sub_0053B680); /* call 0x0053B680 */

loc_0053B8D9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x64D6C0);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0053B8E9u); RECOMP_ABI_CALL(0x006154D0u, sub_006154D0); /* call 0x006154D0 */

loc_0053B8E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053B90A; /* je: equal / zero */

loc_0053B8ED: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x0053B8F6u); RECOMP_ABI_CALL(0x00615790u, sub_00615790); /* call 0x00615790 */

loc_0053B8F6: ;
    ecx = esp + 0xC;
    ebp = eax;
    PUSH32(esp, 0x0053B901u); RECOMP_ABI_CALL(0x00615790u, sub_00615790); /* call 0x00615790 */

loc_0053B901: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x0053B90Au); RECOMP_ABI_CALL(0x0053B5D0u, sub_0053B5D0); /* call 0x0053B5D0 */

loc_0053B90A: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0053B913u); RECOMP_ABI_CALL(0x0049C460u, sub_0049C460); /* call 0x0049C460 */

loc_0053B913: ;
    ecx = esi;
    PUSH32(esp, 0x0053B91Au); RECOMP_ABI_CALL(0x00617FB0u, sub_00617FB0); /* call 0x00617FB0 */

loc_0053B91A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x1A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1A0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0053B930
 * Original: 0x0053B930 - 0x0053B98F (95 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B930(void)
{

loc_0053B930: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x64D770);
    MEM32(esi) = 0;
    PUSH32(esp, 0x0053B943u); RECOMP_ABI_CALL(0x0053B520u, sub_0053B520); /* call 0x0053B520 */

loc_0053B943: ;
    PUSH32(esp, 0x280);
    ecx = esi;
    PUSH32(esp, 0x0053B94Fu); RECOMP_ABI_CALL(0x0053B550u, sub_0053B550); /* call 0x0053B550 */

loc_0053B94F: ;
    PUSH32(esp, 0x1E0);
    PUSH32(esp, 0x0053B959u); RECOMP_ABI_CALL(0x0053B570u, sub_0053B570); /* call 0x0053B570 */

loc_0053B959: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x0053B960u); RECOMP_ABI_CALL(0x0053B590u, sub_0053B590); /* call 0x0053B590 */

loc_0053B960: ;
    PUSH32(esp, 0x1F4);
    PUSH32(esp, 0x0053B96Au); RECOMP_ABI_CALL(0x0053B5B0u, sub_0053B5B0); /* call 0x0053B5B0 */

loc_0053B96A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0053B971u); RECOMP_ABI_CALL(0x0053B600u, sub_0053B600); /* call 0x0053B600 */

loc_0053B971: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0053B978u); RECOMP_ABI_CALL(0x0053B620u, sub_0053B620); /* call 0x0053B620 */

loc_0053B978: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0053B97Fu); RECOMP_ABI_CALL(0x0053B640u, sub_0053B640); /* call 0x0053B640 */

loc_0053B97F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0053B986u); RECOMP_ABI_CALL(0x0053B660u, sub_0053B660); /* call 0x0053B660 */

loc_0053B986: ;
    MEM32(esi + 0x6C) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0053B990
 * Original: 0x0053B990 - 0x0053B9A4 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B990(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053B990: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x70) = LO8(eax);
    MEM8(esi + 0x71) = LO8(eax);
    PUSH32(esp, 0x0053B9A0u); RECOMP_ABI_CALL(0x0053B930u, sub_0053B930); /* call 0x0053B930 */

loc_0053B9A0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0053B9B0
 * Original: 0x0053B9B0 - 0x0053B9EE (62 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053B9B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x64D798);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0053B9BDu); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0053B9BD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053B9C9; /* je: equal / zero */

loc_0053B9C4: ;
    esi = 7;

loc_0053B9C9: ;
    PUSH32(esp, 0x64D790);
    PUSH32(esp, 0x0053B9D3u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0053B9D3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053B9E6; /* je: equal / zero */

loc_0053B9DA: ;
    eax = 8;
    MEM32(0x66315C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0053B9E6: ;
    MEM32(0x66315C) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0053B9F0
 * Original: 0x0053B9F0 - 0x0053BA3C (76 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B9F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053B9F0: ;
    eax = MEM32(0x66315C);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x20);
    if ((_fa == 0)) goto loc_0053BA29; /* je: equal / zero */

loc_0053BA00: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0053BA16; /* je: equal / zero */

loc_0053BA03: ;
    PUSH32(esp, 0x1E0);
    PUSH32(esp, 0x280);
    PUSH32(esp, 0x0053BA12u); RECOMP_ABI_CALL(0x005ED7B0u, sub_005ED7B0); /* call 0x005ED7B0 */

loc_0053BA12: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0053BA16: ;
    PUSH32(esp, 0x2D0);
    PUSH32(esp, 0x500);
    PUSH32(esp, 0x0053BA25u); RECOMP_ABI_CALL(0x005ED7B0u, sub_005ED7B0); /* call 0x005ED7B0 */

loc_0053BA25: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0053BA29: ;
    PUSH32(esp, 0x1E0);
    PUSH32(esp, 0x2D0);
    PUSH32(esp, 0x0053BA38u); RECOMP_ABI_CALL(0x005ED7B0u, sub_005ED7B0); /* call 0x005ED7B0 */

loc_0053BA38: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0053BA40
 * Original: 0x0053BA40 - 0x0053BA6A (42 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0053BA40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053BA40: ;
    eax = MEM32(0x66315C);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0053BA67; /* ja: above (unsigned >) */

loc_0053BA4D: ;
    eax = ZX8(MEM8(eax + 0x53BA78));
    { uint32_t _jt = MEM32(eax * 4 + 0x53BA6C); /* switch: 3 entries, 3 targets */
    if (_jt == 0x0053BA5Bu) goto loc_0053BA5B;
    if (_jt == 0x0053BA61u) goto loc_0053BA61;
    if (_jt == 0x0053BA67u) goto loc_0053BA67;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0053BA5B: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_0053BA61: ;
    eax = 5;
    esp += 4; return; /* ret */

loc_0053BA67: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0053BA80
 * Original: 0x0053BA80 - 0x0053BA8D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053BA80(void)
{

loc_0053BA80: ;
    PUSH32(esp, 0x0053BA85u); RECOMP_ABI_CALL(0x0053BA40u, sub_0053BA40); /* call 0x0053BA40 */

loc_0053BA85: ;
    eax = MEM32(eax * 4 + 0x663370);
    esp += 4; return; /* ret */

}

/**
 * sub_0053BA90
 * Original: 0x0053BA90 - 0x0053BAA9 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053BA90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053BA90: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x54;
    MEM32(esi) = 0x64D7A0;
    PUSH32(esp, 0x0053BAA1u); RECOMP_ABI_CALL(0x005400F0u, sub_005400F0); /* call 0x005400F0 */

loc_0053BAA1: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00614360(); return; /* tail jmp 0x00614360 */

}

/**
 * sub_0053BAB0
 * Original: 0x0053BAB0 - 0x0053BACB (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053BAB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053BAB0: ;
    ecx = MEM32(0x6C3898);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053BAC0; /* je: equal / zero */

loc_0053BABA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0053BAC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053BABEu); } /* indirect call */
    }

loc_0053BAC0: ;
    MEM32(0x6C3898) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0053BAD0
 * Original: 0x0053BAD0 - 0x0053BAD6 (6 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053BAD0(void)
{

loc_0053BAD0: ;
    eax = ecx + 0x18;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053BAE0
 * Original: 0x0053BAE0 - 0x0053BAF7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053BAE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053BAE0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = 0xD;
    MEM32(ecx + 0xC) = 0xFFFFFFFFu;
    MEM8(ecx + 0x50) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0053BB00
 * Original: 0x0053BB00 - 0x0053BB17 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053BB00(void)
{

loc_0053BB00: ;
    PUSH32(esp, 0x64D7A4);
    MEM32(ecx + 4) = 1;
    MEM8(ecx + 0x10) = 0;
    PUSH32(esp, 0x0053BB15u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_0053BB15: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0053BB20
 * Original: 0x0053BB20 - 0x0053BB29 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053BB20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053BB20: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 4) = eax;
    MEM8(ecx + 0x10) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0053BB30
 * Original: 0x0053BB30 - 0x0053BB54 (36 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053BB30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053BB30: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x2C) = eax;
    MEM8(ecx + 0x27) = 0xFF;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM16(ecx + 0x24) = LO16(eax);
    MEM8(ecx + 0x26) = LO8(eax);
    MEM8(ecx + 0x50) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053BB60
 * Original: 0x0053BB60 - 0x0053BB94 (52 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053BB60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053BB60: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0053BB67u); RECOMP_ABI_CALL(0x0053BB30u, sub_0053BB30); /* call 0x0053BB30 */

loc_0053BB67: ;
    SET_LO8(eax, MEM8(ecx + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0053BB73; /* jae: above or equal (unsigned >=) */

loc_0053BB6E: ;
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx + 0x28) = LO8(eax);

loc_0053BB73: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x48) = eax;
    MEM16(ecx + 0x4C) = LO16(eax);
    SET_LO8(eax, MEM8(esp + 4));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ecx + 0x50) = 1;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 4) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053BBA0
 * Original: 0x0053BBA0 - 0x0053BBF1 (81 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053BBA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053BBA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053BBAF; /* jne: not equal / not zero */

loc_0053BBA9: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0053BBAF: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053BBC0; /* jl: less (signed <) */

loc_0053BBB9: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0053BBC0: ;
    ecx = MEM32(esp + 0x10);
    eax = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0053BBD0u); RECOMP_ABI_CALL(0x0061AEF0u, sub_0061AEF0); /* call 0x0061AEF0 */

loc_0053BBD0: ;
    ecx = MEM32(esi + edi * 8 + 0x30);
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + edi * 8 + 0x34);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0053BBEA; /* je: equal / zero */

loc_0053BBE0: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0053BBEA: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0053BC00
 * Original: 0x0053BC00 - 0x0053BC29 (41 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0053BC00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053BC00: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053BC24; /* je: equal / zero */

loc_0053BC08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053BC24; /* je: equal / zero */

loc_0053BC0D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053BC24; /* je: equal / zero */

loc_0053BC12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053BC24; /* je: equal / zero */

loc_0053BC17: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053BC24; /* je: equal / zero */

loc_0053BC1C: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_0053BC24: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053BC30
 * Original: 0x0053BC30 - 0x0053BC51 (33 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053BC30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053BC30: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1278);
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(eax + edx + 0x6634F0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053BC4Eu); RECOMP_ABI_CALL(0x0053BC00u, sub_0053BC00); /* call 0x0053BC00 */

loc_0053BC4E: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0053BC60
 * Original: 0x0053BC60 - 0x0053BC65 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053BC60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053BC60: ;
    g_seh_ebp = ebp; sub_0053BC00(); return; /* tail jmp 0x0053BC00 */

}

/**
 * sub_0053BC70
 * Original: 0x0053BC70 - 0x0053BC91 (33 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053BC70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053BC70: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1278);
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(eax + edx + 0x6634F0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053BC8Eu); RECOMP_ABI_CALL(0x0053BC60u, sub_0053BC60); /* call 0x0053BC60 */

loc_0053BC8E: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0053BCA0
 * Original: 0x0053BCA0 - 0x0053BCE5 (69 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053BCA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053BCA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebp;
    edi = 0x6633FC;

loc_0053BCB0: ;
    ebx = MEM32(edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053BCCC; /* jle: less or equal (signed <=) */

loc_0053BCB8: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0053BCBFu); RECOMP_ABI_CALL(0x0053BC70u, sub_0053BC70); /* call 0x0053BC70 */

loc_0053BCBF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053BCC7; /* je: equal / zero */

loc_0053BCC3: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0053BCC7: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053BCB8; /* jl: less (signed <) */

loc_0053BCCC: ;
    _fb = (uint32_t)(0x1278) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1278;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x666B64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x666B64 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053BCB0; /* jl: less (signed <) */

loc_0053BCDB: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0053BCF0
 * Original: 0x0053BCF0 - 0x0053BD38 (72 bytes, 26 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053BCF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053BCF0: ;
    eax = ecx;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053BD01; /* je: equal / zero */

loc_0053BCF8: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053BD06; /* jl: less (signed <) */

loc_0053BD01: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

loc_0053BD06: ;
    edx = ZX16(MEM16(eax + ecx * 2 + 0x48));
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 1;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, edx (32-bit) */
    POP32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_0053BD30; /* jne: not equal / not zero */

loc_0053BD1C: ;
    SET_LO8(ecx, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053BD2B; /* jne: not equal / not zero */

loc_0053BD24: ;
    SET_LO8(ecx, MEM8(eax + 0x28));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0053BD30; /* ja: above (unsigned >) */

loc_0053BD2B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

loc_0053BD30: ;
    eax = 1;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0053BD40
 * Original: 0x0053BD40 - 0x0053BD84 (68 bytes, 26 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053BD40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053BD40: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(esi + ebx * 2 + 0x48));
    eax = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebp;
    PUSH32(esp, 0x0053BD61u); RECOMP_ABI_CALL(0x0061AEF0u, sub_0061AEF0); /* call 0x0061AEF0 */

loc_0053BD61: ;
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edi) (16-bit) */
    MEM16(esi + ebx * 2 + 0x48) = LO16(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0053BD7D; /* je: equal / zero */

loc_0053BD6D: ;
    eax = ZX8(MEM8(esi + 0x27));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053BD79; /* jne: not equal / not zero */

loc_0053BD75: ;
    MEM8(esi + 0x27) = 0xFF;

loc_0053BD79: ;
    MEM8(esi + 0x50) = 1;

loc_0053BD7D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0053BD90
 * Original: 0x0053BD90 - 0x0053BDAE (30 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053BD90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053BD90: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053BDAB; /* je: equal / zero */

loc_0053BD96: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 4) = 2;

loc_0053BDAB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0053BDB0
 * Original: 0x0053BDB0 - 0x0053BDEC (60 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053BDB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053BDB0: ;
    ecx = MEM32(ecx + 4);
    eax = ecx + -3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0053BDEB; /* ja: above (unsigned >) */

loc_0053BDBB: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x53BDEC); /* switch: 7 entries, 3 targets */
    if (_jt == 0x0053BDC2u) goto loc_0053BDC2;
    if (_jt == 0x0053BDD0u) goto loc_0053BDD0;
    if (_jt == 0x0053BDDEu) goto loc_0053BDDE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0053BDC2: ;
    ecx = MEM32(0x6C3890);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0053BDCFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053BDCCu); } /* indirect call */
    }

loc_0053BDCF: ;
    esp += 4; return; /* ret */

loc_0053BDD0: ;
    ecx = MEM32(0x6C3890);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xF);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0053BDDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053BDDAu); } /* indirect call */
    }

loc_0053BDDD: ;
    esp += 4; return; /* ret */

loc_0053BDDE: ;
    ecx = MEM32(0x6C3890);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0053BDEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053BDE8u); } /* indirect call */
    }

loc_0053BDEB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0053BE10
 * Original: 0x0053BE10 - 0x0053BEB4 (164 bytes, 50 insns)
 * Category: game_io
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053BE10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053BE10: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = ecx;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x49E);
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x21);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(ecx * 4 + 0x663CAC);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = 0x6C2E88;
    PUSH32(esp, 0x0053BE46u); RECOMP_ABI_CALL(0x0053B130u, sub_0053B130); /* call 0x0053B130 */

loc_0053BE46: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1278);
    ecx = ebp;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(eax + ecx + 0x66350C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x21) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x21 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053BE66; /* je: equal / zero */

loc_0053BE5F: ;
    MEM32(0x6C2FF4) = eax;
    goto loc_0053BE72;

loc_0053BE66: ;
    edx = MEM32(0x6C2FF8);
    MEM32(0x6C2FF4) = edx;

loc_0053BE72: ;
    eax = MEM32(0x6C2EA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x64D7D0);
    PUSH32(esp, 0x0053BE82u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0053BE82: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x62DF21);
    ecx = 0x6C2E88;
    PUSH32(esp, 0x0053BE94u); RECOMP_ABI_CALL(0x0053AC90u, sub_0053AC90); /* call 0x0053AC90 */

loc_0053BE94: ;
    _fa = (uint32_t)(MEM8(esi + 0x27)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x27), LO8(ebx) (8-bit) */
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = ebp;
    MEM32(esi + 4) = 4;
    if (CMP_EQ(_fa, _fb)) goto loc_0053BEAD; /* je: equal / zero */

loc_0053BEA6: ;
    MEM8(esi + 0x27) = LO8(ebx);
    MEM8(esi + 0x50) = 1;

loc_0053BEAD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0053BEC0
 * Original: 0x0053BEC0 - 0x0053C0D4 (532 bytes, 156 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053BEC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053BEC0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 1;
    PUSH32(esp, 0x62DF21);
    ecx = 0x6C2E88;
    MEM32(esp + 0x18) = esi;
    MEM8(esp + 0x17) = 1;
    MEM32(esp + 0x1C) = 0xFFFFFFFFu;
    MEM32(0x6C2E88) = ebp;
    MEM32(0x6C2EA0) = ebx;
    PUSH32(esp, 0x0053BF00u); RECOMP_ABI_CALL(0x0053AC40u, sub_0053AC40); /* call 0x0053AC40 */

loc_0053BF00: ;
    eax = MEM32(0x6C2FF8);
    MEM32(0x6C2E8C) = ebx;
    ebx = ebp;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x1278);
    MEM32(0x6C2FF4) = eax;
    MEM32(0x6C2E90) = esi;
    MEM32(edi + 8) = ebp;
    _fa = (uint32_t)(MEM32(ebx + 0x663C70)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x663C70), esi (32-bit) */
    MEM32(esp + 0x20) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_0053BFD0; /* jle: less or equal (signed <=) */

loc_0053BF31: ;
    ebx = ebx + 0x663CA0;

loc_0053BF37: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x0053BF42u); RECOMP_ABI_CALL(0x0053BCF0u, sub_0053BCF0); /* call 0x0053BCF0 */

loc_0053BF42: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053BFAF; /* jne: not equal / not zero */

loc_0053BF46: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ecx = edi + 0x54;
    PUSH32(esp, 0x0053BF50u); RECOMP_ABI_CALL(0x0053FCD0u, sub_0053FCD0); /* call 0x0053FCD0 */

loc_0053BF50: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053BFAF; /* jne: not equal / not zero */

loc_0053BF54: ;
    ecx = ebp;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x49E);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx * 4 + 0x663C74);
    PUSH32(esp, edx);
    PUSH32(esp, 0x64D834);
    PUSH32(esp, 0x0053BF70u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0053BF70: ;
    eax = MEM32(ebx + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0053BF90; /* jge: greater or equal (signed >=) */

loc_0053BF7A: ;
    ecx = ZX8(MEM8(esi + edi + 0x1C));
    edx = MEM32(ebx + ecx * 4 + 0x48);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0053BF90; /* jge: greater or equal (signed >=) */

loc_0053BF87: ;
    MEM8(esp + 0x13) = 0;
    MEM32(esp + 0x18) = esi;

loc_0053BF90: ;
    edx = ZX8(MEM8(esi + edi + 0x1C));
    ecx = MEM32(ebx + edx * 4 + 0x48);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    ecx = 0x6C2E88;
    PUSH32(esp, 0x0053BFABu); RECOMP_ABI_CALL(0x0053AB40u, sub_0053AB40); /* call 0x0053AB40 */

loc_0053BFAB: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0053BFAF: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(eax + 0x663C70);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x84;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053BF37; /* jl: less (signed <) */

loc_0053BFC8: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053BFE8; /* jne: not equal / not zero */

loc_0053BFD0: ;
    ecx = edi;
    MEM32(edi + 4) = 6;
    PUSH32(esp, 0x0053BFDEu); RECOMP_ABI_CALL(0x0053C6E0u, sub_0053C6E0); /* call 0x0053C6E0 */

loc_0053BFDE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0053BFE8: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053C013; /* jne: not equal / not zero */

loc_0053BFF0: ;
    SET_LO8(ecx, MEM8(esp + 0x18));
    MEM8(edi + 0x27) = LO8(ecx);
    ecx = edi;
    MEM8(edi + 0x50) = 1;
    MEM32(edi + 4) = 4;
    PUSH32(esp, 0x0053C009u); RECOMP_ABI_CALL(0x0053C6E0u, sub_0053C6E0); /* call 0x0053C6E0 */

loc_0053C009: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0053C013: ;
    MEM32(0x6C31C0) = eax;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0xC) = ecx;
    MEM32(edi + 4) = 3;
    _fa = (uint32_t)(MEM32(0x6C31C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C31C0), 1 (32-bit) */
    eax = MEM32(0x6C2E88);
    if (CMP_NE(_fa, _fb)) goto loc_0053C06A; /* jne: not equal / not zero */

loc_0053C033: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053C087; /* jne: not equal / not zero */

loc_0053C037: ;
    eax = MEM32(0x6C31C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053C06E; /* jne: not equal / not zero */

loc_0053C040: ;
    _fa = (uint32_t)(MEM32(0x6C31F0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C31F0), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053C06E; /* jne: not equal / not zero */

loc_0053C048: ;
    eax = MEM32(0x6C321C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053C06E; /* jl: less (signed <) */

loc_0053C051: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = 0x62F1C8;
    ecx = 0x6C2E88;
    g_seh_ebp = ebp; sub_0053AC90(); return; /* tail jmp 0x0053AC90 */

loc_0053C06A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053C087; /* jne: not equal / not zero */

loc_0053C06E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = 0x64D818;
    ecx = 0x6C2E88;
    g_seh_ebp = ebp; sub_0053AC90(); return; /* tail jmp 0x0053AC90 */

loc_0053C087: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0053C0A5; /* jne: not equal / not zero */

loc_0053C090: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = 0x64D800;
    ecx = 0x6C2E88;
    g_seh_ebp = ebp; sub_0053AC90(); return; /* tail jmp 0x0053AC90 */

loc_0053C0A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053C0BF; /* jne: not equal / not zero */

loc_0053C0AA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = 0x64D7E0;
    ecx = 0x6C2E88;
    g_seh_ebp = ebp; sub_0053AC90(); return; /* tail jmp 0x0053AC90 */

loc_0053C0BF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = 0x62DF21;
    ecx = 0x6C2E88;
    g_seh_ebp = ebp; sub_0053AC90(); return; /* tail jmp 0x0053AC90 */

}

/**
 * sub_0053C0E0
 * Original: 0x0053C0E0 - 0x0053C12D (77 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C0E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053C0E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = ZX8(MEM8(esi + 0x27));
    ecx = MEM32(esi + 0x18);
    edx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1278);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x84);
    ecx = ecx + edx + 0x663CA0;
    MEM8(eax + esi + 0x1C) = MEM8(eax + esi + 0x1C) + 1;
    _fa = (uint32_t)(MEM8(eax + esi + 0x1C)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(MEM8(esi + 0x27));
    MEM8(esi + 0x50) = 1;
    edx = ZX8(MEM8(eax + esi + 0x1C));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 4) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053C127; /* jl: less (signed <) */

loc_0053C115: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0053C121u); RECOMP_ABI_CALL(0x0053BD40u, sub_0053BD40); /* call 0x0053BD40 */

loc_0053C121: ;
    MEM8(esi + 0x10) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0053C127: ;
    MEM8(esi + 0x10) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0053C130
 * Original: 0x0053C130 - 0x0053C175 (69 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053C130: ;
    edx = MEM32(ecx + 4);
    eax = 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053C172; /* je: equal / zero */

loc_0053C13C: ;
    edx = ZX8(MEM8(esp + 4));
    SET_LO8(edx, MEM8(edx * 4 + 0x6C3604));
    MEM8(ecx + 0x50) = LO8(eax);
    eax = ZX8(LO8(edx));
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x18);
    MEM8(ecx + 0x27) = LO8(edx);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x49E);
    edx = ZX8(MEM8(eax + ecx + 0x1C));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x21);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edx * 4 + 0x663CE8);
    MEM32(ecx + 0xC) = eax;
    POP32(esp, esi);

loc_0053C172: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053C180
 * Original: 0x0053C180 - 0x0053C19B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053C180: ;
    edx = MEM32(ecx + 4);
    eax = 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053C19A; /* je: equal / zero */

loc_0053C18C: ;
    MEM8(ecx + 0x27) = 0xFF;
    MEM8(ecx + 0x50) = LO8(eax);
    MEM32(ecx + 0xC) = 0xFFFFFFFFu;

loc_0053C19A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0053C1A0
 * Original: 0x0053C1A0 - 0x0053C1B9 (25 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C1A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053C1A0: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053C1B4; /* jne: not equal / not zero */

loc_0053C1A6: ;
    SET_LO8(eax, MEM8(ecx + 0x27));
    ecx = MEM32(esp + 4);
    MEM8(ecx) = LO8(eax);
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_0053C1B4: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053C1C0
 * Original: 0x0053C1C0 - 0x0053C232 (114 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C1C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053C1C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0x663C70;
    /* nop */

loc_0053C1D0: ;
    eax = MEM32(ebp);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053C205; /* jle: less or equal (signed <=) */

loc_0053C1D9: ;
    /* nop */

loc_0053C1E0: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0053C1EBu); RECOMP_ABI_CALL(0x0053BCF0u, sub_0053BCF0); /* call 0x0053BCF0 */

loc_0053C1EB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053C1FD; /* jne: not equal / not zero */

loc_0053C1EF: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx + 0x54;
    PUSH32(esp, 0x0053C1F9u); RECOMP_ABI_CALL(0x0053FCD0u, sub_0053FCD0); /* call 0x0053FCD0 */

loc_0053C1F9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053C22B; /* je: equal / zero */

loc_0053C1FD: ;
    eax = MEM32(ebp);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053C1E0; /* jl: less (signed <) */

loc_0053C205: ;
    _fb = (uint32_t)(0x1278) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x1278;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6673D8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x6673D8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053C1D0; /* jl: less (signed <) */

loc_0053C214: ;
    PUSH32(esp, 0x64D860);
    PUSH32(esp, 0x0053C21Eu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0053C21E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xD;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0053C22B: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0053C240
 * Original: 0x0053C240 - 0x0053C245 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C240(void)
{

loc_0053C240: ;
    eax = ZX8(MEM8(ecx + 0x28));
    esp += 4; return; /* ret */

}

/**
 * sub_0053C250
 * Original: 0x0053C250 - 0x0053C263 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053C250: ;
    PUSH32(esp, 0x64D8B4);
    PUSH32(esp, 0x0053C25Au); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0053C25A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_0053C270
 * Original: 0x0053C270 - 0x0053C2E5 (117 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053C270: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x10) = ecx;
    goto loc_0053C290;

loc_0053C286: ;
    ecx = MEM32(esp + 0x10);
    /* nop */

loc_0053C290: ;
    edi = MEM32(ecx);
    ebx = MEM32(ecx + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0053C297: ;
    eax = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    PUSH32(esp, 0x0053C2A5u); RECOMP_ABI_CALL(0x0061AEF0u, sub_0061AEF0); /* call 0x0061AEF0 */

loc_0053C2A5: ;
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0053C2C2; /* je: equal / zero */

loc_0053C2AD: ;
    ecx = MEM32(0x6C3898);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0053C2BAu); RECOMP_ABI_CALL(0x0053BC70u, sub_0053BC70); /* call 0x0053BC70 */

loc_0053C2BA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053C2C2; /* je: equal / zero */

loc_0053C2BE: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0053C2C2: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053C297; /* jl: less (signed <) */

loc_0053C2C8: ;
    ecx = MEM32(esp + 0x10);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0053C286; /* jl: less (signed <) */

loc_0053C2D9: ;
    eax = MEM32(esp + 0x14);
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
 * sub_0053C2F0
 * Original: 0x0053C2F0 - 0x0053C30E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053C2F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0053C2F8u); RECOMP_ABI_CALL(0x0053BA90u, sub_0053BA90); /* call 0x0053BA90 */

loc_0053C2F8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0053C308; /* je: equal / zero */

loc_0053C2FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0053C305u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0053C305: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0053C308: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053C310
 * Original: 0x0053C310 - 0x0053C353 (67 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053C310: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    MEM32(ecx + 4) = ebx;
    MEM32(ecx + 8) = 0xD;
    MEM32(ecx + 0xC) = 0xFFFFFFFFu;
    MEM8(ecx + 0x10) = LO8(ebx);
    edx = ecx + 0x48;
    eax = ecx + 0x30;
    esi = 3;

loc_0053C333: ;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM16(edx) = LO16(ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0053C333; /* jne: not equal / not zero */

loc_0053C344: ;
    PUSH32(esp, ebx);
    MEM8(ecx + 0x28) = LO8(ebx);
    PUSH32(esp, 0x0053C34Du); RECOMP_ABI_CALL(0x0053BB30u, sub_0053BB30); /* call 0x0053BB30 */

loc_0053C34D: ;
    POP32(esp, esi);
    MEM8(ecx + 0x50) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0053C360
 * Original: 0x0053C360 - 0x0053C41C (188 bytes, 68 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053C360: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    esi = ecx;
    eax = MEM32(esi + edi * 8 + 0x34);
    ebp = MEM32(esi + edi * 8 + 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x0053C388u); RECOMP_ABI_CALL(0x0053BC30u, sub_0053BC30); /* call 0x0053BC30 */

loc_0053C388: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053C403; /* je: equal / zero */

loc_0053C38C: ;
    eax = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    PUSH32(esp, 0x0053C39Au); RECOMP_ABI_CALL(0x0061AEF0u, sub_0061AEF0); /* call 0x0061AEF0 */

loc_0053C39A: ;
    eax = eax | ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = MEM32(esi + edi * 8 + 0x34);
    MEM32(esi + edi * 8 + 0x30) = eax;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    edx = edx | ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esi + edi * 8 + 0x34) = edx;
    PUSH32(esp, 0x0053C3B6u); RECOMP_ABI_CALL(0x0053D3C0u, sub_0053D3C0); /* call 0x0053D3C0 */

loc_0053C3B6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053C3E1; /* je: equal / zero */

loc_0053C3BD: ;
    ecx = MEM32(esp + 0x1C);
    eax = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0053C3CDu); RECOMP_ABI_CALL(0x0061AEF0u, sub_0061AEF0); /* call 0x0061AEF0 */

loc_0053C3CD: ;
    ecx = MEM32(esi + edi * 8 + 0x30);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi + edi * 8 + 0x34);
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + edi * 8 + 0x30) = ecx;
    MEM32(esi + edi * 8 + 0x34) = eax;

loc_0053C3E1: ;
    ecx = MEM32(esi + edi * 8 + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053C3F5; /* jne: not equal / not zero */

loc_0053C3EB: ;
    edx = MEM32(esi + edi * 8 + 0x34);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053C412; /* je: equal / zero */

loc_0053C3F5: ;
    POP32(esp, edi);
    MEM8(esi + 0x50) = 1;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0053C403: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x64D8C0);
    PUSH32(esp, 0x0053C40Fu); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_0053C40F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0053C412: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0053C420
 * Original: 0x0053C420 - 0x0053C4A2 (130 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053C420: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0053C428u); RECOMP_ABI_CALL(0x0053C250u, sub_0053C250); /* call 0x0053C250 */

loc_0053C428: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053C430; /* je: equal / zero */

loc_0053C42C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0053C430: ;
    eax = ZX8(MEM8(esi + 0x27));
    ecx = MEM32(esi + 0x18);
    edx = ZX8(MEM8(eax + esi + 0x1C));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x49E);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x21);
    PUSH32(esp, edi);
    edi = ecx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax * 4 + 0x663CAC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx * 4 + 0x664358);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053C49D; /* je: equal / zero */

loc_0053C460: ;
    ecx = MEM32(esi + 4);
    edi = 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053C49D; /* je: equal / zero */

loc_0053C46C: ;
    PUSH32(esp, eax);
    ecx = 0x6C2E88;
    PUSH32(esp, 0x0053C477u); RECOMP_ABI_CALL(0x0053ACB0u, sub_0053ACB0); /* call 0x0053ACB0 */

loc_0053C477: ;
    PUSH32(esp, 0x62DF21);
    ecx = 0x6C2E88;
    PUSH32(esp, 0x0053C486u); RECOMP_ABI_CALL(0x0053AC90u, sub_0053AC90); /* call 0x0053AC90 */

loc_0053C486: ;
    PUSH32(esp, 0x62DF21);
    ecx = 0x6C2E88;
    PUSH32(esp, 0x0053C495u); RECOMP_ABI_CALL(0x0053AC40u, sub_0053AC40); /* call 0x0053AC40 */

loc_0053C495: ;
    MEM32(esi + 4) = edi;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0053C49D: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0053C4B0
 * Original: 0x0053C4B0 - 0x0053C5D7 (295 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C4B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053C4B0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0x0053C4C3u); RECOMP_ABI_CALL(0x0053C250u, sub_0053C250); /* call 0x0053C250 */

loc_0053C4C3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053C5CF; /* jne: not equal / not zero */

loc_0053C4CB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053C5CF; /* je: equal / zero */

loc_0053C4D4: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053C5CF; /* je: equal / zero */

loc_0053C4DE: ;
    _fa = (uint32_t)(MEM8(esi + 0x27)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x27), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053C581; /* jne: not equal / not zero */

loc_0053C4E8: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x18);
    PUSH32(esp, ebp);
    ebp = ebx;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x1278);
    eax = MEM32(ebp + 0x663C70);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x13) = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_0053C554; /* jle: less or equal (signed <=) */

loc_0053C506: ;
    eax = ebp + 0x663CA8;
    MEM32(esp + 0x14) = eax;

loc_0053C510: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0053C51Bu); RECOMP_ABI_CALL(0x0053BCF0u, sub_0053BCF0); /* call 0x0053BCF0 */

loc_0053C51B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053C53B; /* jne: not equal / not zero */

loc_0053C51F: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi + 0x54;
    PUSH32(esp, 0x0053C529u); RECOMP_ABI_CALL(0x0053FCD0u, sub_0053FCD0); /* call 0x0053FCD0 */

loc_0053C529: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053C53B; /* jne: not equal / not zero */

loc_0053C52D: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0053C53B; /* jge: greater or equal (signed >=) */

loc_0053C536: ;
    MEM8(esp + 0x13) = 0;

loc_0053C53B: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ebp + 0x663C70);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x84;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0053C510; /* jl: less (signed <) */

loc_0053C554: ;
    SET_LO8(edx, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0053C57D; /* je: equal / zero */

loc_0053C563: ;
    edx = MEM32(esi + 0x18);
    edi = MEM32(esp + 0x10);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x49E);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edx * 4 + 0x664538);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053C597; /* jne: not equal / not zero */

loc_0053C57D: ;
    edi = MEM32(esp + 0x10);

loc_0053C581: ;
    eax = MEM32(esi + 0x18);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x49E);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax * 4 + 0x664448);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053C5CF; /* je: equal / zero */

loc_0053C597: ;
    PUSH32(esp, eax);
    ecx = 0x6C2E88;
    PUSH32(esp, 0x0053C5A2u); RECOMP_ABI_CALL(0x0053ACB0u, sub_0053ACB0); /* call 0x0053ACB0 */

loc_0053C5A2: ;
    PUSH32(esp, 0x62DF21);
    ecx = 0x6C2E88;
    PUSH32(esp, 0x0053C5B1u); RECOMP_ABI_CALL(0x0053AC90u, sub_0053AC90); /* call 0x0053AC90 */

loc_0053C5B1: ;
    PUSH32(esp, 0x62DF21);
    ecx = 0x6C2E88;
    PUSH32(esp, 0x0053C5C0u); RECOMP_ABI_CALL(0x0053AC40u, sub_0053AC40); /* call 0x0053AC40 */

loc_0053C5C0: ;
    POP32(esp, edi);
    MEM32(esi + 4) = 6;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0053C5CF: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0053C5E0
 * Original: 0x0053C5E0 - 0x0053C66D (141 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C5E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053C5E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebp = MEM32(edi + 0x18);
    PUSH32(esp, 0x0053C5EFu); RECOMP_ABI_CALL(0x0053C250u, sub_0053C250); /* call 0x0053C250 */

loc_0053C5EF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053C665; /* jne: not equal / not zero */

loc_0053C5F3: ;
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1278);
    ecx = MEM32(eax + 0x664354);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0053C665; /* je: equal / zero */

loc_0053C609: ;
    ebx = MEM32(eax + 0x663C70);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053C62D; /* jle: less or equal (signed <=) */

loc_0053C615: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x0053C620u); RECOMP_ABI_CALL(0x0053BCF0u, sub_0053BCF0); /* call 0x0053BCF0 */

loc_0053C620: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053C665; /* jne: not equal / not zero */

loc_0053C624: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053C615; /* jl: less (signed <) */

loc_0053C629: ;
    ecx = MEM32(esp + 0x10);

loc_0053C62D: ;
    PUSH32(esp, ecx);
    ecx = 0x6C2E88;
    PUSH32(esp, 0x0053C638u); RECOMP_ABI_CALL(0x0053ACB0u, sub_0053ACB0); /* call 0x0053ACB0 */

loc_0053C638: ;
    PUSH32(esp, 0x62DF21);
    ecx = 0x6C2E88;
    PUSH32(esp, 0x0053C647u); RECOMP_ABI_CALL(0x0053AC90u, sub_0053AC90); /* call 0x0053AC90 */

loc_0053C647: ;
    PUSH32(esp, 0x62DF21);
    ecx = 0x6C2E88;
    PUSH32(esp, 0x0053C656u); RECOMP_ABI_CALL(0x0053AC40u, sub_0053AC40); /* call 0x0053AC40 */

loc_0053C656: ;
    MEM32(edi + 4) = 7;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0053C665: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0053C670
 * Original: 0x0053C670 - 0x0053C6AA (58 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C670(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053C670: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x54;
    ecx = edi;
    MEM32(esi) = 0x64D7A0;
    MEM32(esi + 4) = eax;
    MEM8(esi + 0x50) = LO8(eax);
    PUSH32(esp, 0x0053C68Cu); RECOMP_ABI_CALL(0x00540400u, sub_00540400); /* call 0x00540400 */

loc_0053C68C: ;
    PUSH32(esp, 0x64D934);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0053C699u); RECOMP_ABI_CALL(0x00540490u, sub_00540490); /* call 0x00540490 */

loc_0053C699: ;
    ecx = esi;
    PUSH32(esp, 0x0053C6A0u); RECOMP_ABI_CALL(0x0053C310u, sub_0053C310); /* call 0x0053C310 */

loc_0053C6A0: ;
    PUSH32(esp, 0x0053C6A5u); RECOMP_ABI_CALL(0x0053BB00u, sub_0053BB00); /* call 0x0053BB00 */

loc_0053C6A5: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0053C6B0
 * Original: 0x0053C6B0 - 0x0053C6DA (42 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C6B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053C6B0: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x64D94C);
    PUSH32(esp, 0x70);
    PUSH32(esp, 0x0053C6BEu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0053C6BE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053C6D2; /* je: equal / zero */

loc_0053C6C5: ;
    ecx = eax;
    PUSH32(esp, 0x0053C6CCu); RECOMP_ABI_CALL(0x0053C670u, sub_0053C670); /* call 0x0053C670 */

loc_0053C6CC: ;
    MEM32(0x6C3898) = eax;
    esp += 4; return; /* ret */

loc_0053C6D2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x6C3898) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0053C6E0
 * Original: 0x0053C6E0 - 0x0053C811 (305 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C6E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053C6E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0053C80B; /* je: equal / zero */

loc_0053C6F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    MEM8(esi + 0x10) = 0;
    if (CMP_A(_fa, _fb)) goto loc_0053C7FD; /* ja: above (unsigned >) */

loc_0053C700: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x53C814); /* switch: 10 entries, 7 targets */
    if (_jt == 0x0053C707u) goto loc_0053C707;
    if (_jt == 0x0053C743u) goto loc_0053C743;
    if (_jt == 0x0053C752u) goto loc_0053C752;
    if (_jt == 0x0053C7D1u) goto loc_0053C7D1;
    if (_jt == 0x0053C7E2u) goto loc_0053C7E2;
    if (_jt == 0x0053C7F0u) goto loc_0053C7F0;
    if (_jt == 0x0053C7FDu) goto loc_0053C7FD;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0053C707: ;
    SET_LO8(eax, MEM8(esi + 0x27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053C76E; /* je: equal / zero */

loc_0053C70E: ;
    eax = ZX8(LO8(eax));
    ecx = ZX8(MEM8(eax + esi + 0x1C));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053C743; /* jne: not equal / not zero */

loc_0053C71A: ;
    ecx = MEM32(esi + 0x18);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x84);
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1278);
    eax = MEM32(edx + eax + 0x663CE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053C76E; /* jl: less (signed <) */

loc_0053C736: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0053C73Fu); RECOMP_ABI_CALL(0x0053BBA0u, sub_0053BBA0); /* call 0x0053BBA0 */

loc_0053C73F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053C76E; /* je: equal / zero */

loc_0053C743: ;
    ecx = esi;
    PUSH32(esp, 0x0053C74Au); RECOMP_ABI_CALL(0x0053C420u, sub_0053C420); /* call 0x0053C420 */

loc_0053C74A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053C80B; /* jne: not equal / not zero */

loc_0053C752: ;
    eax = ZX8(MEM8(esi + 0x27));
    ecx = ZX8(MEM8(eax + esi + 0x1C));
    edx = MEM32(esi + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0053C768u); RECOMP_ABI_CALL(0x0053BE10u, sub_0053BE10); /* call 0x0053BE10 */

loc_0053C768: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0053C76E: ;
    ebp = MEM32(esi + 0x18);
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1278);
    ecx = MEM32(eax + 0x663C70);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(ebx, 1);
    if (CMP_LE(_fas, _fbs)) goto loc_0053C7C6; /* jle: less or equal (signed <=) */

loc_0053C787: ;
    ecx = ebp;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1278);
    edx = MEM32(ecx + 0x663C70);
    MEM32(esp + 0x10) = edx;
    /* nop */

loc_0053C7A0: ;
    SET_LO8(eax, MEM8(esi + edi + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0053C7B7; /* ja: above (unsigned >) */

loc_0053C7A8: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0053C7B3u); RECOMP_ABI_CALL(0x0053BCF0u, sub_0053BCF0); /* call 0x0053BCF0 */

loc_0053C7B3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053C7B9; /* je: equal / zero */

loc_0053C7B7: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0053C7B9: ;
    eax = MEM32(esp + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053C7A0; /* jl: less (signed <) */

loc_0053C7C2: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053C7D1; /* je: equal / zero */

loc_0053C7C6: ;
    ecx = esi;
    PUSH32(esp, 0x0053C7CDu); RECOMP_ABI_CALL(0x0053C5E0u, sub_0053C5E0); /* call 0x0053C5E0 */

loc_0053C7CD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053C80B; /* jne: not equal / not zero */

loc_0053C7D1: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0053C7DCu); RECOMP_ABI_CALL(0x0053BEC0u, sub_0053BEC0); /* call 0x0053BEC0 */

loc_0053C7DC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0053C7E2: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0053C840(); return; /* tail jmp 0x0053C840 */

loc_0053C7F0: ;
    POP32(esp, edi);
    MEM32(esi + 4) = 8;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0053C7FD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64D960);
    PUSH32(esp, 0x0053C808u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_0053C808: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0053C80B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0053C840
 * Original: 0x0053C840 - 0x0053C8A7 (103 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053C840: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0053C848u); RECOMP_ABI_CALL(0x0053C1C0u, sub_0053C1C0); /* call 0x0053C1C0 */

loc_0053C848: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053C858; /* jne: not equal / not zero */

loc_0053C84D: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0053C856u); RECOMP_ABI_CALL(0x0053BB60u, sub_0053BB60); /* call 0x0053BB60 */

loc_0053C856: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0053C858: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053C87F; /* je: equal / zero */

loc_0053C85F: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0053C867u); RECOMP_ABI_CALL(0x0053BB30u, sub_0053BB30); /* call 0x0053BB30 */

loc_0053C867: ;
    PUSH32(esp, 0x0053C86Cu); RECOMP_ABI_CALL(0x0053C5E0u, sub_0053C5E0); /* call 0x0053C5E0 */

loc_0053C86C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053C856; /* jne: not equal / not zero */

loc_0053C870: ;
    MEM32(esi + 4) = 3;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0053C6E0(); return; /* tail jmp 0x0053C6E0 */

loc_0053C87F: ;
    SET_LO8(eax, MEM8(esi + 0x27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053C870; /* je: equal / zero */

loc_0053C886: ;
    eax = ZX8(LO8(eax));
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0053C894u); RECOMP_ABI_CALL(0x0053BCF0u, sub_0053BCF0); /* call 0x0053BCF0 */

loc_0053C894: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053C870; /* jne: not equal / not zero */

loc_0053C898: ;
    MEM32(esi + 4) = 4;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0053C6E0(); return; /* tail jmp 0x0053C6E0 */

}

/**
 * sub_0053C8B0
 * Original: 0x0053C8B0 - 0x0053C9C8 (280 bytes, 99 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C8B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053C8B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053C9C4; /* je: equal / zero */

loc_0053C8BF: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053C8E1; /* jne: not equal / not zero */

loc_0053C8C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053C8D5; /* jne: not equal / not zero */

loc_0053C8CD: ;
    MEM8(esi + 0x27) = 0xFF;
    MEM8(esi + 0x50) = 1;

loc_0053C8D5: ;
    POP32(esp, ebx);
    MEM32(esi + 4) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0053C8E1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053C91D; /* jne: not equal / not zero */

loc_0053C8E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053C91D; /* je: equal / zero */

loc_0053C8E9: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053C91B; /* je: equal / zero */

loc_0053C8F3: ;
    _fa = (uint32_t)(MEM32(0x6C3304)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C3304), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053C91B; /* jne: not equal / not zero */

loc_0053C8FC: ;
    ebp = MEM32(0x6C32C8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0053C91B; /* jge: greater or equal (signed >=) */

loc_0053C907: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0053C910u); RECOMP_ABI_CALL(0x0053BC30u, sub_0053BC30); /* call 0x0053BC30 */

loc_0053C910: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053C91B; /* je: equal / zero */

loc_0053C914: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0053C91Bu); RECOMP_ABI_CALL(0x0053C360u, sub_0053C360); /* call 0x0053C360 */

loc_0053C91B: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0053C91D: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0053C9B5; /* ja: above (unsigned >) */

loc_0053C929: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x53C9C8); /* switch: 5 entries, 4 targets */
    if (_jt == 0x0053C930u) goto loc_0053C930;
    if (_jt == 0x0053C940u) goto loc_0053C940;
    if (_jt == 0x0053C9B5u) goto loc_0053C9B5;
    if (_jt == 0x0053C9C3u) goto loc_0053C9C3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0053C930: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0053C95D; /* jne: not equal / not zero */

loc_0053C936: ;
    PUSH32(esp, 0x0053C93Bu); RECOMP_ABI_CALL(0x0053C840u, sub_0053C840); /* call 0x0053C840 */

loc_0053C93B: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0053C940: ;
    eax = ebx;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0053C967; /* je: equal / zero */

loc_0053C947: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0053C9C3; /* jne: not equal / not zero */

loc_0053C94C: ;
    MEM32(esi + 4) = 3;
    MEM8(esi + 0x27) = 0xFF;
    MEM8(esi + 0x50) = 1;
    ecx = esi;

loc_0053C95D: ;
    PUSH32(esp, 0x0053C962u); RECOMP_ABI_CALL(0x0053C6E0u, sub_0053C6E0); /* call 0x0053C6E0 */

loc_0053C962: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0053C967: ;
    ecx = esi;
    PUSH32(esp, 0x0053C96Eu); RECOMP_ABI_CALL(0x0053C0E0u, sub_0053C0E0); /* call 0x0053C0E0 */

loc_0053C96E: ;
    ecx = esi;
    PUSH32(esp, 0x0053C975u); RECOMP_ABI_CALL(0x0053C1C0u, sub_0053C1C0); /* call 0x0053C1C0 */

loc_0053C975: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    MEM32(esi + 0x2C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0053C984; /* jne: not equal / not zero */

loc_0053C97D: ;
    MEM32(esi + 0x2C) = 0;

loc_0053C984: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x18) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053C990; /* je: equal / zero */

loc_0053C98C: ;
    MEM8(esi + 0x50) = 1;

loc_0053C990: ;
    ecx = esi;
    PUSH32(esp, 0x0053C997u); RECOMP_ABI_CALL(0x0053C4B0u, sub_0053C4B0); /* call 0x0053C4B0 */

loc_0053C997: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0053C936; /* je: equal / zero */

loc_0053C99D: ;
    PUSH32(esp, 0x0053C9A2u); RECOMP_ABI_CALL(0x0053C1C0u, sub_0053C1C0); /* call 0x0053C1C0 */

loc_0053C9A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053C9C3; /* jne: not equal / not zero */

loc_0053C9A7: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0053C9B0u); RECOMP_ABI_CALL(0x0053BB60u, sub_0053BB60); /* call 0x0053BB60 */

loc_0053C9B0: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0053C9B5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64D9C0);
    PUSH32(esp, 0x0053C9C0u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_0053C9C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0053C9C3: ;
    POP32(esp, ebx);

loc_0053C9C4: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053C9E0
 * Original: 0x0053C9E0 - 0x0053C9F7 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053C9E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053C9E0: ;
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x64DA20);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0053C9EEu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0053C9EE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6C389C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0053CA00
 * Original: 0x0053CA00 - 0x0053CA06 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053CA00(void)
{

loc_0053CA00: ;
    eax = MEM32(0x6C389C);
    esp += 4; return; /* ret */

}

/**
 * sub_0053CA10
 * Original: 0x0053CA10 - 0x0053CA84 (116 bytes, 42 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053CA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053CA10: ;
    ecx = MEM32(0x860220);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x62F12C);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0053CA2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053CA28u); } /* indirect call */
    }

loc_0053CA2B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053CA46; /* jne: not equal / not zero */

loc_0053CA31: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x64DA30);
    PUSH32(esp, 0x0053CA3Cu); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_0053CA3C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0053CA46: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0053CA4Eu); RECOMP_ABI_CALL(0x00617FF0u, sub_00617FF0); /* call 0x00617FF0 */

loc_0053CA4E: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0053CA5Bu); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_0053CA5B: ;
    ecx = esi;
    PUSH32(esp, 0x0053CA62u); RECOMP_ABI_CALL(0x00617FB0u, sub_00617FB0); /* call 0x00617FB0 */

loc_0053CA62: ;
    esi = MEM32(esp + 0x18);
    ebx = MEM32(esi * 4 + 0x86068C);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0053CA75u); RECOMP_ABI_CALL(0x00614AD0u, sub_00614AD0); /* call 0x00614AD0 */

loc_0053CA75: ;
    MEM32(esi * 4 + 0x86068C) = ebx;
    POP32(esp, ebx);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0053CA90
 * Original: 0x0053CA90 - 0x0053CB04 (116 bytes, 42 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053CA90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053CA90: ;
    ecx = MEM32(0x860220);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x62F12C);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0053CAABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053CAA8u); } /* indirect call */
    }

loc_0053CAAB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053CAC6; /* jne: not equal / not zero */

loc_0053CAB1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x64DA30);
    PUSH32(esp, 0x0053CABCu); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_0053CABC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0053CAC6: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0053CACEu); RECOMP_ABI_CALL(0x00617FF0u, sub_00617FF0); /* call 0x00617FF0 */

loc_0053CACE: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0053CADBu); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_0053CADB: ;
    ecx = esi;
    PUSH32(esp, 0x0053CAE2u); RECOMP_ABI_CALL(0x00617FB0u, sub_00617FB0); /* call 0x00617FB0 */

loc_0053CAE2: ;
    esi = MEM32(esp + 0x1C);
    ebx = MEM32(esi * 4 + 0x86068C);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0053CAF5u); RECOMP_ABI_CALL(0x00614AD0u, sub_00614AD0); /* call 0x00614AD0 */

loc_0053CAF5: ;
    MEM32(esi * 4 + 0x86068C) = ebx;
    POP32(esp, ebx);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0053CB10
 * Original: 0x0053CB10 - 0x0053CB2D (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053CB10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053CB10: ;
    eax = MEM32(0x6C389C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053CB22; /* je: equal / zero */

loc_0053CB19: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053CB1Fu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0053CB1F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0053CB22: ;
    MEM32(0x6C389C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0053CB30
 * Original: 0x0053CB30 - 0x0053CBA5 (117 bytes, 46 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053CB30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053CB30: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x84);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, edi);
    edi = eax + ebp;
    eax = MEM32(edi + 0x8F4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053CB7B; /* jle: less or equal (signed <=) */

loc_0053CB4F: ;
    ebx = edi + 0x8FC;

loc_0053CB55: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ebx);
    eax = MEM32(ebp + edx * 4 + 0x50);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053CB66u); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_0053CB66: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053CB9C; /* je: equal / zero */

loc_0053CB6D: ;
    eax = MEM32(edi + 0x8F4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053CB55; /* jl: less (signed <) */

loc_0053CB7B: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x64E1C8);
    PUSH32(esp, 0x0053CB8Fu); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_0053CB8F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0053CB9C: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0053CBB0
 * Original: 0x0053CBB0 - 0x0053CC02 (82 bytes, 36 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053CBB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053CBB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esi) = 0;
    eax = MEM32(edi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053CBF2; /* jle: less or equal (signed <=) */

loc_0053CBC6: ;
    ebx = MEM32(esp + 0x10);
    /* nop */

loc_0053CBD0: ;
    eax = MEM32(esi);
    ecx = MEM32(edi + eax * 4 + 0x50);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0053CBDDu); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_0053CBDD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053CBFA; /* je: equal / zero */

loc_0053CBE4: ;
    ecx = MEM32(esi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = ecx;
    eax = MEM32(edi + 0x4C);
    edx = ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053CBD0; /* jl: less (signed <) */

loc_0053CBF2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0053CBFA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0053CC10
 * Original: 0x0053CC10 - 0x0053CCC3 (179 bytes, 82 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053CC10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053CC10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(ecx, MEM8(0x6C38A0));
    ebp = MEM32(edi + 8);
    eax = ZX8(LO8(ecx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebp));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebp)); }
    eax = MEM32(esp + 0x14);
    esi = MEM32(edi + edx * 4 + 0xC);
    /* nop */

loc_0053CC30: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0053CC54; /* jne: not equal / not zero */

loc_0053CC38: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0053CC50; /* je: equal / zero */

loc_0053CC3C: ;
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0053CC54; /* jne: not equal / not zero */

loc_0053CC46: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0053CC30; /* jne: not equal / not zero */

loc_0053CC50: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0053CC59;

loc_0053CC54: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0053CC59: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0053CC66; /* jne: not equal / not zero */

loc_0053CC5D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0053CC66: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0053CCAE; /* jle: less or equal (signed <=) */

loc_0053CC6C: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_0053CC70: ;
    esi = MEM32(edi + edx * 4 + 0xC);
    edx = MEM32(esp + 0x14);

loc_0053CC78: ;
    SET_LO8(ecx, MEM8(edx));
    SET_LO8(ebx, LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0053CC9C; /* jne: not equal / not zero */

loc_0053CC80: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0053CC98; /* je: equal / zero */

loc_0053CC84: ;
    SET_LO8(ecx, MEM8(edx + 1));
    SET_LO8(ebx, LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0053CC9C; /* jne: not equal / not zero */

loc_0053CC8E: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(2)) >> 32) & 1);
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0053CC78; /* jne: not equal / not zero */

loc_0053CC98: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0053CCA1;

loc_0053CC9C: ;
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0053CCA1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0053CCB7; /* je: equal / zero */

loc_0053CCA5: ;
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edx = ZX8(LO8(eax));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0053CC70; /* jl: less (signed <) */

loc_0053CCAE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0xFF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0053CCB7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(0x6C38A0) = LO8(eax);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053CCD0
 * Original: 0x0053CCD0 - 0x0053CCEB (27 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053CCD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053CCD0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1278);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x6633B0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6633B0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0053CCEAu); RECOMP_ABI_CALL(0x0053CC10u, sub_0053CC10); /* call 0x0053CC10 */

loc_0053CCEA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0053CCF0
 * Original: 0x0053CCF0 - 0x0053CFAA (698 bytes, 236 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053CCF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053CCF0: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0xFA4) = ebx;
    eax = edi + 0x1098;
    ecx = 0x3C;
    edi = edi;

loc_0053CD10: ;
    MEM32(eax + -240) = ebx;
    MEM32(eax) = ebx;
    MEM32(eax + 0xF0) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0053CD10; /* jne: not equal / not zero */

loc_0053CD24: ;
    esi = MEM32(esp + 0x9C);
    PUSH32(esp, 0x64E2C0);
    ecx = esi;
    PUSH32(esp, 0x0053CD37u); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_0053CD37: ;
    PUSH32(esp, 0x63E350);
    ecx = esi;
    PUSH32(esp, 0x0053CD43u); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_0053CD43: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64E2B4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x0053CD4Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053CD4Cu); } /* indirect call */
    }

loc_0053CD4F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053CF92; /* jle: less or equal (signed <=) */

loc_0053CD57: ;
    PUSH32(esp, ebp);
    ebp = eax;
    /* nop */

loc_0053CD60: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0053CD71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053CD6Eu); } /* indirect call */
    }

loc_0053CD71: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64E2A8);
    PUSH32(esp, 0x0053CD80u); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_0053CD80: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053CDD6; /* jne: not equal / not zero */

loc_0053CD87: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0053CD98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053CD95u); } /* indirect call */
    }

loc_0053CD98: ;
    eax = esp + 0x1C;
    edx = eax + 1;
    /* nop */

loc_0053CDA0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053CDA0; /* jne: not equal / not zero */

loc_0053CDA7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x2AD);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x64E29C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053CDBAu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0053CDBA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xFA4) = eax;
    ecx = esp + 0x1C;

loc_0053CDC7: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053CDC7; /* jne: not equal / not zero */

loc_0053CDD1: ;
    goto loc_0053CF8A;

loc_0053CDD6: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64E290);
    PUSH32(esp, 0x0053CDE5u); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_0053CDE5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = esp + 0x1C;
    if (CMP_NE(_fa, _fb)) goto loc_0053CE61; /* jne: not equal / not zero */

loc_0053CDF0: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0053CDFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053CDFAu); } /* indirect call */
    }

loc_0053CDFD: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0053CE0Eu); RECOMP_ABI_CALL(0x0053CBB0u, sub_0053CBB0); /* call 0x0053CBB0 */

loc_0053CE0E: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0053CE1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053CE1Cu); } /* indirect call */
    }

loc_0053CE1F: ;
    eax = esp + 0x1C;
    edx = eax + 1;

loc_0053CE26: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053CE26; /* jne: not equal / not zero */

loc_0053CE2D: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x2BA);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x64E29C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053CE40u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0053CE40: ;
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + edx * 4 + 0xFA8) = eax;
    ecx = esp + 0x1C;

loc_0053CE52: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053CE52; /* jne: not equal / not zero */

loc_0053CE5C: ;
    goto loc_0053CF8A;

loc_0053CE61: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64E284);
    PUSH32(esp, 0x0053CE6Cu); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_0053CE6C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = esp + 0x1C;
    if (CMP_NE(_fa, _fb)) goto loc_0053CEEF; /* jne: not equal / not zero */

loc_0053CE77: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0053CE84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053CE81u); } /* indirect call */
    }

loc_0053CE84: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0053CE95u); RECOMP_ABI_CALL(0x0053CBB0u, sub_0053CBB0); /* call 0x0053CBB0 */

loc_0053CE95: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0053CEA6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053CEA3u); } /* indirect call */
    }

loc_0053CEA6: ;
    eax = esp + 0x1C;
    edx = eax + 1;
    /* nop */

loc_0053CEB0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053CEB0; /* jne: not equal / not zero */

loc_0053CEB7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x2C7);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x64E29C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053CECAu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0053CECA: ;
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + edx * 4 + 0x1098) = eax;
    ecx = esp + 0x1C;
    /* nop */

loc_0053CEE0: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053CEE0; /* jne: not equal / not zero */

loc_0053CEEA: ;
    goto loc_0053CF8A;

loc_0053CEEF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64E274);
    PUSH32(esp, 0x0053CEFAu); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_0053CEFA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = esp + 0x1C;
    if (CMP_NE(_fa, _fb)) goto loc_0053CF7C; /* jne: not equal / not zero */

loc_0053CF05: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0053CF12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053CF0Fu); } /* indirect call */
    }

loc_0053CF12: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0053CF23u); RECOMP_ABI_CALL(0x0053CBB0u, sub_0053CBB0); /* call 0x0053CBB0 */

loc_0053CF23: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0053CF34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053CF31u); } /* indirect call */
    }

loc_0053CF34: ;
    eax = esp + 0x1C;
    edx = eax + 1;
    goto loc_0053CF40;

    /* nop */

loc_0053CF40: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053CF40; /* jne: not equal / not zero */

loc_0053CF47: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x2D4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x64E29C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053CF5Au); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0053CF5A: ;
    edx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + edx * 4 + 0x1188) = eax;
    ecx = esp + 0x1C;
    /* nop */

loc_0053CF70: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053CF70; /* jne: not equal / not zero */

loc_0053CF7A: ;
    goto loc_0053CF8A;

loc_0053CF7C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64E210);
    PUSH32(esp, 0x0053CF87u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_0053CF87: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0053CF8A: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0053CD60; /* jne: not equal / not zero */

loc_0053CF91: ;
    POP32(esp, ebp);

loc_0053CF92: ;
    PUSH32(esp, 0x63E344);
    ecx = esi;
    PUSH32(esp, 0x0053CF9Eu); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_0053CF9E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053CFB0
 * Original: 0x0053CFB0 - 0x0053CFF3 (67 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053CFB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053CFB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0053CFC0;

    /* nop */

loc_0053CFC0: ;
    eax = MEM32(esi * 4 + 0x663174);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053CFCEu); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_0053CFCE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053CFEE; /* je: equal / zero */

loc_0053CFD5: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xE (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053CFC0; /* jl: less (signed <) */

loc_0053CFDB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x64E2C8);
    PUSH32(esp, 0x0053CFE6u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_0053CFE6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0053CFEE: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0053D000
 * Original: 0x0053D000 - 0x0053D043 (67 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053D000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053D000: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0053D010;

    /* nop */

loc_0053D010: ;
    eax = MEM32(esi * 4 + 0x6631F0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053D01Eu); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_0053D01E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053D03E; /* je: equal / zero */

loc_0053D025: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053D010; /* jl: less (signed <) */

loc_0053D02B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x64E2EC);
    PUSH32(esp, 0x0053D036u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_0053D036: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0053D03E: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0053D050
 * Original: 0x0053D050 - 0x0053D092 (66 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053D050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053D050: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0053D060;

    /* nop */

loc_0053D060: ;
    eax = MEM32(esi * 4 + 0x66327C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053D06Eu); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_0053D06E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053D08D; /* je: equal / zero */

loc_0053D075: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053D060; /* jl: less (signed <) */

loc_0053D07B: ;
    PUSH32(esp, 0x64E310);
    PUSH32(esp, 0x0053D085u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_0053D085: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0053D08D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0053D0A0
 * Original: 0x0053D0A0 - 0x0053D0E2 (66 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053D0A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053D0A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0053D0B0;

    /* nop */

loc_0053D0B0: ;
    eax = MEM32(esi * 4 + 0x663270);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053D0BEu); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_0053D0BE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053D0DD; /* je: equal / zero */

loc_0053D0C5: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053D0B0; /* jl: less (signed <) */

loc_0053D0CB: ;
    PUSH32(esp, 0x64E334);
    PUSH32(esp, 0x0053D0D5u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_0053D0D5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0053D0DD: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0053D0F0
 * Original: 0x0053D0F0 - 0x0053D132 (66 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053D0F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053D0F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0053D100;

    /* nop */

loc_0053D100: ;
    eax = MEM32(esi * 4 + 0x663300);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053D10Eu); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_0053D10E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053D12D; /* je: equal / zero */

loc_0053D115: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xE (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053D100; /* jl: less (signed <) */

loc_0053D11B: ;
    PUSH32(esp, 0x64E354);
    PUSH32(esp, 0x0053D125u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_0053D125: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0053D12D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0053D140
 * Original: 0x0053D140 - 0x0053D181 (65 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053D140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053D140: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0x6633B0;

loc_0053D153: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0053D15Cu); RECOMP_ABI_CALL(0x0053CBB0u, sub_0053CBB0); /* call 0x0053CBB0 */

loc_0053D15C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053D174; /* jne: not equal / not zero */

loc_0053D160: ;
    _fb = (uint32_t)(0x1278) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1278;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x673640) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x673640 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053D153; /* jl: less (signed <) */

loc_0053D16F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0053D174: ;
    eax = MEM32(esp + 0x18);
    MEM32(eax) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0053D190
 * Original: 0x0053D190 - 0x0053D1F4 (100 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053D190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053D190: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1278);
    ebx = eax + 0x6633FC;
    MEM32(esi) = 0;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053D1E6; /* jle: less or equal (signed <=) */

loc_0053D1B5: ;
    ebp = MEM32(esp + 0x18);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x49E);
    /* nop */

loc_0053D1C0: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx * 4 + 0x663400);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0053D1D2u); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_0053D1D2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053D1ED; /* je: equal / zero */

loc_0053D1D9: ;
    edx = MEM32(esi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = edx;
    ecx = MEM32(ebx);
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053D1C0; /* jl: less (signed <) */

loc_0053D1E6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0053D1ED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0053D200
 * Original: 0x0053D200 - 0x0053D264 (100 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053D200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053D200: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1278);
    ebx = eax + 0x663C70;
    MEM32(esi) = 0;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053D256; /* jle: less or equal (signed <=) */

loc_0053D225: ;
    ebp = MEM32(esp + 0x18);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x49E);
    /* nop */

loc_0053D230: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx * 4 + 0x663C74);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0053D242u); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_0053D242: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053D25D; /* je: equal / zero */

loc_0053D249: ;
    edx = MEM32(esi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = edx;
    ecx = MEM32(ebx);
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053D230; /* jl: less (signed <) */

loc_0053D256: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0053D25D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0053D270
 * Original: 0x0053D270 - 0x0053D2F8 (136 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053D270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053D270: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x1278);
    PUSH32(esp, ebp);
    MEM32(ecx) = 0;
    eax = MEM32(ebx + 0x663C70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0053D2EA; /* jle: less or equal (signed <=) */

loc_0053D292: ;
    edi = MEM32(esp + 0x18);

loc_0053D296: ;
    ebp = MEM32(ecx);
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x84);
    edx = MEM32(eax + ebx + 0x663CA8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    eax = eax + ebx + 0x663CA0;
    if (CMP_EQ(_fa, _fb)) goto loc_0053D2F1; /* je: equal / zero */

loc_0053D2B2: ;
    esi = MEM32(eax + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053D2DB; /* jle: less or equal (signed <=) */

loc_0053D2BB: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi;

loc_0053D2C0: ;
    _fa = (uint32_t)(MEM32(eax + -60)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -60), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053D2F1; /* je: equal / zero */

loc_0053D2C5: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053D2CF; /* jl: less (signed <) */

loc_0053D2CB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053D2F1; /* je: equal / zero */

loc_0053D2CF: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053D2C0; /* jl: less (signed <) */

loc_0053D2D7: ;
    ecx = MEM32(esp + 0x1C);

loc_0053D2DB: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = ebp;
    eax = MEM32(ebx + 0x663C70);
    edx = ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053D296; /* jl: less (signed <) */

loc_0053D2EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0053D2F1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0053D300
 * Original: 0x0053D300 - 0x0053D351 (81 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053D300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053D300: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 0xC);
    ecx = edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1278);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx + 0x664250;
    MEM32(eax) = 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0053D345; /* jle: less or equal (signed <=) */

loc_0053D324: ;
    edi = MEM32(esp + 0x14);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x49E);
    edi = edi;

loc_0053D330: ;
    ecx = MEM32(eax);
    ebx = edx + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx * 4 + 0x664258)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx * 4 + 0x664258) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053D34B; /* je: equal / zero */

loc_0053D33E: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053D330; /* jl: less (signed <) */

loc_0053D345: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0053D34B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0053D360
 * Original: 0x0053D360 - 0x0053D3B1 (81 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053D360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053D360: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 0xC);
    ecx = edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1278);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx + 0x6642D4;
    MEM32(eax) = 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0053D3A5; /* jle: less or equal (signed <=) */

loc_0053D384: ;
    edi = MEM32(esp + 0x14);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x49E);
    edi = edi;

loc_0053D390: ;
    ecx = MEM32(eax);
    ebx = edx + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx * 4 + 0x6642DC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx * 4 + 0x6642DC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053D3AB; /* je: equal / zero */

loc_0053D39E: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053D390; /* jl: less (signed <) */

loc_0053D3A5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0053D3AB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0053D3C0
 * Original: 0x0053D3C0 - 0x0053D42B (107 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053D3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053D3C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0053D3D7u); RECOMP_ABI_CALL(0x0053D270u, sub_0053D270); /* call 0x0053D270 */

loc_0053D3D7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053D3E2; /* jne: not equal / not zero */

loc_0053D3DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0053D3E2: ;
    ecx = MEM32(esp + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1278);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x84);
    esi = esi + ecx + 0x663CA0;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053D411; /* jle: less or equal (signed <=) */

loc_0053D402: ;
    edx = esi + 0xC;

loc_0053D405: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053D417; /* je: equal / zero */

loc_0053D409: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053D405; /* jl: less (signed <) */

loc_0053D411: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0053D417: ;
    eax = MEM32(esi + eax * 4 + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053D411; /* jl: less (signed <) */

loc_0053D41F: ;
    edx = MEM32(esp + 0x18);
    POP32(esp, edi);
    MEM32(edx) = eax;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0053D430
 * Original: 0x0053D430 - 0x0053D464 (52 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053D430(void)
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

loc_0053D430: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0053D45D; /* jne: not equal / not zero */

loc_0053D441: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x630308)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x630308] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0053D45D; /* jp: parity */

loc_0053D452: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x636EB0)); /* fmul dword ptr [0x636eb0] */
    esp += 4; return; /* ret */

loc_0053D45D: ;
    fp_push(MEMF(0x62D57C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0053D470
 * Original: 0x0053D470 - 0x0053D4A3 (51 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053D470(void)
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

loc_0053D470: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0053D49C; /* ja: above (unsigned >) */

loc_0053D479: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x53D4A4); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0053D480u) goto loc_0053D480;
    if (_jt == 0x0053D487u) goto loc_0053D487;
    if (_jt == 0x0053D48Eu) goto loc_0053D48E;
    if (_jt == 0x0053D495u) goto loc_0053D495;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0053D480: ;
    fp_push(MEMF(0x65E384)); /* fld float */
    esp += 4; return; /* ret */

loc_0053D487: ;
    fp_push(MEMF(0x636EB0)); /* fld float */
    esp += 4; return; /* ret */

loc_0053D48E: ;
    fp_push(MEMF(0x63D408)); /* fld float */
    esp += 4; return; /* ret */

loc_0053D495: ;
    fp_push(MEMF(0x6443B4)); /* fld float */
    esp += 4; return; /* ret */

loc_0053D49C: ;
    fp_push(MEMF(0x630320)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0053D4C0
 * Original: 0x0053D4C0 - 0x0053D546 (134 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053D4C0(void)
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

loc_0053D4C0: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D370)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d370] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0053D4E8; /* jne: not equal / not zero */

loc_0053D4D1: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x64E384);
    PUSH32(esp, 0x0053D4E5u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_0053D4E5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0053D4E8: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0053D4FF; /* jp: parity */

loc_0053D4F9: ;
    eax = 4;
    esp += 4; return; /* ret */

loc_0053D4FF: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x64E380)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x64e380] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0053D513; /* jp: parity */

loc_0053D510: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0053D513: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x64E37C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x64e37c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0053D52A; /* jp: parity */

loc_0053D524: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0053D52A: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x64E378)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x64e378] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    eax = 2;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0053D545; /* jnp: not parity */

loc_0053D540: ;
    eax = 3;

loc_0053D545: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0053D550
 * Original: 0x0053D550 - 0x0053D583 (51 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053D550(void)
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

loc_0053D550: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0053D57C; /* ja: above (unsigned >) */

loc_0053D559: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x53D584); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0053D560u) goto loc_0053D560;
    if (_jt == 0x0053D567u) goto loc_0053D567;
    if (_jt == 0x0053D56Eu) goto loc_0053D56E;
    if (_jt == 0x0053D575u) goto loc_0053D575;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0053D560: ;
    fp_push(MEMF(0x65E384)); /* fld float */
    esp += 4; return; /* ret */

loc_0053D567: ;
    fp_push(MEMF(0x6307D4)); /* fld float */
    esp += 4; return; /* ret */

loc_0053D56E: ;
    fp_push(MEMF(0x62D370)); /* fld float */
    esp += 4; return; /* ret */

loc_0053D575: ;
    fp_push(MEMF(0x639994)); /* fld float */
    esp += 4; return; /* ret */

loc_0053D57C: ;
    fp_push(MEMF(0x630320)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0053D5A0
 * Original: 0x0053D5A0 - 0x0053D5FE (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053D5A0(void)
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

loc_0053D5A0: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0053D5B7; /* jp: parity */

loc_0053D5B1: ;
    eax = 4;
    esp += 4; return; /* ret */

loc_0053D5B7: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0053D5CB; /* jp: parity */

loc_0053D5C8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0053D5CB: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D370)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d370] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0053D5E2; /* jp: parity */

loc_0053D5DC: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0053D5E2: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x639994)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x639994] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    eax = 2;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0053D5FD; /* jnp: not parity */

loc_0053D5F8: ;
    eax = 3;

loc_0053D5FD: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0053D600
 * Original: 0x0053D600 - 0x0053D614 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053D600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053D600: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053D611; /* jl: less (signed <) */

loc_0053D609: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1F (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0053D611; /* jg: greater (signed >) */

loc_0053D60E: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0053D611: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0053D620
 * Original: 0x0053D620 - 0x0053D639 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053D620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053D620: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053D636; /* je: equal / zero */

loc_0053D629: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053D636; /* je: equal / zero */

loc_0053D62E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053D636; /* je: equal / zero */

loc_0053D633: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0053D636: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0053D640
 * Original: 0x0053D640 - 0x0053D656 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0053D640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053D640: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053D653; /* jl: less (signed <) */

loc_0053D648: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0053D653; /* jg: greater (signed >) */

loc_0053D64D: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0053D653: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0053D660
 * Original: 0x0053D660 - 0x0053D677 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0053D660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053D660: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053D674; /* jl: less (signed <) */

loc_0053D669: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0053D674; /* jg: greater (signed >) */

loc_0053D66E: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0053D674: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0053D680
 * Original: 0x0053D680 - 0x0053D697 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0053D680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053D680: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x13 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053D694; /* jl: less (signed <) */

loc_0053D689: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0053D694; /* jg: greater (signed >) */

loc_0053D68E: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0053D694: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0053D6A0
 * Original: 0x0053D6A0 - 0x0053D6B4 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053D6A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053D6A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053D6B1; /* jl: less (signed <) */

loc_0053D6A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0053D6B1; /* jg: greater (signed >) */

loc_0053D6AE: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0053D6B1: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0053D6C0
 * Original: 0x0053D6C0 - 0x0053D6D4 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053D6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053D6C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053D6D1; /* jl: less (signed <) */

loc_0053D6C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0053D6D1; /* jg: greater (signed >) */

loc_0053D6CE: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0053D6D1: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0053D6E0
 * Original: 0x0053D6E0 - 0x0053D6F4 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053D6E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053D6E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053D6F1; /* jl: less (signed <) */

loc_0053D6E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0053D6F1; /* jg: greater (signed >) */

loc_0053D6EE: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0053D6F1: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0053D700
 * Original: 0x0053D700 - 0x0053D714 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053D700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053D700: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053D711; /* jl: less (signed <) */

loc_0053D709: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0053D711; /* jg: greater (signed >) */

loc_0053D70E: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0053D711: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0053D720
 * Original: 0x0053D720 - 0x0053DC25 (1285 bytes, 380 insns)
 * Category: game_vehicle
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053D720(void)
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

loc_0053D720: ;
    _fb = (uint32_t)(0x130) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x130));
    esp = esp - 0x130;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x138);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x4C) = esi;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64E3F8);
    ecx = ebx;
    MEM32(esp + 0x1C) = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x0053D747u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053D744u); } /* indirect call */
    }

loc_0053D747: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 0x8C0) = eax;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x34) = esi;
    MEM32(esp + 0x10) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_0053DC13; /* jle: less or equal (signed <=) */

loc_0053D763: ;
    esi = ebp + 0x8F8;
    ecx = ebp + 0x8C4;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x148);
    MEM32(esp + 0x20) = 0x24E;
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x30) = ecx;
    goto loc_0053D790;

    /* nop */

loc_0053D790: ;
    PUSH32(esp, 0x64E3F0);
    ecx = ebx;
    PUSH32(esp, 0x0053D79Cu); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_0053D79C: ;
    PUSH32(esp, 0x63E350);
    ecx = ebx;
    PUSH32(esp, 0x0053D7A8u); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_0053D7A8: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x64E3E8);
    ecx = ebx;
    MEM32(esi + -8) = eax;
    MEM32(esi + -4) = eax;
    MEM32(esi) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0053D7C2u); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_0053D7C2: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0053D7D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053D7D0u); } /* indirect call */
    }

loc_0053D7D3: ;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x635D54);
    PUSH32(esp, 0x0053D7E2u); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_0053D7E2: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = esp + 0x48;
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    PUSH32(esp, edx);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x64E3D8);
    MEM8(esp + 0x23) = LO8(eax);
    PUSH32(esp, 0x0053D7FBu); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_0053D7FB: ;
    SET_LO8(ecx, MEM8(esp + 0x23));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0053D95E; /* jne: not equal / not zero */

loc_0053D810: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0053D95E; /* jne: not equal / not zero */

loc_0053D818: ;
    eax = esp + 0x40;
    MEM8(esp + 0x12) = 1;
    edx = eax + 1;

loc_0053D824: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0053D824; /* jne: not equal / not zero */

loc_0053D82B: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x207);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x64E29C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053D83Eu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0053D83E: ;
    esi = eax;
    edx = esp + 0x4C;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x40;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(edx));
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0053D850: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0053D850; /* jne: not equal / not zero */

loc_0053D85A: ;
    ecx = MEM32(esp + 0x30);
    esi = MEM32(esp + 0x18);
    MEM32(ecx) = eax;

loc_0053D864: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64E3CC);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0053D870u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053D86Du); } /* indirect call */
    }

loc_0053D870: ;
    edx = MEM32(ebp + 0x4C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(eax)) >> 32) & 1);
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + 0x4C) = edx;
    MEM32(esp + 0x34) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0053DBA8; /* jle: less or equal (signed <=) */

loc_0053D888: ;
    esi = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x14);
    ecx = ebp + 0xEE4;
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xA)) >> 32) & 1);
    esi = esi + 0xA;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x28) = ecx;
    if (5) _cf = (int)(((esi) >> (32 - (5))) & 1);
    esi = esi << 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ebp + edx * 4 + 0x50;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ebp)) >> 32) & 1);
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x3C) = eax;
    edi = edi;

loc_0053D8B0: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0053D8C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053D8BEu); } /* indirect call */
    }

loc_0053D8C1: ;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0053D8CBu); RECOMP_ABI_CALL(0x0053D0F0u, sub_0053D0F0); /* call 0x0053D0F0 */

loc_0053D8CB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0053D8E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053D8DEu); } /* indirect call */
    }

loc_0053D8E1: ;
    eax = esp + 0x40;
    edx = eax + 1;

loc_0053D8E8: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0053D8E8; /* jne: not equal / not zero */

loc_0053D8EF: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x21A);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x64E29C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053D902u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0053D902: ;
    ebp = eax;
    edx = esp + 0x4C;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x40;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebp) < (uint32_t)(edx));
    ebp = ebp - edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0053D911: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(ecx + ebp) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0053D911; /* jne: not equal / not zero */

loc_0053D91B: ;
    ecx = MEM32(esp + 0x2C);
    MEM32(ecx) = eax;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(esi + 0xD) = LO8(edx);
    MEM8(esi + 0xE) = 1;
    MEM32(esi + 4) = 0x3C23D70A;
    MEM32(esi + 8) = 0x3DCCCCCD;
    MEM8(esi + 0xC) = LO8(edx);
    MEM8(esi + 0xF) = LO8(edx);
    if (CMP_NE(_fa, _fb)) goto loc_0053D968; /* jne: not equal / not zero */

loc_0053D943: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0053DA2A; /* je: equal / zero */

loc_0053D94F: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    MEM32(edx) = eax;
    goto loc_0053DA2A;

loc_0053D95E: ;
    MEM8(esp + 0x12) = 0;
    goto loc_0053D864;

loc_0053D968: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0053D9AD; /* jne: not equal / not zero */

loc_0053D96D: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0053D97Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053D97Bu); } /* indirect call */
    }

loc_0053D97E: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0053DA2A; /* je: equal / zero */

loc_0053D98A: ;
    edx = MEM32(esp + 0x24);
    ebp = MEM32(esp + 0x1C);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0053D99Fu); RECOMP_ABI_CALL(0x0053CB30u, sub_0053CB30); /* call 0x0053CB30 */

loc_0053D99F: ;
    _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(esp + 0x20))) >> 32) & 1);
    eax = eax + MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x14);
    MEM32(ebp + eax * 4) = ecx;
    goto loc_0053DA2A;

loc_0053D9AD: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0053D9EA; /* je: equal / zero */

loc_0053D9B5: ;
    eax = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    ebp = MEM32(esp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(eax)) >> 32) & 1);
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + edx * 4 + -60) = ebp;
    edx = MEM32(esp + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(eax)) >> 32) & 1);
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + edx * 4) = 0xFFFFFFFFu;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx + -4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + -4) = edx;
    MEM32(esp + 0x34) = eax;
    goto loc_0053DA2A;

loc_0053D9EA: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(esp + 0x28);
    if (CMP_EQ(_fa, _fb)) goto loc_0053DA0F; /* je: equal / zero */

loc_0053D9F6: ;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + -60) = ecx;
    MEM32(eax) = 0xFFFFFFFFu;
    eax = MEM32(esp + 0x1C);
    MEM32(eax + 0xEA0) = MEM32(eax + 0xEA0) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xEA0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0053DA2A;

loc_0053DA0F: ;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 0x48) = edx;
    MEM32(eax + 0x84) = 0xFFFFFFFFu;
    eax = MEM32(esp + 0x1C);
    MEM32(eax + 0xF24) = MEM32(eax + 0xF24) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xF24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0053DA2A: ;
    SET_LO8(eax, MEM8(esp + 0x14C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0053DB6C; /* je: equal / zero */

loc_0053DA39: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0053DB6C; /* je: equal / zero */

loc_0053DA42: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    ecx = esp + 0xC4;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0053DA56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053DA53u); } /* indirect call */
    }

loc_0053DA56: ;
    PUSH32(esp, 0x63E350);
    ecx = edi;
    PUSH32(esp, 0x0053DA62u); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_0053DA62: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    eax = esp + 0xC4;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0053DA76u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053DA73u); } /* indirect call */
    }

loc_0053DA76: ;
    ecx = esp + 0xC0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0053DA83u); RECOMP_ABI_CALL(0x0053D0A0u, sub_0053D0A0); /* call 0x0053D0A0 */

loc_0053DA83: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0xE) = LO8(eax);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    eax = esp + 0xC4;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0053DA9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053DA9Au); } /* indirect call */
    }

loc_0053DA9D: ;
    ecx = esp + 0xC0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0053DAAAu); RECOMP_ABI_CALL(0x0053D050u, sub_0053D050); /* call 0x0053D050 */

loc_0053DAAA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0xD) = LO8(eax);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    eax = esp + 0xC4;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0053DAC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053DAC1u); } /* indirect call */
    }

loc_0053DAC4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x64E3BC);
    ecx = edi;
    PUSH32(esp, 0x0053DAD2u); RECOMP_ABI_CALL(0x00615580u, sub_00615580); /* call 0x00615580 */

loc_0053DAD2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0053DB1E; /* je: equal / zero */

loc_0053DAD6: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    eax = esp + 0xC4;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0053DAEAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053DAE7u); } /* indirect call */
    }

loc_0053DAEA: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0053DAF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053DAEEu); } /* indirect call */
    }

loc_0053DAF1: ;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0053DAFAu); RECOMP_ABI_CALL(0x0053D430u, sub_0053D430); /* call 0x0053D430 */

loc_0053DAFA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    ecx = esp + 0xC4;
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0053DB14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053DB11u); } /* indirect call */
    }

loc_0053DB14: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0053DB1Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053DB18u); } /* indirect call */
    }

loc_0053DB1B: ;
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_0053DB1E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x64E3AC);
    ecx = edi;
    PUSH32(esp, 0x0053DB2Cu); RECOMP_ABI_CALL(0x00615580u, sub_00615580); /* call 0x00615580 */

loc_0053DB2C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0053DB59; /* je: equal / zero */

loc_0053DB30: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    ecx = esp + 0xC4;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0053DB44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053DB41u); } /* indirect call */
    }

loc_0053DB44: ;
    edx = esp + 0xC0;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0053DB51u); RECOMP_ABI_CALL(0x0053D000u, sub_0053D000); /* call 0x0053D000 */

loc_0053DB51: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C) = eax;
    goto loc_0053DB60;

loc_0053DB59: ;
    MEM32(esi + 0x1C) = 0x21;

loc_0053DB60: ;
    PUSH32(esp, 0x63E344);
    ecx = edi;
    PUSH32(esp, 0x0053DB6Cu); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_0053DB6C: ;
    eax = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x28);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    eax = 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(eax)) >> 32) & 1);
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x3C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x20)) >> 32) & 1);
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x2C) = ebp;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x3C) = eax;
    if ((_fa != 0)) goto loc_0053D8B0; /* jne: not equal / not zero */

loc_0053DBA0: ;
    ebp = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x18);

loc_0053DBA8: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0053DBD9; /* je: equal / zero */

loc_0053DBB0: ;
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x30);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(4)) >> 32) & 1);
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x84)) >> 32) & 1);
    esi = esi + 0x84;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x21) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x21)) >> 32) & 1);
    eax = eax + 0x21;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x20) = eax;

loc_0053DBD9: ;
    PUSH32(esp, 0x63E344);
    ecx = ebx;
    PUSH32(esp, 0x0053DBE5u); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_0053DBE5: ;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(ebp + 0x8C0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x38) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0053D790; /* jl: less (signed <) */

loc_0053DBFC: ;
    eax = MEM32(esp + 0x24);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x8C0) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x130) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x130)) >> 32) & 1);
    esp = esp + 0x130;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0053DC13: ;
    POP32(esp, esi);
    MEM32(ebp + 0x8C0) = ecx;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x130) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x130)) >> 32) & 1);
    esp = esp + 0x130;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0053DC30
 * Original: 0x0053DC30 - 0x0053DC65 (53 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053DC30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053DC30: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0053DC40: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0053DC48u); RECOMP_ABI_CALL(0x0053D200u, sub_0053D200); /* call 0x0053D200 */

loc_0053DC48: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053DC59; /* jne: not equal / not zero */

loc_0053DC4F: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xE (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053DC40; /* jl: less (signed <) */

loc_0053DC55: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0053DC59: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(eax) = esi;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0053DC70
 * Original: 0x0053DC70 - 0x0053DC8F (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0053DC70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053DC70: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0053DC7Au); RECOMP_ABI_CALL(0x0053D600u, sub_0053D600); /* call 0x0053D600 */

loc_0053DC7A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053DC8C; /* jne: not equal / not zero */

loc_0053DC81: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053DC8C; /* je: equal / zero */

loc_0053DC86: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0053DC8C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0053DC90
 * Original: 0x0053DC90 - 0x0053DD27 (151 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053DC90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053DC90: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x94);
    PUSH32(esp, 0x62D830);
    ecx = edi;
    PUSH32(esp, 0x0053DCADu); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_0053DCAD: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0053DCBEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053DCBBu); } /* indirect call */
    }

loc_0053DCBE: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esi = 0x6633B0;
    ebp = 0x663174;
    /* nop */

loc_0053DCD0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053DD1C; /* jne: not equal / not zero */

loc_0053DCD4: ;
    edx = MEM32(ebp);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053DCE2u); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_0053DCE2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053DD0B; /* jne: not equal / not zero */

loc_0053DCE9: ;
    ecx = MEM32(esp + 0x9C);
    edx = MEM32(esp + 0x98);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0053DD01u); RECOMP_ABI_CALL(0x0053D720u, sub_0053D720); /* call 0x0053D720 */

loc_0053DD01: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0053DD09u); RECOMP_ABI_CALL(0x0053CCF0u, sub_0053CCF0); /* call 0x0053CCF0 */

loc_0053DD09: ;
    SET_LO8(ebx, 1);

loc_0053DD0B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1278) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1278;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6631AC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x6631AC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053DCD0; /* jl: less (signed <) */

loc_0053DD1C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0053DD30
 * Original: 0x0053DD30 - 0x0053DE52 (290 bytes, 85 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053DD30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053DD30: ;
    _fb = (uint32_t)(0x144) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x144;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x860220);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x154);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x64E440);
    PUSH32(esp, esi);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x647D44);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x24) = LO8(ebx);
    PUSH32(esp, 0x0053DD63u); RECOMP_ABI_CALL(0x006137C0u, sub_006137C0); /* call 0x006137C0 */

loc_0053DD63: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053DD91; /* jne: not equal / not zero */

loc_0053DD69: ;
    SET_LO8(eax, MEM8(esp + 0x15C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053DE47; /* je: equal / zero */

loc_0053DD78: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x64E414);
    PUSH32(esp, 0x0053DD83u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_0053DD83: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x144) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x144;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0053DD91: ;
    ecx = MEM32(0x860220);
    PUSH32(esp, 0x64E40C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x647D44);
    PUSH32(esp, 0x0053DDA7u); RECOMP_ABI_CALL(0x00613880u, sub_00613880); /* call 0x00613880 */

loc_0053DDA7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053DDD1; /* je: equal / zero */

loc_0053DDAB: ;
    ecx = MEM32(0x860220);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x64E40C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x647D44);
    PUSH32(esp, 0x0053DDC5u); RECOMP_ABI_CALL(0x006137C0u, sub_006137C0); /* call 0x006137C0 */

loc_0053DDC5: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053DDD1; /* je: equal / zero */

loc_0053DDCB: ;
    SET_LO8(ebx, 1);
    MEM8(esp + 0x10) = LO8(ebx);

loc_0053DDD1: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = esp + 0xBC;
    MEM32(esp + 0xBC) = 0x62FF40;
    MEM32(esp + 0x158) = 0;
    PUSH32(esp, 0x0053DDF5u); RECOMP_ABI_CALL(0x00615130u, sub_00615130); /* call 0x00615130 */

loc_0053DDF5: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM32(esp + 0x14) = 0x62FF40;
    MEM32(esp + 0xB0) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0053DE1B; /* je: equal / zero */

loc_0053DE0C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x64E404);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0053DE1Bu); RECOMP_ABI_CALL(0x00615130u, sub_00615130); /* call 0x00615130 */

loc_0053DE1B: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0xBC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0053DE32u); RECOMP_ABI_CALL(0x0053DC90u, sub_0053DC90); /* call 0x0053DC90 */

loc_0053DE32: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    PUSH32(esp, 0x0053DE3Cu); RECOMP_ABI_CALL(0x00617FB0u, sub_00617FB0); /* call 0x00617FB0 */

loc_0053DE3C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053DE47; /* je: equal / zero */

loc_0053DE40: ;
    ecx = ebp;
    PUSH32(esp, 0x0053DE47u); RECOMP_ABI_CALL(0x00617FB0u, sub_00617FB0); /* call 0x00617FB0 */

loc_0053DE47: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x144) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x144;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0053DE60
 * Original: 0x0053DE60 - 0x0053DE83 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053DE60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053DE60: ;
    PUSH32(esp, esi);
    esi = 0x6633B4;

loc_0053DE66: ;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053DE70u); RECOMP_ABI_CALL(0x0053DD30u, sub_0053DD30); /* call 0x0053DD30 */

loc_0053DE70: ;
    _fb = (uint32_t)(0x1278) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1278;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x673644) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x673644 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053DE66; /* jl: less (signed <) */

loc_0053DE81: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0053DE90
 * Original: 0x0053DE90 - 0x0053DE9B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053DE90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053DE90: ;
    MEM32(ecx) = 0x64E4E0;
    g_seh_ebp = ebp; sub_00614360(); return; /* tail jmp 0x00614360 */

}

/**
 * sub_0053DEA0
 * Original: 0x0053DEA0 - 0x0053DEBE (30 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053DEA0(void)
{

loc_0053DEA0: ;
    MEM32(ecx + 0x18) = 0x3F000000;
    MEM32(ecx + 0x1C) = 0x40400000;
    MEM32(ecx + 0x20) = 0x3FC00000;
    MEM8(ecx + 0x24) = 1;
    MEM8(ecx + 0x25) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0053DEC0
 * Original: 0x0053DEC0 - 0x0053DEC5 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053DEC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053DEC0: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC)); return; /* indirect tail jmp */

}

/**
 * sub_0053DED0
 * Original: 0x0053DED0 - 0x0053DEEF (31 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053DED0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053DED0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = 0x64E4E0;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    PUSH32(esp, 0x0053DEE9u); RECOMP_ABI_CALL(0x0053DEA0u, sub_0053DEA0); /* call 0x0053DEA0 */

loc_0053DEE9: ;
    MEM8(ecx + 0x14) = LO8(eax);
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0053DEF0
 * Original: 0x0053DEF0 - 0x0053DF0E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053DEF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053DEF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0053DEF8u); RECOMP_ABI_CALL(0x0053DE90u, sub_0053DE90); /* call 0x0053DE90 */

loc_0053DEF8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0053DF08; /* je: equal / zero */

loc_0053DEFF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0053DF05u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0053DF05: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0053DF08: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053DF10
 * Original: 0x0053DF10 - 0x0053DF59 (73 bytes, 23 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0053DF10(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0053DF10: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x210) = LO8(eax);
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ecx + 0x200) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ecx + 0x204) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ecx + 0x34)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ecx + 0x208) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ecx + 0x38)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ecx + 0x20C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0053DF60
 * Original: 0x0053DF60 - 0x0053DF6D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053DF60(void)
{

loc_0053DF60: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x1FC) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053DF70
 * Original: 0x0053DF70 - 0x0053DF86 (22 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053DF70(void)
{

loc_0053DF70: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    eax = ecx;
    ecx = 0x7F;
    edi = eax;
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
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053DF90
 * Original: 0x0053DF90 - 0x0053DFE0 (80 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053DF90(void)
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

loc_0053DF90: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0053DFAB; /* jp: parity */

loc_0053DFA1: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x65E384)); /* fld float */
    goto loc_0053DFC0;

loc_0053DFAB: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0053DFC0; /* jne: not equal / not zero */

loc_0053DFB8: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_0053DFC0: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6306E8)); /* fmul dword ptr [0x6306e8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D520)); /* fadd dword ptr [0x62d520] */
    PUSH32(esp, 0x0053DFD1u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0053DFD1: ;
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D370)); /* fmul dword ptr [0x62d370] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0053DFE0
 * Original: 0x0053DFE0 - 0x0053E03A (90 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053DFE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053DFE0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebp = edi + 0x40;
    esi = ebp;
    eax = edx;
    PUSH32(esp, ebx);

loc_0053DFF1: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0053E015; /* jne: not equal / not zero */

loc_0053DFF9: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0053E011; /* je: equal / zero */

loc_0053DFFD: ;
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0053E015; /* jne: not equal / not zero */

loc_0053E007: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0053DFF1; /* jne: not equal / not zero */

loc_0053E011: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0053E01A;

loc_0053E015: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0053E01A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0053E034; /* je: equal / zero */

loc_0053E01F: ;
    PUSH32(esp, edx);
    PUSH32(esp, 9);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0053E028u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0053E028: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x0053E034u); RECOMP_ABI_CALL(0x0053DF60u, sub_0053DF60); /* call 0x0053DF60 */

loc_0053E034: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053E040
 * Original: 0x0053E040 - 0x0053E076 (54 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053E040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053E040: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = esi + 0x1DA;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0053E056u); RECOMP_ABI_CALL(0x0061A5E1u, sub_0061A5E1); /* call 0x0061A5E1 */

loc_0053E056: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053E070; /* je: equal / zero */

loc_0053E05D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0053E064u); RECOMP_ABI_CALL(0x00619BC5u, sub_00619BC5); /* call 0x00619BC5 */

loc_0053E064: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0053E070u); RECOMP_ABI_CALL(0x0053DF60u, sub_0053DF60); /* call 0x0053DF60 */

loc_0053E070: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053E080
 * Original: 0x0053E080 - 0x0053E09A (26 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053E080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053E080: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053E097; /* je: equal / zero */

loc_0053E08D: ;
    PUSH32(esp, 1);
    MEM32(ecx + eax * 4) = edx;
    PUSH32(esp, 0x0053E097u); RECOMP_ABI_CALL(0x0053DF60u, sub_0053DF60); /* call 0x0053DF60 */

loc_0053E097: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0053E0A0
 * Original: 0x0053E0A0 - 0x0053E0BC (28 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053E0A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053E0A0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4 + 4), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053E0B9; /* je: equal / zero */

loc_0053E0AE: ;
    PUSH32(esp, 1);
    MEM32(ecx + eax * 4 + 4) = edx;
    PUSH32(esp, 0x0053E0B9u); RECOMP_ABI_CALL(0x0053DF60u, sub_0053DF60); /* call 0x0053DF60 */

loc_0053E0B9: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0053E0C0
 * Original: 0x0053E0C0 - 0x0053E0DC (28 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053E0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053E0C0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4 + 8), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053E0D9; /* je: equal / zero */

loc_0053E0CE: ;
    PUSH32(esp, 1);
    MEM32(ecx + eax * 4 + 8) = edx;
    PUSH32(esp, 0x0053E0D9u); RECOMP_ABI_CALL(0x0053DF60u, sub_0053DF60); /* call 0x0053DF60 */

loc_0053E0D9: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0053E0E0
 * Original: 0x0053E0E0 - 0x0053E0FC (28 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053E0E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053E0E0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4 + 0xC), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053E0F9; /* je: equal / zero */

loc_0053E0EE: ;
    PUSH32(esp, 1);
    MEM32(ecx + eax * 4 + 0xC) = edx;
    PUSH32(esp, 0x0053E0F9u); RECOMP_ABI_CALL(0x0053DF60u, sub_0053DF60); /* call 0x0053DF60 */

loc_0053E0F9: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0053E100
 * Original: 0x0053E100 - 0x0053E11C (28 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053E100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053E100: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4 + 0x10), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053E119; /* je: equal / zero */

loc_0053E10E: ;
    PUSH32(esp, 1);
    MEM32(ecx + eax * 4 + 0x10) = edx;
    PUSH32(esp, 0x0053E119u); RECOMP_ABI_CALL(0x0053DF60u, sub_0053DF60); /* call 0x0053DF60 */

loc_0053E119: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0053E120
 * Original: 0x0053E120 - 0x0053E13C (28 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053E120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053E120: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4 + 0x14), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053E139; /* je: equal / zero */

loc_0053E12E: ;
    PUSH32(esp, 1);
    MEM32(ecx + eax * 4 + 0x14) = edx;
    PUSH32(esp, 0x0053E139u); RECOMP_ABI_CALL(0x0053DF60u, sub_0053DF60); /* call 0x0053DF60 */

loc_0053E139: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0053E140
 * Original: 0x0053E140 - 0x0053E15C (28 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053E140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053E140: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4 + 0x18), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053E159; /* je: equal / zero */

loc_0053E14E: ;
    PUSH32(esp, 1);
    MEM32(ecx + eax * 4 + 0x18) = edx;
    PUSH32(esp, 0x0053E159u); RECOMP_ABI_CALL(0x0053DF60u, sub_0053DF60); /* call 0x0053DF60 */

loc_0053E159: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0053E160
 * Original: 0x0053E160 - 0x0053E17C (28 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053E160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053E160: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4 + 0x1C), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053E179; /* je: equal / zero */

loc_0053E16E: ;
    PUSH32(esp, 1);
    MEM32(ecx + eax * 4 + 0x1C) = edx;
    PUSH32(esp, 0x0053E179u); RECOMP_ABI_CALL(0x0053DF60u, sub_0053DF60); /* call 0x0053DF60 */

loc_0053E179: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0053E180
 * Original: 0x0053E180 - 0x0053E19C (28 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053E180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053E180: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(MEM8(ecx + 0x28)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x28), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053E199; /* je: equal / zero */

loc_0053E189: ;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; sub_0053DF60(); return; /* tail jmp 0x0053DF60 */

loc_0053E199: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053E1A0
 * Original: 0x0053E1A0 - 0x0053E1DD (61 bytes, 22 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0053E1A0(void)
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

loc_0053E1A0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0053E1ADu); RECOMP_ABI_CALL(0x0053DF90u, sub_0053DF90); /* call 0x0053DF90 */

loc_0053E1AD: ;
    ecx = MEM32(esp + 0xC);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + ecx * 4 + 0x2C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esi + ecx*4 + 0x2c] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0053E1D7; /* jnp: not parity */

loc_0053E1BF: ;
    MEMF(esi + ecx * 4 + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0053E1CCu); RECOMP_ABI_CALL(0x0053DF10u, sub_0053DF10); /* call 0x0053DF10 */

loc_0053E1CC: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0053E1D3u); RECOMP_ABI_CALL(0x0053DF60u, sub_0053DF60); /* call 0x0053DF60 */

loc_0053E1D3: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0053E1D7: ;
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
 * sub_0053E1E0
 * Original: 0x0053E1E0 - 0x0053E24E (110 bytes, 46 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053E1E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053E1E0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = eax + eax * 4;
    edi = ecx;
    ebp = edi + eax * 8 + 0x49;
    esi = ebp;
    eax = edx;
    PUSH32(esp, ebx);
    /* nop */

loc_0053E200: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0053E224; /* jne: not equal / not zero */

loc_0053E208: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0053E220; /* je: equal / zero */

loc_0053E20C: ;
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0053E224; /* jne: not equal / not zero */

loc_0053E216: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0053E200; /* jne: not equal / not zero */

loc_0053E220: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0053E229;

loc_0053E224: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0053E229: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0053E248; /* je: equal / zero */

loc_0053E22E: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x62DEF8);
    PUSH32(esp, 0x28);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0053E23Cu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0053E23C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x0053E248u); RECOMP_ABI_CALL(0x0053DF60u, sub_0053DF60); /* call 0x0053DF60 */

loc_0053E248: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0053E250
 * Original: 0x0053E250 - 0x0053E7AC (1372 bytes, 422 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0053E250(void)
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

loc_0053E250: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, esi);
    ecx = 2;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 1;
    MEM32(ebx) = edi;
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 8) = eax;
    MEM32(ebx + 0xC) = ecx;
    MEM32(ebx + 0x10) = ecx;
    MEM32(ebx + 0x14) = edi;
    MEM32(ebx + 0x18) = edi;
    ecx = MEM32(0x6C2C58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053E293; /* je: equal / zero */

loc_0053E283: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053E293; /* je: equal / zero */

loc_0053E287: ;
    _fa = (uint32_t)(MEM32(0x6C2C5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C2C5C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053E293; /* je: equal / zero */

loc_0053E28F: ;
    ecx = eax;
    goto loc_0053E295;

loc_0053E293: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0053E295: ;
    MEM32(ebx + 0x1C) = ecx;
    MEM32(ebx + 0x20) = 0x3DCCCCCD;
    MEM32(ebx + 0x24) = 0x3F666666;
    SET_LO8(ecx, MEM8(0x85AE8C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053E2B8; /* je: equal / zero */

loc_0053E2B0: ;
    _fa = (uint32_t)(MEM32(0x6C2C5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C2C5C), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053E2BA; /* jne: not equal / not zero */

loc_0053E2B8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0053E2BA: ;
    PUSH32(esp, 0x3F4CCCCD);
    MEM8(ebx + 0x28) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E2C7u); RECOMP_ABI_CALL(0x0053DF90u, sub_0053DF90); /* call 0x0053DF90 */

loc_0053E2C7: ;
    MEMF(ebx + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x3F800000);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E2D4u); RECOMP_ABI_CALL(0x0053DF90u, sub_0053DF90); /* call 0x0053DF90 */

loc_0053E2D4: ;
    MEMF(ebx + 0x30) = (float)fp_top(); /* fst */
    PUSH32(esp, 0x3F333333);
    MEMF(ebx + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E2E4u); RECOMP_ABI_CALL(0x0053DF90u, sub_0053DF90); /* call 0x0053DF90 */

loc_0053E2E4: ;
    MEMF(ebx + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0x3C) = edi;
    MEM8(ebx + 0x40) = 0;
    MEM16(ebx + 0x1DA) = LO16(edi);
    MEM32(ebp + -4) = eax;
    goto loc_0053E301;

loc_0053E2FF: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0053E301: ;
    _fa = (uint32_t)(MEM32(0x8582C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8582C8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053E31E; /* jne: not equal / not zero */

loc_0053E309: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6302A4);
    eax = eax + eax * 4;
    PUSH32(esp, 0x28);
    ecx = ebx + eax * 8 + 0x49;
    PUSH32(esp, ecx);
    goto loc_0053E78A;

loc_0053E31E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0053E792; /* ja: above (unsigned >) */

loc_0053E327: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x53E7AC); /* switch: 10 entries, 10 targets */
    if (_jt == 0x0053E32Eu) goto loc_0053E32E;
    if (_jt == 0x0053E39Au) goto loc_0053E39A;
    if (_jt == 0x0053E406u) goto loc_0053E406;
    if (_jt == 0x0053E476u) goto loc_0053E476;
    if (_jt == 0x0053E4E6u) goto loc_0053E4E6;
    if (_jt == 0x0053E556u) goto loc_0053E556;
    if (_jt == 0x0053E5C6u) goto loc_0053E5C6;
    if (_jt == 0x0053E636u) goto loc_0053E636;
    if (_jt == 0x0053E6A6u) goto loc_0053E6A6;
    if (_jt == 0x0053E716u) goto loc_0053E716;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0053E32E: ;
    PUSH32(esp, 0x64E594);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E33Du); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0053E33D: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053E392; /* je: equal / zero */

loc_0053E342: ;
    PUSH32(esp, 0x64E594);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E351u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0053E351: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E35Au); RECOMP_ABI_CALL(0x00619A34u, sub_00619A34); /* call 0x00619A34 */

loc_0053E35A: ;
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
    PUSH32(esp, 0x0053E36Du); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_0053E36D: ;
    edi = esp;
    PUSH32(esp, 0x64E594);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E37Eu); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0053E37E: ;
    ecx = MEM32(eax + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053E392; /* jle: less or equal (signed <=) */

loc_0053E387: ;
    SET_LO8(edx, MEM8(ecx + eax * 2));
    MEM8(edi + eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053E387; /* jl: less (signed <) */

loc_0053E392: ;
    eax = ebx + 0x49;
    goto loc_0053E781;

loc_0053E39A: ;
    PUSH32(esp, 0x64E584);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E3A9u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0053E3A9: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053E3FE; /* je: equal / zero */

loc_0053E3AE: ;
    PUSH32(esp, 0x64E584);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E3BDu); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0053E3BD: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E3C6u); RECOMP_ABI_CALL(0x00619A34u, sub_00619A34); /* call 0x00619A34 */

loc_0053E3C6: ;
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
    PUSH32(esp, 0x0053E3D9u); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_0053E3D9: ;
    edi = esp;
    PUSH32(esp, 0x64E584);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E3EAu); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0053E3EA: ;
    ecx = MEM32(eax + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053E3FE; /* jle: less or equal (signed <=) */

loc_0053E3F3: ;
    SET_LO8(edx, MEM8(ecx + eax * 2));
    MEM8(edi + eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053E3F3; /* jl: less (signed <) */

loc_0053E3FE: ;
    eax = ebx + 0x71;
    goto loc_0053E781;

loc_0053E406: ;
    PUSH32(esp, 0x64E574);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E415u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0053E415: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053E46B; /* je: equal / zero */

loc_0053E41A: ;
    PUSH32(esp, 0x64E574);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E429u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0053E429: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E432u); RECOMP_ABI_CALL(0x00619A34u, sub_00619A34); /* call 0x00619A34 */

loc_0053E432: ;
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
    PUSH32(esp, 0x0053E445u); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_0053E445: ;
    edi = esp;
    PUSH32(esp, 0x64E574);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E456u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0053E456: ;
    ecx = MEM32(eax + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053E46B; /* jle: less or equal (signed <=) */

loc_0053E45F: ;
    /* nop */

loc_0053E460: ;
    SET_LO8(edx, MEM8(ecx + eax * 2));
    MEM8(edi + eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053E460; /* jl: less (signed <) */

loc_0053E46B: ;
    eax = ebx + 0x99;
    goto loc_0053E781;

loc_0053E476: ;
    PUSH32(esp, 0x64E568);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E485u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0053E485: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053E4DB; /* je: equal / zero */

loc_0053E48A: ;
    PUSH32(esp, 0x64E568);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E499u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0053E499: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E4A2u); RECOMP_ABI_CALL(0x00619A34u, sub_00619A34); /* call 0x00619A34 */

loc_0053E4A2: ;
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
    PUSH32(esp, 0x0053E4B5u); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_0053E4B5: ;
    edi = esp;
    PUSH32(esp, 0x64E568);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E4C6u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0053E4C6: ;
    ecx = MEM32(eax + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053E4DB; /* jle: less or equal (signed <=) */

loc_0053E4CF: ;
    /* nop */

loc_0053E4D0: ;
    SET_LO8(edx, MEM8(ecx + eax * 2));
    MEM8(eax + edi) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053E4D0; /* jl: less (signed <) */

loc_0053E4DB: ;
    eax = ebx + 0xC1;
    goto loc_0053E781;

loc_0053E4E6: ;
    PUSH32(esp, 0x64E554);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E4F5u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0053E4F5: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053E54B; /* je: equal / zero */

loc_0053E4FA: ;
    PUSH32(esp, 0x64E554);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E509u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0053E509: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E512u); RECOMP_ABI_CALL(0x00619A34u, sub_00619A34); /* call 0x00619A34 */

loc_0053E512: ;
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
    PUSH32(esp, 0x0053E525u); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_0053E525: ;
    edi = esp;
    PUSH32(esp, 0x64E554);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E536u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0053E536: ;
    ecx = MEM32(eax + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053E54B; /* jle: less or equal (signed <=) */

loc_0053E53F: ;
    /* nop */

loc_0053E540: ;
    SET_LO8(edx, MEM8(ecx + eax * 2));
    MEM8(eax + edi) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053E540; /* jl: less (signed <) */

loc_0053E54B: ;
    eax = ebx + 0xE9;
    goto loc_0053E781;

loc_0053E556: ;
    PUSH32(esp, 0x64E544);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E565u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0053E565: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053E5BB; /* je: equal / zero */

loc_0053E56A: ;
    PUSH32(esp, 0x64E544);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E579u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0053E579: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E582u); RECOMP_ABI_CALL(0x00619A34u, sub_00619A34); /* call 0x00619A34 */

loc_0053E582: ;
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
    PUSH32(esp, 0x0053E595u); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_0053E595: ;
    edi = esp;
    PUSH32(esp, 0x64E544);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E5A6u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0053E5A6: ;
    ecx = MEM32(eax + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053E5BB; /* jle: less or equal (signed <=) */

loc_0053E5AF: ;
    /* nop */

loc_0053E5B0: ;
    SET_LO8(edx, MEM8(ecx + eax * 2));
    MEM8(eax + edi) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053E5B0; /* jl: less (signed <) */

loc_0053E5BB: ;
    eax = ebx + 0x111;
    goto loc_0053E781;

loc_0053E5C6: ;
    PUSH32(esp, 0x64E530);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E5D5u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0053E5D5: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053E62B; /* je: equal / zero */

loc_0053E5DA: ;
    PUSH32(esp, 0x64E530);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E5E9u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0053E5E9: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E5F2u); RECOMP_ABI_CALL(0x00619A34u, sub_00619A34); /* call 0x00619A34 */

loc_0053E5F2: ;
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
    PUSH32(esp, 0x0053E605u); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_0053E605: ;
    edi = esp;
    PUSH32(esp, 0x64E530);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E616u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0053E616: ;
    ecx = MEM32(eax + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053E62B; /* jle: less or equal (signed <=) */

loc_0053E61F: ;
    /* nop */

loc_0053E620: ;
    SET_LO8(edx, MEM8(ecx + eax * 2));
    MEM8(eax + edi) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053E620; /* jl: less (signed <) */

loc_0053E62B: ;
    eax = ebx + 0x139;
    goto loc_0053E781;

loc_0053E636: ;
    PUSH32(esp, 0x64E51C);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E645u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0053E645: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053E69B; /* je: equal / zero */

loc_0053E64A: ;
    PUSH32(esp, 0x64E51C);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E659u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0053E659: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E662u); RECOMP_ABI_CALL(0x00619A34u, sub_00619A34); /* call 0x00619A34 */

loc_0053E662: ;
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
    PUSH32(esp, 0x0053E675u); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_0053E675: ;
    edi = esp;
    PUSH32(esp, 0x64E51C);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E686u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0053E686: ;
    ecx = MEM32(eax + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053E69B; /* jle: less or equal (signed <=) */

loc_0053E68F: ;
    /* nop */

loc_0053E690: ;
    SET_LO8(edx, MEM8(ecx + eax * 2));
    MEM8(eax + edi) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053E690; /* jl: less (signed <) */

loc_0053E69B: ;
    eax = ebx + 0x161;
    goto loc_0053E781;

loc_0053E6A6: ;
    PUSH32(esp, 0x64E504);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E6B5u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0053E6B5: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053E70B; /* je: equal / zero */

loc_0053E6BA: ;
    PUSH32(esp, 0x64E504);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E6C9u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0053E6C9: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E6D2u); RECOMP_ABI_CALL(0x00619A34u, sub_00619A34); /* call 0x00619A34 */

loc_0053E6D2: ;
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
    PUSH32(esp, 0x0053E6E5u); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_0053E6E5: ;
    edi = esp;
    PUSH32(esp, 0x64E504);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E6F6u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0053E6F6: ;
    ecx = MEM32(eax + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053E70B; /* jle: less or equal (signed <=) */

loc_0053E6FF: ;
    /* nop */

loc_0053E700: ;
    SET_LO8(edx, MEM8(ecx + eax * 2));
    MEM8(eax + edi) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053E700; /* jl: less (signed <) */

loc_0053E70B: ;
    eax = ebx + 0x189;
    goto loc_0053E781;

loc_0053E716: ;
    PUSH32(esp, 0x64E4F0);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E725u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0053E725: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053E77B; /* je: equal / zero */

loc_0053E72A: ;
    PUSH32(esp, 0x64E4F0);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E739u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0053E739: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E742u); RECOMP_ABI_CALL(0x00619A34u, sub_00619A34); /* call 0x00619A34 */

loc_0053E742: ;
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
    PUSH32(esp, 0x0053E755u); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_0053E755: ;
    edi = esp;
    PUSH32(esp, 0x64E4F0);
    ecx = 0x8582C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E766u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0053E766: ;
    ecx = MEM32(eax + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053E77B; /* jle: less or equal (signed <=) */

loc_0053E76F: ;
    /* nop */

loc_0053E770: ;
    SET_LO8(edx, MEM8(ecx + eax * 2));
    MEM8(eax + edi) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053E770; /* jl: less (signed <) */

loc_0053E77B: ;
    eax = ebx + 0x1B1;

loc_0053E781: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x62DEF8);
    PUSH32(esp, 0x28);
    PUSH32(esp, eax);

loc_0053E78A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053E78Fu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0053E78F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0053E792: ;
    eax = MEM32(ebp + -4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0053E2FF; /* jl: less (signed <) */

loc_0053E7A2: ;
    esp = ebp + -16;
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
 * sub_0053E7E0
 * Original: 0x0053E7E0 - 0x0053E88D (173 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053E7E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053E7E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x64E5D8);
    esi = ecx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0053E7FDu); RECOMP_ABI_CALL(0x00612E30u, sub_00612E30); /* call 0x00612E30 */

loc_0053E7FD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053E812; /* je: equal / zero */

loc_0053E804: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0053E812u); RECOMP_ABI_CALL(0x0053E080u, sub_0053E080); /* call 0x0053E080 */

loc_0053E812: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x64E5CC);
    PUSH32(esp, 0x0053E823u); RECOMP_ABI_CALL(0x00612E30u, sub_00612E30); /* call 0x00612E30 */

loc_0053E823: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053E838; /* je: equal / zero */

loc_0053E82A: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0053E838u); RECOMP_ABI_CALL(0x0053E080u, sub_0053E080); /* call 0x0053E080 */

loc_0053E838: ;
    PUSH32(esp, 0x64E5C0);
    PUSH32(esp, 0x0053E842u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0053E842: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053E854; /* je: equal / zero */

loc_0053E849: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0053E854u); RECOMP_ABI_CALL(0x0053E0A0u, sub_0053E0A0); /* call 0x0053E0A0 */

loc_0053E854: ;
    PUSH32(esp, 0x64E5B0);
    PUSH32(esp, 0x0053E85Eu); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0053E85E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053E870; /* je: equal / zero */

loc_0053E865: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0053E870u); RECOMP_ABI_CALL(0x0053E0C0u, sub_0053E0C0); /* call 0x0053E0C0 */

loc_0053E870: ;
    PUSH32(esp, 0x64E5A4);
    PUSH32(esp, 0x0053E87Au); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0053E87A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053E88A; /* je: equal / zero */

loc_0053E881: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0053E88Au); RECOMP_ABI_CALL(0x0053E180u, sub_0053E180); /* call 0x0053E180 */

loc_0053E88A: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0053E890
 * Original: 0x0053E890 - 0x0053E8A3 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053E890(void)
{

loc_0053E890: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x3C) = 0;
    PUSH32(esp, 0x0053E89Fu); RECOMP_ABI_CALL(0x0053E250u, sub_0053E250); /* call 0x0053E250 */

loc_0053E89F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0053E8B0
 * Original: 0x0053E8B0 - 0x0053E8C7 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053E8B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053E8B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0053E8B8u); RECOMP_ABI_CALL(0x0053E250u, sub_0053E250); /* call 0x0053E250 */

loc_0053E8B8: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0053E8C1u); RECOMP_ABI_CALL(0x0053DF10u, sub_0053DF10); /* call 0x0053DF10 */

loc_0053E8C1: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0053E7E0(); return; /* tail jmp 0x0053E7E0 */

}

/**
 * sub_0053E8D0
 * Original: 0x0053E8D0 - 0x0053E8F1 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053E8D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053E8D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0053E8D8u); RECOMP_ABI_CALL(0x0053E890u, sub_0053E890); /* call 0x0053E890 */

loc_0053E8D8: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = esi;
    MEM8(esi + 0x1FC) = LO8(eax);
    MEM8(esi + 0x210) = LO8(eax);
    PUSH32(esp, 0x0053E8EDu); RECOMP_ABI_CALL(0x0053E8B0u, sub_0053E8B0); /* call 0x0053E8B0 */

loc_0053E8ED: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0053E900
 * Original: 0x0053E900 - 0x0053E91D (29 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053E900(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053E900: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    ecx = eax;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0xC);
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0053E920
 * Original: 0x0053E920 - 0x0053E930 (16 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053E920(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053E920: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0053E930
 * Original: 0x0053E930 - 0x0053E971 (65 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053E930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053E930: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053E94D; /* je: equal / zero */

loc_0053E938: ;
    eax = MEM32(esp + 4);
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = 2;
    g_seh_ebp = ebp; sub_0053FC10(); return; /* tail jmp 0x0053FC10 */

loc_0053E94D: ;
    SET_LO8(edx, MEM8(0x6C2C67));
    SET_LO8(eax, 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053E96E; /* je: equal / zero */

loc_0053E959: ;
    edx = MEM32(esp + 4);
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = 2;
    g_seh_ebp = ebp; sub_0053FC10(); return; /* tail jmp 0x0053FC10 */

loc_0053E96E: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0053E980
 * Original: 0x0053E980 - 0x0053E9C7 (71 bytes, 32 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053E980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053E980: ;
    _fa = (uint32_t)(MEM8(0x6C2C66)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x6C2C66), 1 (8-bit) */
    PUSH32(esp, ebx);
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0053E992; /* jne: not equal / not zero */

loc_0053E98C: ;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0053E992: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0053E9A8u); RECOMP_ABI_CALL(0x0053D270u, sub_0053D270); /* call 0x0053D270 */

loc_0053E9A8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053E9BF; /* je: equal / zero */

loc_0053E9AF: ;
    ecx = MEM32(ebx + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0053E9B9u); RECOMP_ABI_CALL(0x0053BBA0u, sub_0053BBA0); /* call 0x0053BBA0 */

loc_0053E9B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0053E9BF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0053E9D0
 * Original: 0x0053E9D0 - 0x0053EA20 (80 bytes, 30 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053E9D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053E9D0: ;
    _fa = (uint32_t)(MEM8(0x6C2C69)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x6C2C69), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053E9DE; /* jne: not equal / not zero */

loc_0053E9D9: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_0053E9DE: ;
    edx = MEM32(esp + 4);
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1278);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = esi;
    edi = edi << 5;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(eax + edi + 0x6634F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053EA19; /* je: equal / zero */

loc_0053EA00: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053EA19; /* je: equal / zero */

loc_0053EA05: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053EA19; /* je: equal / zero */

loc_0053EA0A: ;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0053EA14u); RECOMP_ABI_CALL(0x0053BBA0u, sub_0053BBA0); /* call 0x0053BBA0 */

loc_0053EA14: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0053EA19: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0053EA20
 * Original: 0x0053EA20 - 0x0053EA4F (47 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053EA20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053EA20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 2;
    /* nop */

loc_0053EA30: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0053EA3Au); RECOMP_ABI_CALL(0x0053E930u, sub_0053E930); /* call 0x0053E930 */

loc_0053EA3A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053EA48; /* jne: not equal / not zero */

loc_0053EA3E: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_0053EA30; /* jns: not sign (positive) */

loc_0053EA41: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0053EA48: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053EA50
 * Original: 0x0053EA50 - 0x0053EAE8 (152 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053EA50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053EA50: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = esi + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((1) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0053EAC4; /* jge: greater or equal (signed >=) */

loc_0053EA6B: ;
    PUSH32(esp, edi);
    /* nop */

loc_0053EA70: ;
    edx = MEM32(esp + 0x20);
    ecx = eax;
    if (4) _cf = (int)(((ecx) >> (32 - (4))) & 1);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = MEM32(ecx + ebx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebx)) >> 32) & 1);
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0053EA8D; /* je: equal / zero */

loc_0053EA82: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x20) (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    goto loc_0053EA98;

loc_0053EA8D: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x24) (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0053EA98: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0053EAC3; /* je: equal / zero */

loc_0053EA9C: ;
    edx = MEM32(ecx);
    if (4) _cf = (int)(((esi) >> (32 - (4))) & 1);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ebx)) >> 32) & 1);
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esi + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esi + 8) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(esi + 0xC) = ecx;
    esi = eax;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((1) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0053EA70; /* jl: less (signed <) */

loc_0053EAC3: ;
    POP32(esp, edi);

loc_0053EAC4: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    if (4) _cf = (int)(((esi) >> (32 - (4))) & 1);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ebx)) >> 32) & 1);
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = edx;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0053EAF0
 * Original: 0x0053EAF0 - 0x0053EC34 (324 bytes, 131 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053EAF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053EAF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_0053EB00: ;
    eax = MEM32(esi * 4 + 0x673670);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0053EB0Eu); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_0053EB0E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053EB1D; /* je: equal / zero */

loc_0053EB15: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053EB00; /* jl: less (signed <) */

loc_0053EB1B: ;
    goto loc_0053EB22;

loc_0053EB1D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053EB40; /* jl: less (signed <) */

loc_0053EB22: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x64E758);
    PUSH32(esp, 0x0053EB2Du); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_0053EB2D: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0053EB40: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    edi = MEM32(esp + 0x14);
    MEM32(edi) = esi;
    if (CMP_A(_fa, _fb)) goto loc_0053EC20; /* ja: above (unsigned >) */

loc_0053EB4F: ;
    { uint32_t _jt = MEM32(esi * 4 + 0x53EC34); /* switch: 6 entries, 4 targets */
    if (_jt == 0x0053EB56u) goto loc_0053EB56;
    if (_jt == 0x0053EB6Du) goto loc_0053EB6D;
    if (_jt == 0x0053EBBBu) goto loc_0053EBBB;
    if (_jt == 0x0053EC09u) goto loc_0053EC09;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0053EB56: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0053EB60u); RECOMP_ABI_CALL(0x0053CFB0u, sub_0053CFB0); /* call 0x0053CFB0 */

loc_0053EB60: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0053EB6D: ;
    esi = MEM32(esp + 0x1C);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0053EB81u); RECOMP_ABI_CALL(0x0053DC30u, sub_0053DC30); /* call 0x0053DC30 */

loc_0053EB81: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053EBA3; /* je: equal / zero */

loc_0053EB88: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0053EB99u); RECOMP_ABI_CALL(0x0053E920u, sub_0053E920); /* call 0x0053E920 */

loc_0053EB99: ;
    MEM32(edi + 4) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0053EBA3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x64E6F8);
    PUSH32(esp, 0x0053EBAEu); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_0053EBAE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = ebp;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0053EBBB: ;
    esi = MEM32(esp + 0x1C);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0053EBCFu); RECOMP_ABI_CALL(0x0053D140u, sub_0053D140); /* call 0x0053D140 */

loc_0053EBCF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053EBF1; /* je: equal / zero */

loc_0053EBD6: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0053EBE7u); RECOMP_ABI_CALL(0x0053E920u, sub_0053E920); /* call 0x0053E920 */

loc_0053EBE7: ;
    MEM32(edi + 4) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0053EBF1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x64E6A0);
    PUSH32(esp, 0x0053EBFCu); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_0053EBFC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = ebp;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0053EC09: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0053EC13u); RECOMP_ABI_CALL(0x0053D000u, sub_0053D000); /* call 0x0053D000 */

loc_0053EC13: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0053EC20: ;
    PUSH32(esp, 0x64E650);
    PUSH32(esp, 0x0053EC2Au); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_0053EC2A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0053EC50
 * Original: 0x0053EC50 - 0x0053ED62 (274 bytes, 105 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053EC50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053EC50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0053EC60;

    /* nop */

loc_0053EC60: ;
    eax = MEM32(esi * 4 + 0x673688);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0053EC6Eu); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_0053EC6E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053EC7D; /* je: equal / zero */

loc_0053EC75: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053EC60; /* jl: less (signed <) */

loc_0053EC7B: ;
    goto loc_0053EC82;

loc_0053EC7D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053EC98; /* jl: less (signed <) */

loc_0053EC82: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x64E840);
    PUSH32(esp, 0x0053EC8Du); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_0053EC8D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_0053EC98: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xB (32-bit) */
    ecx = MEM32(esp + 0x18);
    MEM32(ecx) = esi;
    if (CMP_A(_fa, _fb)) goto loc_0053ED4D; /* ja: above (unsigned >) */

loc_0053ECA7: ;
    edx = ZX8(MEM8(esi + 0x53ED74));
    { uint32_t _jt = MEM32(edx * 4 + 0x53ED64); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0053ECB5u) goto loc_0053ECB5;
    if (_jt == 0x0053ECD0u) goto loc_0053ECD0;
    if (_jt == 0x0053ED20u) goto loc_0053ED20;
    if (_jt == 0x0053ED3Bu) goto loc_0053ED3B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0053ECB5: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053ECBFu); RECOMP_ABI_CALL(0x0053D000u, sub_0053D000); /* call 0x0053D000 */

loc_0053ECBF: ;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_0053ECD0: ;
    esi = MEM32(esp + 0x14);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0053ECE4u); RECOMP_ABI_CALL(0x0053DC30u, sub_0053DC30); /* call 0x0053DC30 */

loc_0053ECE4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053ED0A; /* je: equal / zero */

loc_0053ECEB: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x0053ECFCu); RECOMP_ABI_CALL(0x0053E920u, sub_0053E920); /* call 0x0053E920 */

loc_0053ECFC: ;
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_0053ED0A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x64E7F8);
    PUSH32(esp, 0x0053ED15u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_0053ED15: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_0053ED20: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0053ED2Au); RECOMP_ABI_CALL(0x0053CFB0u, sub_0053CFB0); /* call 0x0053CFB0 */

loc_0053ED2A: ;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_0053ED3B: ;
    edx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx) = 0;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_0053ED4D: ;
    PUSH32(esp, 0x64E7BC);
    PUSH32(esp, 0x0053ED57u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_0053ED57: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0053ED80
 * Original: 0x0053ED80 - 0x0053EEB8 (312 bytes, 111 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053ED80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053ED80: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax + 8);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(ebx, 1);
    if (CMP_LE(_fas, _fbs)) goto loc_0053EEAD; /* jle: less or equal (signed <=) */

loc_0053ED9B: ;
    PUSH32(esp, esi);
    /* nop */

loc_0053EDA0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053EEAC; /* jne: not equal / not zero */

loc_0053EDA9: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(ecx + 0xC);
    esi = MEM32(edx + ebp * 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    eax = edx + ebp * 8;
    if (CMP_A(_fa, _fb)) goto loc_0053EE8F; /* ja: above (unsigned >) */

loc_0053EDBF: ;
    { uint32_t _jt = MEM32(esi * 4 + 0x53EEB8); /* switch: 6 entries, 5 targets */
    if (_jt == 0x0053EDC6u) goto loc_0053EDC6;
    if (_jt == 0x0053EDFCu) goto loc_0053EDFC;
    if (_jt == 0x0053EE32u) goto loc_0053EE32;
    if (_jt == 0x0053EE47u) goto loc_0053EE47;
    if (_jt == 0x0053EE7Cu) goto loc_0053EE7C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0053EDC6: ;
    eax = MEM32(eax + 4);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0053EDDBu); RECOMP_ABI_CALL(0x0053E900u, sub_0053E900); /* call 0x0053E900 */

loc_0053EDDB: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0053EDEDu); RECOMP_ABI_CALL(0x0053BBA0u, sub_0053BBA0); /* call 0x0053BBA0 */

loc_0053EDED: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053EE9C; /* jne: not equal / not zero */

loc_0053EDF5: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_0053EE9C;

loc_0053EDFC: ;
    eax = MEM32(eax + 4);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0053EE11u); RECOMP_ABI_CALL(0x0053E900u, sub_0053E900); /* call 0x0053E900 */

loc_0053EE11: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053EE2Au); RECOMP_ABI_CALL(0x0053BCF0u, sub_0053BCF0); /* call 0x0053BCF0 */

loc_0053EE2A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053EE9C; /* jne: not equal / not zero */

loc_0053EE2E: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_0053EE9C;

loc_0053EE32: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0053EE3Fu); RECOMP_ABI_CALL(0x0053E930u, sub_0053E930); /* call 0x0053E930 */

loc_0053EE3F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053EE9C; /* jne: not equal / not zero */

loc_0053EE43: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_0053EE9C;

loc_0053EE47: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    edx = MEM32(eax + 4);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0053EE5Cu); RECOMP_ABI_CALL(0x0053E900u, sub_0053E900); /* call 0x0053E900 */

loc_0053EE5C: ;
    ecx = MEM32(edi + 8);
    PUSH32(esp, 0x0053EE64u); RECOMP_ABI_CALL(0x005D8270u, sub_005D8270); /* call 0x005D8270 */

loc_0053EE64: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053EE78; /* jne: not equal / not zero */

loc_0053EE6A: ;
    ecx = MEM32(edi + 8);
    PUSH32(esp, 0x0053EE72u); RECOMP_ABI_CALL(0x004B2AA0u, sub_004B2AA0); /* call 0x004B2AA0 */

loc_0053EE72: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x24) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053EE9C; /* je: equal / zero */

loc_0053EE78: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_0053EE9C;

loc_0053EE7C: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0053EE87u); RECOMP_ABI_CALL(0x0053FCB0u, sub_0053FCB0); /* call 0x0053FCB0 */

loc_0053EE87: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053EE9C; /* jne: not equal / not zero */

loc_0053EE8B: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_0053EE9C;

loc_0053EE8F: ;
    PUSH32(esp, 0x64E888);
    PUSH32(esp, 0x0053EE99u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_0053EE99: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0053EE9C: ;
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(ecx + 8);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053EDA0; /* jl: less (signed <) */

loc_0053EEAC: ;
    POP32(esp, esi);

loc_0053EEAD: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053EED0
 * Original: 0x0053EED0 - 0x0053EF08 (56 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053EED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053EED0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053EF07; /* je: equal / zero */

loc_0053EEDC: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0053EEE3: ;
    esi = edx;
    ebx = MEM32(esi);
    edi = eax;
    MEM32(edi) = ebx;
    ebx = MEM32(esi + 4);
    MEM32(edi + 4) = ebx;
    ebx = MEM32(esi + 8);
    MEM32(edi + 8) = ebx;
    esi = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(edi + 0xC) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0053EEE3; /* jne: not equal / not zero */

loc_0053EF04: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0053EF07: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0053EF10
 * Original: 0x0053EF10 - 0x0053EF51 (65 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053EF10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053EF10: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    ecx = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_0053EF4A; /* je: equal / zero */

loc_0053EF20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0053EF23: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    esi = eax;
    ebx = MEM32(esi);
    edi = ecx;
    MEM32(edi) = ebx;
    ebx = MEM32(esi + 4);
    MEM32(edi + 4) = ebx;
    ebx = MEM32(esi + 8);
    MEM32(edi + 8) = ebx;
    esi = MEM32(esi + 0xC);
    MEM32(edi + 0xC) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0053EF23; /* jne: not equal / not zero */

loc_0053EF47: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0053EF4A: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0053EF60
 * Original: 0x0053EF60 - 0x0053EF85 (37 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053EF60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053EF60: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053EF82; /* je: equal / zero */

loc_0053EF68: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;

loc_0053EF82: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0053EF90
 * Original: 0x0053EF90 - 0x0053EFF6 (102 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0053EF90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053EF90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x629BA0);
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

loc_0053EFC0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053EFDC; /* je: equal / zero */

loc_0053EFC5: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053EFCEu); RECOMP_ABI_CALL(0x0053EF60u, sub_0053EF60); /* call 0x0053EF60 */

loc_0053EFCE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x10) = edi;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = esi;
    goto loc_0053EFC0;

loc_0053EFDC: ;
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
 * sub_0053EFF6
 * Original: 0x0053EFF6 - 0x0053F000 (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053EFF6(void)
{

loc_0053EFF6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0053EFFFu); RECOMP_ABI_CALL(0x0061A356u, sub_0061A356); /* call 0x0061A356 */

loc_0053EFFF: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0053F000
 * Original: 0x0053F000 - 0x0053F136 (310 bytes, 123 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053F000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053F000: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0053F020; /* je: equal / zero */

loc_0053F017: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    goto loc_0053F02A;

loc_0053F020: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0053F02A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0053F072; /* je: equal / zero */

loc_0053F02E: ;
    edi = eax;
    edx = MEM32(edi);
    esi = MEM32(edi + 4);
    ebx = MEM32(edi + 8);
    edi = MEM32(edi + 0xC);
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x18) = ebx;
    edi = ecx;
    ebp = MEM32(edi);
    ebx = eax;
    MEM32(ebx) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(ebx + 4) = ebp;
    ebp = MEM32(edi + 8);
    MEM32(ebx + 8) = ebp;
    edi = MEM32(edi + 0xC);
    MEM32(ebx + 0xC) = edi;
    edi = ecx;
    MEM32(edi) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(edi + 4) = esi;
    MEM32(edi + 8) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 0xC) = edx;

loc_0053F072: ;
    esi = MEM32(esp + 0x2C);
    edi = MEM32(esi);
    ebx = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0053F087; /* je: equal / zero */

loc_0053F07E: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    goto loc_0053F091;

loc_0053F087: ;
    edx = MEM32(esi + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0053F091: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0053F0D7; /* je: equal / zero */

loc_0053F095: ;
    ebx = esi;
    edx = MEM32(ebx);
    edi = MEM32(ebx + 4);
    ebp = MEM32(ebx + 8);
    ebx = MEM32(ebx + 0xC);
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x18) = ebp;
    ebx = eax;
    ebp = MEM32(ebx);
    MEM32(esi) = ebp;
    ebp = MEM32(ebx + 4);
    MEM32(esi + 4) = ebp;
    ebp = MEM32(ebx + 8);
    MEM32(esi + 8) = ebp;
    ebx = MEM32(ebx + 0xC);
    MEM32(esi + 0xC) = ebx;
    esi = eax;
    MEM32(esi) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(esi + 0xC) = edx;

loc_0053F0D7: ;
    esi = MEM32(eax);
    edi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0053F0E8; /* je: equal / zero */

loc_0053F0DF: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    goto loc_0053F0F2;

loc_0053F0E8: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0053F0F2: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0053F12E; /* je: equal / zero */

loc_0053F0F6: ;
    ebx = eax;
    edx = MEM32(ebx);
    esi = MEM32(ebx + 4);
    edi = MEM32(ebx + 8);
    ebx = MEM32(ebx + 0xC);
    MEM32(esp + 0x1C) = ebx;
    ebx = ecx;
    ebp = MEM32(ebx);
    MEM32(eax) = ebp;
    ebp = MEM32(ebx + 4);
    MEM32(eax + 4) = ebp;
    ebp = MEM32(ebx + 8);
    MEM32(eax + 8) = ebp;
    ebx = MEM32(ebx + 0xC);
    MEM32(eax + 0xC) = ebx;
    eax = MEM32(esp + 0x1C);
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = edi;
    MEM32(ecx + 0xC) = eax;

loc_0053F12E: ;
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
 * sub_0053F140
 * Original: 0x0053F140 - 0x0053F222 (226 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053F140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053F140: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    edx = ecx + ecx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_0053F1B7; /* jge: greater or equal (signed >=) */

loc_0053F15C: ;
    /* nop */

loc_0053F160: ;
    eax = edx;
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = MEM32(eax + esi);
    ebx = MEM32(eax + esi + -16);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0053F17B; /* je: equal / zero */

loc_0053F172: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    goto loc_0053F185;

loc_0053F17B: ;
    edi = MEM32(eax + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + -12) (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0053F185: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0053F18A; /* je: equal / zero */

loc_0053F189: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0053F18A: ;
    eax = edx;
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = MEM32(eax + esi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (4) _cf = (int)(((ecx) >> (32 - (4))) & 1);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edi;
    edi = MEM32(eax + 4);
    MEM32(ecx + 4) = edi;
    edi = MEM32(eax + 8);
    MEM32(ecx + 8) = edi;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    ecx = edx;
    edx = edx + edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0053F160; /* jl: less (signed <) */

loc_0053F1B7: ;
    if (CMP_NE(_fa, _fb)) goto loc_0053F1E5; /* jne: not equal / not zero */

loc_0053F1B9: ;
    eax = ecx;
    edx = ebp;
    if (4) _cf = (int)(((edx) >> (32 - (4))) & 1);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(edx + esi + -16);
    edx = edx + esi + -16;
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + esi) = ecx;
    ecx = MEM32(edx + 4);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edx + 8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(edx + 0xC);
    MEM32(eax + 0xC) = edx;
    ecx = ebp + -1;

loc_0053F1E5: ;
    eax = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x38);
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0x3C);
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x40);
    MEM32(edx + 0xC) = eax;
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = esi;
    PUSH32(esp, 0x0053F21Au); RECOMP_ABI_CALL(0x0053EA50u, sub_0053EA50); /* call 0x0053EA50 */

loc_0053F21A: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0053F230
 * Original: 0x0053F230 - 0x0053F343 (275 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053F230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053F230: ;
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((4) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = ecx;
    esi = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0053F25F; /* je: equal / zero */

loc_0053F254: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    esi = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0053F254; /* jne: not equal / not zero */

loc_0053F25F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0053F33C; /* jge: greater or equal (signed >=) */

loc_0053F267: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053F33C; /* jle: less or equal (signed <=) */

loc_0053F26F: ;
    PUSH32(esp, ebx);
    esi = eax;
    ebx = edi;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x34) = eax;

loc_0053F280: ;
    eax = esi;
    ecx = MEM32(eax);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(esp + 0x28) = eax;
    eax = esi + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    edx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0053F2B0; /* jne: not equal / not zero */

loc_0053F2AA: ;
    eax = esp + 0x30;
    goto loc_0053F2B8;

loc_0053F2B0: ;
    MEM32(esp + 0x10) = eax;
    eax = esp + 0x10;

loc_0053F2B8: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053F30E; /* je: equal / zero */

loc_0053F2BE: ;
    edi = edi;

loc_0053F2C0: ;
    eax = ecx;
    ebp = MEM32(eax);
    MEM32(edx) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(edx + 4) = ebp;
    ebp = MEM32(eax + 8);
    MEM32(edx + 8) = ebp;
    eax = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = eax;
    eax = MEM32(esp + 0x38);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    edx = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_0053F2F3; /* jge: greater or equal (signed >=) */

loc_0053F2E7: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ecx;
    eax = esp + 0x14;
    goto loc_0053F308;

loc_0053F2F3: ;
    ecx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x30);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = ecx;
    eax = esp + 0x18;

loc_0053F308: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053F2C0; /* jne: not equal / not zero */

loc_0053F30E: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x34);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edx + 0xC) = ecx;
    MEM32(esp + 0x34) = eax;
    if ((_fa != 0)) goto loc_0053F280; /* jne: not equal / not zero */

loc_0053F33B: ;
    POP32(esp, ebx);

loc_0053F33C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0053F350
 * Original: 0x0053F350 - 0x0053F382 (50 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053F350(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053F350: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    MEM32(eax) = edx;
    eax = esp;
    PUSH32(esp, esi);
    MEM32(eax) = ecx;
    PUSH32(esp, 0x0053F37Bu); RECOMP_ABI_CALL(0x0053EF10u, sub_0053EF10); /* call 0x0053EF10 */

loc_0053F37B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0053F390
 * Original: 0x0053F390 - 0x0053F3F4 (100 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0053F390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053F390: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x629BB0);
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
    edi = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 8);
    /* nop */

loc_0053F3C0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0053F3DC; /* jbe: below or equal (unsigned <=) */

loc_0053F3C4: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0053F3D0u); RECOMP_ABI_CALL(0x0053EF60u, sub_0053EF60); /* call 0x0053EF60 */

loc_0053F3D0: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = esi;
    goto loc_0053F3C0;

loc_0053F3DC: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
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
 * sub_0053F3F4
 * Original: 0x0053F3F4 - 0x0053F400 (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053F3F4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053F3F4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0053F3FDu); RECOMP_ABI_CALL(0x0061A356u, sub_0061A356); /* call 0x0061A356 */

loc_0053F3FD: ;
    /* int3: debug-trap slide byte, stepped over */
    /* nop */
    /* nop */

    g_seh_ebp = ebp; sub_0053F400(); return; /* fallthrough 0x0053F400 */

}

/**
 * sub_0053F400
 * Original: 0x0053F400 - 0x0053F4D2 (210 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053F400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053F400: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = esi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0053F4AD; /* jle: less or equal (signed <=) */

loc_0053F41C: ;
    ebp = MEM32(esp + 0x20);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    edx = esp;
    edi = edi << 5;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = edi + ecx;
    MEM32(edx) = ebx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    ebx = eax;
    eax = ebx + ecx;
    edx = esp;
    MEM32(edx) = eax;
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = eax;
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x0053F453u); RECOMP_ABI_CALL(0x0053F000u, sub_0053F000); /* call 0x0053F000 */

loc_0053F453: ;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = esp;
    edx = ebx + eax;
    MEM32(ecx) = edx;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = eax;
    PUSH32(esp, ecx);
    ecx = esp;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx) = eax;
    PUSH32(esp, 0x0053F474u); RECOMP_ABI_CALL(0x0053F000u, sub_0053F000); /* call 0x0053F000 */

loc_0053F474: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = esi;
    PUSH32(esp, ecx);
    ecx = esp;
    eax = esi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx) = eax;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = eax;
    eax = esp;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax) = esi;
    PUSH32(esp, 0x0053F496u); RECOMP_ABI_CALL(0x0053F000u, sub_0053F000); /* call 0x0053F000 */

loc_0053F496: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    eax = esp;
    PUSH32(esp, ecx);
    MEM32(eax) = ecx;
    eax = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    goto loc_0053F4BB;

loc_0053F4AD: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    MEM32(eax) = esi;
    eax = esp;
    PUSH32(esp, ecx);

loc_0053F4BB: ;
    edx = MEM32(esp + 0x28);
    MEM32(eax) = edx;
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x0053F4CAu); RECOMP_ABI_CALL(0x0053F000u, sub_0053F000); /* call 0x0053F000 */

loc_0053F4CA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0053F4E0
 * Original: 0x0053F4E0 - 0x0053F543 (99 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053F4E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053F4E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0053F53E; /* jle: less or equal (signed <=) */

loc_0053F4FE: ;
    edi = esi;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0053F505: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    ecx = edi;
    eax = MEM32(ecx);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, ebx);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    MEM32(edx + 8) = eax;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(edx + 0xC) = ecx;
    MEM32(eax) = ebp;
    PUSH32(esp, 0x0053F537u); RECOMP_ABI_CALL(0x0053F140u, sub_0053F140); /* call 0x0053F140 */

loc_0053F537: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0053F505; /* jg: greater (signed >) */

loc_0053F53E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0053F550
 * Original: 0x0053F550 - 0x0053F578 (40 bytes, 16 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053F550(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053F550: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    MEM32(eax) = edx;
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x0053F572u); RECOMP_ABI_CALL(0x0053EF90u, sub_0053EF90); /* call 0x0053EF90 */

loc_0053F572: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0053F580
 * Original: 0x0053F580 - 0x0053F5ED (109 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053F580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053F580: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(ebx));
    esi = esi - ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (((4) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(esi)) >> ((((4) & 31u)) - 1)) & 1);
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0053F5E4; /* jle: less or equal (signed <=) */

loc_0053F593: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(eax);
    PUSH32(esp, edi);
    goto loc_0053F5A0;

    /* nop */

loc_0053F5A0: ;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((1) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = eax;
    if (4) _cf = (int)(((ecx) >> (32 - (4))) & 1);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = MEM32(ecx + ebx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebx)) >> 32) & 1);
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0053F5BE; /* je: equal / zero */

loc_0053F5B5: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    goto loc_0053F5CC;

loc_0053F5BE: ;
    edx = MEM32(ecx + 4);
    edi = MEM32(esp + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0053F5CC: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0053F5DC; /* je: equal / zero */

loc_0053F5D0: ;
    ebx = ecx + 0x10;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ecx)) >> 32) & 1);
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0053F5DE;

loc_0053F5DC: ;
    esi = eax;

loc_0053F5DE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_0053F5A0; /* jg: greater (signed >) */

loc_0053F5E2: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0053F5E4: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(eax) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0053F5F0
 * Original: 0x0053F5F0 - 0x0053FA6E (1150 bytes, 402 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053F5F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053F5F0: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x78));
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x84);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x8C);
    eax = ebp;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebx));
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (((4) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((4) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax;
    eax = MEM32(esp + 0x94);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp + -16;
    eax = esp;
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(esi)) >> ((((1) & 31u)) - 1)) & 1);
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(eax) = ecx;
    PUSH32(esp, ecx);
    if (4) _cf = (int)(((esi) >> (32 - (4))) & 1);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = esp;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ebx)) >> 32) & 1);
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = esi;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    PUSH32(esp, 0x0053F637u); RECOMP_ABI_CALL(0x0053F400u, sub_0053F400); /* call 0x0053F400 */

loc_0053F637: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    edi = esi + 0x10;
    ecx = esi;
    MEM32(esp + 0x10) = edi;
    if (CMP_AE(_fa, _fb)) goto loc_0053F689; /* jae: above or equal (unsigned >=) */

loc_0053F647: ;
    edx = MEM32(ecx + -16);
    esi = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0053F659; /* je: equal / zero */

loc_0053F650: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    goto loc_0053F663;

loc_0053F659: ;
    eax = MEM32(ecx + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0053F663: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0053F689; /* jne: not equal / not zero */

loc_0053F667: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0053F674; /* je: equal / zero */

loc_0053F66B: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    goto loc_0053F67E;

loc_0053F674: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + -12) (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0053F67E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0053F689; /* jne: not equal / not zero */

loc_0053F682: ;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xFFFFFFF0u)) >> 32) & 1);
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0053F647; /* jb: below (unsigned <) */

loc_0053F689: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0053F6D3; /* jae: above or equal (unsigned >=) */

loc_0053F68D: ;
    esi = MEM32(ecx);
    /* nop */

loc_0053F690: ;
    edx = MEM32(edi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0053F69F; /* je: equal / zero */

loc_0053F696: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    goto loc_0053F6A9;

loc_0053F69F: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0053F6A9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0053F6CF; /* jne: not equal / not zero */

loc_0053F6AD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0053F6BA; /* je: equal / zero */

loc_0053F6B1: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    goto loc_0053F6C4;

loc_0053F6BA: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0053F6C4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0053F6CF; /* jne: not equal / not zero */

loc_0053F6C8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x10)) >> 32) & 1);
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0053F690; /* jb: below (unsigned <) */

loc_0053F6CF: ;
    MEM32(esp + 0x10) = edi;

loc_0053F6D3: ;
    ebp = ecx;
    esi = edi;
    MEM32(esp + 0x14) = ebp;
    goto loc_0053F6E0;

    /* nop */

loc_0053F6E0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x94)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x94) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0053F79B; /* jae: above or equal (unsigned >=) */

loc_0053F6ED: ;
    /* nop */

loc_0053F6F0: ;
    edx = MEM32(ecx);
    ebx = MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0053F701; /* je: equal / zero */

loc_0053F6F8: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    goto loc_0053F70B;

loc_0053F701: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0053F70B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0053F789; /* jne: not equal / not zero */

loc_0053F70F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0053F71C; /* je: equal / zero */

loc_0053F713: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    goto loc_0053F726;

loc_0053F71C: ;
    edx = MEM32(esi + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0053F726: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0053F79B; /* jne: not equal / not zero */

loc_0053F72A: ;
    eax = edi;
    ebx = eax;
    edx = MEM32(ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x10)) >> 32) & 1);
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = edi;
    edi = MEM32(ebx + 4);
    ebp = MEM32(ebx + 8);
    ebx = MEM32(ebx + 0xC);
    MEM32(esp + 0x84) = ebx;
    MEM32(esp + 0x80) = ebp;
    ebx = esi;
    ebp = MEM32(ebx);
    MEM32(eax) = ebp;
    ebp = MEM32(ebx + 4);
    MEM32(eax + 4) = ebp;
    ebp = MEM32(ebx + 8);
    MEM32(eax + 8) = ebp;
    ebx = MEM32(ebx + 0xC);
    ebp = MEM32(esp + 0x14);
    MEM32(eax + 0xC) = ebx;
    eax = esi;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x80);
    MEM32(eax + 4) = edi;
    edi = MEM32(esp + 0x10);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x84);
    MEM32(eax + 0xC) = edx;

loc_0053F789: ;
    eax = MEM32(esp + 0x94);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x10)) >> 32) & 1);
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0053F6F0; /* jb: below (unsigned <) */

loc_0053F79B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esp + 0x90) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0053F865; /* jbe: below or equal (unsigned <=) */

loc_0053F7A8: ;
    eax = ebp + -16;
    goto loc_0053F7B0;

    /* nop */

loc_0053F7B0: ;
    ebx = MEM32(eax);
    ebp = MEM32(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0053F7C1; /* je: equal / zero */

loc_0053F7B8: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    goto loc_0053F7CB;

loc_0053F7C1: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0053F7CB: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0053F83D; /* jne: not equal / not zero */

loc_0053F7CF: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0053F7DC; /* je: equal / zero */

loc_0053F7D3: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    goto loc_0053F7E6;

loc_0053F7DC: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0053F7E6: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0053F85A; /* jne: not equal / not zero */

loc_0053F7EA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0x10));
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = ecx;
    edx = MEM32(edi);
    ebx = MEM32(edi + 4);
    MEM32(esp + 0x5C) = ebx;
    ebx = MEM32(edi + 8);
    edi = MEM32(edi + 0xC);
    MEM32(esp + 0x64) = edi;
    MEM32(esp + 0x60) = ebx;
    edi = eax;
    ebp = MEM32(edi);
    ebx = ecx;
    MEM32(ebx) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(ebx + 4) = ebp;
    ebp = MEM32(edi + 8);
    MEM32(ebx + 8) = ebp;
    edi = MEM32(edi + 0xC);
    MEM32(ebx + 0xC) = edi;
    edi = eax;
    MEM32(edi) = edx;
    edx = MEM32(esp + 0x5C);
    MEM32(edi + 4) = edx;
    edx = MEM32(esp + 0x60);
    MEM32(edi + 8) = edx;
    edx = MEM32(esp + 0x64);
    MEM32(edi + 0xC) = edx;
    edi = MEM32(esp + 0x10);

loc_0053F83D: ;
    edx = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x90);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(0x10));
    edx = edx - 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x10));
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x14) = edx;
    if (CMP_B(_fa, _fb)) goto loc_0053F7B0; /* jb: below (unsigned <) */

loc_0053F85A: ;
    ebp = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esp + 0x90) (32-bit) */
    _cf = (int)(_fa < _fb);

loc_0053F865: ;
    eax = MEM32(esp + 0x94);
    if (CMP_NE(_fa, _fb)) goto loc_0053F934; /* jne: not equal / not zero */

loc_0053F872: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0053FA5A; /* je: equal / zero */

loc_0053F87A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0053F8CA; /* je: equal / zero */

loc_0053F87E: ;
    edx = ecx;
    eax = MEM32(edx);
    ebx = MEM32(edx + 4);
    MEM32(esp + 0x6C) = ebx;
    ebx = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(esp + 0x74) = edx;
    MEM32(esp + 0x70) = ebx;
    edx = edi;
    ebp = MEM32(edx);
    ebx = ecx;
    MEM32(ebx) = ebp;
    ebp = MEM32(edx + 4);
    MEM32(ebx + 4) = ebp;
    ebp = MEM32(edx + 8);
    MEM32(ebx + 8) = ebp;
    edx = MEM32(edx + 0xC);
    MEM32(ebx + 0xC) = edx;
    edx = edi;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x6C);
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0x70);
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x74);
    MEM32(edx + 0xC) = eax;

loc_0053F8CA: ;
    edx = ecx;
    ebx = edx;
    ebp = MEM32(ebx);
    MEM32(esp + 0x18) = ebp;
    ebp = MEM32(ebx + 4);
    MEM32(esp + 0x1C) = ebp;
    ebp = MEM32(ebx + 8);
    ebx = MEM32(ebx + 0xC);
    eax = esi;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x20) = ebp;
    ebx = eax;
    ebp = MEM32(ebx);
    MEM32(edx) = ebp;
    ebp = MEM32(ebx + 4);
    MEM32(edx + 4) = ebp;
    ebp = MEM32(ebx + 8);
    MEM32(edx + 8) = ebp;
    ebx = MEM32(ebx + 0xC);
    ebp = MEM32(esp + 0x14);
    MEM32(edx + 0xC) = ebx;
    edx = MEM32(esp + 0x18);
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x10)) >> 32) & 1);
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x10)) >> 32) & 1);
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = edi;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x10)) >> 32) & 1);
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0xC) = edx;
    goto loc_0053F6E0;

loc_0053F934: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebp) < (uint32_t)(0x10));
    ebp = ebp - 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x14) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_0053F9FE; /* jne: not equal / not zero */

loc_0053F943: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0x10));
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0053F99E; /* je: equal / zero */

loc_0053F94A: ;
    eax = ebp;
    edx = MEM32(eax);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = eax;
    edx = ecx;
    ebx = MEM32(edx);
    eax = ebp;
    MEM32(eax) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(eax + 4) = ebx;
    ebx = MEM32(edx + 8);
    MEM32(eax + 8) = ebx;
    edx = MEM32(edx + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x28);
    eax = ecx;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(eax + 0xC) = edx;

loc_0053F99E: ;
    eax = ecx;
    edx = MEM32(eax);
    MEM32(esp + 0x38) = edx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x44) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(0x10));
    edi = edi - 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edi;
    ebx = MEM32(edx);
    eax = ecx;
    MEM32(eax) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(eax + 4) = ebx;
    ebx = MEM32(edx + 8);
    MEM32(eax + 8) = ebx;
    edx = MEM32(edx + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x38);
    eax = edi;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x40);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(esp + 0x10) = edi;
    MEM32(eax + 0xC) = edx;
    goto loc_0053F6E0;

loc_0053F9FE: ;
    eax = esi;
    edx = eax;
    ebx = MEM32(edx);
    MEM32(esp + 0x48) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(esp + 0x4C) = ebx;
    ebx = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(esp + 0x54) = edx;
    MEM32(esp + 0x50) = ebx;
    edx = ebp;
    ebx = MEM32(edx);
    MEM32(eax) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(eax + 4) = ebx;
    ebx = MEM32(edx + 8);
    MEM32(eax + 8) = ebx;
    edx = MEM32(edx + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x48);
    eax = ebp;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x50);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x54);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x10)) >> 32) & 1);
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0xC) = edx;
    goto loc_0053F6E0;

loc_0053FA5A: ;
    eax = MEM32(esp + 0x8C);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x78)) >> 32) & 1);
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0053FA70
 * Original: 0x0053FA70 - 0x0053FA9B (43 bytes, 19 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053FA70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053FA70: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0053FA8Cu); RECOMP_ABI_CALL(0x0053F390u, sub_0053F390); /* call 0x0053F390 */

loc_0053FA8C: ;
    eax = esi;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0053FAA0
 * Original: 0x0053FAA0 - 0x0053FB34 (148 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053FAA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053FAA0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053FB2C; /* jle: less or equal (signed <=) */

loc_0053FABB: ;
    eax = edi + esi + -16;
    ebx = eax;
    ecx = MEM32(ebx);
    edx = MEM32(ebx + 4);
    ebp = MEM32(ebx + 8);
    ebx = MEM32(ebx + 0xC);
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x18) = ebp;
    ebx = edi;
    ebp = MEM32(ebx);
    MEM32(eax) = ebp;
    ebp = MEM32(ebx + 4);
    MEM32(eax + 4) = ebp;
    ebp = MEM32(ebx + 8);
    MEM32(eax + 8) = ebp;
    ebx = MEM32(ebx + 0xC);
    MEM32(eax + 0xC) = ebx;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    eax = esi + -16;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edi;
    PUSH32(esp, 0x0053FB1Cu); RECOMP_ABI_CALL(0x0053F140u, sub_0053F140); /* call 0x0053F140 */

loc_0053FB1C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0053FABB; /* jg: greater (signed >) */

loc_0053FB2C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0053FB40
 * Original: 0x0053FB40 - 0x0053FC07 (199 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053FB40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053FB40: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0053FC02; /* je: equal / zero */

loc_0053FB54: ;
    esi = edx + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0053FC02; /* je: equal / zero */

loc_0053FB5F: ;
    ebx = esi + 0x10;

loc_0053FB62: ;
    edi = MEM32(esi);
    ecx = MEM32(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0053FB73; /* je: equal / zero */

loc_0053FB6A: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    goto loc_0053FB7D;

loc_0053FB73: ;
    eax = MEM32(ebx + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0053FB7D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0053FB9E; /* je: equal / zero */

loc_0053FB81: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0053FBF0; /* je: equal / zero */

loc_0053FB85: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0053FBF0; /* je: equal / zero */

loc_0053FB89: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = esi;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    goto loc_0053FBE4;

loc_0053FB9E: ;
    ebp = esi;
    ecx = esi;

loc_0053FBA2: ;
    edx = MEM32(ecx + -16);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0x10));
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0053FBB5; /* je: equal / zero */

loc_0053FBAC: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    goto loc_0053FBC1;

loc_0053FBB5: ;
    eax = MEM32(ecx + 4);
    edx = MEM32(ebx + -12);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0053FBC1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0053FBC9; /* je: equal / zero */

loc_0053FBC5: ;
    ebp = ecx;
    goto loc_0053FBA2;

loc_0053FBC9: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0053FBEC; /* je: equal / zero */

loc_0053FBCD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0053FBEC; /* je: equal / zero */

loc_0053FBD1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = esi;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebp;

loc_0053FBE4: ;
    PUSH32(esp, 0x0053FBE9u); RECOMP_ABI_CALL(0x0053F230u, sub_0053F230); /* call 0x0053F230 */

loc_0053FBE9: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0053FBEC: ;
    edx = MEM32(esp + 0x14);

loc_0053FBF0: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x10)) >> 32) & 1);
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x10)) >> 32) & 1);
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0053FB62; /* jne: not equal / not zero */

loc_0053FC02: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0053FC10
 * Original: 0x0053FC10 - 0x0053FCA9 (153 bytes, 63 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053FC10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053FC10: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0x2C);
    ebp = MEM32(edi + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = ecx;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(edi + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x38) = ebx;
    PUSH32(esp, 0x0053FC50u); RECOMP_ABI_CALL(0x0053F580u, sub_0053F580); /* call 0x0053F580 */

loc_0053FC50: ;
    esi = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053FC9D; /* je: equal / zero */

loc_0053FC5B: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x28) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053FC9D; /* jne: not equal / not zero */

loc_0053FC63: ;
    ebp = MEM32(esp + 0x2C);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053FC9D; /* jne: not equal / not zero */

loc_0053FC6C: ;
    /* nop */

loc_0053FC70: ;
    ecx = MEM32(esp + 0x28);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053FC91; /* jne: not equal / not zero */

loc_0053FC78: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053FC91; /* jne: not equal / not zero */

loc_0053FC7D: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0053FC85u); RECOMP_ABI_CALL(0x0053ED80u, sub_0053ED80); /* call 0x0053ED80 */

loc_0053FC85: ;
    SET_LO8(ebx, LO8(ebx) | LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = MEM32(edi + 0x14);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053FC70; /* jne: not equal / not zero */

loc_0053FC91: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0053FC9D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0053FCB0
 * Original: 0x0053FCB0 - 0x0053FCCB (27 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053FCB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053FCB0: ;
    SET_LO8(edx, MEM8(0x6C2C68));
    SET_LO8(eax, 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053FCC8; /* je: equal / zero */

loc_0053FCBC: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0053FCC8u); RECOMP_ABI_CALL(0x0053FC10u, sub_0053FC10); /* call 0x0053FC10 */

loc_0053FCC8: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053FCD0
 * Original: 0x0053FCD0 - 0x0053FCF6 (38 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053FCD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053FCD0: ;
    eax = MEM32(esp + 8);
    edx = ecx;
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edx;
    PUSH32(esp, 0x0053FCE3u); RECOMP_ABI_CALL(0x0053E920u, sub_0053E920); /* call 0x0053E920 */

loc_0053FCE3: ;
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = 1;
    ecx = edx;
    g_seh_ebp = ebp; sub_0053FC10(); return; /* tail jmp 0x0053FC10 */

}

/**
 * sub_0053FD00
 * Original: 0x0053FD00 - 0x0053FD16 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053FD00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053FD00: ;
    SET_LO8(edx, MEM8(0x6C2C6A));
    SET_LO8(eax, 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053FD15; /* je: equal / zero */

loc_0053FD0C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x0053FD15u); RECOMP_ABI_CALL(0x0053FC10u, sub_0053FC10); /* call 0x0053FC10 */

loc_0053FD15: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0053FD20
 * Original: 0x0053FD20 - 0x0053FD70 (80 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053FD20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053FD20: ;
    _fa = (uint32_t)(MEM8(0x6C2C6A)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x6C2C6A), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0053FD32; /* jne: not equal / not zero */

loc_0053FD2C: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0053FD32: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0053FD49; /* je: equal / zero */

loc_0053FD40: ;
    PUSH32(esp, 0x0053FD45u); RECOMP_ABI_CALL(0x0053FC10u, sub_0053FC10); /* call 0x0053FC10 */

loc_0053FD45: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0053FD49: ;
    PUSH32(esp, 0x0053FD4Eu); RECOMP_ABI_CALL(0x0053FC10u, sub_0053FC10); /* call 0x0053FC10 */

loc_0053FD4E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053FD67; /* jne: not equal / not zero */

loc_0053FD52: ;
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    ecx = esi;
    PUSH32(esp, 0x0053FD5Du); RECOMP_ABI_CALL(0x0053FC10u, sub_0053FC10); /* call 0x0053FC10 */

loc_0053FD5D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053FD67; /* jne: not equal / not zero */

loc_0053FD61: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0053FD67: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053FD70
 * Original: 0x0053FD70 - 0x0053FDC0 (80 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053FD70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053FD70: ;
    _fa = (uint32_t)(MEM8(0x6C2C6A)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x6C2C6A), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0053FD82; /* jne: not equal / not zero */

loc_0053FD7C: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0053FD82: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 5);
    if (CMP_EQ(_fa, _fb)) goto loc_0053FD99; /* je: equal / zero */

loc_0053FD90: ;
    PUSH32(esp, 0x0053FD95u); RECOMP_ABI_CALL(0x0053FC10u, sub_0053FC10); /* call 0x0053FC10 */

loc_0053FD95: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0053FD99: ;
    PUSH32(esp, 0x0053FD9Eu); RECOMP_ABI_CALL(0x0053FC10u, sub_0053FC10); /* call 0x0053FC10 */

loc_0053FD9E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053FDB7; /* jne: not equal / not zero */

loc_0053FDA2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 9);
    ecx = esi;
    PUSH32(esp, 0x0053FDADu); RECOMP_ABI_CALL(0x0053FC10u, sub_0053FC10); /* call 0x0053FC10 */

loc_0053FDAD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053FDB7; /* jne: not equal / not zero */

loc_0053FDB1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0053FDB7: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053FDC0
 * Original: 0x0053FDC0 - 0x0053FE10 (80 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053FDC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053FDC0: ;
    _fa = (uint32_t)(MEM8(0x6C2C6A)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x6C2C6A), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0053FDD2; /* jne: not equal / not zero */

loc_0053FDCC: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0053FDD2: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 6);
    if (CMP_EQ(_fa, _fb)) goto loc_0053FDE9; /* je: equal / zero */

loc_0053FDE0: ;
    PUSH32(esp, 0x0053FDE5u); RECOMP_ABI_CALL(0x0053FC10u, sub_0053FC10); /* call 0x0053FC10 */

loc_0053FDE5: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0053FDE9: ;
    PUSH32(esp, 0x0053FDEEu); RECOMP_ABI_CALL(0x0053FC10u, sub_0053FC10); /* call 0x0053FC10 */

loc_0053FDEE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053FE07; /* jne: not equal / not zero */

loc_0053FDF2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    ecx = esi;
    PUSH32(esp, 0x0053FDFDu); RECOMP_ABI_CALL(0x0053FC10u, sub_0053FC10); /* call 0x0053FC10 */

loc_0053FDFD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053FE07; /* jne: not equal / not zero */

loc_0053FE01: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0053FE07: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053FE10
 * Original: 0x0053FE10 - 0x0053FE60 (80 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053FE10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053FE10: ;
    _fa = (uint32_t)(MEM8(0x6C2C6A)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x6C2C6A), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0053FE22; /* jne: not equal / not zero */

loc_0053FE1C: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0053FE22: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 7);
    if (CMP_EQ(_fa, _fb)) goto loc_0053FE39; /* je: equal / zero */

loc_0053FE30: ;
    PUSH32(esp, 0x0053FE35u); RECOMP_ABI_CALL(0x0053FC10u, sub_0053FC10); /* call 0x0053FC10 */

loc_0053FE35: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0053FE39: ;
    PUSH32(esp, 0x0053FE3Eu); RECOMP_ABI_CALL(0x0053FC10u, sub_0053FC10); /* call 0x0053FC10 */

loc_0053FE3E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053FE57; /* jne: not equal / not zero */

loc_0053FE42: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xB);
    ecx = esi;
    PUSH32(esp, 0x0053FE4Du); RECOMP_ABI_CALL(0x0053FC10u, sub_0053FC10); /* call 0x0053FC10 */

loc_0053FE4D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053FE57; /* jne: not equal / not zero */

loc_0053FE51: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0053FE57: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0053FE60
 * Original: 0x0053FE60 - 0x0053FEA0 (64 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053FE60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053FE60: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0x1F;
    edi = edi;

loc_0053FE70: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053FE81; /* je: equal / zero */

loc_0053FE74: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0053FE7Au); RECOMP_ABI_CALL(0x0053DC70u, sub_0053DC70); /* call 0x0053DC70 */

loc_0053FE7A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053FE8D; /* jne: not equal / not zero */

loc_0053FE81: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0053FE89u); RECOMP_ABI_CALL(0x0053FCB0u, sub_0053FCB0); /* call 0x0053FCB0 */

loc_0053FE89: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053FE98; /* jne: not equal / not zero */

loc_0053FE8D: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_0053FE70; /* jns: not sign (positive) */

loc_0053FE90: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0053FE98: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0053FEA0
 * Original: 0x0053FEA0 - 0x0053FEDD (61 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053FEA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053FEA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0053FEB0: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x0053FEB8u); RECOMP_ABI_CALL(0x0053FCB0u, sub_0053FCB0); /* call 0x0053FCB0 */

loc_0053FEB8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053FECE; /* je: equal / zero */

loc_0053FEBC: ;
    eax = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    PUSH32(esp, 0x0053FECAu); RECOMP_ABI_CALL(0x0061AEF0u, sub_0061AEF0); /* call 0x0061AEF0 */

loc_0053FECA: ;
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0053FECE: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053FEB0; /* jl: less (signed <) */

loc_0053FED4: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    edx = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0053FEE0
 * Original: 0x0053FEE0 - 0x0053FF0F (47 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053FEE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053FEE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0053FEE6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0053FEECu); RECOMP_ABI_CALL(0x0053D640u, sub_0053D640); /* call 0x0053D640 */

loc_0053FEEC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053FEFF; /* je: equal / zero */

loc_0053FEF3: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0053FEFBu); RECOMP_ABI_CALL(0x0053FCB0u, sub_0053FCB0); /* call 0x0053FCB0 */

loc_0053FEFB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053FF0A; /* jne: not equal / not zero */

loc_0053FEFF: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053FEE6; /* jl: less (signed <) */

loc_0053FF05: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0053FF0A: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0053FF10
 * Original: 0x0053FF10 - 0x0053FF3F (47 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053FF10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053FF10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0053FF16: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0053FF1Cu); RECOMP_ABI_CALL(0x0053D660u, sub_0053D660); /* call 0x0053D660 */

loc_0053FF1C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053FF2F; /* je: equal / zero */

loc_0053FF23: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0053FF2Bu); RECOMP_ABI_CALL(0x0053FCB0u, sub_0053FCB0); /* call 0x0053FCB0 */

loc_0053FF2B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053FF3A; /* jne: not equal / not zero */

loc_0053FF2F: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053FF16; /* jl: less (signed <) */

loc_0053FF35: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0053FF3A: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0053FF40
 * Original: 0x0053FF40 - 0x0053FF6F (47 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053FF40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053FF40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0053FF46: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0053FF4Cu); RECOMP_ABI_CALL(0x0053D680u, sub_0053D680); /* call 0x0053D680 */

loc_0053FF4C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053FF5F; /* je: equal / zero */

loc_0053FF53: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0053FF5Bu); RECOMP_ABI_CALL(0x0053FCB0u, sub_0053FCB0); /* call 0x0053FCB0 */

loc_0053FF5B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053FF6A; /* jne: not equal / not zero */

loc_0053FF5F: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053FF46; /* jl: less (signed <) */

loc_0053FF65: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0053FF6A: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0053FF70
 * Original: 0x0053FF70 - 0x0053FF9F (47 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053FF70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053FF70: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0053FF76: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0053FF7Cu); RECOMP_ABI_CALL(0x0053D620u, sub_0053D620); /* call 0x0053D620 */

loc_0053FF7C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053FF8F; /* je: equal / zero */

loc_0053FF83: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0053FF8Bu); RECOMP_ABI_CALL(0x0053FCB0u, sub_0053FCB0); /* call 0x0053FCB0 */

loc_0053FF8B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053FF9A; /* jne: not equal / not zero */

loc_0053FF8F: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053FF76; /* jl: less (signed <) */

loc_0053FF95: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0053FF9A: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0053FFA0
 * Original: 0x0053FFA0 - 0x0053FFCF (47 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053FFA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053FFA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0053FFA6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0053FFACu); RECOMP_ABI_CALL(0x0053D600u, sub_0053D600); /* call 0x0053D600 */

loc_0053FFAC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053FFBF; /* je: equal / zero */

loc_0053FFB3: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0053FFBBu); RECOMP_ABI_CALL(0x0053FCB0u, sub_0053FCB0); /* call 0x0053FCB0 */

loc_0053FFBB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053FFCA; /* jne: not equal / not zero */

loc_0053FFBF: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053FFA6; /* jl: less (signed <) */

loc_0053FFC5: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0053FFCA: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0053FFD0
 * Original: 0x0053FFD0 - 0x005400E2 (274 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053FFD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0053FFD0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    eax = edi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0054007F; /* jle: less or equal (signed <=) */

loc_0053FFF3: ;
    esi = MEM32(esp + 0x24);

loc_0053FFF7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0054009F; /* jle: less or equal (signed <=) */

loc_0053FFFF: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edi;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00540014u); RECOMP_ABI_CALL(0x0053F5F0u, sub_0053F5F0); /* call 0x0053F5F0 */

loc_00540014: ;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x20);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ecx = ecx & 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 0xFFFFFFF0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    if (CMP_GE(_fas, _fbs)) goto loc_0054005A; /* jge: greater or equal (signed >=) */

loc_00540042: ;
    ecx = MEM32(esp + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    PUSH32(esp, 0x00540054u); RECOMP_ABI_CALL(0x0053FFD0u, sub_0053FFD0); /* call 0x0053FFD0 */

loc_00540054: ;
    ebx = MEM32(esp + 0x24);
    goto loc_0054006C;

loc_0054005A: ;
    ecx = esp;
    MEM32(ecx) = edi;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = eax;
    PUSH32(esp, 0x00540068u); RECOMP_ABI_CALL(0x0053FFD0u, sub_0053FFD0); /* call 0x0053FFD0 */

loc_00540068: ;
    edi = MEM32(esp + 0x20);

loc_0054006C: ;
    eax = edi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0053FFF7; /* jg: greater (signed >) */

loc_0054007F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00540097; /* jle: less or equal (signed <=) */

loc_00540084: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edi;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    PUSH32(esp, 0x00540094u); RECOMP_ABI_CALL(0x0053FB40u, sub_0053FB40); /* call 0x0053FB40 */

loc_00540094: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00540097: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0054009F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0054007F; /* jle: less or equal (signed <=) */

loc_005400A4: ;
    edx = edi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edx & 0xFFFFFFF0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005400C7; /* jle: less or equal (signed <=) */

loc_005400B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edi;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    PUSH32(esp, 0x005400C4u); RECOMP_ABI_CALL(0x0053F4E0u, sub_0053F4E0); /* call 0x0053F4E0 */

loc_005400C4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005400C7: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edi;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    PUSH32(esp, 0x005400D7u); RECOMP_ABI_CALL(0x0053FAA0u, sub_0053FAA0); /* call 0x0053FAA0 */

loc_005400D7: ;
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

}

/**
 * sub_005400F0
 * Original: 0x005400F0 - 0x00540138 (72 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005400F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005400F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esi) = 0x64E8CC;
    if (CMP_EQ(_fa, _fb)) goto loc_0054011A; /* je: equal / zero */

loc_00540104: ;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054010Du); RECOMP_ABI_CALL(0x00577350u, sub_00577350); /* call 0x00577350 */

loc_0054010D: ;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00540104; /* jne: not equal / not zero */

loc_0054011A: ;
    eax = MEM32(esi + 0x10);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054012C; /* je: equal / zero */

loc_00540123: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00540129u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00540129: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0054012C: ;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00540140
 * Original: 0x00540140 - 0x0054015E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00540140: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00540148u); RECOMP_ABI_CALL(0x005400F0u, sub_005400F0); /* call 0x005400F0 */

loc_00540148: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00540158; /* je: equal / zero */

loc_0054014F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00540155u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00540155: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00540158: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00540160
 * Original: 0x00540160 - 0x00540304 (420 bytes, 164 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00540160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00540160: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x629BC0);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    esi = ecx;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax);
    MEM32(ebp + -32) = ecx;
    edx = MEM32(eax + 4);
    MEM32(ebp + -28) = edx;
    ecx = MEM32(eax + 8);
    MEM32(ebp + -24) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(ebp + -20) = edx;
    edx = MEM32(esi + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005401A8; /* jne: not equal / not zero */

loc_005401A4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_005401B0;

loc_005401A8: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_005401B0: ;
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_005403EA(); return; } /* je: equal / zero */

loc_005401BB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005401C3; /* jne: not equal / not zero */

loc_005401BF: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_005401CB;

loc_005401C3: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_005401CB: ;
    ebx = 0xFFFFFFF;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_005401F0; /* jae: above or equal (unsigned >=) */

loc_005401D6: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005401DDu); RECOMP_ABI_CALL(0x00439FC0u, sub_00439FC0); /* call 0x00439FC0 */

loc_005401DD: ;
    ecx = MEM32(ebp + -12);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_005401F0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005401F8; /* jne: not equal / not zero */

loc_005401F4: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00540200;

loc_005401F8: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_00540200: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_00540319(); return; } /* jae: above or equal (unsigned >=) */

loc_0054020A: ;
    ecx = eax;
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = 0xFFFFFFF;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0054021D; /* jae: above or equal (unsigned >=) */

loc_00540219: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0054021F;

loc_0054021D: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0054021F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00540227; /* jne: not equal / not zero */

loc_00540223: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0054022F;

loc_00540227: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_0054022F: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00540247; /* jae: above or equal (unsigned >=) */

loc_00540235: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0054023D; /* jne: not equal / not zero */

loc_00540239: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00540245;

loc_0054023D: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_00540245: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00540247: ;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -36) = eax;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00540253u); RECOMP_ABI_CALL(0x005772A0u, sub_005772A0); /* call 0x005772A0 */

loc_00540253: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -40) = eax;
    MEM32(ebp + -4) = 0;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -44) = eax;
    ebx = MEM32(ebp + 8);
    MEM32(eax) = ebx;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -48) = eax;
    ecx = MEM32(esi + 4);
    MEM32(ebp + -52) = ecx;
    MEM32(eax) = ecx;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00540281u); RECOMP_ABI_CALL(0x0053F550u, sub_0053F550); /* call 0x0053F550 */

loc_00540281: ;
    MEM32(ebp + -56) = eax;
    ecx = ebp + -32;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00540291u); RECOMP_ABI_CALL(0x0053FA70u, sub_0053FA70); /* call 0x0053FA70 */

loc_00540291: ;
    MEM32(ebp + -56) = eax;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -60) = eax;
    ecx = MEM32(esi + 8);
    MEM32(ebp + -64) = ecx;
    MEM32(eax) = ecx;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -68) = eax;
    MEM32(eax) = ebx;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005402B2u); RECOMP_ABI_CALL(0x0053F550u, sub_0053F550); /* call 0x0053F550 */

loc_005402B2: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005402C4; /* jne: not equal / not zero */

loc_005402C0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_005402CC;

loc_005402C4: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_005402CC: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005402DB; /* je: equal / zero */

loc_005402D2: ;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005402D8u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005402D8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005402DB: ;
    edx = MEM32(ebp + -36);
    eax = MEM32(ebp + -40);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = edx;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = edi;
    MEM32(esi + 4) = eax;
    ecx = MEM32(ebp + -12);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00540304
 * Original: 0x00540304 - 0x00540310 (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540304(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00540304: ;
    eax = MEM32(ebp + -40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054030Du); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0054030D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_00540310(); return; /* fallthrough 0x00540310 */

}

/**
 * sub_00540310
 * Original: 0x00540310 - 0x005403FD (237 bytes, 100 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00540310: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00540319u); RECOMP_ABI_CALL(0x0061A356u, sub_0061A356); /* call 0x0061A356 */

loc_00540319: ;
    eax = MEM32(esi + 8);
    MEM32(ebp + -72) = eax;
    ecx = eax;
    ebx = MEM32(ebp + 8);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00540390; /* jae: above or equal (unsigned >=) */

loc_0054032D: ;
    ecx = edi;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -76) = ecx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = eax;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    ecx = esi;
    PUSH32(esp, 0x00540349u); RECOMP_ABI_CALL(0x0053F550u, sub_0053F550); /* call 0x0053F550 */

loc_00540349: ;
    MEM32(ebp + -4) = 2;
    ecx = MEM32(esi + 8);
    eax = ecx;
    MEM32(ebp + -80) = eax;
    MEM32(ebp + -84) = eax;
    edx = ebp + -32;
    PUSH32(esp, edx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0054036Fu); RECOMP_ABI_CALL(0x0053FA70u, sub_0053FA70); /* call 0x0053FA70 */

loc_0054036F: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    ecx = MEM32(ebp + -76);
    edi = MEM32(esi + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = edi;
    esi = edi;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax) = esi;
    goto loc_005403DD;

loc_00540390: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = eax;
    PUSH32(esp, ecx);
    ecx = esp;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edi;
    MEM32(ebp + -76) = edx;
    edi = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx) = edi;
    ecx = esi;
    PUSH32(esp, 0x005403AEu); RECOMP_ABI_CALL(0x0053F550u, sub_0053F550); /* call 0x0053F550 */

loc_005403AE: ;
    MEM32(esi + 8) = eax;
    PUSH32(esp, ecx);
    eax = esp;
    ecx = MEM32(ebp + -72);
    MEM32(eax) = ecx;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edi;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    edx = ebp + -88;
    PUSH32(esp, edx);
    PUSH32(esp, 0x005403CCu); RECOMP_ABI_CALL(0x0053F350u, sub_0053F350); /* call 0x0053F350 */

loc_005403CC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    ecx = MEM32(ebp + -76);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;

loc_005403DD: ;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    PUSH32(esp, 0x005403E7u); RECOMP_ABI_CALL(0x0053EED0u, sub_0053EED0); /* call 0x0053EED0 */

loc_005403E7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + -12);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00540319
 * Original: 0x00540319 - 0x005403FD (228 bytes, 97 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540319(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00540319: ;
    eax = MEM32(esi + 8);
    MEM32(ebp + -72) = eax;
    ecx = eax;
    ebx = MEM32(ebp + 8);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00540390; /* jae: above or equal (unsigned >=) */

loc_0054032D: ;
    ecx = edi;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -76) = ecx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = eax;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    ecx = esi;
    PUSH32(esp, 0x00540349u); RECOMP_ABI_CALL(0x0053F550u, sub_0053F550); /* call 0x0053F550 */

loc_00540349: ;
    MEM32(ebp + -4) = 2;
    ecx = MEM32(esi + 8);
    eax = ecx;
    MEM32(ebp + -80) = eax;
    MEM32(ebp + -84) = eax;
    edx = ebp + -32;
    PUSH32(esp, edx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0054036Fu); RECOMP_ABI_CALL(0x0053FA70u, sub_0053FA70); /* call 0x0053FA70 */

loc_0054036F: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    ecx = MEM32(ebp + -76);
    edi = MEM32(esi + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = edi;
    esi = edi;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax) = esi;
    goto loc_005403DD;

loc_00540390: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = eax;
    PUSH32(esp, ecx);
    ecx = esp;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edi;
    MEM32(ebp + -76) = edx;
    edi = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx) = edi;
    ecx = esi;
    PUSH32(esp, 0x005403AEu); RECOMP_ABI_CALL(0x0053F550u, sub_0053F550); /* call 0x0053F550 */

loc_005403AE: ;
    MEM32(esi + 8) = eax;
    PUSH32(esp, ecx);
    eax = esp;
    ecx = MEM32(ebp + -72);
    MEM32(eax) = ecx;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edi;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    edx = ebp + -88;
    PUSH32(esp, edx);
    PUSH32(esp, 0x005403CCu); RECOMP_ABI_CALL(0x0053F350u, sub_0053F350); /* call 0x0053F350 */

loc_005403CC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    ecx = MEM32(ebp + -76);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;

loc_005403DD: ;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    PUSH32(esp, 0x005403E7u); RECOMP_ABI_CALL(0x0053EED0u, sub_0053EED0); /* call 0x0053EED0 */

loc_005403E7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + -12);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_005403EA
 * Original: 0x005403EA - 0x005403FD (19 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005403EA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005403EA: ;
    ecx = MEM32(ebp + -12);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00540400
 * Original: 0x00540400 - 0x0054041A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540400(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00540400: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x64E8CC;
    MEM8(eax + 4) = LO8(ecx);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00540420
 * Original: 0x00540420 - 0x00540486 (102 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00540420: ;
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0054042F; /* jne: not equal / not zero */

loc_0054042B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00540437;

loc_0054042F: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_00540437: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054046B; /* je: equal / zero */

loc_0054043B: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0054046B; /* jae: above or equal (unsigned >=) */

loc_00540447: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0xC);
    edi = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0054045Du); RECOMP_ABI_CALL(0x0053F390u, sub_0053F390); /* call 0x0053F390 */

loc_0054045D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0054046B: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = eax;
    ecx = esi;
    PUSH32(esp, 0x00540481u); RECOMP_ABI_CALL(0x00540160u, sub_00540160); /* call 0x00540160 */

loc_00540481: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00540490
 * Original: 0x00540490 - 0x00540694 (516 bytes, 167 insns)
 * Category: game_io
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00540490: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0054068A; /* jne: not equal / not zero */

loc_005404A8: ;
    PUSH32(esp, 0xA);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x64E62C);
    PUSH32(esp, 0x58);
    MEM32(esp + 0x3C) = 0x16;
    MEM32(esp + 0x40) = 0x200;
    MEM32(esp + 0x48) = edi;
    MEM32(esp + 0x4C) = edi;
    MEM32(esp + 0x50) = edi;
    PUSH32(esp, 0x005404D4u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005404D4: ;
    ebx = MEM32(esp + 0x5C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 6);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x62DF21);
    ecx = esp + 0x40;
    MEM32(esp + 0x48) = eax;
    PUSH32(esp, 0x005404F2u); RECOMP_ABI_CALL(0x005E3470u, sub_005E3470); /* call 0x005E3470 */

loc_005404F2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00540673; /* je: equal / zero */

loc_005404FA: ;
    eax = MEM32(esp + 0x44);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x50) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_00540620; /* jle: less or equal (signed <=) */

loc_00540510: ;
    eax = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x3C);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebp);
    eax = ecx + eax * 4;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00540663; /* je: equal / zero */

loc_00540529: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00540663; /* je: equal / zero */

loc_00540535: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00540548u); RECOMP_ABI_CALL(0x0053EC50u, sub_0053EC50); /* call 0x0053EC50 */

loc_00540548: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054060F; /* je: equal / zero */

loc_00540550: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    edx = esp + 0x20;
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, edx);
    ecx = esi + 0xC;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x30) = edi;
    PUSH32(esp, 0x00540575u); RECOMP_ABI_CALL(0x00540420u, sub_00540420); /* call 0x00540420 */

loc_00540575: ;
    ecx = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x3C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebp);
    ebx = MEM32(esi + 0x14);
    eax = 2;
    ecx = edx + ecx * 4 + 8;
    /* nop */

loc_00540590: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005405A7; /* je: equal / zero */

loc_00540596: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005405A7; /* je: equal / zero */

loc_0054059B: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00540590; /* jl: less (signed <) */

loc_005405A7: ;
    PUSH32(esp, 0x79);
    eax = edi * 8;
    PUSH32(esp, 0x64E924);
    PUSH32(esp, eax);
    MEM32(ebx + -8) = edi;
    PUSH32(esp, 0x005405BEu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005405BE: ;
    ebp = edi + edi + 2;
    esi = 2;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    MEM32(ebx + -4) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00540607; /* jle: less or equal (signed <=) */

loc_005405D3: ;
    ecx = MEM32(esp + 0x40);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x50));
    edx = MEM32(esp + 0x3C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx + ecx * 4;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(ebx + -4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x005405FBu); RECOMP_ABI_CALL(0x0053EAF0u, sub_0053EAF0); /* call 0x0053EAF0 */

loc_005405FB: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005405D3; /* jl: less (signed <) */

loc_00540605: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00540607: ;
    esi = MEM32(esp + 0x10);
    ebp = MEM32(esp + 0x50);

loc_0054060F: ;
    eax = MEM32(esp + 0x1C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x50) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_00540510; /* jl: less (signed <) */

loc_00540620: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esp + 0x50);
    PUSH32(esp, edx);
    edx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = esp;
    MEM32(edx) = eax;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x00540642u); RECOMP_ABI_CALL(0x0053FFD0u, sub_0053FFD0); /* call 0x0053FFD0 */

loc_00540642: ;
    eax = MEM32(esp + 0x5C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x30;
    MEM8(esi + 4) = 1;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x00540659u); RECOMP_ABI_CALL(0x005E33F0u, sub_005E33F0); /* call 0x005E33F0 */

loc_00540659: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00540663: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x64E900);
    PUSH32(esp, 0x0054066Eu); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_0054066E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0054060F;

loc_00540673: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64E8D0);
    PUSH32(esp, 0x0054067Eu); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_0054067E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x30;
    PUSH32(esp, 0x0054068Au); RECOMP_ABI_CALL(0x005E33F0u, sub_005E33F0); /* call 0x005E33F0 */

loc_0054068A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005406A0
 * Original: 0x005406A0 - 0x005406A9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005406A0(void)
{

loc_005406A0: ;
    eax = ecx;
    MEM32(eax) = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_005406B0
 * Original: 0x005406B0 - 0x005406DD (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005406B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005406B0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = 1;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = 1;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = edx;
    MEM8(eax + 0x24) = LO8(ecx);
    MEM8(eax + 0x2C) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_005406E0
 * Original: 0x005406E0 - 0x005406E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005406E0(void)
{

loc_005406E0: ;
    SET_LO8(eax, MEM8(ecx + 0x2C));
    esp += 4; return; /* ret */

}

/**
 * sub_005406F0
 * Original: 0x005406F0 - 0x0054073A (74 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005406F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005406F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00540700;

    /* nop */

loc_00540700: ;
    eax = MEM32(esi * 4 + 0x6631F0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054070Eu); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_0054070E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054072F; /* je: equal / zero */

loc_00540715: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00540700; /* jl: less (signed <) */

loc_0054071B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x64E930);
    PUSH32(esp, 0x00540726u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_00540726: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0054072F: ;
    POP32(esp, edi);
    MEM32(ebx) = esi;
    MEM32(ebx + 4) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00540740
 * Original: 0x00540740 - 0x0054074B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540740(void)
{

loc_00540740: ;
    eax = MEM32(ecx + 0x20);
    eax = MEM32(eax * 4 + 0x6C2C70);
    esp += 4; return; /* ret */

}

/**
 * sub_00540750
 * Original: 0x00540750 - 0x0054075B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540750(void)
{

loc_00540750: ;
    eax = MEM32(ecx + 0x20);
    eax = MEM32(eax * 4 + 0x6C2C74);
    esp += 4; return; /* ret */

}

/**
 * sub_00540760
 * Original: 0x00540760 - 0x0054076B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540760(void)
{

loc_00540760: ;
    eax = MEM32(ecx + 0x20);
    eax = MEM32(eax * 4 + 0x6C2C78);
    esp += 4; return; /* ret */

}

/**
 * sub_00540770
 * Original: 0x00540770 - 0x0054077B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540770(void)
{

loc_00540770: ;
    eax = MEM32(ecx + 0x20);
    eax = MEM32(eax * 4 + 0x6C2C7C);
    esp += 4; return; /* ret */

}

/**
 * sub_00540780
 * Original: 0x00540780 - 0x0054078B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540780(void)
{

loc_00540780: ;
    eax = MEM32(ecx + 0x20);
    eax = MEM32(eax * 4 + 0x6C2C84);
    esp += 4; return; /* ret */

}

/**
 * sub_00540790
 * Original: 0x00540790 - 0x0054079B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540790(void)
{

loc_00540790: ;
    eax = MEM32(ecx + 0x20);
    eax = MEM32(eax * 4 + 0x6C2C88);
    esp += 4; return; /* ret */

}

/**
 * sub_005407A0
 * Original: 0x005407A0 - 0x005407AB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005407A0(void)
{

loc_005407A0: ;
    eax = MEM32(ecx + 0x20);
    eax = MEM32(eax * 4 + 0x6C2C8C);
    esp += 4; return; /* ret */

}

/**
 * sub_005407B0
 * Original: 0x005407B0 - 0x005407BD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005407B0(void)
{

loc_005407B0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x80) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005407C0
 * Original: 0x005407C0 - 0x00540945 (389 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005407C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005407C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x6C32C8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if ((_fa == 0)) goto loc_005407F9; /* je: equal / zero */

loc_005407DB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_005407ED; /* je: equal / zero */

loc_005407DE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x64E9C0);
    if ((_fa != 0)) goto loc_005407FE; /* jne: not equal / not zero */

loc_005407E6: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    goto loc_00540803;

loc_005407ED: ;
    PUSH32(esp, 0x64E9BC);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    goto loc_00540803;

loc_005407F9: ;
    PUSH32(esp, 0x64E9B8);

loc_005407FE: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);

loc_00540803: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00540808u); RECOMP_ABI_CALL(0x0061985Du, sub_0061985D); /* call 0x0061985D */

loc_00540808: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64E9B4);
    PUSH32(esp, 0x64E9AC);
    PUSH32(esp, 0x640ED0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00540821u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0054081Fu); } /* indirect call */
    }

loc_00540821: ;
    ecx = MEM32(esi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64E9B4);
    PUSH32(esp, 0x64E9A4);
    MEM32(esi + 8) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, 0x640ED0);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0054083Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00540838u); } /* indirect call */
    }

loc_0054083A: ;
    ecx = MEM32(esi + 8);
    MEM32(esi + 0xC) = eax;
    MEM32(ecx + 0x4C) = 0;
    edx = MEM32(esi + 0xC);
    MEM32(edx + 0x4C) = 1;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00540853: ;
    eax = MEM32(edi + 0x6736B8);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6335D8);
    edx = esp + 0x24;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00540873u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00540873: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00540883u); RECOMP_ABI_CALL(0x005420B0u, sub_005420B0); /* call 0x005420B0 */

loc_00540883: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xC (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00540853; /* jb: below (unsigned <) */

loc_0054088B: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00540890: ;
    ecx = MEM32(edi + 0x6736C4);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x6335D8);
    eax = esp + 0x24;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005408B0u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_005408B0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005408C0u); RECOMP_ABI_CALL(0x005420B0u, sub_005420B0); /* call 0x005420B0 */

loc_005408C0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00540890; /* jb: below (unsigned <) */

loc_005408C8: ;
    edi = esi + 0x18;
    ebx = 0x1A;

loc_005408D0: ;
    PUSH32(esp, 0x9D);
    PUSH32(esp, 0x64E998);
    PUSH32(esp, 0x1F4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005408E4u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005408E4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005408F4; /* je: equal / zero */

loc_005408EB: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005408F2u); RECOMP_ABI_CALL(0x00541320u, sub_00541320); /* call 0x00541320 */

loc_005408F2: ;
    goto loc_005408F6;

loc_005408F4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005408F6: ;
    MEM32(edi) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005408D0; /* jne: not equal / not zero */

loc_005408FE: ;
    eax = MEM32(esi + 0x88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0054093E; /* jne: not equal / not zero */

loc_00540908: ;
    PUSH32(esp, 0xA1);
    PUSH32(esp, 0x64E998);
    PUSH32(esp, 0x38);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00540919u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00540919: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00540936; /* je: equal / zero */

loc_00540920: ;
    PUSH32(esp, 1);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00540929u); RECOMP_ABI_CALL(0x00501870u, sub_00501870); /* call 0x00501870 */

loc_00540929: ;
    MEM32(esi + 0x88) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00540936: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x88) = eax;

loc_0054093E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00540950
 * Original: 0x00540950 - 0x005409AA (90 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00540950: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 0x18;
    ebx = 0x1A;
    /* nop */

loc_00540960: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(MEM16(ecx + 0x1EC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x1EC), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00540971; /* je: equal / zero */

loc_0054096C: ;
    PUSH32(esp, 0x00540971u); RECOMP_ABI_CALL(0x005415B0u, sub_005415B0); /* call 0x005415B0 */

loc_00540971: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00540960; /* jne: not equal / not zero */

loc_00540977: ;
    eax = MEM32(edi + 0x90);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005409A6; /* jle: less or equal (signed <=) */

loc_00540983: ;
    eax = MEM32(edi + 0xE4);
    ecx = MEM32(eax + esi * 4);
    _fa = (uint32_t)(MEM16(ecx + 0x1EC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x1EC), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054099B; /* je: equal / zero */

loc_00540996: ;
    PUSH32(esp, 0x0054099Bu); RECOMP_ABI_CALL(0x00541810u, sub_00541810); /* call 0x00541810 */

loc_0054099B: ;
    eax = MEM32(edi + 0x90);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00540983; /* jl: less (signed <) */

loc_005409A6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_005409B0
 * Original: 0x005409B0 - 0x00540A34 (132 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005409B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005409B0: ;
    eax = MEM32(0x69C7D0);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x60);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(esi + 0x88);
    MEM32(edx + 0x18) = eax;
    ecx = MEM32(esi + 0x88);
    PUSH32(esp, edi);
    PUSH32(esp, 0x005409D3u); RECOMP_ABI_CALL(0x00501790u, sub_00501790); /* call 0x00501790 */

loc_005409D3: ;
    ecx = esi;
    PUSH32(esp, 0x005409DAu); RECOMP_ABI_CALL(0x00540950u, sub_00540950); /* call 0x00540950 */

loc_005409DA: ;
    eax = MEM32(esi + 0x90);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x84) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_00540A1B; /* jle: less or equal (signed <=) */

loc_005409EC: ;
    /* nop */

loc_005409F0: ;
    ecx = MEM32(esi + 0xE4);
    ecx = MEM32(ecx + edi * 4);
    PUSH32(esp, 0x005409FEu); RECOMP_ABI_CALL(0x00541930u, sub_00541930); /* call 0x00541930 */

loc_005409FE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00540A10; /* jne: not equal / not zero */

loc_00540A02: ;
    edx = MEM32(esi + 0xE4);
    ecx = MEM32(edx + edi * 4);
    PUSH32(esp, 0x00540A10u); RECOMP_ABI_CALL(0x00541530u, sub_00541530); /* call 0x00541530 */

loc_00540A10: ;
    eax = MEM32(esi + 0x90);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005409F0; /* jl: less (signed <) */

loc_00540A1B: ;
    eax = MEM32(0x64E9E0);
    ecx = MEM32(0x64E9E4);
    POP32(esp, edi);
    MEM32(0x6C39A4) = eax;
    MEM32(0x6C39A0) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00540A40
 * Original: 0x00540A40 - 0x00540A4B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540A40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00540A40: ;
    ecx = MEM32(ecx + 0x88);
    g_seh_ebp = ebp; sub_00501300(); return; /* tail jmp 0x00501300 */

}

/**
 * sub_00540A50
 * Original: 0x00540A50 - 0x00540AF6 (166 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00540A50: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x90) = eax;
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x94;
    ecx = 0x14;
    MEM32(esi + 0x8C) = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esi + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00540AEA; /* je: equal / zero */

loc_00540A80: ;
    PUSH32(esp, 0x105);
    ecx = eax * 4;
    PUSH32(esp, 0x64E998);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00540A97u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00540A97: ;
    MEM32(esi + 0xE4) = eax;
    eax = MEM32(esi + 0x90);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00540AEA; /* jle: less or equal (signed <=) */

loc_00540AAC: ;
    /* nop */

loc_00540AB0: ;
    PUSH32(esp, 0x108);
    PUSH32(esp, 0x64E998);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, 0x00540AC4u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00540AC4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00540AD4; /* je: equal / zero */

loc_00540ACB: ;
    ecx = eax;
    PUSH32(esp, 0x00540AD2u); RECOMP_ABI_CALL(0x00541320u, sub_00541320); /* call 0x00541320 */

loc_00540AD2: ;
    goto loc_00540AD6;

loc_00540AD4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00540AD6: ;
    edx = MEM32(esi + 0xE4);
    MEM32(edx + edi * 4) = eax;
    eax = MEM32(esi + 0x90);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00540AB0; /* jl: less (signed <) */

loc_00540AEA: ;
    POP32(esp, edi);
    MEM32(esi + 0xE8) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00540B00
 * Original: 0x00540B00 - 0x00540BB2 (178 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540B00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00540B00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x90);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00540B7E; /* je: equal / zero */

loc_00540B12: ;
    _fa = (uint32_t)(MEM32(esi + 0xE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xE4), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00540B7E; /* je: equal / zero */

loc_00540B1A: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00540B63; /* jle: less or equal (signed <=) */

loc_00540B20: ;
    eax = MEM32(esi + 0xE4);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(MEM16(ecx + 0x1EC)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x1EC), LO16(ebp) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00540B37; /* je: equal / zero */

loc_00540B32: ;
    PUSH32(esp, 0x00540B37u); RECOMP_ABI_CALL(0x00541810u, sub_00541810); /* call 0x00541810 */

loc_00540B37: ;
    ecx = MEM32(esi + 0xE4);
    ecx = MEM32(ecx + edi * 4);
    PUSH32(esp, 0x00540B45u); RECOMP_ABI_CALL(0x00541800u, sub_00541800); /* call 0x00541800 */

loc_00540B45: ;
    edx = MEM32(esi + 0xE4);
    ecx = MEM32(edx + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00540B58; /* je: equal / zero */

loc_00540B52: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00540B58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00540B56u); } /* indirect call */
    }

loc_00540B58: ;
    eax = MEM32(esi + 0x90);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00540B20; /* jl: less (signed <) */

loc_00540B63: ;
    ecx = MEM32(esi + 0xE4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00540B6Fu); RECOMP_ABI_CALL(0x00577350u, sub_00577350); /* call 0x00577350 */

loc_00540B6F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x90) = ebp;
    MEM32(esi + 0xE4) = ebp;

loc_00540B7E: ;
    eax = MEM32(esi + 0x8C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00540BA7; /* jle: less or equal (signed <=) */

loc_00540B8A: ;
    edi = esi + 0x94;

loc_00540B90: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0x00540B97u); RECOMP_ABI_CALL(0x005173D0u, sub_005173D0); /* call 0x005173D0 */

loc_00540B97: ;
    MEM32(edi) = ebp;
    eax = MEM32(esi + 0x8C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00540B90; /* jl: less (signed <) */

loc_00540BA7: ;
    POP32(esp, edi);
    MEM32(esi + 0x8C) = ebp;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00540BC0
 * Original: 0x00540BC0 - 0x00540C53 (147 bytes, 53 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540BC0(void)
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

loc_00540BC0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM16(edi + 0x1EC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x1EC), 0 (16-bit) */
    ebp = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00540C4B; /* je: equal / zero */

loc_00540BD5: ;
    eax = MEM32(0x69C7D0);
    ecx = MEM32(eax + 0x60);
    eax = MEM32(ecx + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    SET_LO8(ebx, 1);
    if (CMP_LE(_fas, _fbs)) goto loc_00540C42; /* jle: less or equal (signed <=) */

loc_00540BEE: ;
    edi = edi;

loc_00540BF0: ;
    SET_LO8(eax, MEM8(0x6C3421));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00540C01; /* je: equal / zero */

loc_00540BF9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x6C3424)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x6C3424) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00540C35; /* jne: not equal / not zero */

loc_00540C01: ;
    fp_push(MEMF(edi + 0x17C)); /* fld float */
    edx = MEM32(edi + 0x174);
    ecx = MEM32(ebp + 0x88);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x00540C21u); RECOMP_ABI_CALL(0x005012D0u, sub_005012D0); /* call 0x005012D0 */

loc_00540C21: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00540C2Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00540C2Cu); } /* indirect call */
    }

loc_00540C2F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00540C35; /* jne: not equal / not zero */

loc_00540C33: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00540C35: ;
    eax = MEM32(esp + 0x1C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00540BF0; /* jl: less (signed <) */

loc_00540C3E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00540C49; /* je: equal / zero */

loc_00540C42: ;
    ecx = edi;
    PUSH32(esp, 0x00540C49u); RECOMP_ABI_CALL(0x005415B0u, sub_005415B0); /* call 0x005415B0 */

loc_00540C49: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00540C4B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
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
 * sub_00540C60
 * Original: 0x00540C60 - 0x00540C91 (49 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00540C60: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x80);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_00540C85; /* jle: less or equal (signed <=) */

loc_00540C6E: ;
    edx = ecx + 0x18;

loc_00540C71: ;
    edi = MEM32(edx);
    _fa = (uint32_t)(MEM16(edi + 0x1EC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x1EC), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00540C8A; /* je: equal / zero */

loc_00540C7D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00540C71; /* jl: less (signed <) */

loc_00540C85: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00540C8A: ;
    eax = MEM32(ecx + eax * 4 + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00540CA0
 * Original: 0x00540CA0 - 0x00540D79 (217 bytes, 66 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540CA0(void)
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

loc_00540CA0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(ebp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00540CBA; /* jne: not equal / not zero */

loc_00540CAF: ;
    SET_LO16(eax, 0xFFFF);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00540CBA: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 8) = 0x7F7FFFFF;
    MEM32(esp + 0xC) = 0xFFFF;
    if (CMP_BE(_fa, _fb)) goto loc_00540D6C; /* jbe: below or equal (unsigned <=) */

loc_00540CD5: ;
    PUSH32(esp, esi);
    goto loc_00540CE0;

    /* nop */
    /* nop */

loc_00540CE0: ;
    eax = MEM32(ebp + 0x34);
    SET_LO16(esi, MEM16(eax + edi * 2));
    edx = MEM32(0x69C7D0);
    eax = ZX16(LO16(esi));
    ecx = eax + eax * 4;
    eax = MEM32(edx + 0x3C);
    ecx = eax + ecx * 4;
    _fa = (uint32_t)(MEM8(ecx + 0x12)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x12), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00540D5E; /* je: equal / zero */

loc_00540CFF: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 6);
    MEM32(esp + 0x18) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 8);
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    MEM32(esp + 0x18) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D370)); /* fmul dword ptr [0x62d370] */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D370)); /* fmul dword ptr [0x62d370] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00540D5E; /* jne: not equal / not zero */

loc_00540D38: ;
    ecx = ZX16(MEM16(ecx + 0x10));
    PUSH32(esp, ecx);
    ecx = edx;
    PUSH32(esp, 0x00540D44u); RECOMP_ABI_CALL(0x004F9E50u, sub_004F9E50); /* call 0x004F9E50 */

loc_00540D44: ;
    fp_push(MEMF(eax + 0x30)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00540D5E; /* jne: not equal / not zero */

loc_00540D52: ;
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = esi;

loc_00540D5E: ;
    eax = ZX8(MEM8(ebp + 8));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00540CE0; /* jl: less (signed <) */

loc_00540D6B: ;
    POP32(esp, esi);

loc_00540D6C: ;
    SET_LO16(eax, MEM16(esp + 0xC));
    POP32(esp, edi);
    POP32(esp, ebp);
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
 * sub_00540D80
 * Original: 0x00540D80 - 0x00540E17 (151 bytes, 57 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00540D80: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(ecx);
    ecx = MEM32(0x69C7D0);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x3C);
    eax = eax + eax * 4;
    eax = edx + eax * 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00540DADu); RECOMP_ABI_CALL(0x004FAA50u, sub_004FAA50); /* call 0x004FAA50 */

loc_00540DAD: ;
    SET_LO8(eax, MEM8(esp + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00540E0C; /* je: equal / zero */

loc_00540DB5: ;
    ecx = MEM32(0x69C7D0);
    edx = MEM32(ecx + 0x60);
    edi = MEM32(edx + 0x18);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00540E01; /* jle: less or equal (signed <=) */

loc_00540DC7: ;
    goto loc_00540DD0;

    /* nop */

loc_00540DD0: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(ebx + 0x88);
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00540DECu); RECOMP_ABI_CALL(0x005012D0u, sub_005012D0); /* call 0x005012D0 */

loc_00540DEC: ;
    edx = MEM32(eax);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00540DF8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00540DF5u); } /* indirect call */
    }

loc_00540DF8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00540E0C; /* jne: not equal / not zero */

loc_00540DFC: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00540DD0; /* jl: less (signed <) */

loc_00540E01: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00540E0C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00540E20
 * Original: 0x00540E20 - 0x00540E7C (92 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00540E20: ;
    SET_LO8(eax, MEM8(0x6C38D4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00540E4B; /* je: equal / zero */

loc_00540E2D: ;
    PUSH32(esp, ebx);
    esi = edi + 0x18;
    ebx = 0x1A;

loc_00540E36: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00540E44; /* je: equal / zero */

loc_00540E3C: ;
    ecx = eax + 0x10;
    PUSH32(esp, 0x00540E44u); RECOMP_ABI_CALL(0x005428C0u, sub_005428C0); /* call 0x005428C0 */

loc_00540E44: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00540E36; /* jne: not equal / not zero */

loc_00540E4A: ;
    POP32(esp, ebx);

loc_00540E4B: ;
    eax = MEM32(edi + 0x90);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00540E79; /* jle: less or equal (signed <=) */

loc_00540E57: ;
    goto loc_00540E60;

    /* nop */

loc_00540E60: ;
    eax = MEM32(edi + 0xE4);
    ecx = MEM32(eax + esi * 4);
    PUSH32(esp, 0x00540E6Eu); RECOMP_ABI_CALL(0x005419F0u, sub_005419F0); /* call 0x005419F0 */

loc_00540E6E: ;
    eax = MEM32(edi + 0x90);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00540E60; /* jl: less (signed <) */

loc_00540E79: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00540E80
 * Original: 0x00540E80 - 0x00540EAC (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00540E80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x90);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00540EA9; /* jle: less or equal (signed <=) */

loc_00540E90: ;
    eax = MEM32(edi + 0xE4);
    ecx = MEM32(eax + esi * 4);
    PUSH32(esp, 0x00540E9Eu); RECOMP_ABI_CALL(0x005419B0u, sub_005419B0); /* call 0x005419B0 */

loc_00540E9E: ;
    eax = MEM32(edi + 0x90);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00540E90; /* jl: less (signed <) */

loc_00540EA9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00540EB0
 * Original: 0x00540EB0 - 0x00540F69 (185 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00540EB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x64E9C4;
    eax = MEM32(0x6C38CC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00540F04; /* jne: not equal / not zero */

loc_00540EC6: ;
    PUSH32(esp, 0x79);
    PUSH32(esp, 0x644668);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x00540ED4u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00540ED4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00540EF2; /* je: equal / zero */

loc_00540EDB: ;
    ecx = eax;
    PUSH32(esp, 0x00540EE2u); RECOMP_ABI_CALL(0x00542100u, sub_00542100); /* call 0x00542100 */

loc_00540EE2: ;
    PUSH32(esp, eax);
    MEM32(0x6C38CC) = eax;
    PUSH32(esp, 0x00540EEDu); RECOMP_ABI_CALL(0x005170B0u, sub_005170B0); /* call 0x005170B0 */

loc_00540EED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00540F0A;

loc_00540EF2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(0x6C38CC) = eax;
    PUSH32(esp, 0x00540EFFu); RECOMP_ABI_CALL(0x005170B0u, sub_005170B0); /* call 0x005170B0 */

loc_00540EFF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00540F0A;

loc_00540F04: ;
    MEM32(0x6C38C8) = MEM32(0x6C38C8) + 1;
    _fa = (uint32_t)(MEM32(0x6C38C8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00540F0A: ;
    eax = MEM32(0x6C38CC);
    MEM32(esi + 4) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = ecx;
    ecx = 0x1A;
    MEM32(esi + 0x80) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x18;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 0x88) = ebx;
    MEM32(esi + 0x8C) = ebx;
    edi = esi + 0x94;
    ecx = 0x14;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 0x90) = ebx;
    MEM32(esi + 0xE4) = ebx;
    MEM32(esi + 0xE8) = ebx;
    POP32(esp, edi);
    MEM32(0x6C38B8) = esi;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00540F70
 * Original: 0x00540F70 - 0x00541003 (147 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00540F70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00540F70: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    MEM32(ebx) = 0x64E9C4;
    MEM32(0x6C38B8) = 0;
    ecx = MEM32(ebx + 0x88);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00540F93; /* je: equal / zero */

loc_00540F8D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00540F93u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00540F91u); } /* indirect call */
    }

loc_00540F93: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00540F9Cu); RECOMP_ABI_CALL(0x00540950u, sub_00540950); /* call 0x00540950 */

loc_00540F9C: ;
    esi = ebx + 0x18;
    edi = 0x1A;

loc_00540FA4: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00540FB0; /* je: equal / zero */

loc_00540FAA: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00540FB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00540FAEu); } /* indirect call */
    }

loc_00540FB0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00540FA4; /* jne: not equal / not zero */

loc_00540FB6: ;
    esi = ebx + 8;
    edi = 4;
    edi = edi;

loc_00540FC0: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00540FCB; /* je: equal / zero */

loc_00540FC6: ;
    PUSH32(esp, 0x00540FCBu); RECOMP_ABI_CALL(0x005173D0u, sub_005173D0); /* call 0x005173D0 */

loc_00540FCB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00540FC0; /* jne: not equal / not zero */

loc_00540FD1: ;
    eax = MEM32(0x6C38C8);
    POP32(esp, edi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x6C38C8) = eax;
    if ((_fa != 0)) goto loc_00540FFB; /* jne: not equal / not zero */

loc_00540FE0: ;
    ecx = MEM32(0x6C38CC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00540FF1; /* je: equal / zero */

loc_00540FEA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00540FF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00540FEEu); } /* indirect call */
    }

loc_00540FF1: ;
    MEM32(0x6C38CC) = 0;

loc_00540FFB: ;
    ecx = ebx;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00614360(); return; /* tail jmp 0x00614360 */

}

/**
 * sub_00541010
 * Original: 0x00541010 - 0x005410F9 (233 bytes, 69 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00541010: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ebp + 0x750)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x750), LO16(ebx) (16-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0xC) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_005410F0; /* jbe: below or equal (unsigned <=) */

loc_0054102F: ;
    PUSH32(esp, edi);

loc_00541030: ;
    edi = MEM32(ebp + 0x74C);
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64E9B4);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x640ED0);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0054104Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00541048u); } /* indirect call */
    }

loc_0054104A: ;
    edx = eax;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x66) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0x66 (8-bit) */
    MEM32(esp + 0x14) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0054105C; /* jne: not equal / not zero */

loc_00541055: ;
    MEM32(edx + 0x4C) = 1;

loc_0054105C: ;
    ecx = MEM32(esi + 0x8C);
    MEM32(esi + ecx * 4 + 0x94) = edx;
    MEM32(esi + 0x8C) = MEM32(esi + 0x8C) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x8C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x74C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebx + eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + eax + 0x10), edi (32-bit) */
    ecx = ebx + eax;
    if (CMP_LE(_fas, _fbs)) goto loc_005410D4; /* jle: less or equal (signed <=) */

loc_00541080: ;
    ebp = ebx + 0x14;
    goto loc_00541090;

loc_00541085: ;
    edx = MEM32(esp + 0x14);
    /* nop */

loc_00541090: ;
    eax = MEM32(eax + ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xE8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xE4);
    ecx = MEM32(edx + ecx * 4);
    PUSH32(esp, 0x005410AAu); RECOMP_ABI_CALL(0x00541610u, sub_00541610); /* call 0x00541610 */

loc_005410AA: ;
    edx = MEM32(esi + 0xE8);
    eax = MEM32(esp + 0x1C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xE8) = edx;
    eax = MEM32(eax + 0x74C);
    edx = MEM32(ebx + eax + 0x10);
    ecx = ebx + eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00541085; /* jl: less (signed <) */

loc_005410D0: ;
    ebp = MEM32(esp + 0x1C);

loc_005410D4: ;
    eax = MEM32(esp + 0x10);
    ecx = ZX16(MEM16(ebp + 0x750));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x48;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00541030; /* jl: less (signed <) */

loc_005410EF: ;
    POP32(esp, edi);

loc_005410F0: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00541100
 * Original: 0x00541100 - 0x00541253 (339 bytes, 102 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541100(void)
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

loc_00541100: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00541119; /* je: equal / zero */

loc_0054110E: ;
    ecx = MEM32(edi + 0x88);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00541119u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00541116u); } /* indirect call */
    }

loc_00541119: ;
    ecx = MEM32(edi + 0x88);
    PUSH32(esp, 0x00541124u); RECOMP_ABI_CALL(0x005014B0u, sub_005014B0); /* call 0x005014B0 */

loc_00541124: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054124C; /* je: equal / zero */

loc_0054112C: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00541249; /* je: equal / zero */

loc_0054113D: ;
    eax = eax + eax * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_00541249; /* jle: less or equal (signed <=) */

loc_00541153: ;
    ecx = MEM32(edi + 0x88);
    PUSH32(esp, 0x0054115Eu); RECOMP_ABI_CALL(0x00501440u, sub_00501440); /* call 0x00501440 */

loc_0054115E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00541249; /* je: equal / zero */

loc_00541169: ;
    ecx = edi;
    PUSH32(esp, 0x00541170u); RECOMP_ABI_CALL(0x00540C60u, sub_00540C60); /* call 0x00540C60 */

loc_00541170: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00541249; /* je: equal / zero */

loc_0054117A: ;
    ecx = MEM32(0x69C7D0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00541186u); RECOMP_ABI_CALL(0x004F9E50u, sub_004F9E50); /* call 0x004F9E50 */

loc_00541186: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0054118Eu); RECOMP_ABI_CALL(0x00540CA0u, sub_00540CA0); /* call 0x00540CA0 */

loc_0054118E: ;
    esi = eax;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054122E; /* je: equal / zero */

loc_0054119B: ;
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
    MEM32(esp + 0x10) = edx;
    SET_LO8(edx, MEM8(esp + 0x24));
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(0x67967C) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    ecx = esp + 0x10;
    edx = ZX16(LO16(esi));
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x005411EAu); RECOMP_ABI_CALL(0x00540D80u, sub_00540D80); /* call 0x00540D80 */

loc_005411EA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054122E; /* je: equal / zero */

loc_005411EE: ;
    eax = MEM32(0x67967C);
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0x7FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 0x80000001u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    MEM32(0x67967C) = eax;
    PUSH32(esp, esi);
    if ((_fas >= 0)) goto loc_00541221; /* jns: not sign (positive) */

loc_0054121C: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx | 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00541221: ;
    eax = MEM32(edi + edx * 4 + 8);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0054122Du); RECOMP_ABI_CALL(0x00541480u, sub_00541480); /* call 0x00541480 */

loc_0054122D: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0054122E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x20) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00541249; /* jge: greater or equal (signed >=) */

loc_00541234: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00541153; /* jl: less (signed <) */

loc_00541249: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0054124C: ;
    POP32(esp, edi);
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
 * sub_00541260
 * Original: 0x00541260 - 0x0054127E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00541260: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00541268u); RECOMP_ABI_CALL(0x00540F70u, sub_00540F70); /* call 0x00540F70 */

loc_00541268: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00541278; /* je: equal / zero */

loc_0054126F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00541275u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00541275: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00541278: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00541280
 * Original: 0x00541280 - 0x00541317 (151 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00541280: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x88);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00541290u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0054128Du); } /* indirect call */
    }

loc_00541290: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x0054129Bu); RECOMP_ABI_CALL(0x00541100u, sub_00541100); /* call 0x00541100 */

loc_0054129B: ;
    edi = esi + 0x18;
    ebx = 0x1A;

loc_005412A3: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(MEM16(ecx + 0x1EC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x1EC), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005412BE; /* je: equal / zero */

loc_005412AF: ;
    PUSH32(esp, 0x005412B4u); RECOMP_ABI_CALL(0x00541450u, sub_00541450); /* call 0x00541450 */

loc_005412B4: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x005412BEu); RECOMP_ABI_CALL(0x00540BC0u, sub_00540BC0); /* call 0x00540BC0 */

loc_005412BE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005412A3; /* jne: not equal / not zero */

loc_005412C4: ;
    eax = MEM32(esi + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005412F7; /* je: equal / zero */

loc_005412CE: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005412F7; /* jle: less or equal (signed <=) */

loc_005412D4: ;
    edx = MEM32(esi + 0xE4);
    ecx = MEM32(edx + edi * 4);
    _fa = (uint32_t)(MEM16(ecx + 0x1EC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x1EC), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005412EC; /* je: equal / zero */

loc_005412E7: ;
    PUSH32(esp, 0x005412ECu); RECOMP_ABI_CALL(0x00541450u, sub_00541450); /* call 0x00541450 */

loc_005412EC: ;
    eax = MEM32(esi + 0x90);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005412D4; /* jl: less (signed <) */

loc_005412F7: ;
    ecx = MEM32(esi + 0x88);
    PUSH32(esp, 0x00541302u); RECOMP_ABI_CALL(0x005012B0u, sub_005012B0); /* call 0x005012B0 */

loc_00541302: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00541314; /* je: equal / zero */

loc_00541307: ;
    ecx = MEM32(esi + 0x88);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00501770(); return; /* tail jmp 0x00501770 */

loc_00541314: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00541320
 * Original: 0x00541320 - 0x00541388 (104 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541320(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00541320: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00541329u); RECOMP_ABI_CALL(0x004FCCA0u, sub_004FCCA0); /* call 0x004FCCA0 */

loc_00541329: ;
    ecx = esi + 0x10;
    MEM32(esi) = 0x64E9C8;
    PUSH32(esp, 0x00541337u); RECOMP_ABI_CALL(0x00542C00u, sub_00542C00); /* call 0x00542C00 */

loc_00541337: ;
    ecx = esi + 0x20;
    PUSH32(esp, 0x0054133Fu); RECOMP_ABI_CALL(0x005464F0u, sub_005464F0); /* call 0x005464F0 */

loc_0054133F: ;
    edi = esi + 0x64;
    ecx = edi;
    PUSH32(esp, 0x00541349u); RECOMP_ABI_CALL(0x005433E0u, sub_005433E0); /* call 0x005433E0 */

loc_00541349: ;
    ecx = esi + 0x110;
    PUSH32(esp, 0x00541354u); RECOMP_ABI_CALL(0x00542500u, sub_00542500); /* call 0x00542500 */

loc_00541354: ;
    ecx = esi + 0x184;
    PUSH32(esp, 0x0054135Fu); RECOMP_ABI_CALL(0x00543030u, sub_00543030); /* call 0x00543030 */

loc_0054135F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = esi;
    MEM16(esi + 0x1EC) = LO16(eax);
    MEM16(esi + 0x1EE) = LO16(eax);
    MEM32(esi + 0x1F0) = eax;
    POP32(esp, edi);
    MEM32(esi + 0x124) = esi;
    MEM32(esi + 0x1D4) = esi;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00541390
 * Original: 0x00541390 - 0x00541397 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541390(void)
{

loc_00541390: ;
    eax = ecx + 0x150;
    esp += 4; return; /* ret */

}

/**
 * sub_005413A0
 * Original: 0x005413A0 - 0x005413A6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005413A0(void)
{

loc_005413A0: ;
    eax = 0x6C38D8;
    esp += 4; return; /* ret */

}

/**
 * sub_005413B0
 * Original: 0x005413B0 - 0x005413CA (26 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005413B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_005413B0: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(0x632600)); /* fld float */
    MEM32(eax) = 0x3F800000;
    MEM32(eax + 4) = 0x3F800000;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005413D0
 * Original: 0x005413D0 - 0x005413D7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005413D0(void)
{

loc_005413D0: ;
    eax = ecx + 0x184;
    esp += 4; return; /* ret */

}

/**
 * sub_005413E0
 * Original: 0x005413E0 - 0x005413E6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005413E0(void)
{

loc_005413E0: ;
    eax = 4;
    esp += 4; return; /* ret */

}

/**
 * sub_005413F0
 * Original: 0x005413F0 - 0x0054142F (63 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005413F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005413F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x184;
    MEM32(esi) = 0x64E9C8;
    PUSH32(esp, 0x00541404u); RECOMP_ABI_CALL(0x00542C60u, sub_00542C60); /* call 0x00542C60 */

loc_00541404: ;
    ecx = esi + 0x110;
    PUSH32(esp, 0x0054140Fu); RECOMP_ABI_CALL(0x005421A0u, sub_005421A0); /* call 0x005421A0 */

loc_0054140F: ;
    ecx = esi + 0x64;
    PUSH32(esp, 0x00541417u); RECOMP_ABI_CALL(0x005C3530u, sub_005C3530); /* call 0x005C3530 */

loc_00541417: ;
    ecx = esi + 0x20;
    PUSH32(esp, 0x0054141Fu); RECOMP_ABI_CALL(0x005C3530u, sub_005C3530); /* call 0x005C3530 */

loc_0054141F: ;
    ecx = esi + 0x10;
    PUSH32(esp, 0x00541427u); RECOMP_ABI_CALL(0x005C3530u, sub_005C3530); /* call 0x005C3530 */

loc_00541427: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004FCCC0(); return; /* tail jmp 0x004FCCC0 */

}

/**
 * sub_00541430
 * Original: 0x00541430 - 0x0054144F (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00541430: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x110;
    PUSH32(esp, 0x0054143Eu); RECOMP_ABI_CALL(0x00541AA0u, sub_00541AA0); /* call 0x00541AA0 */

loc_0054143E: ;
    ecx = esi + 0x20;
    PUSH32(esp, 0x00541446u); RECOMP_ABI_CALL(0x00545390u, sub_00545390); /* call 0x00545390 */

loc_00541446: ;
    ecx = esi + 0x10;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005427C0(); return; /* tail jmp 0x005427C0 */

}

/**
 * sub_00541450
 * Original: 0x00541450 - 0x00541476 (38 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00541450: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x118);
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    PUSH32(esp, 0x00541462u); RECOMP_ABI_CALL(0x00542810u, sub_00542810); /* call 0x00542810 */

loc_00541462: ;
    ecx = esi + 0x20;
    PUSH32(esp, 0x0054146Au); RECOMP_ABI_CALL(0x00546870u, sub_00546870); /* call 0x00546870 */

loc_0054146A: ;
    ecx = esi + 0x110;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00542200(); return; /* tail jmp 0x00542200 */

}

/**
 * sub_00541480
 * Original: 0x00541480 - 0x00541526 (166 bytes, 48 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00541480: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00541488u); RECOMP_ABI_CALL(0x00541430u, sub_00541430); /* call 0x00541430 */

loc_00541488: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi + 0x64;
    PUSH32(esp, 0x0054149Au); RECOMP_ABI_CALL(0x00544330u, sub_00544330); /* call 0x00544330 */

loc_0054149A: ;
    SET_LO16(eax, ZX8(LO8(eax)));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    MEM16(esi + 0x1EC) = LO16(eax);
    if (CMP_NE(_fa, _fb)) goto loc_005414B0; /* jne: not equal / not zero */

loc_005414AA: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_005414B0: ;
    PUSH32(esp, edi);
    ecx = esi + 0x10;
    PUSH32(esp, 0x005414B9u); RECOMP_ABI_CALL(0x005427C0u, sub_005427C0); /* call 0x005427C0 */

loc_005414B9: ;
    PUSH32(esp, esi);
    ecx = esi + 0x20;
    PUSH32(esp, 0x005414C2u); RECOMP_ABI_CALL(0x005453D0u, sub_005453D0); /* call 0x005453D0 */

loc_005414C2: ;
    edx = MEM32(esp + 0xC);
    edi = esi + 0x110;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esi + 0x30) = 2;
    PUSH32(esp, 0x005414DBu); RECOMP_ABI_CALL(0x00541AF0u, sub_00541AF0); /* call 0x00541AF0 */

loc_005414DB: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x005414E4u); RECOMP_ABI_CALL(0x00517A40u, sub_00517A40); /* call 0x00517A40 */

loc_005414E4: ;
    edi = esi + 0x184;
    ecx = edi;
    PUSH32(esp, 0x005414F1u); RECOMP_ABI_CALL(0x00542CA0u, sub_00542CA0); /* call 0x00542CA0 */

loc_005414F1: ;
    ecx = edi;
    PUSH32(esp, 0x005414F8u); RECOMP_ABI_CALL(0x00543080u, sub_00543080); /* call 0x00543080 */

loc_005414F8: ;
    eax = MEM32(0x67967C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x67967C) = eax;
    ecx = ecx & 0x7FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    MEM16(esi + 0x1EE) = LO16(ecx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00541530
 * Original: 0x00541530 - 0x005415A6 (118 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541530(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00541530: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00541538u); RECOMP_ABI_CALL(0x00541430u, sub_00541430); /* call 0x00541430 */

loc_00541538: ;
    ecx = esi + 0x10;
    PUSH32(esp, 0x00541540u); RECOMP_ABI_CALL(0x005427C0u, sub_005427C0); /* call 0x005427C0 */

loc_00541540: ;
    PUSH32(esp, esi);
    ecx = esi + 0x20;
    PUSH32(esp, 0x00541549u); RECOMP_ABI_CALL(0x005453D0u, sub_005453D0); /* call 0x005453D0 */

loc_00541549: ;
    PUSH32(esp, 1);
    ecx = esi + 0x110;
    PUSH32(esp, 0x00541556u); RECOMP_ABI_CALL(0x00517A40u, sub_00517A40); /* call 0x00517A40 */

loc_00541556: ;
    ecx = MEM32(esi + 0x118);
    edx = MEM32(ecx + 0x2C);
    eax = esi + 0x150;
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    ecx = esi + 0x130;
    PUSH32(esp, 0x00541574u); RECOMP_ABI_CALL(0x005DE300u, sub_005DE300); /* call 0x005DE300 */

loc_00541574: ;
    ecx = MEM32(esi + 0x1F0);
    PUSH32(esp, ecx);
    ecx = esi + 0x64;
    PUSH32(esp, 0x00541583u); RECOMP_ABI_CALL(0x00544C60u, sub_00544C60); /* call 0x00544C60 */

loc_00541583: ;
    SET_LO16(edx, ZX8(LO8(eax)));
    MEM16(esi + 0x1EC) = LO16(edx);
    _fb = (uint32_t)(0x184) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x184;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x0054159Bu); RECOMP_ABI_CALL(0x00542CA0u, sub_00542CA0); /* call 0x00542CA0 */

loc_0054159B: ;
    ecx = esi;
    PUSH32(esp, 0x005415A2u); RECOMP_ABI_CALL(0x00543080u, sub_00543080); /* call 0x00543080 */

loc_005415A2: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005415B0
 * Original: 0x005415B0 - 0x00541602 (82 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005415B0(void)
{

loc_005415B0: ;
    eax = MEM32(0x69C7D0);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x58);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005415C2u); RECOMP_ABI_CALL(0x004FB970u, sub_004FB970); /* call 0x004FB970 */

loc_005415C2: ;
    edi = esi + 0x184;
    ecx = edi;
    PUSH32(esp, 0x005415CFu); RECOMP_ABI_CALL(0x005430F0u, sub_005430F0); /* call 0x005430F0 */

loc_005415CF: ;
    ecx = edi;
    PUSH32(esp, 0x005415D6u); RECOMP_ABI_CALL(0x00542CC0u, sub_00542CC0); /* call 0x00542CC0 */

loc_005415D6: ;
    ecx = esi + 0x64;
    PUSH32(esp, 0x005415DEu); RECOMP_ABI_CALL(0x00543490u, sub_00543490); /* call 0x00543490 */

loc_005415DE: ;
    edi = esi + 0x110;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x005415EDu); RECOMP_ABI_CALL(0x00517A40u, sub_00517A40); /* call 0x00517A40 */

loc_005415ED: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x005415F6u); RECOMP_ABI_CALL(0x00541AF0u, sub_00541AF0); /* call 0x00541AF0 */

loc_005415F6: ;
    POP32(esp, edi);
    MEM16(esi + 0x1EC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00541610
 * Original: 0x00541610 - 0x005417FD (493 bytes, 132 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541610(void)
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

loc_00541610: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = edi + 0x110;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0054162Au); RECOMP_ABI_CALL(0x00541AF0u, sub_00541AF0); /* call 0x00541AF0 */

loc_0054162A: ;
    esi = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    ecx = edi + 0x64;
    PUSH32(esp, 0x00541637u); RECOMP_ABI_CALL(0x00543470u, sub_00543470); /* call 0x00543470 */

loc_00541637: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00541648; /* je: equal / zero */

loc_00541640: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00541648u); RECOMP_ABI_CALL(0x00541B60u, sub_00541B60); /* call 0x00541B60 */

loc_00541648: ;
    MEM32(edi + 0x1F0) = esi;
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
    MEM32(0x67967C) = ecx;
    MEM16(edi + 0x1EE) = LO16(edx);
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005417F4; /* jle: less or equal (signed <=) */

loc_00541682: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00541749; /* jne: not equal / not zero */

loc_0054168E: ;
    eax = MEM32(0x67967C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x67967C) = eax;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x7FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x1C) = ecx;
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0x7FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x1C) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x643FA4)); /* fmul dword ptr [0x643fa4] */
    MEM32(0x67967C) = eax;
    eax = MEM32(esi + 0x44);
    MEM32(esp + 0x10) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x630D68)); /* fsub dword ptr [0x630d68] */
    edx = esp + 0xC;
    _fb = (uint32_t)(0xE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xE8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x643FA4)); /* fmul dword ptr [0x643fa4] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x630D68)); /* fsub dword ptr [0x630d68] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(eax + 4);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(esp + 0x14) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    ecx = edi;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00541732u); RECOMP_ABI_CALL(0x00546CE0u, sub_00546CE0); /* call 0x00546CE0 */

loc_00541732: ;
    eax = MEM32(esi + 0x44);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00541740u); RECOMP_ABI_CALL(0x00546D10u, sub_00546D10); /* call 0x00546D10 */

loc_00541740: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00541749: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005417F4; /* jne: not equal / not zero */

loc_00541752: ;
    ecx = MEM32(0x67967C);
    eax = MEM32(esi + 0x44);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x343FD);
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax)); /* fsub dword ptr [eax] */
    fp_push(MEMF(eax + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x269EC3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx;
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0x7FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x1C) = edx;
    MEM32(0x67967C) = ecx;
    eax = MEM32(esi + 0x44);
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    _fb = (uint32_t)(0xE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xE8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x65E384)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    eax = esp + 0xC;
    PUSH32(esp, eax);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x005417E6u); RECOMP_ABI_CALL(0x00546CE0u, sub_00546CE0); /* call 0x00546CE0 */

loc_005417E6: ;
    ecx = MEM32(esi + 0x44);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x005417F4u); RECOMP_ABI_CALL(0x00546D10u, sub_00546D10); /* call 0x00546D10 */

loc_005417F4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00541800
 * Original: 0x00541800 - 0x0054180E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541800(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00541800: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x110;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0054180Du); RECOMP_ABI_CALL(0x00541AF0u, sub_00541AF0); /* call 0x00541AF0 */

loc_0054180D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00541810
 * Original: 0x00541810 - 0x00541849 (57 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541810(void)
{

loc_00541810: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x184;
    ecx = edi;
    PUSH32(esp, 0x00541821u); RECOMP_ABI_CALL(0x005430F0u, sub_005430F0); /* call 0x005430F0 */

loc_00541821: ;
    ecx = edi;
    PUSH32(esp, 0x00541828u); RECOMP_ABI_CALL(0x00542CC0u, sub_00542CC0); /* call 0x00542CC0 */

loc_00541828: ;
    ecx = esi + 0x64;
    PUSH32(esp, 0x00541830u); RECOMP_ABI_CALL(0x00543650u, sub_00543650); /* call 0x00543650 */

loc_00541830: ;
    PUSH32(esp, 0);
    ecx = esi + 0x110;
    PUSH32(esp, 0x0054183Du); RECOMP_ABI_CALL(0x00517A40u, sub_00517A40); /* call 0x00517A40 */

loc_0054183D: ;
    POP32(esp, edi);
    MEM16(esi + 0x1EC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00541850
 * Original: 0x00541850 - 0x00541916 (198 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541850(void)
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

loc_00541850: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x6C8EB8);
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0x174);
    ecx = eax + 0x60;
    MEM32(ecx) = edx;
    edx = MEM32(esi + 0x178);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esi + 0x17C);
    MEM32(ecx + 8) = edx;
    MEM32(eax + 0x6C) = 0x40C00000;
    MEM32(eax + 0x5C) = 0xE;
    MEM32(eax + 0x58) = 1;
    ecx = MEM32(0x6C8EB8);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0x42100000;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x005418A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0054189Eu); } /* indirect call */
    }

loc_005418A4: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00541910; /* je: equal / zero */

loc_005418AA: ;
    PUSH32(esp, ebx);
    ebx = esi + 0x184;

loc_005418B1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005418FB; /* je: equal / zero */

loc_005418B5: ;
    fp_push(MEMF(esi + 0x174)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x34)); /* fsub dword ptr [ecx + 0x34] */
    fp_push(MEMF(esi + 0x178)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x38)); /* fsub dword ptr [ecx + 0x38] */
    fp_push(MEMF(esi + 0x17C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x3C)); /* fsub dword ptr [ecx + 0x3c] */
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
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005418F9; /* jp: parity */

loc_005418F1: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    edi = ecx;
    goto loc_005418FB;

loc_005418F9: ;
    fp_pop(); /* fstp st(0) */

loc_005418FB: ;
    ecx = MEM32(0x6C8EB8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00541909u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00541903u); } /* indirect call */
    }

loc_00541909: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005418B1; /* jne: not equal / not zero */

loc_0054190F: ;
    POP32(esp, ebx);

loc_00541910: ;
    eax = edi;
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
 * sub_00541920
 * Original: 0x00541920 - 0x00541925 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541920(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00541920: ;
    g_seh_ebp = ebp; sub_00541530(); return; /* tail jmp 0x00541530 */

}

/**
 * sub_00541930
 * Original: 0x00541930 - 0x00541941 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00541930: ;
    eax = MEM32(ecx + 0x1F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054193E; /* je: equal / zero */

loc_0054193A: ;
    SET_LO8(eax, MEM8(eax + 0x3C));
    esp += 4; return; /* ret */

loc_0054193E: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00541950
 * Original: 0x00541950 - 0x005419A1 (81 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00541950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00541950: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x1F0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00541980; /* je: equal / zero */

loc_0054195D: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x40);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0054197F; /* jle: less or equal (signed <=) */

loc_00541967: ;
    esi = MEM32(esi + 0x44);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_00541970: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00541977; /* jne: not equal / not zero */

loc_00541975: ;
    eax = edx;

loc_00541977: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00541970; /* jl: less (signed <) */

loc_0054197F: ;
    POP32(esp, edi);

loc_00541980: ;
    ecx = MEM32(ecx + 0x118);
    ecx = MEM32(ecx + 0x2C);
    edx = MEM32(ecx + 0x68);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00541996; /* jne: not equal / not zero */

loc_00541991: ;
    ecx = MEM32(ecx + 0x10);
    goto loc_00541998;

loc_00541996: ;
    ecx = edx;

loc_00541998: ;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx), 1 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_005419A0; /* ja: above (unsigned >) */

loc_0054199E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005419A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005419B0
 * Original: 0x005419B0 - 0x005419ED (61 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005419B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005419B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005419EB; /* je: equal / zero */

loc_005419BD: ;
    PUSH32(esp, edi);
    ecx = esi + 0xE8;
    PUSH32(esp, 0x005419C9u); RECOMP_ABI_CALL(0x005D3E00u, sub_005D3E00); /* call 0x005D3E00 */

loc_005419C9: ;
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x005419D2u); RECOMP_ABI_CALL(0x00541950u, sub_00541950); /* call 0x00541950 */

loc_005419D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    POP32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_005419EB; /* jl: less (signed <) */

loc_005419D7: ;
    ecx = esi + 0x64;
    PUSH32(esp, 0x005419DFu); RECOMP_ABI_CALL(0x005451A0u, sub_005451A0); /* call 0x005451A0 */

loc_005419DF: ;
    ecx = esi + 0x184;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00542CE0(); return; /* tail jmp 0x00542CE0 */

loc_005419EB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005419F0
 * Original: 0x005419F0 - 0x00541A11 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005419F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005419F0: ;
    eax = MEM32(ecx + 0x1F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00541A10; /* je: equal / zero */

loc_005419FA: ;
    _fa = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x2C), 0xE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00541A10; /* jne: not equal / not zero */

loc_00541A00: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x17);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00541A10u); RECOMP_ABI_CALL(0x005427E0u, sub_005427E0); /* call 0x005427E0 */

loc_00541A10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00541A20
 * Original: 0x00541A20 - 0x00541A3E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00541A20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00541A28u); RECOMP_ABI_CALL(0x005413F0u, sub_005413F0); /* call 0x005413F0 */

loc_00541A28: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00541A38; /* je: equal / zero */

loc_00541A2F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00541A35u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00541A35: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00541A38: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00541A40
 * Original: 0x00541A40 - 0x00541A5D (29 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541A40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00541A40: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    MEM32(esi) = 0x64E9E8;
    PUSH32(esp, 0x00541A52u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00541A52: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005175D0(); return; /* tail jmp 0x005175D0 */

}

/**
 * sub_00541A60
 * Original: 0x00541A60 - 0x00541A77 (23 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541A60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00541A60: ;
    PUSH32(esp, 0x674FD0);
    PUSH32(esp, 0x00541A6Au); RECOMP_ABI_CALL(0x005EDB00u, sub_005EDB00); /* call 0x005EDB00 */

loc_00541A6A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00541A71u); RECOMP_ABI_CALL(0x005EDF80u, sub_005EDF80); /* call 0x005EDF80 */

loc_00541A71: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00541A80
 * Original: 0x00541A80 - 0x00541A8B (11 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541A80(void)
{

loc_00541A80: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00541A87u); RECOMP_ABI_CALL(0x005EDF80u, sub_005EDF80); /* call 0x005EDF80 */

loc_00541A87: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00541A90
 * Original: 0x00541A90 - 0x00541A95 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541A90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00541A90: ;
    g_seh_ebp = ebp; sub_00517080(); return; /* tail jmp 0x00517080 */

}

/**
 * sub_00541AA0
 * Original: 0x00541AA0 - 0x00541AE2 (66 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541AA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00541AA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x20;
    PUSH32(esp, 0x00541AABu); RECOMP_ABI_CALL(0x005DE780u, sub_005DE780); /* call 0x005DE780 */

loc_00541AAB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x48) = eax;
    ecx = 0x3F800000;
    MEM32(esi + 0x40) = ecx;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = ecx;
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0x5C) = eax;
    MEM32(esi + 0x60) = ecx;
    MEM32(esi + 0x6C) = eax;
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0x64) = eax;
    MEM8(esi + 0x71) = LO8(eax);
    MEM32(esi + 0x18) = 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00541AF0
 * Original: 0x00541AF0 - 0x00541B5F (111 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00541AF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00541B5A; /* je: equal / zero */

loc_00541AFF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00541B08; /* je: equal / zero */

loc_00541B03: ;
    PUSH32(esp, 0x00541B08u); RECOMP_ABI_CALL(0x005173D0u, sub_005173D0); /* call 0x005173D0 */

loc_00541B08: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00541B0F; /* je: equal / zero */

loc_00541B0C: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00541B0F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00541B5A; /* je: equal / zero */

loc_00541B16: ;
    ecx = MEM32(edi + 0x2C);
    edx = MEM32(ecx);
    eax = esi + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esi + 0x20;
    PUSH32(esp, 0x00541B28u); RECOMP_ABI_CALL(0x005DE300u, sub_005DE300); /* call 0x005DE300 */

loc_00541B28: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00541B5A; /* je: equal / zero */

loc_00541B32: ;
    edx = MEM32(0x67967C);
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
    MEM8(esi + 0x70) = LO8(edx);

loc_00541B5A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00541B60
 * Original: 0x00541B60 - 0x00541B81 (33 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00541B60: ;
    eax = MEM32(ecx + 8);
    eax = MEM32(eax + 0x34);
    edx = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00541B77; /* jge: greater or equal (signed >=) */

loc_00541B6F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00541B71: ;
    MEM8(ecx + 0x70) = LO8(eax);
    esp += 8; return; /* ret 4 */

loc_00541B77: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00541B71; /* jg: greater (signed >) */

loc_00541B7B: ;
    MEM8(ecx + 0x70) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00541B90
 * Original: 0x00541B90 - 0x00541BD5 (69 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00541B90(void)
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

loc_00541B90: ;
    SET_LO8(edx, MEM8(0x6C38F0));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00541BA5; /* jne: not equal / not zero */

loc_00541B9F: ;
    MEM32(0x6C38F0) = MEM32(0x6C38F0) | eax;
    _fa = (uint32_t)(MEM32(0x6C38F0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00541BA5: ;
    eax = MEM32(ecx + 0x64);
    MEM32(0x6C38E4) = eax;
    edx = MEM32(ecx + 0x68);
    MEM32(0x6C38E8) = edx;
    eax = MEM32(ecx + 0x6C);
    MEM32(0x6C38EC) = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00541BC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00541BC0u); } /* indirect call */
    }

loc_00541BC3: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x6C38E8)); /* fadd dword ptr [0x6c38e8] */
    eax = 0x6C38E4;
    MEMF(0x6C38E8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00541BE0
 * Original: 0x00541BE0 - 0x00541BFC (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00541BE0: ;
    SET_LO8(eax, MEM8(ecx + 0x71));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00541BFB; /* je: equal / zero */

loc_00541BE7: ;
    MEM8(ecx + 0x71) = 0;
    eax = MEM32(ecx + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00541BFB; /* je: equal / zero */

loc_00541BF2: ;
    edx = MEM32(ecx + 0x2C);
    MEM32(ecx + 0x38) = edx;
    MEM32(ecx + 0x2C) = eax;

loc_00541BFB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00541C00
 * Original: 0x00541C00 - 0x00541C10 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00541C00: ;
    eax = MEM32(ecx + 0x14);
    SET_LO8(edx, MEM8(eax + 0x15));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_00541C10
 * Original: 0x00541C10 - 0x00541C17 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541C10(void)
{

loc_00541C10: ;
    eax = MEM32(ecx + 0x14);
    eax = MEM32(eax + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_00541C20
 * Original: 0x00541C20 - 0x00541C3C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00541C20(void)
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

loc_00541C20: ;
    eax = MEM32(ecx + 0x14);
    fp_push(MEMF(eax + 0x1C)); /* fld float */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00541C34u); RECOMP_ABI_CALL(0x0061AC60u, sub_0061AC60); /* call 0x0061AC60 */

loc_00541C34: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00619764(); return; /* tail jmp 0x00619764 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00541C40
 * Original: 0x00541C40 - 0x00541C4A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541C40(void)
{

loc_00541C40: ;
    eax = MEM32(ecx + 0x14);
    SET_LO8(eax, MEM8(eax + 0x1D8));
    esp += 4; return; /* ret */

}

/**
 * sub_00541C50
 * Original: 0x00541C50 - 0x005420A2 (1106 bytes, 311 insns)
 * Category: game_io
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00541C50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00541C50: ;
    SET_LO8(eax, MEM8(0x6C342E));
    _fb = (uint32_t)(0x1C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00541C7F; /* je: equal / zero */

loc_00541C65: ;
    eax = MEM32(esp + 0x1D8);
    PUSH32(esp, 0x30444550);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00541C77u); RECOMP_ABI_CALL(0x00614EC0u, sub_00614EC0); /* call 0x00614EC0 */

loc_00541C77: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x2C) = eax;
    goto loc_00541C86;

loc_00541C7F: ;
    MEM32(ebx + 0x2C) = 0;

loc_00541C86: ;
    eax = MEM32(ebx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00541F26; /* jne: not equal / not zero */

loc_00541C91: ;
    PUSH32(esp, 0x1F4);
    PUSH32(esp, 0x64EA68);
    PUSH32(esp, 0x98);
    PUSH32(esp, 0x00541CA5u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00541CA5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00541CB5; /* je: equal / zero */

loc_00541CAC: ;
    ecx = eax;
    PUSH32(esp, 0x00541CB3u); RECOMP_ABI_CALL(0x00546DA0u, sub_00546DA0); /* call 0x00546DA0 */

loc_00541CB3: ;
    goto loc_00541CB7;

loc_00541CB5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00541CB7: ;
    esi = MEM32(esp + 0x1DC);
    ecx = MEM32(esp + 0x1D8);
    edi = MEM32(esp + 0x1D4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEM32(ebx + 0x2C) = eax;
    ecx = MEM32(0x860220);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00541CE1u); RECOMP_ABI_CALL(0x006137C0u, sub_006137C0); /* call 0x006137C0 */

loc_00541CE1: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00541D0B; /* jne: not equal / not zero */

loc_00541CE7: ;
    edx = MEM32(esp + 0x1D8);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x64EA48);
    PUSH32(esp, 0x00541CFBu); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_00541CFB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00541D0B: ;
    eax = MEM32(esp + 0x1D8);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esp + 0x138;
    PUSH32(esp, 0x00541D20u); RECOMP_ABI_CALL(0x00616420u, sub_00616420); /* call 0x00616420 */

loc_00541D20: ;
    PUSH32(esp, 0x100);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = esp + 0x138;
    PUSH32(esp, 0x00541D36u); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_00541D36: ;
    SET_LO8(eax, MEM8(esp + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00541F1F; /* je: equal / zero */

loc_00541D42: ;
    edi = 0x64EA40;
    esi = esp + 0x30;
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
    if ((_flags == 0)) goto loc_00541D83; /* jne: not equal / not zero */

loc_00541D56: ;
    PUSH32(esp, 0x100);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x138;
    PUSH32(esp, 0x00541D6Cu); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_00541D6C: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00541D76u); RECOMP_ABI_CALL(0x005DEE60u, sub_005DEE60); /* call 0x005DEE60 */

loc_00541D76: ;
    edx = MEM32(ebx + 0x2C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = eax;
    goto loc_00541EFD;

loc_00541D83: ;
    edi = 0x64A388;
    esi = esp + 0x30;
    ecx = 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00541DFA; /* jne: not equal / not zero */

loc_00541D97: ;
    ecx = esp + 0x130;
    PUSH32(esp, 0x00541DA3u); RECOMP_ABI_CALL(0x00615790u, sub_00615790); /* call 0x00615790 */

loc_00541DA3: ;
    PUSH32(esp, 0x63E350);
    ecx = esp + 0x134;
    esi = eax;
    PUSH32(esp, 0x00541DB6u); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_00541DB6: ;
    PUSH32(esp, 0x100);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = esp + 0x138;
    PUSH32(esp, 0x00541DCCu); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_00541DCC: ;
    PUSH32(esp, 0);
    edx = esp + 0x34;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00541DDAu); RECOMP_ABI_CALL(0x005F3E20u, sub_005F3E20); /* call 0x005F3E20 */

loc_00541DDA: ;
    ecx = MEM32(ebx + 0x2C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + esi * 4 + 4) = eax;
    PUSH32(esp, 0x63E344);
    ecx = esp + 0x134;
    PUSH32(esp, 0x00541DF5u); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_00541DF5: ;
    goto loc_00541EFD;

loc_00541DFA: ;
    edi = 0x640ED0;
    esi = esp + 0x30;
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
    if ((_flags == 0)) goto loc_00541EBD; /* jne: not equal / not zero */

loc_00541E12: ;
    PUSH32(esp, 0x63E350);
    ecx = esp + 0x134;
    PUSH32(esp, 0x00541E23u); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_00541E23: ;
    PUSH32(esp, 0x100);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x138;
    PUSH32(esp, 0x00541E39u); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_00541E39: ;
    edi = 0x63E344;
    esi = esp + 0x30;
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
    if ((_flags != 0)) goto loc_00541EFD; /* je: equal / zero */

loc_00541E51: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00541E5Bu); RECOMP_ABI_CALL(0x005428F0u, sub_005428F0); /* call 0x005428F0 */

loc_00541E5B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x100);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = esp + 0x138;
    esi = eax;
    PUSH32(esp, 0x00541E76u); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_00541E76: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00541E91; /* je: equal / zero */

loc_00541E7B: ;
    edx = esp + 0x30;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00541E87u); RECOMP_ABI_CALL(0x005DD2B0u, sub_005DD2B0); /* call 0x005DD2B0 */

loc_00541E87: ;
    ecx = MEM32(ebx + 0x2C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + esi * 4 + 0x10) = eax;

loc_00541E91: ;
    PUSH32(esp, 0x100);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    ecx = esp + 0x138;
    PUSH32(esp, 0x00541EA7u); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_00541EA7: ;
    edi = 0x63E344;
    esi = esp + 0x30;
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
    if ((_flags == 0)) goto loc_00541E51; /* jne: not equal / not zero */

loc_00541EBB: ;
    goto loc_00541EFD;

loc_00541EBD: ;
    edi = 0x64EA38;
    esi = esp + 0x30;
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
    if ((_flags == 0)) goto loc_00541EFD; /* jne: not equal / not zero */

loc_00541ED1: ;
    PUSH32(esp, 0x100);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x138;
    PUSH32(esp, 0x00541EE7u); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_00541EE7: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00541EF1u); RECOMP_ABI_CALL(0x0047BB60u, sub_0047BB60); /* call 0x0047BB60 */

loc_00541EF1: ;
    ecx = MEM32(ebx + 0x2C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00541EFDu); RECOMP_ABI_CALL(0x00546DD0u, sub_00546DD0); /* call 0x00546DD0 */

loc_00541EFD: ;
    PUSH32(esp, 0x100);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    ecx = esp + 0x138;
    PUSH32(esp, 0x00541F13u); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_00541F13: ;
    SET_LO8(eax, MEM8(esp + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00541D42; /* jne: not equal / not zero */

loc_00541F1F: ;
    ecx = ebp;
    PUSH32(esp, 0x00541F26u); RECOMP_ABI_CALL(0x00617FB0u, sub_00617FB0); /* call 0x00617FB0 */

loc_00541F26: ;
    eax = MEM32(ebx + 0x2C);
    esi = MEM32(eax + 0x90);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00541F64; /* je: equal / zero */

loc_00541F33: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x2000);
    ecx = esi;
    PUSH32(esp, 0x00541F41u); RECOMP_ABI_CALL(0x0058E800u, sub_0058E800); /* call 0x0058E800 */

loc_00541F41: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    ecx = esi;
    PUSH32(esp, 0x00541F4Fu); RECOMP_ABI_CALL(0x0058E800u, sub_0058E800); /* call 0x0058E800 */

loc_00541F4F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x4000);
    ecx = esi;
    MEM32(esi + 0x10) = 0x12;
    PUSH32(esp, 0x00541F64u); RECOMP_ABI_CALL(0x0058E830u, sub_0058E830); /* call 0x0058E830 */

loc_00541F64: ;
    ecx = MEM32(ebx + 0x2C);
    eax = MEM32(ecx);
    ecx = MEM32(0x6C8EB0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x64E9B4);
    PUSH32(esp, 0x00541F7Au); RECOMP_ABI_CALL(0x0057DDF0u, sub_0057DDF0); /* call 0x0057DDF0 */

loc_00541F7A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00542049; /* je: equal / zero */

loc_00541F84: ;
    eax = MEM32(ebx + 0x2C);
    edi = MEM32(eax + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00542034; /* je: equal / zero */

loc_00541F92: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x64);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00541F9Fu); RECOMP_ABI_CALL(0x005DE640u, sub_005DE640); /* call 0x005DE640 */

loc_00541F9F: ;
    edx = MEM32(ebx + 0x2C);
    eax = MEM32(edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00541FB0u); RECOMP_ABI_CALL(0x005DE300u, sub_005DE300); /* call 0x005DE300 */

loc_00541FB0: ;
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 8);
    PUSH32(esp, 0x00541FBFu); RECOMP_ABI_CALL(0x005DDE10u, sub_005DDE10); /* call 0x005DDE10 */

loc_00541FBF: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00541FC8u); RECOMP_ABI_CALL(0x005DE460u, sub_005DE460); /* call 0x005DE460 */

loc_00541FC8: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00541FD4u); RECOMP_ABI_CALL(0x0057EDD0u, sub_0057EDD0); /* call 0x0057EDD0 */

loc_00541FD4: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00541FDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00541FD8u); } /* indirect call */
    }

loc_00541FDB: ;
    ecx = eax;
    PUSH32(esp, 0x00541FE2u); RECOMP_ABI_CALL(0x004D7E40u, sub_004D7E40); /* call 0x004D7E40 */

loc_00541FE2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00541FED; /* je: equal / zero */

loc_00541FE6: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x00541FEDu); RECOMP_ABI_CALL(0x004D7F90u, sub_004D7F90); /* call 0x004D7F90 */

loc_00541FED: ;
    ecx = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x2000);
    PUSH32(esp, 0x00541FFBu); RECOMP_ABI_CALL(0x0058E800u, sub_0058E800); /* call 0x0058E800 */

loc_00541FFB: ;
    ecx = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0x00542009u); RECOMP_ABI_CALL(0x0058E800u, sub_0058E800); /* call 0x0058E800 */

loc_00542009: ;
    ecx = MEM32(esi);
    PUSH32(esp, 1);
    MEM32(ecx + 0x10) = 0x1B;
    ecx = MEM32(esi);
    PUSH32(esp, 0x4000);
    PUSH32(esp, 0x00542020u); RECOMP_ABI_CALL(0x0058E830u, sub_0058E830); /* call 0x0058E830 */

loc_00542020: ;
    edx = MEM32(ebx + 0x2C);
    ecx = esp + 0x10;
    MEM32(edx + 0x94) = esi;
    PUSH32(esp, 0x00542032u); RECOMP_ABI_CALL(0x005DE2A0u, sub_005DE2A0); /* call 0x005DE2A0 */

loc_00542032: ;
    goto loc_00542049;

loc_00542034: ;
    eax = MEM32(esp + 0x1D8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x64EA08);
    PUSH32(esp, 0x00542046u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00542046: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00542049: ;
    PUSH32(esp, 0x275);
    PUSH32(esp, 0x64EA68);
    PUSH32(esp, 0x6C);
    PUSH32(esp, 0x0054205Au); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0054205A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054206F; /* je: equal / zero */

loc_00542061: ;
    PUSH32(esp, 0x64E9FC);
    ecx = eax;
    PUSH32(esp, 0x0054206Du); RECOMP_ABI_CALL(0x005D6500u, sub_005D6500); /* call 0x005D6500 */

loc_0054206D: ;
    goto loc_00542071;

loc_0054206F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00542071: ;
    MEM32(ebx + 0x50) = eax;
    ecx = MEM32(0x6CE2E4);
    edx = MEM32(ecx + 0x38);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x00542085u); RECOMP_ABI_CALL(0x005D5800u, sub_005D5800); /* call 0x005D5800 */

loc_00542085: ;
    eax = MEM32(ebx + 0x2C);
    ecx = MEM32(eax + 4);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx);
    ecx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 0x30) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_005420B0
 * Original: 0x005420B0 - 0x005420D6 (38 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005420B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005420B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x005420C1u); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_005420C1: ;
    ecx = MEM32(esi + 0x34);
    MEM32(esi + ecx * 4 + 0x38) = eax;
    eax = MEM32(esi + 0x34);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x34) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005420E0
 * Original: 0x005420E0 - 0x005420FD (29 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005420E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005420E0: ;
    eax = MEM32(ecx + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005420FA; /* je: equal / zero */

loc_005420E7: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax + 4);
    eax = MEM32(edx);
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + edx * 4 + 0x38);
    MEM32(eax) = ecx;

loc_005420FA: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00542100
 * Original: 0x00542100 - 0x00542179 (121 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00542100(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00542100: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00542109u); RECOMP_ABI_CALL(0x00516F00u, sub_00516F00); /* call 0x00516F00 */

loc_00542109: ;
    MEM32(0x6C38C8) = 1;
    MEM32(esi + 0x1C) = 8;
    MEM32(esi + 0x18) = 5;
    MEM32(esi + 0x20) = 0x42C80000;
    MEM32(esi) = 0x64E9E8;
    eax = MEM32(0x6C263C);
    eax = MEM32(eax + 0x41C);
    PUSH32(esp, 0x4D);
    ecx = eax * 4;
    PUSH32(esp, 0x64EA68);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0054214Du); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0054214D: ;
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
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00542180
 * Original: 0x00542180 - 0x0054219E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00542180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00542180: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00542188u); RECOMP_ABI_CALL(0x00541A40u, sub_00541A40); /* call 0x00541A40 */

loc_00542188: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00542198; /* je: equal / zero */

loc_0054218F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00542195u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00542195: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00542198: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005421A0
 * Original: 0x005421A0 - 0x005421E3 (67 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005421A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005421A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    MEM32(esi) = 0x64EA78;
    PUSH32(esp, 0x005421B0u); RECOMP_ABI_CALL(0x00541AF0u, sub_00541AF0); /* call 0x00541AF0 */

loc_005421B0: ;
    MEM32(0x6C38C8) = MEM32(0x6C38C8) - 1;
    _fa = (uint32_t)(MEM32(0x6C38C8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005421D3; /* jne: not equal / not zero */

loc_005421B8: ;
    ecx = MEM32(0x6C38CC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005421C9; /* je: equal / zero */

loc_005421C2: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x005421C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005421C6u); } /* indirect call */
    }

loc_005421C9: ;
    MEM32(0x6C38CC) = 0;

loc_005421D3: ;
    ecx = esi + 0x20;
    PUSH32(esp, 0x005421DBu); RECOMP_ABI_CALL(0x005DE2A0u, sub_005DE2A0); /* call 0x005DE2A0 */

loc_005421DB: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005171C0(); return; /* tail jmp 0x005171C0 */

}

/**
 * sub_005421F0
 * Original: 0x005421F0 - 0x005421F7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005421F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_005421F0: ;
    fp_push(MEMF(0x62D57C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00542200
 * Original: 0x00542200 - 0x00542305 (261 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00542200(void)
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

loc_00542200: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x0054220Bu); RECOMP_ABI_CALL(0x00541C40u, sub_00541C40); /* call 0x00541C40 */

loc_0054220B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00542300; /* jne: not equal / not zero */

loc_00542213: ;
    edx = MEM32(edi + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00542300; /* je: equal / zero */

loc_0054221E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00542224u); RECOMP_ABI_CALL(0x00541C10u, sub_00541C10); /* call 0x00541C10 */

loc_00542224: ;
    ecx = MEM32(edx + 0x2C);
    esi = MEM32(ecx + eax * 4 + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00542232; /* jne: not equal / not zero */

loc_0054222F: ;
    esi = MEM32(ecx + 0x10);

loc_00542232: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x0054223Bu); RECOMP_ABI_CALL(0x00541C20u, sub_00541C20); /* call 0x00541C20 */

loc_0054223B: ;
    ecx = MEM32(esi + 8);
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    ebx = ecx + eax * 8;
    eax = ZX16(MEM16(esi));
    MEM32(esp + 0x14) = eax;
    ebp = ecx + eax * 8 + -8;
    PUSH32(esp, 0);
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 0x18)); /* fidiv dword ptr [esp + 0x18] */
    eax = esp + 0x28;
    PUSH32(esp, eax);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00542268u); RECOMP_ABI_CALL(0x005DDEC0u, sub_005DDEC0); /* call 0x005DDEC0 */

loc_00542268: ;
    PUSH32(esp, 0);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = ebp;
    esi = eax;
    PUSH32(esp, 0x00542278u); RECOMP_ABI_CALL(0x005DDEC0u, sub_005DDEC0); /* call 0x005DDEC0 */

loc_00542278: ;
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi)); /* fsub dword ptr [esi] */
    PUSH32(esp, 1);
    ecx = ebx;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 4)); /* fsub dword ptr [esi + 4] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 8)); /* fsub dword ptr [esi + 8] */
    esi = edi + 0x20;
    PUSH32(esp, esi);
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x005422A1u); RECOMP_ABI_CALL(0x005DDE10u, sub_005DDE10); /* call 0x005DDE10 */

loc_005422A1: ;
    ecx = edi;
    PUSH32(esp, 0x005422A8u); RECOMP_ABI_CALL(0x00541C00u, sub_00541C00); /* call 0x00541C00 */

loc_005422A8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_005422DC; /* je: equal / zero */

loc_005422AE: ;
    eax = MEM32(esi + 8);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(MEMF(eax) - fp_top()); /* fsubr dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(MEMF(eax + 4) - fp_top()); /* fsubr dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(MEMF(eax + 8) - fp_top()); /* fsubr dword ptr [eax + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_005422DC: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x005422E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005422E0u); } /* indirect call */
    }

loc_005422E3: ;
    eax = MEM32(0x6C3890);
    SET_LO8(ecx, MEM8(eax + 9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00542300; /* jne: not equal / not zero */

loc_005422F0: ;
    ecx = MEM32(0x6C38A4);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00542300; /* je: equal / zero */

loc_005422FC: ;
    MEM8(edi + 0x71) = 1;

loc_00542300: ;
    POP32(esp, edi);
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
 * sub_00542310
 * Original: 0x00542310 - 0x0054234B (59 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00542310(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00542310: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00542318u); RECOMP_ABI_CALL(0x005173A0u, sub_005173A0); /* call 0x005173A0 */

loc_00542318: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = eax;
    MEM32(esi) = 0x64EA94;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x48) = eax;
    ecx = MEM32(0x6C38CC);
    MEM32(esi + 0x1C) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00542350
 * Original: 0x00542350 - 0x005423F7 (167 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00542350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00542350: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = 0x64EA94;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00542360: ;
    ecx = MEM32(esi + 0x2C);
    ecx = MEM32(ecx + eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00542375; /* je: equal / zero */

loc_0054236B: ;
    edx = MEM32(ecx + 4);
    ecx = MEM32(edx);
    edx = MEM32(esi + 0x30);
    MEM32(ecx) = edx;

loc_00542375: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00542360; /* jl: less (signed <) */

loc_0054237D: ;
    PUSH32(esp, ebx);
    edi = esi + 0x38;
    ebx = 5;

loc_00542386: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054238Eu); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_0054238E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00542386; /* jne: not equal / not zero */

loc_00542397: ;
    ecx = MEM32(esi + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_005423A5; /* je: equal / zero */

loc_0054239F: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x005423A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005423A3u); } /* indirect call */
    }

loc_005423A5: ;
    SET_LO8(eax, MEM8(0x6C342E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005423D5; /* jne: not equal / not zero */

loc_005423AE: ;
    edi = MEM32(esi + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005423C5; /* je: equal / zero */

loc_005423B5: ;
    ecx = edi;
    PUSH32(esp, 0x005423BCu); RECOMP_ABI_CALL(0x00546E10u, sub_00546E10); /* call 0x00546E10 */

loc_005423BC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x005423C2u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005423C2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005423C5: ;
    POP32(esp, edi);
    MEM32(esi + 0x2C) = 0;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005177E0(); return; /* tail jmp 0x005177E0 */

loc_005423D5: ;
    eax = MEM32(esi + 0x2C);
    eax = MEM32(eax + 0x94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005423EE; /* je: equal / zero */

loc_005423E2: ;
    ecx = MEM32(0x6C8EB0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005423EEu); RECOMP_ABI_CALL(0x0057DCF0u, sub_0057DCF0); /* call 0x0057DCF0 */

loc_005423EE: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005177E0(); return; /* tail jmp 0x005177E0 */

}

/**
 * sub_00542400
 * Original: 0x00542400 - 0x005424AD (173 bytes, 64 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00542400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00542400: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 8 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00542474; /* jne: not equal / not zero */

loc_0054240A: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM8(ebx + 5);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ecx = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0054242D; /* jl: less (signed <) */

loc_0054241A: ;
    eax = MEM32(edi + 0x2C);
    eax = eax + esi * 4 + 4;

loc_00542421: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0054242D; /* jne: not equal / not zero */

loc_00542426: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00542421; /* jns: not sign (positive) */

loc_0054242D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00542472; /* je: equal / zero */

loc_00542432: ;
    ecx = MEM32(edi + 0x2C);
    eax = MEM32(ecx + esi * 4 + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00542472; /* je: equal / zero */

loc_0054243D: ;
    edx = ZX8(MEM8(ebx + 0x70));
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0054244Au); RECOMP_ABI_CALL(0x005420E0u, sub_005420E0); /* call 0x005420E0 */

loc_0054244A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00542478; /* je: equal / zero */

loc_0054244F: ;
    PUSH32(esp, 0x6796F0);
    PUSH32(esp, 0x00542459u); RECOMP_ABI_CALL(0x005EDB00u, sub_005EDB00); /* call 0x005EDB00 */

loc_00542459: ;
    eax = MEM32(edi + 0x2C);
    ecx = MEM32(eax + esi * 4 + 4);
    edx = MEM32(ecx + 4);
    eax = MEM32(ebx + 0x2C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00542472u); RECOMP_ABI_CALL(0x005F2730u, sub_005F2730); /* call 0x005F2730 */

loc_00542472: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00542474: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_00542478: ;
    ecx = ebx;
    PUSH32(esp, 0x0054247Fu); RECOMP_ABI_CALL(0x00541C10u, sub_00541C10); /* call 0x00541C10 */

loc_0054247F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00542472; /* jne: not equal / not zero */

loc_00542484: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x40;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0054248Du); RECOMP_ABI_CALL(0x005EDB20u, sub_005EDB20); /* call 0x005EDB20 */

loc_0054248D: ;
    ecx = MEM32(edi + 0x2C);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(esp + 8) = 0;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_005F25C0(); return; /* tail jmp 0x005F25C0 */

}

/**
 * sub_005424B0
 * Original: 0x005424B0 - 0x00542500 (80 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005424B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005424B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    edi = ecx;
    PUSH32(esp, 0x005424BEu); RECOMP_ABI_CALL(0x00516FA0u, sub_00516FA0); /* call 0x00516FA0 */

loc_005424BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005424FB; /* jne: not equal / not zero */

loc_005424C2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x64EA68);
    PUSH32(esp, 0x54);
    PUSH32(esp, 0x005424D1u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005424D1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005424E3; /* je: equal / zero */

loc_005424D8: ;
    ecx = eax;
    PUSH32(esp, 0x005424DFu); RECOMP_ABI_CALL(0x00542310u, sub_00542310); /* call 0x00542310 */

loc_005424DF: ;
    esi = eax;
    goto loc_005424E5;

loc_005424E3: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005424E5: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x005424F8u); RECOMP_ABI_CALL(0x00517A00u, sub_00517A00); /* call 0x00517A00 */

loc_005424F8: ;
    eax = esi;
    POP32(esp, esi);

loc_005424FB: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00542500
 * Original: 0x00542500 - 0x005425AB (171 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00542500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00542500: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00542509u); RECOMP_ABI_CALL(0x005171A0u, sub_005171A0); /* call 0x005171A0 */

loc_00542509: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x16);
    ecx = esi + 0x20;
    MEM32(esi) = 0x64EA78;
    PUSH32(esp, 0x0054251Bu); RECOMP_ABI_CALL(0x005DE640u, sub_005DE640); /* call 0x005DE640 */

loc_0054251B: ;
    eax = MEM32(0x6C38CC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00542564; /* jne: not equal / not zero */

loc_00542526: ;
    PUSH32(esp, 0x79);
    PUSH32(esp, 0x644668);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x00542534u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00542534: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00542552; /* je: equal / zero */

loc_0054253B: ;
    ecx = eax;
    PUSH32(esp, 0x00542542u); RECOMP_ABI_CALL(0x00542100u, sub_00542100); /* call 0x00542100 */

loc_00542542: ;
    PUSH32(esp, eax);
    MEM32(0x6C38CC) = eax;
    PUSH32(esp, 0x0054254Du); RECOMP_ABI_CALL(0x005170B0u, sub_005170B0); /* call 0x005170B0 */

loc_0054254D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0054256A;

loc_00542552: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(0x6C38CC) = eax;
    PUSH32(esp, 0x0054255Fu); RECOMP_ABI_CALL(0x005170B0u, sub_005170B0); /* call 0x005170B0 */

loc_0054255F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0054256A;

loc_00542564: ;
    MEM32(0x6C38C8) = MEM32(0x6C38C8) + 1;
    _fa = (uint32_t)(MEM32(0x6C38C8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0054256A: ;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x18) = 0xFFFFFFFFu;
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x48) = ebx;
    eax = 0x3F800000;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x4C) = ebx;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x54) = ebx;
    MEM32(esi + 0x58) = ebx;
    MEM32(esi + 0x5C) = ebx;
    MEM32(esi + 0x60) = eax;
    MEM32(esi + 0x6C) = ebx;
    MEM32(esi + 0x68) = ebx;
    MEM32(esi + 0x64) = ebx;
    MEM8(esi + 0x70) = LO8(ebx);
    MEM8(esi + 0x71) = LO8(ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_005425B0
 * Original: 0x005425B0 - 0x005425CE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005425B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005425B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005425B8u); RECOMP_ABI_CALL(0x005421A0u, sub_005421A0); /* call 0x005421A0 */

loc_005425B8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005425C8; /* je: equal / zero */

loc_005425BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005425C5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005425C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005425C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005425D0
 * Original: 0x005425D0 - 0x00542792 (450 bytes, 120 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005425D0(void)
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

loc_005425D0: ;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005425DEu); RECOMP_ABI_CALL(0x00517290u, sub_00517290); /* call 0x00517290 */

loc_005425DE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00542781; /* je: equal / zero */

loc_005425E6: ;
    fp_push(MEMF(esi + 0x64)); /* fld float */
    ecx = esi + 0x64;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x858578)); /* fsub dword ptr [0x858578] */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x85857C)); /* fsub dword ptr [0x85857c] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x858580)); /* fsub dword ptr [0x858580] */
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
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x6C39A4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x6c39a4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00542631; /* jp: parity */

loc_00542629: ;
    fp_pop(); /* fstp st(0) */
    MEM8(esi + 5) = 0;
    goto loc_00542648;

loc_00542631: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x6C39A0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x6c39a0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00542644; /* jp: parity */

loc_0054263E: ;
    MEM8(esi + 5) = 1;
    goto loc_00542648;

loc_00542644: ;
    MEM8(esi + 5) = 2;

loc_00542648: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 5);
    edx = 3;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x3FB33333);
    PUSH32(esp, ecx);
    ecx = MEM32(0x6C263C);
    eax = esp + 0x88;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054266Du); RECOMP_ABI_CALL(0x005198C0u, sub_005198C0); /* call 0x005198C0 */

loc_0054266D: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 4) = ecx;
    fp_push(MEMF(esp + 4)); /* fld float */
    ecx = MEM32(eax + 8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62FDF4)); /* fmul dword ptr [0x62fdf4] */
    MEM32(esp + 8) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0xC) = ecx;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x10) = edx;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62FDF4)); /* fmul dword ptr [0x62fdf4] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62FDF4)); /* fmul dword ptr [0x62fdf4] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62FDF4)); /* fmul dword ptr [0x62fdf4] */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005426D9; /* jne: not equal / not zero */

loc_005426D1: ;
    MEM32(esp + 4) = 0x3F800000;

loc_005426D9: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005426F2; /* jne: not equal / not zero */

loc_005426EA: ;
    MEM32(esp + 8) = 0x3F800000;

loc_005426F2: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0054270B; /* jne: not equal / not zero */

loc_00542703: ;
    MEM32(esp + 0xC) = 0x3F800000;

loc_0054270B: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00542720; /* jne: not equal / not zero */

loc_00542718: ;
    MEM32(esp + 0x10) = 0x3F800000;

loc_00542720: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x00542729u); RECOMP_ABI_CALL(0x005EDA70u, sub_005EDA70); /* call 0x005EDA70 */

loc_00542729: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 0xC);
    MEM32(esp + 0x1C) = ecx;
    ecx = esp + 0x14;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x5C) = 0;
    MEM32(esp + 0x60) = 0xBF7D70A4u;
    MEM32(esp + 0x64) = 0;
    PUSH32(esp, 0x0054276Du); RECOMP_ABI_CALL(0x005EE940u, sub_005EE940); /* call 0x005EE940 */

loc_0054276D: ;
    edx = MEM32(esp + 0x98);
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00542781u); RECOMP_ABI_CALL(0x00542400u, sub_00542400); /* call 0x00542400 */

loc_00542781: ;
    ecx = esi;
    PUSH32(esp, 0x00542788u); RECOMP_ABI_CALL(0x00541BE0u, sub_00541BE0); /* call 0x00541BE0 */

loc_00542788: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}
