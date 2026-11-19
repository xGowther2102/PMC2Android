/**
 * Midnight Club II (PC) - Recompiled code chunk 20
 * Functions: 250 (0x00515400 - 0x00521200)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00515400
 * Original: 0x00515400 - 0x00515414 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00515400(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00515400: ;
    eax = ZX16(MEM16(ecx + 0x14));
    edx = ZX16(MEM16(ecx + 0xC));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00515413u); RECOMP_ABI_CALL(0x00515310u, sub_00515310); /* call 0x00515310 */

loc_00515413: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00515420
 * Original: 0x00515420 - 0x0051547D (93 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00515420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00515420: ;
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO16(eax, MEM16(edi + 0x1C));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    MEM8(edi + 0x20) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00515479; /* je: equal / zero */

loc_00515430: ;
    PUSH32(esp, ebp);
    ebp = ZX16(LO16(eax));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00515477; /* jle: less or equal (signed <=) */

loc_0051543B: ;
    goto loc_00515440;

    /* nop */

loc_00515440: ;
    eax = MEM32(edi + 0x18);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0051544Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00515448u); } /* indirect call */
    }

loc_0051544B: ;
    eax = MEM32(edi + 0x18);
    ecx = MEM32(eax + esi * 4);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0051545B; /* jne: not equal / not zero */

loc_00515457: ;
    MEM8(edi + 0x20) = 1;

loc_0051545B: ;
    edx = MEM32(eax + esi * 4);
    _fa = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0xC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00515472; /* je: equal / zero */

loc_00515464: ;
    ecx = MEM32(eax + ebp * 4 + -4);
    MEM32(eax + esi * 4) = ecx;
    MEM16(edi + 0x1C) = MEM16(edi + 0x1C) - 1;
    _fa = (uint32_t)(MEM16(edi + 0x1C)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00515473;

loc_00515472: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00515473: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00515440; /* jl: less (signed <) */

loc_00515477: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00515479: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00515480
 * Original: 0x00515480 - 0x005154F5 (117 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00515480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00515480: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    edi = ecx;
    PUSH32(esp, 0x0051548Du); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_0051548D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00515494u); RECOMP_ABI_CALL(0x005EDF80u, sub_005EDF80); /* call 0x005EDF80 */

loc_00515494: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0051549Bu); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_0051549B: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 2);
    PUSH32(esp, 0x005154A7u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_005154A7: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x005154AEu); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_005154AE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x005154B5u); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_005154B5: ;
    ebp = MEM32(0x858430);
    PUSH32(esp, 1);
    PUSH32(esp, 0x005154C2u); RECOMP_ABI_CALL(0x005EE1A0u, sub_005EE1A0); /* call 0x005EE1A0 */

loc_005154C2: ;
    ebx = ZX16(MEM16(edi + 0xC));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005154E7; /* jle: less or equal (signed <=) */

loc_005154CF: ;
    /* nop */

loc_005154D0: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(eax + esi * 4);
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005154E2; /* jne: not equal / not zero */

loc_005154DD: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x005154E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005154DFu); } /* indirect call */
    }

loc_005154E2: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005154D0; /* jl: less (signed <) */

loc_005154E7: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x005154EDu); RECOMP_ABI_CALL(0x005EE1A0u, sub_005EE1A0); /* call 0x005EE1A0 */

loc_005154ED: ;
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
 * sub_00515500
 * Original: 0x00515500 - 0x0051552B (43 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00515500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00515500: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ZX16(MEM16(ebx + 4));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00515527; /* jle: less or equal (signed <=) */

loc_00515511: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);

loc_00515516: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00515521u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0051551Eu); } /* indirect call */
    }

loc_00515521: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00515516; /* jl: less (signed <) */

loc_00515526: ;
    POP32(esp, ebp);

loc_00515527: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00515530
 * Original: 0x00515530 - 0x0051555A (42 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00515530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00515530: ;
    edx = ZX16(MEM16(ecx + 0x1C));
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0051554E; /* jle: less or equal (signed <=) */

loc_0051553B: ;
    ecx = MEM32(ecx + 0x18);
    esi = MEM32(esp + 8);

loc_00515542: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00515554; /* je: equal / zero */

loc_00515546: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00515542; /* jl: less (signed <) */

loc_0051554E: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00515554: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00515560
 * Original: 0x00515560 - 0x00515590 (48 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00515560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00515560: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ZX16(MEM16(ebx + 4));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0051558C; /* jle: less or equal (signed <=) */

loc_00515571: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);

loc_00515576: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax + esi * 4);
    eax = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00515586u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00515583u); } /* indirect call */
    }

loc_00515586: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00515576; /* jl: less (signed <) */

loc_0051558B: ;
    POP32(esp, ebp);

loc_0051558C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00515590
 * Original: 0x00515590 - 0x005155BC (44 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00515590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00515590: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = ZX16(MEM16(edi + 0xC));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005155B6; /* jle: less or equal (signed <=) */

loc_0051559F: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);

loc_005155A4: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x005155B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005155ADu); } /* indirect call */
    }

loc_005155B0: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005155A4; /* jl: less (signed <) */

loc_005155B5: ;
    POP32(esp, ebp);

loc_005155B6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005155C0
 * Original: 0x005155C0 - 0x005155F5 (53 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005155C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005155C0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x648EE8;
    MEM32(esi + 8) = eax;
    MEM16(esi + 0xC) = LO16(eax);
    MEM16(esi + 0xE) = LO16(eax);
    MEM32(esi + 0x10) = eax;
    MEM16(esi + 0x14) = LO16(eax);
    MEM16(esi + 0x16) = LO16(eax);
    MEM32(esi + 0x18) = eax;
    MEM16(esi + 0x1C) = LO16(eax);
    MEM16(esi + 0x1E) = LO16(eax);
    PUSH32(esp, 0x005155F1u); RECOMP_ABI_CALL(0x004F6FD0u, sub_004F6FD0); /* call 0x004F6FD0 */

loc_005155F1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00515600
 * Original: 0x00515600 - 0x00515638 (56 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00515600(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00515600: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, 1);
    MEM8(esi + 0x20) = LO8(eax);
    MEM8(esi + 4) = LO8(eax);
    eax = esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00515614u); RECOMP_ABI_CALL(0x00515380u, sub_00515380); /* call 0x00515380 */

loc_00515614: ;
    ecx = esi + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0051561Du); RECOMP_ABI_CALL(0x00515380u, sub_00515380); /* call 0x00515380 */

loc_0051561D: ;
    edx = MEM32(esi + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00515626u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00515626: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    MEM16(esi + 0x1C) = LO16(eax);
    MEM16(esi + 0x1E) = LO16(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00515640
 * Original: 0x00515640 - 0x0051567B (59 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00515640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00515640: ;
    SET_LO16(eax, MEM16(ecx + 0x1E));
    _fa = (uint32_t)(MEM16(ecx + 0x1C)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x1C), LO16(eax) (16-bit) */
    PUSH32(esp, esi);
    esi = ecx + 0x18;
    if (CMP_NE(_fa, _fb)) goto loc_0051565C; /* jne: not equal / not zero */

loc_0051564E: ;
    eax = ZX16(LO16(eax));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0051565Cu); RECOMP_ABI_CALL(0x00501360u, sub_00501360); /* call 0x00501360 */

loc_0051565C: ;
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
    eax = MEM32(esp + 8);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00515680
 * Original: 0x00515680 - 0x005156C5 (69 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00515680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00515680: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebp = ZX16(MEM16(esi + 0x14));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005156BF; /* jle: less or equal (signed <=) */

loc_0051568F: ;
    PUSH32(esp, edi);

loc_00515690: ;
    eax = MEM32(esi + 0x10);
    edi = MEM32(eax + ebx * 4);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0051569Eu); RECOMP_ABI_CALL(0x00515530u, sub_00515530); /* call 0x00515530 */

loc_0051569E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005156B9; /* jne: not equal / not zero */

loc_005156A2: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x005156ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005156A8u); } /* indirect call */
    }

loc_005156AB: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + ebx * 4);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x005156B9u); RECOMP_ABI_CALL(0x00515640u, sub_00515640); /* call 0x00515640 */

loc_005156B9: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00515690; /* jl: less (signed <) */

loc_005156BE: ;
    POP32(esp, edi);

loc_005156BF: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_005156D0
 * Original: 0x005156D0 - 0x005156F4 (36 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005156D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005156D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = esi + 8;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005156E2u); RECOMP_ABI_CALL(0x00515500u, sub_00515500); /* call 0x00515500 */

loc_005156E2: ;
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x005156ECu); RECOMP_ABI_CALL(0x00515500u, sub_00515500); /* call 0x00515500 */

loc_005156EC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00515700
 * Original: 0x00515700 - 0x00515719 (25 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00515700(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00515700: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00515713u); RECOMP_ABI_CALL(0x00515560u, sub_00515560); /* call 0x00515560 */

loc_00515713: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00515720
 * Original: 0x00515720 - 0x00515754 (52 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00515720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00515720: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x648EE8;
    PUSH32(esp, 0x0051572Eu); RECOMP_ABI_CALL(0x00515600u, sub_00515600); /* call 0x00515600 */

loc_0051572E: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00515737u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00515737: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00515740u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00515740: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00515749u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00515749: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00614360(); return; /* tail jmp 0x00614360 */

}

/**
 * sub_00515760
 * Original: 0x00515760 - 0x0051579B (59 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00515760(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00515760: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 8;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0051576Du); RECOMP_ABI_CALL(0x005153D0u, sub_005153D0); /* call 0x005153D0 */

loc_0051576D: ;
    ecx = esi + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00515776u); RECOMP_ABI_CALL(0x005153D0u, sub_005153D0); /* call 0x005153D0 */

loc_00515776: ;
    edi = esi + 0x18;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(edi + 4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 4), 0 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0051578C; /* jae: above or equal (unsigned >=) */

loc_00515783: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0051578Cu); RECOMP_ABI_CALL(0x00501360u, sub_00501360); /* call 0x00501360 */

loc_0051578C: ;
    MEM16(edi + 4) = 0;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00515680(); return; /* tail jmp 0x00515680 */

}

/**
 * sub_005157A0
 * Original: 0x005157A0 - 0x00515829 (137 bytes, 56 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005157A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005157A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = ZX16(MEM16(ebx + 0xC));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00515823; /* jle: less or equal (signed <=) */

loc_005157B3: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    /* nop */

loc_005157C0: ;
    eax = MEM32(ebx + 8);
    esi = MEM32(eax + edi * 4);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00515818; /* jne: not equal / not zero */

loc_005157CD: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005157D9; /* je: equal / zero */

loc_005157D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00515818; /* jne: not equal / not zero */

loc_005157D9: ;
    ecx = MEM32(0x698624);
    edx = MEM32(ecx + 8);
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x42C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_005157F3; /* je: equal / zero */

loc_005157EE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_005157F5;

loc_005157F3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005157F5: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x005157FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005157FAu); } /* indirect call */
    }

loc_005157FD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00515818; /* je: equal / zero */

loc_00515801: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x00515809u); RECOMP_ABI_CALL(0x00515640u, sub_00515640); /* call 0x00515640 */

loc_00515809: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x648F08);
    PUSH32(esp, 0x00515815u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00515815: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00515818: ;
    eax = MEM32(esp + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005157C0; /* jl: less (signed <) */

loc_00515821: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00515823: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00515830
 * Original: 0x00515830 - 0x005158B5 (133 bytes, 54 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00515830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00515830: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = ZX16(MEM16(ebp + 0xC));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = ebp;
    MEM32(esp + 0xC) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_005158AD; /* jle: less or equal (signed <=) */

loc_00515849: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    /* nop */

loc_00515850: ;
    eax = MEM32(ebp + 8);
    esi = MEM32(eax + edi * 4);
    SET_LO8(eax, MEM8(esi + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005158A2; /* je: equal / zero */

loc_0051585D: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005158A2; /* jne: not equal / not zero */

loc_00515864: ;
    ecx = MEM32(0x69585C);
    eax = MEM32(ecx + ebx * 4 + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005158A2; /* je: equal / zero */

loc_00515872: ;
    ebp = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0051587Au); RECOMP_ABI_CALL(0x004690F0u, sub_004690F0); /* call 0x004690F0 */

loc_0051587A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebp + 0x10); PUSH32(esp, 0x00515883u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00515880u); } /* indirect call */
    }

loc_00515883: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebp = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_005158A2; /* je: equal / zero */

loc_0051588B: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x00515893u); RECOMP_ABI_CALL(0x00515640u, sub_00515640); /* call 0x00515640 */

loc_00515893: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x648F30);
    PUSH32(esp, 0x0051589Fu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0051589F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005158A2: ;
    eax = MEM32(esp + 0x14);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00515850; /* jl: less (signed <) */

loc_005158AB: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_005158AD: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005158C0
 * Original: 0x005158C0 - 0x005158DE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005158C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005158C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005158C8u); RECOMP_ABI_CALL(0x00515720u, sub_00515720); /* call 0x00515720 */

loc_005158C8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005158D8; /* je: equal / zero */

loc_005158CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005158D5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005158D5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005158D8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005158E0
 * Original: 0x005158E0 - 0x00515935 (85 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005158E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005158E0: ;
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00515933; /* je: equal / zero */

loc_005158EA: ;
    eax = MEM32(0x6C3304);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00515908; /* jle: less or equal (signed <=) */

loc_005158F6: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x005158FEu); RECOMP_ABI_CALL(0x00515830u, sub_00515830); /* call 0x00515830 */

loc_005158FE: ;
    eax = MEM32(0x6C3304);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005158F6; /* jl: less (signed <) */

loc_00515908: ;
    eax = MEM32(0x698624);
    ecx = MEM32(eax);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0051592A; /* jle: less or equal (signed <=) */

loc_00515915: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0051591Du); RECOMP_ABI_CALL(0x005157A0u, sub_005157A0); /* call 0x005157A0 */

loc_0051591D: ;
    ecx = MEM32(0x698624);
    eax = MEM32(ecx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00515915; /* jl: less (signed <) */

loc_0051592A: ;
    POP32(esp, esi);
    ecx = edi;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_00515420(); return; /* tail jmp 0x00515420 */

loc_00515933: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00515940
 * Original: 0x00515940 - 0x00515948 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00515940(void)
{

loc_00515940: ;
    MEM32(ecx + 0xC) = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_00515950
 * Original: 0x00515950 - 0x00515958 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00515950(void)
{

loc_00515950: ;
    MEM32(ecx + 0xC) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00515960
 * Original: 0x00515960 - 0x0051597E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00515960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00515960: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00515968u); RECOMP_ABI_CALL(0x00516400u, sub_00516400); /* call 0x00516400 */

loc_00515968: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00515978; /* je: equal / zero */

loc_0051596F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00515975u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00515975: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00515978: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00515980
 * Original: 0x00515980 - 0x00515988 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00515980(void)
{

loc_00515980: ;
    MEM32(ecx + 0x10) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00515990
 * Original: 0x00515990 - 0x005159AF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00515990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00515990: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x648FA0;
    if (TEST_Z(_fa, _fb)) goto loc_005159A9; /* je: equal / zero */

loc_005159A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005159A6u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005159A6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005159A9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005159B0
 * Original: 0x005159B0 - 0x005159CB (27 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005159B0(void)
{

loc_005159B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005159B8u); RECOMP_ABI_CALL(0x00516520u, sub_00516520); /* call 0x00516520 */

loc_005159B8: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 0x14) = eax;
    MEM32(esi) = 0x648FBC;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005159D0
 * Original: 0x005159D0 - 0x005159F0 (32 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005159D0(void)
{

loc_005159D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005159D8u); RECOMP_ABI_CALL(0x00516520u, sub_00516520); /* call 0x00516520 */

loc_005159D8: ;
    MEM32(esi) = 0x648FD8;
    MEM32(esi + 0x14) = 0xFFFFFFFFu;
    MEM32(esi + 0x18) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005159F0
 * Original: 0x005159F0 - 0x00515A09 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005159F0(void)
{

loc_005159F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005159F8u); RECOMP_ABI_CALL(0x00516520u, sub_00516520); /* call 0x00516520 */

loc_005159F8: ;
    MEM32(esi) = 0x648FF4;
    MEM32(esi + 0x14) = 0xFFFFFFFFu;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00515A10
 * Original: 0x00515A10 - 0x00515A29 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00515A10(void)
{

loc_00515A10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00515A18u); RECOMP_ABI_CALL(0x00516520u, sub_00516520); /* call 0x00516520 */

loc_00515A18: ;
    MEM32(esi) = 0x649010;
    MEM32(esi + 0x14) = 0xFFFFFFFFu;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00515A30
 * Original: 0x00515A30 - 0x00515A49 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00515A30(void)
{

loc_00515A30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00515A38u); RECOMP_ABI_CALL(0x00516520u, sub_00516520); /* call 0x00516520 */

loc_00515A38: ;
    MEM32(esi) = 0x64902C;
    MEM32(esi + 0x14) = 0xFFFFFFFFu;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00515A50
 * Original: 0x00515A50 - 0x00515A69 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00515A50(void)
{

loc_00515A50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00515A58u); RECOMP_ABI_CALL(0x00516520u, sub_00516520); /* call 0x00516520 */

loc_00515A58: ;
    MEM32(esi) = 0x649048;
    MEM32(esi + 0x14) = 0xFFFFFFFFu;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00515A70
 * Original: 0x00515A70 - 0x00515A85 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00515A70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00515A70: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax + 0xC);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 4) = edx;
    fp_push(MEMF(eax + 0x18)); /* fld float */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00515A90
 * Original: 0x00515A90 - 0x00515ABE (46 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00515A90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00515A90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(ecx) = esi;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00515A9Fu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00515A9F: ;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esi) = eax;
    MEM16(esi + 4) = LO16(eax);
    MEM16(esi + 6) = LO16(eax);
    PUSH32(esp, 0x00515ABAu); RECOMP_ABI_CALL(0x00501360u, sub_00501360); /* call 0x00501360 */

loc_00515ABA: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00515AC0
 * Original: 0x00515AC0 - 0x00515AF8 (56 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00515AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00515AC0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    SET_LO16(eax, MEM16(esi + 6));
    _fa = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 4), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00515ADB; /* jne: not equal / not zero */

loc_00515ACD: ;
    eax = ZX16(LO16(eax));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00515ADBu); RECOMP_ABI_CALL(0x00501360u, sub_00501360); /* call 0x00501360 */

loc_00515ADB: ;
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
    eax = MEM32(esp + 8);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00515B00
 * Original: 0x00515B00 - 0x00515D30 (560 bytes, 166 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00515B00(void)
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

loc_00515B00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = MEM32(edi + 4);
    eax = ecx + -10;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00515CE2; /* ja: above (unsigned >) */

loc_00515B17: ;
    eax = ZX8(MEM8(eax + 0x515D50));
    { uint32_t _jt = MEM32(eax * 4 + 0x515D30); /* switch: 8 entries, 8 targets */
    if (_jt == 0x00515B25u) goto loc_00515B25;
    if (_jt == 0x00515B7Cu) goto loc_00515B7C;
    if (_jt == 0x00515BB6u) goto loc_00515BB6;
    if (_jt == 0x00515BF0u) goto loc_00515BF0;
    if (_jt == 0x00515C2Au) goto loc_00515C2A;
    if (_jt == 0x00515C64u) goto loc_00515C64;
    if (_jt == 0x00515CA3u) goto loc_00515CA3;
    if (_jt == 0x00515CE2u) goto loc_00515CE2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00515B25: ;
    PUSH32(esp, 0x649168);
    PUSH32(esp, 0x00515B2Fu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00515B2F: ;
    ecx = MEM32(edi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(0x69C7D0);
    PUSH32(esp, 0x00515B41u); RECOMP_ABI_CALL(0x004F9E70u, sub_004F9E70); /* call 0x004F9E70 */

loc_00515B41: ;
    PUSH32(esp, 0x78);
    PUSH32(esp, 0x64914C);
    PUSH32(esp, 0x20);
    esi = eax;
    PUSH32(esp, 0x00515B51u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00515B51: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00515B64; /* je: equal / zero */

loc_00515B58: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00515B60u); RECOMP_ABI_CALL(0x005159B0u, sub_005159B0); /* call 0x005159B0 */

loc_00515B60: ;
    esi = eax;
    goto loc_00515B66;

loc_00515B64: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00515B66: ;
    fp_push(MEMF(edi + 0x10)); /* fld float */
    PUSH32(esp, 0x00515B6Eu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00515B6E: ;
    MEM32(esi + 0x18) = eax;
    fp_push(MEMF(edi + 0x14)); /* fld float */
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00515CF0;

loc_00515B7C: ;
    PUSH32(esp, 0x649138);
    PUSH32(esp, 0x00515B86u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00515B86: ;
    PUSH32(esp, 0x81);
    PUSH32(esp, 0x64914C);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00515B97u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00515B97: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00515C97; /* je: equal / zero */

loc_00515BA2: ;
    ecx = eax;
    PUSH32(esp, 0x00515BA9u); RECOMP_ABI_CALL(0x005168C0u, sub_005168C0); /* call 0x005168C0 */

loc_00515BA9: ;
    edx = MEM32(edi + 8);
    MEM32(eax + 0x14) = edx;
    esi = eax;
    goto loc_00515CF0;

loc_00515BB6: ;
    PUSH32(esp, 0x649118);
    PUSH32(esp, 0x00515BC0u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00515BC0: ;
    PUSH32(esp, 0x89);
    PUSH32(esp, 0x64914C);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x00515BD1u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00515BD1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00515CD6; /* je: equal / zero */

loc_00515BDC: ;
    ecx = eax;
    PUSH32(esp, 0x00515BE3u); RECOMP_ABI_CALL(0x005159D0u, sub_005159D0); /* call 0x005159D0 */

loc_00515BE3: ;
    ecx = MEM32(edi + 8);
    MEM32(eax + 0x14) = ecx;
    esi = eax;
    goto loc_00515CF0;

loc_00515BF0: ;
    PUSH32(esp, 0x649100);
    PUSH32(esp, 0x00515BFAu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00515BFA: ;
    PUSH32(esp, 0x91);
    PUSH32(esp, 0x64914C);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00515C0Bu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00515C0B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00515C97; /* je: equal / zero */

loc_00515C16: ;
    ecx = eax;
    PUSH32(esp, 0x00515C1Du); RECOMP_ABI_CALL(0x005159F0u, sub_005159F0); /* call 0x005159F0 */

loc_00515C1D: ;
    edx = MEM32(edi + 8);
    MEM32(eax + 0x14) = edx;
    esi = eax;
    goto loc_00515CF0;

loc_00515C2A: ;
    PUSH32(esp, 0x6490E0);
    PUSH32(esp, 0x00515C34u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00515C34: ;
    PUSH32(esp, 0x99);
    PUSH32(esp, 0x64914C);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00515C45u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00515C45: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00515CD6; /* je: equal / zero */

loc_00515C50: ;
    ecx = eax;
    PUSH32(esp, 0x00515C57u); RECOMP_ABI_CALL(0x00515A10u, sub_00515A10); /* call 0x00515A10 */

loc_00515C57: ;
    ecx = MEM32(edi + 8);
    MEM32(eax + 0x14) = ecx;
    esi = eax;
    goto loc_00515CF0;

loc_00515C64: ;
    PUSH32(esp, 0x6490C4);
    PUSH32(esp, 0x00515C6Eu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00515C6E: ;
    PUSH32(esp, 0xA1);
    PUSH32(esp, 0x64914C);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00515C7Fu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00515C7F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00515C97; /* je: equal / zero */

loc_00515C86: ;
    ecx = eax;
    PUSH32(esp, 0x00515C8Du); RECOMP_ABI_CALL(0x00515A30u, sub_00515A30); /* call 0x00515A30 */

loc_00515C8D: ;
    edx = MEM32(edi + 8);
    MEM32(eax + 0x14) = edx;
    esi = eax;
    goto loc_00515CF0;

loc_00515C97: ;
    edx = MEM32(edi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x14) = edx;
    esi = eax;
    goto loc_00515CF0;

loc_00515CA3: ;
    PUSH32(esp, 0x6490A4);
    PUSH32(esp, 0x00515CADu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00515CAD: ;
    PUSH32(esp, 0xA9);
    PUSH32(esp, 0x64914C);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00515CBEu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00515CBE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00515CD6; /* je: equal / zero */

loc_00515CC5: ;
    ecx = eax;
    PUSH32(esp, 0x00515CCCu); RECOMP_ABI_CALL(0x00515A50u, sub_00515A50); /* call 0x00515A50 */

loc_00515CCC: ;
    ecx = MEM32(edi + 8);
    MEM32(eax + 0x14) = ecx;
    esi = eax;
    goto loc_00515CF0;

loc_00515CD6: ;
    ecx = MEM32(edi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x14) = ecx;
    esi = eax;
    goto loc_00515CF0;

loc_00515CE2: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x649064);
    PUSH32(esp, 0x00515CEDu); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_00515CED: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00515CF0: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00515CF7u); RECOMP_ABI_CALL(0x00515A70u, sub_00515A70); /* call 0x00515A70 */

loc_00515CF7: ;
    edi = MEM32(esp + 0x14);
    SET_LO16(eax, MEM16(edi + 6));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(edi + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 4), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00515D16; /* jne: not equal / not zero */

loc_00515D08: ;
    edx = ZX16(LO16(eax));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00515D16u); RECOMP_ABI_CALL(0x00501360u, sub_00501360); /* call 0x00501360 */

loc_00515D16: ;
    edx = MEM32(edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edi + 4));
    ecx = ZX16(LO16(eax));
    ecx = edx + ecx * 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(edi + 4) = LO16(eax);
    POP32(esp, edi);
    MEM32(ecx) = esi;
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
 * sub_00515D80
 * Original: 0x00515D80 - 0x00515E47 (199 bytes, 68 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00515D80(void)
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

loc_00515D80: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, 0x649184);
    ecx = esi;
    PUSH32(esp, 0x00515D96u); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_00515D96: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00515D9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00515D9Au); } /* indirect call */
    }

loc_00515D9D: ;
    edi = MEM32(esp + 0x30);
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    ebx = eax;
    PUSH32(esp, 0x00515DABu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00515DAB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(edi) = 0;
    MEM16(edi + 4) = 0;
    MEM16(edi + 6) = 0;
    PUSH32(esp, 0x00515DC8u); RECOMP_ABI_CALL(0x00501360u, sub_00501360); /* call 0x00501360 */

loc_00515DC8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0xC) = 0x62D52C;
    if (CMP_LE(_fas, _fbs)) goto loc_00515E33; /* jle: less or equal (signed <=) */

loc_00515DD4: ;
    PUSH32(esp, 0x64917C);
    ecx = esi;
    PUSH32(esp, 0x00515DE0u); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_00515DE0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00515DE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00515DE4u); } /* indirect call */
    }

loc_00515DE7: ;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00515DF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00515DEFu); } /* indirect call */
    }

loc_00515DF2: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x14) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00515DFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00515DFAu); } /* indirect call */
    }

loc_00515DFD: ;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00515E08u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00515E05u); } /* indirect call */
    }

loc_00515E08: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00515E13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00515E10u); } /* indirect call */
    }

loc_00515E13: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00515E1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00515E1Bu); } /* indirect call */
    }

loc_00515E1E: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00515E2Du); RECOMP_ABI_CALL(0x00515B00u, sub_00515B00); /* call 0x00515B00 */

loc_00515E2D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00515DD4; /* jne: not equal / not zero */

loc_00515E33: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x00515E3Cu); RECOMP_ABI_CALL(0x00614360u, sub_00614360); /* call 0x00614360 */

loc_00515E3C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
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
 * sub_00515E50
 * Original: 0x00515E50 - 0x00515E90 (64 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00515E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00515E50: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x64914C);
    PUSH32(esp, 0x38);
    edi = ecx;
    PUSH32(esp, 0x00515E62u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00515E62: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00515E74; /* je: equal / zero */

loc_00515E69: ;
    ecx = eax;
    PUSH32(esp, 0x00515E70u); RECOMP_ABI_CALL(0x00516930u, sub_00516930); /* call 0x00516930 */

loc_00515E70: ;
    esi = eax;
    goto loc_00515E76;

loc_00515E74: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00515E76: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00515E83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00515E80u); } /* indirect call */
    }

loc_00515E83: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00515E8Bu); RECOMP_ABI_CALL(0x00515AC0u, sub_00515AC0); /* call 0x00515AC0 */

loc_00515E8B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00515E90
 * Original: 0x00515E90 - 0x00515ED6 (70 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00515E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00515E90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x53);
    PUSH32(esp, 0x64914C);
    PUSH32(esp, 0x2C);
    edi = ecx;
    PUSH32(esp, 0x00515EA2u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00515EA2: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00515EBA; /* je: equal / zero */

loc_00515EAB: ;
    ecx = esi;
    PUSH32(esp, 0x00515EB2u); RECOMP_ABI_CALL(0x00516320u, sub_00516320); /* call 0x00516320 */

loc_00515EB2: ;
    MEM32(esi) = 0x648F58;
    goto loc_00515EBC;

loc_00515EBA: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00515EBC: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00515EC9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00515EC6u); } /* indirect call */
    }

loc_00515EC9: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00515ED1u); RECOMP_ABI_CALL(0x00515AC0u, sub_00515AC0); /* call 0x00515AC0 */

loc_00515ED1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00515EE0
 * Original: 0x00515EE0 - 0x00515F20 (64 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00515EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00515EE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5B);
    PUSH32(esp, 0x64914C);
    PUSH32(esp, 0x20);
    edi = ecx;
    PUSH32(esp, 0x00515EF2u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00515EF2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00515F04; /* je: equal / zero */

loc_00515EF9: ;
    ecx = eax;
    PUSH32(esp, 0x00515F00u); RECOMP_ABI_CALL(0x00516CD0u, sub_00516CD0); /* call 0x00516CD0 */

loc_00515F00: ;
    esi = eax;
    goto loc_00515F06;

loc_00515F04: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00515F06: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00515F13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00515F10u); } /* indirect call */
    }

loc_00515F13: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00515F1Bu); RECOMP_ABI_CALL(0x00515AC0u, sub_00515AC0); /* call 0x00515AC0 */

loc_00515F1B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00515F20
 * Original: 0x00515F20 - 0x00515FBD (157 bytes, 57 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00515F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00515F20: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    edi = ecx;
    PUSH32(esp, 0x00515F33u); RECOMP_ABI_CALL(0x00515A90u, sub_00515A90); /* call 0x00515A90 */

loc_00515F33: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00515FB6; /* je: equal / zero */

loc_00515F37: ;
    if (CMP_LE(_fas, _fbs)) goto loc_00515FB6; /* jle: less or equal (signed <=) */

loc_00515F39: ;
    PUSH32(esp, ebx);
    ebx = esi;
    esi = MEM32(esp + 0x10);

loc_00515F40: ;
    PUSH32(esp, 0x6491A4);
    ecx = esi;
    PUSH32(esp, 0x00515F4Cu); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_00515F4C: ;
    PUSH32(esp, 0x63E350);
    ecx = esi;
    PUSH32(esp, 0x00515F58u); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_00515F58: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x64919C);
    ecx = esi;
    PUSH32(esp, 0x00515F66u); RECOMP_ABI_CALL(0x00615580u, sub_00615580); /* call 0x00615580 */

loc_00515F66: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00515F72; /* je: equal / zero */

loc_00515F6A: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00515F72u); RECOMP_ABI_CALL(0x00515E50u, sub_00515E50); /* call 0x00515E50 */

loc_00515F72: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x639348);
    ecx = esi;
    PUSH32(esp, 0x00515F80u); RECOMP_ABI_CALL(0x00615580u, sub_00615580); /* call 0x00615580 */

loc_00515F80: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00515F8C; /* je: equal / zero */

loc_00515F84: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00515F8Cu); RECOMP_ABI_CALL(0x00515E90u, sub_00515E90); /* call 0x00515E90 */

loc_00515F8C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x649194);
    ecx = esi;
    PUSH32(esp, 0x00515F9Au); RECOMP_ABI_CALL(0x00615580u, sub_00615580); /* call 0x00615580 */

loc_00515F9A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00515FA6; /* je: equal / zero */

loc_00515F9E: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00515FA6u); RECOMP_ABI_CALL(0x00515EE0u, sub_00515EE0); /* call 0x00515EE0 */

loc_00515FA6: ;
    PUSH32(esp, 0x63E344);
    ecx = esi;
    PUSH32(esp, 0x00515FB2u); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_00515FB2: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00515F40; /* jne: not equal / not zero */

loc_00515FB5: ;
    POP32(esp, ebx);

loc_00515FB6: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00515FC0
 * Original: 0x00515FC0 - 0x00515FEA (42 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00515FC0(void)
{

loc_00515FC0: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x00515FCEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00515FCBu); } /* indirect call */
    }

loc_00515FCE: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x00515FD6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00515FD3u); } /* indirect call */
    }

loc_00515FD6: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00515FE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00515FE0u); } /* indirect call */
    }

loc_00515FE3: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00515FF0
 * Original: 0x00515FF0 - 0x00516095 (165 bytes, 57 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00515FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00515FF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    edi = ecx;
    PUSH32(esp, 0x6491DC);
    ecx = esi;
    PUSH32(esp, 0x00516006u); RECOMP_ABI_CALL(0x00615580u, sub_00615580); /* call 0x00615580 */

loc_00516006: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0051600F; /* jne: not equal / not zero */

loc_0051600A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0051600F: ;
    PUSH32(esp, 0x63E350);
    ecx = esi;
    PUSH32(esp, 0x0051601Bu); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_0051601B: ;
    PUSH32(esp, 0x6491CC);
    ecx = esi;
    PUSH32(esp, 0x00516027u); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_00516027: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0051602Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0051602Bu); } /* indirect call */
    }

loc_0051602E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    MEM8(edi + 0x11) = LO8(ecx);
    PUSH32(esp, 0x6491B8);
    ecx = esi;
    PUSH32(esp, 0x00516042u); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_00516042: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00516049u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00516046u); } /* indirect call */
    }

loc_00516049: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x6491AC);
    ecx = esi;
    MEM32(edi + 0x14) = eax;
    PUSH32(esp, 0x0051605Au); RECOMP_ABI_CALL(0x00615580u, sub_00615580); /* call 0x00615580 */

loc_0051605A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051607B; /* je: equal / zero */

loc_0051605E: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00516065u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00516062u); } /* indirect call */
    }

loc_00516065: ;
    PUSH32(esp, 0x63E344);
    ecx = esi;
    MEM32(edi + 0x18) = eax;
    PUSH32(esp, 0x00516074u); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_00516074: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0051607B: ;
    PUSH32(esp, 0x63E344);
    ecx = esi;
    MEM32(edi + 0x18) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0051608Eu); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_0051608E: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005160A0
 * Original: 0x005160A0 - 0x005160BE (30 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005160A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005160A0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x005160A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005160A5u); } /* indirect call */
    }

loc_005160A8: ;
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x005160BAu); RECOMP_ABI_CALL(0x00515D80u, sub_00515D80); /* call 0x00515D80 */

loc_005160BA: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005160C0
 * Original: 0x005160C0 - 0x005160E9 (41 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005160C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005160C0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x005160D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005160D1u); } /* indirect call */
    }

loc_005160D4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005160DC; /* jne: not equal / not zero */

loc_005160D8: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_005160DC: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x005160E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005160E0u); } /* indirect call */
    }

loc_005160E3: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005160F0
 * Original: 0x005160F0 - 0x0051611A (42 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005160F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005160F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x18) = 0xFFFFFFFFu;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00516109u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00516109: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = edi;
    MEM16(esi + 8) = LO16(edi);
    MEM16(esi + 0xA) = LO16(edi);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00516120
 * Original: 0x00516120 - 0x00516172 (82 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00516120: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = ZX16(MEM16(edi + 8));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0051614F; /* jle: less or equal (signed <=) */

loc_0051612F: ;
    /* nop */

loc_00516130: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00516140; /* je: equal / zero */

loc_0051613A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00516140u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0051613Eu); } /* indirect call */
    }

loc_00516140: ;
    eax = MEM32(edi + 4);
    MEM32(eax + esi * 4) = 0;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00516130; /* jl: less (signed <) */

loc_0051614F: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00516158u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00516158: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = 0;
    MEM16(edi + 8) = 0;
    MEM16(edi + 0xA) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00516180
 * Original: 0x00516180 - 0x0051621B (155 bytes, 66 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00516180: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x6C38A4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0xC);
    eax = MEM32(esi + 0xC);
    ebx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ecx;
    MEM8(esp + 0x13) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_005161E2; /* jne: not equal / not zero */

loc_005161A5: ;
    ebp = ZX16(MEM16(esi + 8));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005161E2; /* jle: less or equal (signed <=) */

loc_005161AF: ;
    /* nop */

loc_005161B0: ;
    edx = MEM32(esi + 4);
    ecx = MEM32(edx + edi * 4);
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005161C5; /* je: equal / zero */

loc_005161BB: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x005161C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005161C2u); } /* indirect call */
    }

loc_005161C5: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005161D5; /* je: equal / zero */

loc_005161D0: ;
    MEM8(esp + 0x13) = 0;

loc_005161D5: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005161B0; /* jl: less (signed <) */

loc_005161DA: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00516208; /* je: equal / zero */

loc_005161E2: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00516203; /* jne: not equal / not zero */

loc_005161EB: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x005161F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005161EDu); } /* indirect call */
    }

loc_005161F0: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    POP32(esp, ebp);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00516203: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00516208u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00516205u); } /* indirect call */
    }

loc_00516208: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    POP32(esp, ebp);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00516220
 * Original: 0x00516220 - 0x0051626D (77 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00516220: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0051625A; /* jne: not equal / not zero */

loc_0051622C: ;
    ebx = ZX16(MEM16(edi + 8));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(edi + 0xC) = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_00516267; /* jle: less or equal (signed <=) */

loc_0051623D: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);

loc_00516242: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0051624Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0051624Bu); } /* indirect call */
    }

loc_0051624E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00516242; /* jl: less (signed <) */

loc_00516253: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0051625A: ;
    PUSH32(esp, 0x6491E8);
    PUSH32(esp, 0x00516264u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00516264: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00516267: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00516270
 * Original: 0x00516270 - 0x00516296 (38 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00516270: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = ZX16(MEM16(edi + 8));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    MEM32(edi + 0xC) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_00516292; /* jle: less or equal (signed <=) */

loc_00516282: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0051628Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0051628Au); } /* indirect call */
    }

loc_0051628D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00516282; /* jl: less (signed <) */

loc_00516292: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_005162A0
 * Original: 0x005162A0 - 0x005162D8 (56 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005162A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005162A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = ZX16(MEM16(edi + 8));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005162D2; /* jle: less or equal (signed <=) */

loc_005162AF: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);

loc_005162B4: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x005162BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005162BCu); } /* indirect call */
    }

loc_005162BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005162CC; /* jne: not equal / not zero */

loc_005162C3: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + esi * 4);
    MEM32(ecx + 0x18) = ebp;

loc_005162CC: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005162B4; /* jl: less (signed <) */

loc_005162D1: ;
    POP32(esp, ebp);

loc_005162D2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005162E0
 * Original: 0x005162E0 - 0x0051631D (61 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005162E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005162E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = ZX16(MEM16(edi + 8));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00516311; /* jle: less or equal (signed <=) */

loc_005162EF: ;
    /* nop */

loc_005162F0: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x005162FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005162F8u); } /* indirect call */
    }

loc_005162FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00516317; /* jne: not equal / not zero */

loc_00516300: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + esi * 4);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00516317; /* jne: not equal / not zero */

loc_0051630C: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005162F0; /* jl: less (signed <) */

loc_00516311: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00516317: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00516320
 * Original: 0x00516320 - 0x0051634F (47 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516320(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00516320: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x649208;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = ebx;
    MEM16(esi + 8) = LO16(ebx);
    MEM16(esi + 0xA) = LO16(ebx);
    PUSH32(esp, 0x0051633Cu); RECOMP_ABI_CALL(0x005160F0u, sub_005160F0); /* call 0x005160F0 */

loc_0051633C: ;
    MEM8(esi + 0x10) = LO8(ebx);
    MEM8(esi + 0x11) = 1;
    MEM32(esi + 0x14) = 0xFFFFFFFEu;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00516350
 * Original: 0x00516350 - 0x00516372 (34 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00516350: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x649208;
    PUSH32(esp, 0x0051635Eu); RECOMP_ABI_CALL(0x00516120u, sub_00516120); /* call 0x00516120 */

loc_0051635E: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00516367u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00516367: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00614360(); return; /* tail jmp 0x00614360 */

}

/**
 * sub_00516380
 * Original: 0x00516380 - 0x005163AC (44 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00516380: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0051639F; /* jne: not equal / not zero */

loc_00516389: ;
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051639F; /* je: equal / zero */

loc_00516391: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005163A4; /* je: equal / zero */

loc_00516396: ;
    edx = MEM32(esp + 8);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005163A4; /* je: equal / zero */

loc_0051639F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_005163A4: ;
    PUSH32(esp, 0x005163A9u); RECOMP_ABI_CALL(0x005162E0u, sub_005162E0); /* call 0x005162E0 */

loc_005163A9: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005163B0
 * Original: 0x005163B0 - 0x005163D2 (34 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005163B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005163B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005163CE; /* jne: not equal / not zero */

loc_005163BC: ;
    ecx = esi;
    PUSH32(esp, 0x005163C3u); RECOMP_ABI_CALL(0x005162E0u, sub_005162E0); /* call 0x005162E0 */

loc_005163C3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005163CE; /* je: equal / zero */

loc_005163C7: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x005163CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005163CBu); } /* indirect call */
    }

loc_005163CE: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005163E0
 * Original: 0x005163E0 - 0x005163FE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005163E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005163E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005163E8u); RECOMP_ABI_CALL(0x00516350u, sub_00516350); /* call 0x00516350 */

loc_005163E8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005163F8; /* je: equal / zero */

loc_005163EF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005163F5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005163F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005163F8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00516400
 * Original: 0x00516400 - 0x00516419 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00516400: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = 0x648F58;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x1C) = eax;
    g_seh_ebp = ebp; sub_00516350(); return; /* tail jmp 0x00516350 */

}

/**
 * sub_00516420
 * Original: 0x00516420 - 0x00516444 (36 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516420(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00516420: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = edi + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00516433u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00516430u); } /* indirect call */
    }

loc_00516433: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0051643Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00516437u); } /* indirect call */
    }

loc_0051643A: ;
    MEMF(edi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00516450
 * Original: 0x00516450 - 0x0051646F (31 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516450(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00516450: ;
    PUSH32(esp, 1);
    eax = ecx + 0x20;
    PUSH32(esp, 0x20);
    MEM32(0x85B2C0) = 0xB2FF0000u;
    ecx = MEM32(ecx + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0051646Bu); RECOMP_ABI_CALL(0x005FBFA0u, sub_005FBFA0); /* call 0x005FBFA0 */

loc_0051646B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00516470
 * Original: 0x00516470 - 0x0051650C (156 bytes, 64 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516470(void)
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

loc_00516470: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x20)); /* fld float */
    ecx = MEM32(eax + 0x48);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x34)); /* fsub dword ptr [eax + 0x34] */
    ecx = MEM32(ecx + 0x6C);
    fp_push(MEMF(esi + 0x24)); /* fld float */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x38)); /* fsub dword ptr [eax + 0x38] */
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x3C)); /* fsub dword ptr [eax + 0x3c] */
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
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00516506; /* jp: parity */

loc_005164B7: ;
    fp_push(MEMF(esi + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    fp_push(MEMF(esi + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    fp_push(MEMF(esi + 0x28)); /* fld float */
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
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00516506; /* jne: not equal / not zero */

loc_005164EA: ;
    PUSH32(esp, 0x649250);
    PUSH32(esp, 0x005164F4u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_005164F4: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00516500u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005164FDu); } /* indirect call */
    }

loc_00516500: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00516506: ;
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
 * sub_00516510
 * Original: 0x00516510 - 0x00516517 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516510(void)
{

loc_00516510: ;
    eax = MEM32(ecx + 8);
    MEM32(ecx + 0xC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00516520
 * Original: 0x00516520 - 0x0051653D (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516520(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00516520: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = 0x648FA0;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0x10) = 1;
    PUSH32(esp, 0x0051653Au); RECOMP_ABI_CALL(0x00516510u, sub_00516510); /* call 0x00516510 */

loc_0051653A: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00516540
 * Original: 0x00516540 - 0x00516565 (37 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00516540(void)
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

loc_00516540: ;
    MEM32(ecx + 0x10) = 0;
    PUSH32(esp, 0x0051654Cu); RECOMP_ABI_CALL(0x00516510u, sub_00516510); /* call 0x00516510 */

loc_0051654C: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00516562; /* je: equal / zero */

loc_00516554: ;
    eax = MEM32(0x6C38A4);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xC)); /* fadd dword ptr [ecx + 0xc] */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_00516562: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00516570
 * Original: 0x00516570 - 0x00516632 (194 bytes, 69 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516570(void)
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

loc_00516570: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00516578u); RECOMP_ABI_CALL(0x005C3530u, sub_005C3530); /* call 0x005C3530 */

loc_00516578: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_005165C6; /* je: equal / zero */

loc_00516580: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00516630; /* jne: not equal / not zero */

loc_00516587: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x00516599u); RECOMP_ABI_CALL(0x00502340u, sub_00502340); /* call 0x00502340 */

loc_00516599: ;
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x14);
    edx = (uint32_t)(int32_t)SMEM16(ecx + eax * 2 + 0x22);
    ecx = MEM32(ecx + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    edx = ZX16(MEM16(ecx + eax * 2));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x649314);
    PUSH32(esp, 0x005165C1u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_005165C1: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005165C6: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(MEM16(ecx + 0x20)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x20), 0xFFFFFFFFu (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005165E1; /* je: equal / zero */

loc_005165D0: ;
    eax = MEM32(esi + 0x18);
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005165DFu); RECOMP_ABI_CALL(0x005023D0u, sub_005023D0); /* call 0x005023D0 */

loc_005165DF: ;
    goto loc_00516605;

loc_005165E1: ;
    eax = ZX16(MEM16(ecx + 0x1E));
    PUSH32(esp, eax);
    PUSH32(esp, 0x6492B8);
    PUSH32(esp, 0x005165F0u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005165F0: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(esi + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00516605u); RECOMP_ABI_CALL(0x00502340u, sub_00502340); /* call 0x00502340 */

loc_00516605: ;
    eax = MEM32(esi + 0x18);
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    ecx = MEM32(esi + 0x14);
    edx = (uint32_t)(int32_t)SMEM16(ecx + eax * 2 + 0x22);
    ecx = MEM32(ecx + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    edx = ZX16(MEM16(ecx + eax * 2));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x649278);
    PUSH32(esp, 0x0051662Du); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0051662D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00516630: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00516640
 * Original: 0x00516640 - 0x00516661 (33 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516640(void)
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

loc_00516640: ;
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0051665D; /* jp: parity */

loc_00516651: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00516656u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00516653u); } /* indirect call */
    }

loc_00516656: ;
    MEM32(esi + 0x10) = 1;

loc_0051665D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00516670
 * Original: 0x00516670 - 0x005166B1 (65 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00516670: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00516678u); RECOMP_ABI_CALL(0x005C3530u, sub_005C3530); /* call 0x005C3530 */

loc_00516678: ;
    eax = MEM32(0x6C32D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005166A2; /* je: equal / zero */

loc_00516681: ;
    SET_LO8(eax, MEM8(0x6C342A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005166A2; /* je: equal / zero */

loc_0051668A: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x69947C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x005166A2u); RECOMP_ABI_CALL(0x004F5630u, sub_004F5630); /* call 0x004F5630 */

loc_005166A2: ;
    PUSH32(esp, 0x649358);
    PUSH32(esp, 0x005166ACu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_005166AC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005166C0
 * Original: 0x005166C0 - 0x005166F7 (55 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005166C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005166C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x005166C9u); RECOMP_ABI_CALL(0x005C3530u, sub_005C3530); /* call 0x005C3530 */

loc_005166C9: ;
    edi = MEM32(esi + 0x14);
    PUSH32(esp, 0x005166D1u); RECOMP_ABI_CALL(0x00478590u, sub_00478590); /* call 0x00478590 */

loc_005166D1: ;
    ecx = edi + edi * 8;
    edi = MEM32(eax + 0x2C);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x005166E3u); RECOMP_ABI_CALL(0x004775E0u, sub_004775E0); /* call 0x004775E0 */

loc_005166E3: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x649390);
    PUSH32(esp, 0x005166F1u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_005166F1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00516700
 * Original: 0x00516700 - 0x0051672A (42 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516700(void)
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

loc_00516700: ;
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    MEMF(esi + 0xC) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00516726; /* jp: parity */

loc_0051671A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0051671Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0051671Cu); } /* indirect call */
    }

loc_0051671F: ;
    MEM32(esi + 0x10) = 1;

loc_00516726: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00516730
 * Original: 0x00516730 - 0x00516744 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00516730: ;
    eax = MEM32(0x698624);
    edx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00516750
 * Original: 0x00516750 - 0x005167C7 (119 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00516750: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00516758u); RECOMP_ABI_CALL(0x005C3530u, sub_005C3530); /* call 0x005C3530 */

loc_00516758: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6493A8);
    PUSH32(esp, 0x00516766u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00516766: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x00516770u); RECOMP_ABI_CALL(0x00516730u, sub_00516730); /* call 0x00516730 */

loc_00516770: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005167AE; /* je: equal / zero */

loc_00516774: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(0x698624);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x42C);
    eax = MEM32(edx + 8);
    ecx = MEM32(ecx + eax + 0x58);
    eax = MEM32(ecx + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005167B6; /* je: equal / zero */

loc_00516794: ;
    if (CMP_LE(_fas, _fbs)) goto loc_005167A6; /* jle: less or equal (signed <=) */

loc_00516796: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_005167A6; /* jg: greater (signed >) */

loc_0051679B: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005167B0; /* je: equal / zero */

loc_005167A1: ;
    edx = 1;

loc_005167A6: ;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005167AEu); RECOMP_ABI_CALL(0x004B3FF0u, sub_004B3FF0); /* call 0x004B3FF0 */

loc_005167AE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005167B0: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004B2900(); return; /* tail jmp 0x004B2900 */

loc_005167B6: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 3 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_005167C2; /* je: equal / zero */

loc_005167BD: ;
    g_seh_ebp = ebp; sub_004B1320(); return; /* tail jmp 0x004B1320 */

loc_005167C2: ;
    g_seh_ebp = ebp; sub_004B1340(); return; /* tail jmp 0x004B1340 */

}

/**
 * sub_005167D0
 * Original: 0x005167D0 - 0x0051680E (62 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005167D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005167D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x005167D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005167D5u); } /* indirect call */
    }

loc_005167D8: ;
    ecx = esi;
    PUSH32(esp, 0x005167DFu); RECOMP_ABI_CALL(0x00516510u, sub_00516510); /* call 0x00516510 */

loc_005167DF: ;
    ecx = esi;
    PUSH32(esp, 0x005167E6u); RECOMP_ABI_CALL(0x00516730u, sub_00516730); /* call 0x00516730 */

loc_005167E6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051680C; /* je: equal / zero */

loc_005167EA: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(0x698624);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x42C);
    eax = MEM32(edx + 8);
    ecx = MEM32(ecx + eax + 0x58);
    eax = MEM32(ecx + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0051680C; /* jne: not equal / not zero */

loc_00516806: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004B12E0(); return; /* tail jmp 0x004B12E0 */

loc_0051680C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00516810
 * Original: 0x00516810 - 0x00516847 (55 bytes, 19 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00516810: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00516818u); RECOMP_ABI_CALL(0x005C3530u, sub_005C3530); /* call 0x005C3530 */

loc_00516818: ;
    eax = MEM32(0x697B88);
    edx = MEM32(esi + 0x14);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00516829u); RECOMP_ABI_CALL(0x00484DF0u, sub_00484DF0); /* call 0x00484DF0 */

loc_00516829: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00516834; /* je: equal / zero */

loc_0051682D: ;
    ecx = eax;
    PUSH32(esp, 0x00516834u); RECOMP_ABI_CALL(0x00530CD0u, sub_00530CD0); /* call 0x00530CD0 */

loc_00516834: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6493BC);
    PUSH32(esp, 0x00516842u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00516842: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00516850
 * Original: 0x00516850 - 0x0051687E (46 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00516850: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00516858u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00516855u); } /* indirect call */
    }

loc_00516858: ;
    ecx = esi;
    PUSH32(esp, 0x0051685Fu); RECOMP_ABI_CALL(0x00516510u, sub_00516510); /* call 0x00516510 */

loc_0051685F: ;
    ecx = MEM32(0x697B88);
    edx = MEM32(esi + 0x14);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00516871u); RECOMP_ABI_CALL(0x00484DF0u, sub_00484DF0); /* call 0x00484DF0 */

loc_00516871: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0051687D; /* je: equal / zero */

loc_00516876: ;
    MEM32(eax + 0x90) = MEM32(eax + 0x90) | 8;
    _fa = (uint32_t)(MEM32(eax + 0x90)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0051687D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00516880
 * Original: 0x00516880 - 0x005168B8 (56 bytes, 18 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00516880: ;
    SET_LO8(eax, MEM8(0x6C3421));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_005168B6; /* jne: not equal / not zero */

loc_0051688C: ;
    PUSH32(esp, 0x00516891u); RECOMP_ABI_CALL(0x005C3530u, sub_005C3530); /* call 0x005C3530 */

loc_00516891: ;
    eax = MEM32(0x697B88);
    edx = MEM32(esi + 0x14);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005168A2u); RECOMP_ABI_CALL(0x00484DD0u, sub_00484DD0); /* call 0x00484DD0 */

loc_005168A2: ;
    ecx = eax;
    PUSH32(esp, 0x005168A9u); RECOMP_ABI_CALL(0x004AE8F0u, sub_004AE8F0); /* call 0x004AE8F0 */

loc_005168A9: ;
    PUSH32(esp, 0x6493D0);
    PUSH32(esp, 0x005168B3u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_005168B3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005168B6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005168C0
 * Original: 0x005168C0 - 0x005168D9 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005168C0(void)
{

loc_005168C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005168C8u); RECOMP_ABI_CALL(0x00516520u, sub_00516520); /* call 0x00516520 */

loc_005168C8: ;
    MEM32(esi) = 0x649408;
    MEM32(esi + 0x14) = 0xFFFFFFFFu;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005168E0
 * Original: 0x005168E0 - 0x00516920 (64 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005168E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005168E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005168E8u); RECOMP_ABI_CALL(0x005C3530u, sub_005C3530); /* call 0x005C3530 */

loc_005168E8: ;
    SET_LO8(eax, MEM8(0x6C342C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00516911; /* je: equal / zero */

loc_005168F1: ;
    eax = MEM32(0x6C32D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00516911; /* je: equal / zero */

loc_005168FA: ;
    ecx = MEM32(0x6C38B8);
    eax = MEM32(esi + 0x14);
    edx = MEM32(ecx + 0xE4);
    ecx = MEM32(edx + eax * 4);
    PUSH32(esp, 0x00516911u); RECOMP_ABI_CALL(0x00541920u, sub_00541920); /* call 0x00541920 */

loc_00516911: ;
    PUSH32(esp, 0x649424);
    PUSH32(esp, 0x0051691Bu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0051691B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00516920
 * Original: 0x00516920 - 0x00516930 (16 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516920(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00516920: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00516928u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00516925u); } /* indirect call */
    }

loc_00516928: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00516510(); return; /* tail jmp 0x00516510 */

}

/**
 * sub_00516930
 * Original: 0x00516930 - 0x00516956 (38 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516930(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00516930: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00516938u); RECOMP_ABI_CALL(0x00516320u, sub_00516320); /* call 0x00516320 */

loc_00516938: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x649450;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x28) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00516960
 * Original: 0x00516960 - 0x0051696B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00516960: ;
    MEM32(ecx) = 0x649450;
    g_seh_ebp = ebp; sub_00516350(); return; /* tail jmp 0x00516350 */

}

/**
 * sub_00516970
 * Original: 0x00516970 - 0x005169A4 (52 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00516970: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = edi + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00516983u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00516980u); } /* indirect call */
    }

loc_00516983: ;
    edx = MEM32(esi);
    eax = edi + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0051698Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0051698Bu); } /* indirect call */
    }

loc_0051698E: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00516995u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00516992u); } /* indirect call */
    }

loc_00516995: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(edi + 0x34) = LO8(eax);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005169B0
 * Original: 0x005169B0 - 0x00516A23 (115 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005169B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005169B0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + 0x48);
    eax = MEM32(edx + 0x6C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esi + 0x34));
    MEM32(esp + 8) = 0;
    MEM32(esp + 0x10) = 0;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x30);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x28);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x3C);
    ecx = MEM32(ecx + 0x34);
    PUSH32(esp, edx);
    edx = MEM32(eax + 8);
    eax = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00516A09u); RECOMP_ABI_CALL(0x00610010u, sub_00610010); /* call 0x00610010 */

loc_00516A09: ;
    SET_LO8(ebx, LO8(eax));
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00516A1B; /* je: equal / zero */

loc_00516A12: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00516A1Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00516A18u); } /* indirect call */
    }

loc_00516A1B: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00516A30
 * Original: 0x00516A30 - 0x00516CA8 (632 bytes, 161 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516A30(void)
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

loc_00516A30: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x674FD0);
    esi = ecx;
    PUSH32(esp, 0x00516A40u); RECOMP_ABI_CALL(0x005EDB00u, sub_005EDB00); /* call 0x005EDB00 */

loc_00516A40: ;
    PUSH32(esp, 4);
    PUSH32(esp, 5);
    PUSH32(esp, 0x00516A49u); RECOMP_ABI_CALL(0x005FB070u, sub_005FB070); /* call 0x005FB070 */

loc_00516A49: ;
    eax = MEM32(0x85B2AC);
    MEM32(0x85B2C0) = 0xB2FF0000u;
    ecx = MEM32(esi + 0x1C);
    MEM32(eax) = ecx;
    edx = MEM32(esi + 0x20);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 0x24);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = edx;
    eax = MEM32(0x85B2AC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    fp_push(MEMF(esi + 0x24)); /* fld float */
    fp_push(MEMF(esi + 0x20)); /* fld float */
    ecx = MEM32(esi + 0x1C);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x630D68)); /* fadd dword ptr [0x630d68] */
    MEM32(eax) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = edx;
    eax = MEM32(0x85B2AC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    ecx = MEM32(esi + 0x28);
    MEM32(eax) = ecx;
    edx = MEM32(esi + 0x2C);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 0x30);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = edx;
    eax = MEM32(0x85B2AC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    fp_push(MEMF(esi + 0x30)); /* fld float */
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    ecx = MEM32(esi + 0x28);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x630D68)); /* fadd dword ptr [0x630d68] */
    MEM32(eax) = ecx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = edx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x85B2AC) = MEM32(0x85B2AC) + 0x18;
    _fa = (uint32_t)(MEM32(0x85B2AC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00516B4Au); RECOMP_ABI_CALL(0x005FB150u, sub_005FB150); /* call 0x005FB150 */

loc_00516B4A: ;
    SET_LO8(eax, MEM8(esi + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00516CA3; /* je: equal / zero */

loc_00516B55: ;
    MEM32(0x85B2C0) = 0xB2FFFF00u;
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x1C)); /* fadd dword ptr [esi + 0x1c] */
    PUSH32(esp, 3);
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    PUSH32(esp, 5);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x20)); /* fadd dword ptr [esi + 0x20] */
    fp_push(MEMF(esi + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x24)); /* fadd dword ptr [esi + 0x24] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x1C)); /* fsub dword ptr [esi + 0x1c] */
    fp_push(MEMF(esi + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x24)); /* fsub dword ptr [esi + 0x24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6436FC)); /* fmul dword ptr [0x6436fc] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D370)); /* fmul dword ptr [0x62d370] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00516BD8u); RECOMP_ABI_CALL(0x005FB070u, sub_005FB070); /* call 0x005FB070 */

loc_00516BD8: ;
    eax = MEM32(0x85B2AC);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x630D68)); /* fadd dword ptr [0x630d68] */
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x14);
    MEM32(eax) = ecx;
    MEM32(eax + 8) = edx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x85B2C0);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEM32(eax + 0xC) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x63D2A0)); /* fadd dword ptr [0x63d2a0] */
    edx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(0x85B2B0);
    edx = MEM32(esp + 0x18);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(0x85B2AC);
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = edx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(0x85B2B0);
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x14) = edx;
    eax = MEM32(0x85B2AC);
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = edx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x85B2AC) = MEM32(0x85B2AC) + 0x18;
    _fa = (uint32_t)(MEM32(0x85B2AC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_005FB150(); return; /* tail jmp 0x005FB150 */

loc_00516CA3: ;
    POP32(esp, esi);
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
 * sub_00516CB0
 * Original: 0x00516CB0 - 0x00516CCE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00516CB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00516CB8u); RECOMP_ABI_CALL(0x00516960u, sub_00516960); /* call 0x00516960 */

loc_00516CB8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00516CC8; /* je: equal / zero */

loc_00516CBF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00516CC5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00516CC5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00516CC8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00516CD0
 * Original: 0x00516CD0 - 0x00516CE9 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516CD0(void)
{

loc_00516CD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00516CD8u); RECOMP_ABI_CALL(0x00516320u, sub_00516320); /* call 0x00516320 */

loc_00516CD8: ;
    MEM32(esi) = 0x649498;
    MEM32(esi + 0x1C) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00516CF0
 * Original: 0x00516CF0 - 0x00516CFB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516CF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00516CF0: ;
    MEM32(ecx) = 0x649498;
    g_seh_ebp = ebp; sub_00516350(); return; /* tail jmp 0x00516350 */

}

/**
 * sub_00516D00
 * Original: 0x00516D00 - 0x00516D15 (21 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00516D00(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00516D00: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00516D0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00516D09u); } /* indirect call */
    }

loc_00516D0C: ;
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00516D20
 * Original: 0x00516D20 - 0x00516D3E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00516D20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00516D28u); RECOMP_ABI_CALL(0x00516CF0u, sub_00516CF0); /* call 0x00516CF0 */

loc_00516D28: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00516D38; /* je: equal / zero */

loc_00516D2F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00516D35u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00516D35: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00516D38: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00516D40
 * Original: 0x00516D40 - 0x00516D8E (78 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516D40(void)
{

loc_00516D40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00516D48u); RECOMP_ABI_CALL(0x005E33D0u, sub_005E33D0); /* call 0x005E33D0 */

loc_00516D48: ;
    MEM32(esi) = 0x6494E0;
    MEM32(esi + 0xC) = 0x3E2E147B;
    MEM32(esi + 0x1C) = 0x3E800000;
    eax = 0x3F23D70A;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    eax = 0x3F800000;
    MEM32(esi + 0x20) = 3;
    SET_LO8(ecx, 1);
    MEM8(esi + 0x24) = LO8(ecx);
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    MEM8(esi + 0x38) = LO8(ecx);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00516D90
 * Original: 0x00516D90 - 0x00516D96 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516D90(void)
{

loc_00516D90: ;
    eax = 0x62D618;
    esp += 4; return; /* ret */

}

/**
 * sub_00516DA0
 * Original: 0x00516DA0 - 0x00516DA6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516DA0(void)
{

loc_00516DA0: ;
    eax = 0x649500;
    esp += 4; return; /* ret */

}

/**
 * sub_00516DB0
 * Original: 0x00516DB0 - 0x00516DBB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516DB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00516DB0: ;
    MEM32(ecx) = 0x6494E0;
    g_seh_ebp = ebp; sub_005E3280(); return; /* tail jmp 0x005E3280 */

}

/**
 * sub_00516DC0
 * Original: 0x00516DC0 - 0x00516E3B (123 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516DC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00516DC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 1);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x649548);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00516DDEu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00516DDE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x649538);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x00516DF4u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00516DF4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x649524);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x00516E0Au); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00516E0A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x649518);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x00516E20u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00516E20: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x64950C);
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x00516E36u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00516E36: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00516E40
 * Original: 0x00516E40 - 0x00516E6D (45 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00516E40: ;
    PUSH32(esp, 0x73);
    PUSH32(esp, 0x649558);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x00516E4Eu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00516E4E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00516E62; /* je: equal / zero */

loc_00516E55: ;
    ecx = eax;
    PUSH32(esp, 0x00516E5Cu); RECOMP_ABI_CALL(0x00516D40u, sub_00516D40); /* call 0x00516D40 */

loc_00516E5C: ;
    MEM32(0x6C261C) = eax;
    esp += 4; return; /* ret */

loc_00516E62: ;
    MEM32(0x6C261C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00516E70
 * Original: 0x00516E70 - 0x00516E8B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00516E70: ;
    ecx = MEM32(0x6C261C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00516E80; /* je: equal / zero */

loc_00516E7A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00516E80u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00516E7Eu); } /* indirect call */
    }

loc_00516E80: ;
    MEM32(0x6C261C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00516E90
 * Original: 0x00516E90 - 0x00516EEF (95 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516E90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00516E90: ;
    eax = MEM32(0x6C32D0);
    ecx = MEM32(eax * 4 + 0x66327C);
    edx = MEM32(0x6C32CC);
    eax = MEM32(edx * 4 + 0x663270);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    ecx = MEM32(0x6C32C8);
    edx = MEM32(ecx * 4 + 0x663174);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x648678);
    eax = esp + 0x10;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00516ECDu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00516ECD: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x6C261C);
    PUSH32(esp, 0x00516EE0u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_00516EE0: ;
    ecx = MEM32(0x6C261C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00516EEBu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00516EE8u); } /* indirect call */
    }

loc_00516EEB: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00516EF0
 * Original: 0x00516EF0 - 0x00516EFE (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516EF0(void)
{

loc_00516EF0: ;
    ecx = MEM32(0x6C261C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00516EFDu); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_00516EFD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00516F00
 * Original: 0x00516F00 - 0x00516F95 (149 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00516F00: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, 1);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x649568;
    MEM32(esi + 8) = ebx;
    MEM8(esi + 0xC) = LO8(eax);
    MEM32(esi + 0x10) = ebx;
    MEM8(esi + 0x14) = LO8(ebx);
    MEM8(esi + 0x15) = LO8(ebx);
    ecx = MEM32(0x6C261C);
    MEM8(ecx + 0x38) = LO8(eax);
    edx = MEM32(0x6C261C);
    MEM8(edx + 0x38) = LO8(ebx);
    eax = MEM32(0x6C261C);
    _fa = (uint32_t)(MEM8(eax + 0x38)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x38), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00516F8A; /* je: equal / zero */

loc_00516F39: ;
    _fa = (uint32_t)(MEM32(0x6C2620)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C2620), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00516F62; /* jne: not equal / not zero */

loc_00516F41: ;
    ecx = MEM32(0x674FB0);
    edx = MEM32(0x674FAC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x84000004u);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00516F5Au); RECOMP_ABI_CALL(0x005FA280u, sub_005FA280); /* call 0x005FA280 */

loc_00516F5A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6C2620) = eax;

loc_00516F62: ;
    _fa = (uint32_t)(MEM32(0x6C2628)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C2628), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00516F8A; /* jne: not equal / not zero */

loc_00516F6A: ;
    eax = MEM32(0x674FB0);
    ecx = MEM32(0x674FAC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xC000004);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00516F82u); RECOMP_ABI_CALL(0x005FA280u, sub_005FA280); /* call 0x005FA280 */

loc_00516F82: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6C2628) = eax;

loc_00516F8A: ;
    MEM32(0x6C2614) = MEM32(0x6C2614) + 1;
    _fa = (uint32_t)(MEM32(0x6C2614)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00516FA0
 * Original: 0x00516FA0 - 0x00517002 (98 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00516FA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00516FA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00516FF9; /* je: equal / zero */

loc_00516FAB: ;
    ebp = MEM32(esp + 0x14);
    /* nop */

loc_00516FB0: ;
    ecx = MEM32(edi + 0x14);
    esi = ebp;

loc_00516FB5: ;
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(edx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00516FDD; /* jne: not equal / not zero */

loc_00516FBF: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00516FD9; /* je: equal / zero */

loc_00516FC3: ;
    SET_LO8(eax, MEM8(ecx + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(edx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00516FDD; /* jne: not equal / not zero */

loc_00516FCF: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00516FB5; /* jne: not equal / not zero */

loc_00516FD9: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00516FE2;

loc_00516FDD: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00516FE2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00516FF6; /* je: equal / zero */

loc_00516FE6: ;
    edi = MEM32(edi + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00516FB0; /* jne: not equal / not zero */

loc_00516FED: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00516FF6: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00516FF9: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00517010
 * Original: 0x00517010 - 0x00517020 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00517010(void)
{

loc_00517010: ;
    edx = MEM32(ecx + 8);
    eax = MEM32(esp + 4);
    MEM32(eax + 0x18) = edx;
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00517020
 * Original: 0x00517020 - 0x00517076 (86 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00517020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00517020: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0051703B; /* jne: not equal / not zero */

loc_0051702B: ;
    eax = MEM32(edx + 0x18);
    MEM32(ecx + 8) = eax;
    MEM32(edx + 0x18) = 0;
    esp += 8; return; /* ret 4 */

loc_0051703B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00517051; /* je: equal / zero */

loc_0051703F: ;
    /* nop */

loc_00517040: ;
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00517051; /* je: equal / zero */

loc_00517047: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00517066; /* je: equal / zero */

loc_0051704B: ;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00517040; /* jne: not equal / not zero */

loc_00517051: ;
    PUSH32(esp, edx);
    edx = MEM32(edx + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x64957C);
    PUSH32(esp, 0x00517060u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00517060: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00517066: ;
    ecx = MEM32(edx + 0x18);
    MEM32(eax + 0x18) = ecx;
    MEM32(edx + 0x18) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00517080
 * Original: 0x00517080 - 0x005170A4 (36 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00517080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00517080: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005170A0; /* je: equal / zero */

loc_00517088: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    /* nop */

loc_00517090: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00517098u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00517095u); } /* indirect call */
    }

loc_00517098: ;
    esi = MEM32(esi + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00517090; /* jne: not equal / not zero */

loc_0051709F: ;
    POP32(esp, edi);

loc_005170A0: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005170B0
 * Original: 0x005170B0 - 0x00517106 (86 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005170B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005170B0: ;
    eax = MEM32(0x6C2610);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005170CA; /* jne: not equal / not zero */

loc_005170B9: ;
    eax = MEM32(esp + 4);
    MEM32(0x6C2610) = eax;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

loc_005170CA: ;
    edx = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_005170E6; /* je: equal / zero */

loc_005170D5: ;
    esi = MEM32(edx + 0x18);

loc_005170D8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x18) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005170F2; /* jl: less (signed <) */

loc_005170DD: ;
    ecx = eax;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005170D8; /* jne: not equal / not zero */

loc_005170E6: ;
    POP32(esp, esi);
    MEM32(ecx + 4) = edx;
    MEM32(edx + 4) = 0;
    esp += 4; return; /* ret */

loc_005170F2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edx + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_005170FE; /* je: equal / zero */

loc_005170F9: ;
    POP32(esp, esi);
    MEM32(ecx + 4) = edx;
    esp += 4; return; /* ret */

loc_005170FE: ;
    POP32(esp, esi);
    MEM32(0x6C2610) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00517110
 * Original: 0x00517110 - 0x00517145 (53 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00517110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00517110: ;
    eax = MEM32(0x6C2610);
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00517126; /* jne: not equal / not zero */

loc_0051711D: ;
    eax = MEM32(edx + 4);
    MEM32(0x6C2610) = eax;
    esp += 4; return; /* ret */

loc_00517126: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00517144; /* je: equal / zero */

loc_0051712A: ;
    /* nop */

loc_00517130: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051713E; /* je: equal / zero */

loc_00517137: ;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00517130; /* jne: not equal / not zero */

loc_0051713D: ;
    esp += 4; return; /* ret */

loc_0051713E: ;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;

loc_00517144: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00517150
 * Original: 0x00517150 - 0x00517193 (67 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00517150(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00517150: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00517157u); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_00517157: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00517163u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_00517163: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x0051716Au); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_0051716A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00517171u); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_00517171: ;
    PUSH32(esp, 0x6E);
    PUSH32(esp, 0x00517178u); RECOMP_ABI_CALL(0x005EE520u, sub_005EE520); /* call 0x005EE520 */

loc_00517178: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x0051717Fu); RECOMP_ABI_CALL(0x005EE4E0u, sub_005EE4E0); /* call 0x005EE4E0 */

loc_0051717F: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x00517186u); RECOMP_ABI_CALL(0x005EE1A0u, sub_005EE1A0); /* call 0x005EE1A0 */

loc_00517186: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0051718Fu); RECOMP_ABI_CALL(0x005EE5A0u, sub_005EE5A0); /* call 0x005EE5A0 */

loc_0051718F: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005171A0
 * Original: 0x005171A0 - 0x005171BA (26 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005171A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005171A0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x64959C;
    MEM8(eax + 4) = LO8(ecx);
    MEM32(eax + 8) = ecx;
    MEM8(eax + 5) = LO8(ecx);
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_005171C0
 * Original: 0x005171C0 - 0x005171C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005171C0(void)
{

loc_005171C0: ;
    MEM32(ecx) = 0x64959C;
    esp += 4; return; /* ret */

}

/**
 * sub_005171D0
 * Original: 0x005171D0 - 0x005171D8 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005171D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005171D0: ;
    ecx = MEM32(ecx + 8);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC)); return; /* indirect tail jmp */

}

/**
 * sub_005171E0
 * Original: 0x005171E0 - 0x005171E9 (9 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005171E0(void)
{

loc_005171E0: ;
    ecx = MEM32(ecx + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x005171E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005171E5u); } /* indirect call */
    }

loc_005171E8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005171F0
 * Original: 0x005171F0 - 0x0051728C (156 bytes, 55 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005171F0(void)
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

loc_005171F0: ;
    SET_LO8(eax, MEM8(0x6C2618));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00517208; /* je: equal / zero */

loc_005171FF: ;
    MEM8(esi + 5) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00517208: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x1C);
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    edx = MEM32(esi);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0051721Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00517219u); } /* indirect call */
    }

loc_0051721C: ;
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x858578)); /* fsub dword ptr [0x858578] */
    ecx = esi;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x85857C)); /* fsub dword ptr [0x85857c] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    eax = MEM32(esi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x858580)); /* fsub dword ptr [0x858580] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00517249u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00517246u); } /* indirect call */
    }

loc_00517249: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00517282; /* jne: not equal / not zero */

loc_00517278: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 5) = LO8(eax);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00517282: ;
    SET_LO8(eax, 1);
    MEM8(esi + 5) = LO8(eax);
    POP32(esp, esi);
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
 * sub_00517290
 * Original: 0x00517290 - 0x00517310 (128 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00517290(void)
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

loc_00517290: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x20));
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0051729Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00517298u); } /* indirect call */
    }

loc_0051729B: ;
    ecx = MEM32(eax);
    MEM32(esp + 8) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0xC) = edx;
    eax = MEM32(eax + 8);
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x005172B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005172B3u); } /* indirect call */
    }

loc_005172B6: ;
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    eax = MEM32(esp + 8);
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x14) = eax;
    eax = esp + 0x14;
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(0x8583A0);
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0x005172E6u); RECOMP_ABI_CALL(0x005FA870u, sub_005FA870); /* call 0x005FA870 */

loc_005172E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0051730A; /* je: equal / zero */

loc_005172EB: ;
    ecx = MEM32(esp);
    PUSH32(esp, ecx);
    ecx = MEM32(0x6C2708);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00517300u); RECOMP_ABI_CALL(0x0051F8D0u, sub_0051F8D0); /* call 0x0051F8D0 */

loc_00517300: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0051730A: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
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
 * sub_00517310
 * Original: 0x00517310 - 0x0051739D (141 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00517310(void)
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

loc_00517310: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0051731Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00517319u); } /* indirect call */
    }

loc_0051731C: ;
    edx = MEM32(esi);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00517325u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00517322u); } /* indirect call */
    }

loc_00517325: ;
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    fp_push(MEMF(edi + 8)); /* fld float */
    eax = MEM32(edi);
    fp_push(MEMF(edi + 4)); /* fld float */
    ecx = esp + 0xC;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    ecx = MEM32(0x8583A0);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x00517356u); RECOMP_ABI_CALL(0x005FA860u, sub_005FA860); /* call 0x005FA860 */

loc_00517356: ;
    ecx = MEM32(0x6C2708);
    esi = eax;
    eax = MEM32(esp + 8);
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, eax);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, edi);
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, 0x0051736Fu); RECOMP_ABI_CALL(0x0051F8D0u, sub_0051F8D0); /* call 0x0051F8D0 */

loc_0051736F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0051737D; /* je: equal / zero */

loc_00517373: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0051737D: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00517395; /* je: equal / zero */

loc_00517392: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00517395: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
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
 * sub_005173A0
 * Original: 0x005173A0 - 0x005173C4 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005173A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005173A0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x6495B8;
    MEM32(eax + 4) = 1;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_005173D0
 * Original: 0x005173D0 - 0x005173E2 (18 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_005173D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005173D0: ;
    eax = MEM32(ecx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = eax;
    if ((_fa != 0)) goto loc_005173E1; /* jne: not equal / not zero */

loc_005173D9: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x005173DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005173DDu); } /* indirect call */
    }

loc_005173DF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005173E1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005173F0
 * Original: 0x005173F0 - 0x00517411 (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005173F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005173F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x4AC);
    PUSH32(esp, 0x649558);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00517407u); RECOMP_ABI_CALL(0x00614A10u, sub_00614A10); /* call 0x00614A10 */

loc_00517407: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00517420
 * Original: 0x00517420 - 0x00517441 (33 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00517420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00517420: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0051743C; /* jne: not equal / not zero */

loc_0051742B: ;
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0051743C; /* jne: not equal / not zero */

loc_00517432: ;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051743C; /* je: equal / zero */

loc_00517437: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_0051743C: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00517450
 * Original: 0x00517450 - 0x0051745E (14 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00517450(void)
{

loc_00517450: ;
    PUSH32(esp, 0x6495CC);
    PUSH32(esp, 0x0051745Au); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_0051745A: ;
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00517460
 * Original: 0x00517460 - 0x00517515 (181 bytes, 57 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00517460(void)
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

loc_00517460: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051750E; /* je: equal / zero */

loc_0051746F: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    goto loc_00517480;

    /* nop */
    /* nop */

loc_00517480: ;
    eax = MEM32(0x6C263C);
    ecx = MEM32(eax + 0x210);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005174FA; /* jne: not equal / not zero */

loc_0051748F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00517496u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00517493u); } /* indirect call */
    }

loc_00517496: ;
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x858578)); /* fsub dword ptr [0x858578] */
    ecx = esi;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x85857C)); /* fsub dword ptr [0x85857c] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    eax = MEM32(esi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x858580)); /* fsub dword ptr [0x858580] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x005174C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005174C0u); } /* indirect call */
    }

loc_005174C3: ;
    ecx = MEM32(0x6C263C);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x218)); /* fadd dword ptr [ecx + 0x218] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00517502; /* jnp: not parity */

loc_005174FA: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00517502u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005174FFu); } /* indirect call */
    }

loc_00517502: ;
    esi = MEM32(esi + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00517480; /* jne: not equal / not zero */

loc_0051750D: ;
    POP32(esp, edi);

loc_0051750E: ;
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
 * sub_00517520
 * Original: 0x00517520 - 0x00517554 (52 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00517520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00517520: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00517553; /* jne: not equal / not zero */

loc_00517527: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00517553; /* jne: not equal / not zero */

loc_0051752E: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00517553; /* je: equal / zero */

loc_00517536: ;
    MEM32(ecx + 8) = 0;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0xC) = edx;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051754D; /* je: equal / zero */

loc_0051754A: ;
    MEM32(eax + 8) = ecx;

loc_0051754D: ;
    eax = MEM32(ecx + 0x1C);
    MEM32(eax + 0x10) = ecx;

loc_00517553: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00517560
 * Original: 0x00517560 - 0x005175A1 (65 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00517560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00517560: ;
    eax = MEM32(ecx + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0051757B; /* jne: not equal / not zero */

loc_0051756A: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00517577; /* jne: not equal / not zero */

loc_0051756F: ;
    esi = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0051759F; /* jne: not equal / not zero */

loc_00517577: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00517583; /* je: equal / zero */

loc_0051757B: ;
    esi = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = esi;
    goto loc_0051758C;

loc_00517583: ;
    eax = MEM32(ecx + 0x1C);
    esi = MEM32(ecx + 0xC);
    MEM32(eax + 0x10) = esi;

loc_0051758C: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00517599; /* je: equal / zero */

loc_00517593: ;
    esi = MEM32(ecx + 8);
    MEM32(eax + 8) = esi;

loc_00517599: ;
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 8) = edx;

loc_0051759F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005175B0
 * Original: 0x005175B0 - 0x005175CE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005175B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005175B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005175B8u); RECOMP_ABI_CALL(0x00516DB0u, sub_00516DB0); /* call 0x00516DB0 */

loc_005175B8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005175C8; /* je: equal / zero */

loc_005175BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005175C5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005175C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005175C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005175D0
 * Original: 0x005175D0 - 0x00517624 (84 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005175D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005175D0: ;
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi) = 0x649568;
    MEM32(0x6C2614) = MEM32(0x6C2614) - 1;
    _fa = (uint32_t)(MEM32(0x6C2614)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00517619; /* jne: not equal / not zero */

loc_005175E1: ;
    eax = MEM32(0x6C2628);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005175FD; /* je: equal / zero */

loc_005175EA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005175F0u); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_005175F0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6C2628) = 0;

loc_005175FD: ;
    eax = MEM32(0x6C2620);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00517619; /* je: equal / zero */

loc_00517606: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0051760Cu); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_0051760C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6C2620) = 0;

loc_00517619: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0051761Fu); RECOMP_ABI_CALL(0x00517110u, sub_00517110); /* call 0x00517110 */

loc_0051761F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00517630
 * Original: 0x00517630 - 0x00517797 (359 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00517630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00517630: ;
    eax = MEM32(0x6C263C);
    ecx = MEM32(eax + 0x430);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0051764B; /* je: equal / zero */

loc_00517646: ;
    PUSH32(esp, 0x0051764Bu); RECOMP_ABI_CALL(0x00522AD0u, sub_00522AD0); /* call 0x00522AD0 */

loc_0051764B: ;
    PUSH32(esp, 0x00517650u); RECOMP_ABI_CALL(0x00517150u, sub_00517150); /* call 0x00517150 */

loc_00517650: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0051766A; /* jne: not equal / not zero */

loc_00517655: ;
    ecx = 0x6C3250;
    PUSH32(esp, 0x0051765Fu); RECOMP_ABI_CALL(0x0053B350u, sub_0053B350); /* call 0x0053B350 */

loc_0051765F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00517682; /* jne: not equal / not zero */

loc_00517663: ;
    edi = 2;
    goto loc_00517682;

loc_0051766A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00517682; /* jne: not equal / not zero */

loc_0051766F: ;
    ecx = 0x6C3250;
    PUSH32(esp, 0x00517679u); RECOMP_ABI_CALL(0x0055E920u, sub_0055E920); /* call 0x0055E920 */

loc_00517679: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00517682; /* jne: not equal / not zero */

loc_0051767D: ;
    edi = 0x20;

loc_00517682: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00517689u); RECOMP_ABI_CALL(0x005EE520u, sub_005EE520); /* call 0x005EE520 */

loc_00517689: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x00517690u); RECOMP_ABI_CALL(0x005EE4E0u, sub_005EE4E0); /* call 0x005EE4E0 */

loc_00517690: ;
    esi = MEM32(0x6C2610);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005176BD; /* jne: not equal / not zero */

loc_0051769E: ;
    eax = MEM32(0x6C263C);
    ecx = MEM32(eax + 0x3D0);
    PUSH32(esp, ecx);
    ecx = eax + 0x2DC;
    PUSH32(esp, 0x005176B5u); RECOMP_ABI_CALL(0x005208B0u, sub_005208B0); /* call 0x005208B0 */

loc_005176B5: ;
    _fa = (uint32_t)(MEM32(0x6C3308)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C3308), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005176F1; /* jne: not equal / not zero */

loc_005176BD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005176EC; /* je: equal / zero */

loc_005176C1: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005176E5; /* je: equal / zero */

loc_005176C8: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x1C), edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005176E5; /* je: equal / zero */

loc_005176CD: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x005176D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005176D2u); } /* indirect call */
    }

loc_005176D5: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x005176DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005176DAu); } /* indirect call */
    }

loc_005176DD: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x005176E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005176E2u); } /* indirect call */
    }

loc_005176E5: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005176C1; /* jne: not equal / not zero */

loc_005176EC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0051774B; /* jne: not equal / not zero */

loc_005176F1: ;
    ecx = MEM32(0x6C2640);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00517700; /* je: equal / zero */

loc_005176FB: ;
    PUSH32(esp, 0x00517700u); RECOMP_ABI_CALL(0x0051BCF0u, sub_0051BCF0); /* call 0x0051BCF0 */

loc_00517700: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0051774B; /* jne: not equal / not zero */

loc_00517705: ;
    eax = MEM32(0x6C263C);
    ecx = MEM32(eax + 0x3D0);
    PUSH32(esp, ecx);
    ecx = eax + 0x2DC;
    PUSH32(esp, 0x0051771Cu); RECOMP_ABI_CALL(0x00520570u, sub_00520570); /* call 0x00520570 */

loc_0051771C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00517722u); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_00517722: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0051772Bu); RECOMP_ABI_CALL(0x005EE5A0u, sub_005EE5A0); /* call 0x005EE5A0 */

loc_0051772B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xFFFF0000u);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0051773Eu); RECOMP_ABI_CALL(0x005EF420u, sub_005EF420); /* call 0x005EF420 */

loc_0051773E: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00517746u); RECOMP_ABI_CALL(0x005EE5A0u, sub_005EE5A0); /* call 0x005EE5A0 */

loc_00517746: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00517786;

loc_0051774B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00517786; /* jne: not equal / not zero */

loc_00517750: ;
    edx = MEM32(0x6C263C);
    ecx = MEM32(edx + 0x430);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00517786; /* je: equal / zero */

loc_00517760: ;
    PUSH32(esp, 0x00517765u); RECOMP_ABI_CALL(0x005220A0u, sub_005220A0); /* call 0x005220A0 */

loc_00517765: ;
    eax = MEM32(0x6C263C);
    ecx = MEM32(eax + 0x430);
    PUSH32(esp, 0x00517775u); RECOMP_ABI_CALL(0x005C3530u, sub_005C3530); /* call 0x005C3530 */

loc_00517775: ;
    ecx = MEM32(0x6C263C);
    ecx = MEM32(ecx + 0x430);
    PUSH32(esp, 0x00517786u); RECOMP_ABI_CALL(0x00522090u, sub_00522090); /* call 0x00522090 */

loc_00517786: ;
    edi = edi << 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x200 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00517650; /* jne: not equal / not zero */

loc_00517794: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005177A0
 * Original: 0x005177A0 - 0x005177BE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005177A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005177A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005177A8u); RECOMP_ABI_CALL(0x005171C0u, sub_005171C0); /* call 0x005171C0 */

loc_005177A8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005177B8; /* je: equal / zero */

loc_005177AF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005177B5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005177B5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005177B8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005177C0
 * Original: 0x005177C0 - 0x005177D3 (19 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005177C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005177C0: ;
    eax = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005177CC; /* jne: not equal / not zero */

loc_005177C9: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_005177CC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005177D2u); RECOMP_ABI_CALL(0x00517420u, sub_00517420); /* call 0x00517420 */

loc_005177D2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005177E0
 * Original: 0x005177E0 - 0x00517809 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005177E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005177E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x6495B8;
    PUSH32(esp, 0x005177EEu); RECOMP_ABI_CALL(0x00517560u, sub_00517560); /* call 0x00517560 */

loc_005177EE: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005177F7u); RECOMP_ABI_CALL(0x00517020u, sub_00517020); /* call 0x00517020 */

loc_005177F7: ;
    esi = MEM32(esi + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00517807; /* je: equal / zero */

loc_005177FE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00517804u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00517804: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00517807: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00517810
 * Original: 0x00517810 - 0x0051783F (47 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00517810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00517810: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(esi + 0x10) = 0;
    eax = MEM32(ecx + 0x10);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00517833; /* je: equal / zero */

loc_00517829: ;
    MEM32(eax + 0x10) = esi;
    MEM32(ecx + 0x10) = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00517833: ;
    PUSH32(esp, 0x00517838u); RECOMP_ABI_CALL(0x00517520u, sub_00517520); /* call 0x00517520 */

loc_00517838: ;
    MEM32(ecx + 0x10) = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00517840
 * Original: 0x00517840 - 0x00517896 (86 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00517840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00517840: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00517854; /* je: equal / zero */

loc_0051784C: ;
    edi = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = edi;
    goto loc_0051785A;

loc_00517854: ;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0x10) = edx;

loc_0051785A: ;
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00517867; /* je: equal / zero */

loc_00517861: ;
    edi = MEM32(eax + 0x10);
    MEM32(edx + 0x10) = edi;

loc_00517867: ;
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00517885; /* jne: not equal / not zero */

loc_0051786F: ;
    edx = MEM32(eax + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00517885; /* jne: not equal / not zero */

loc_00517876: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00517893; /* jne: not equal / not zero */

loc_0051787D: ;
    PUSH32(esp, 0x00517882u); RECOMP_ABI_CALL(0x00517560u, sub_00517560); /* call 0x00517560 */

loc_00517882: ;
    esp += 8; return; /* ret 4 */

loc_00517885: ;
    MEM32(eax + 0x10) = 0;
    MEM32(eax + 0xC) = 0;

loc_00517893: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005178A0
 * Original: 0x005178A0 - 0x005178B0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005178A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005178A0: ;
    eax = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005178AF; /* je: equal / zero */

loc_005178A9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005178AFu); RECOMP_ABI_CALL(0x00517810u, sub_00517810); /* call 0x00517810 */

loc_005178AF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005178B0
 * Original: 0x005178B0 - 0x005178C0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005178B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005178B0: ;
    eax = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005178BF; /* je: equal / zero */

loc_005178B9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005178BFu); RECOMP_ABI_CALL(0x00517840u, sub_00517840); /* call 0x00517840 */

loc_005178BF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005178C0
 * Original: 0x005178C0 - 0x005179A7 (231 bytes, 62 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005178C0(void)
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

loc_005178C0: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, 0x005178CBu); RECOMP_ABI_CALL(0x005177C0u, sub_005177C0); /* call 0x005177C0 */

loc_005178CB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005179A2; /* je: equal / zero */

loc_005178D3: ;
    ecx = MEM32(ebx + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x005178DCu); RECOMP_ABI_CALL(0x00517420u, sub_00517420); /* call 0x00517420 */

loc_005178DC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005179A2; /* je: equal / zero */

loc_005178E4: ;
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(esp + 0xC) = 0x3F800000;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0x3F800000;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = 0;
    MEM32(esp + 0x2C) = 0x3F800000;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00517935u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00517932u); } /* indirect call */
    }

loc_00517935: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x30) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x34) = edx;
    eax = MEM32(eax + 8);
    ecx = 0x10;
    esi = 0x8584C0;
    edi = esp + 0x3C;
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
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM32(esp + 0x3C) = eax;
    PUSH32(esp, 0x00517963u); RECOMP_ABI_CALL(0x005EDB20u, sub_005EDB20); /* call 0x005EDB20 */

loc_00517963: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x00517977u); RECOMP_ABI_CALL(0x00420C40u, sub_00420C40); /* call 0x00420C40 */

loc_00517977: ;
    eax = MEM32(ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0xA);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0051798Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00517987u); } /* indirect call */
    }

loc_0051798A: ;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00517993u); RECOMP_ABI_CALL(0x005FBF60u, sub_005FBF60); /* call 0x005FBF60 */

loc_00517993: ;
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0051799Du); RECOMP_ABI_CALL(0x005EDB00u, sub_005EDB00); /* call 0x005EDB00 */

loc_0051799D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);

loc_005179A2: ;
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
 * sub_005179B0
 * Original: 0x005179B0 - 0x005179CE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005179B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005179B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005179B8u); RECOMP_ABI_CALL(0x005177E0u, sub_005177E0); /* call 0x005177E0 */

loc_005179B8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005179C8; /* je: equal / zero */

loc_005179BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005179C5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005179C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005179C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005179D0
 * Original: 0x005179D0 - 0x005179F9 (41 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005179D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005179D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(edi + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_005179EF; /* je: equal / zero */

loc_005179E1: ;
    ecx = esi;
    PUSH32(esp, 0x005179E8u); RECOMP_ABI_CALL(0x005178B0u, sub_005178B0); /* call 0x005178B0 */

loc_005179E8: ;
    esi = MEM32(esi + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005179E1; /* jne: not equal / not zero */

loc_005179EF: ;
    MEM32(edi + 8) = ebx;
    MEM32(edi + 0xC) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00517A00
 * Original: 0x00517A00 - 0x00517A3C (60 bytes, 26 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00517A00(void)
{

loc_00517A00: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00517A15u); RECOMP_ABI_CALL(0x005173F0u, sub_005173F0); /* call 0x005173F0 */

loc_00517A15: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00517A1Du); RECOMP_ABI_CALL(0x00517010u, sub_00517010); /* call 0x00517010 */

loc_00517A1D: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00517A2Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00517A2Cu); } /* indirect call */
    }

loc_00517A2F: ;
    ecx = esi;
    PUSH32(esp, 0x00517A36u); RECOMP_ABI_CALL(0x005179D0u, sub_005179D0); /* call 0x005179D0 */

loc_00517A36: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00517A40
 * Original: 0x00517A40 - 0x00517A73 (51 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00517A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00517A40: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00517A5F; /* je: equal / zero */

loc_00517A4B: ;
    PUSH32(esp, 0x00517A50u); RECOMP_ABI_CALL(0x005177C0u, sub_005177C0); /* call 0x005177C0 */

loc_00517A50: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00517A6F; /* jne: not equal / not zero */

loc_00517A54: ;
    ecx = esi;
    PUSH32(esp, 0x00517A5Bu); RECOMP_ABI_CALL(0x005178A0u, sub_005178A0); /* call 0x005178A0 */

loc_00517A5B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00517A5F: ;
    PUSH32(esp, 0x00517A64u); RECOMP_ABI_CALL(0x005177C0u, sub_005177C0); /* call 0x005177C0 */

loc_00517A64: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00517A6F; /* je: equal / zero */

loc_00517A68: ;
    ecx = esi;
    PUSH32(esp, 0x00517A6Fu); RECOMP_ABI_CALL(0x005178B0u, sub_005178B0); /* call 0x005178B0 */

loc_00517A6F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00517A80
 * Original: 0x00517A80 - 0x00517AAE (46 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00517A80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00517A80: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x400);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00517A92; /* je: equal / zero */

loc_00517A8D: ;
    PUSH32(esp, 0x00517A92u); RECOMP_ABI_CALL(0x00531090u, sub_00531090); /* call 0x00531090 */

loc_00517A92: ;
    ecx = esi + 0x2DC;
    PUSH32(esp, 0x00517A9Du); RECOMP_ABI_CALL(0x00520250u, sub_00520250); /* call 0x00520250 */

loc_00517A9D: ;
    ecx = MEM32(esi + 0x210);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00517AAD; /* je: equal / zero */

loc_00517AA8: ;
    g_seh_ebp = ebp; sub_005232F0(); return; /* tail jmp 0x005232F0 */

loc_00517AAD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00517AB0
 * Original: 0x00517AB0 - 0x00517AD4 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00517AB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00517AB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x3C888889);
    ecx = esi + 0x2DC;
    PUSH32(esp, 0x00517AC3u); RECOMP_ABI_CALL(0x005202F0u, sub_005202F0); /* call 0x005202F0 */

loc_00517AC3: ;
    ecx = MEM32(esi + 0x400);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00517AD3; /* je: equal / zero */

loc_00517ACE: ;
    g_seh_ebp = ebp; sub_005310C0(); return; /* tail jmp 0x005310C0 */

loc_00517AD3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00517AE0
 * Original: 0x00517AE0 - 0x00517BAC (204 bytes, 60 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00517AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00517AE0: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x6C32D0);
    edx = MEM32(0x6C32CC);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax * 4 + 0x66327C);
    eax = MEM32(edx * 4 + 0x663270);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x649634);
    edx = esp + 0x18;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00517B1Cu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00517B1C: ;
    eax = MEM32(0x6C32D0);
    ecx = MEM32(eax * 4 + 0x66327C);
    edx = MEM32(0x6C32CC);
    eax = MEM32(edx * 4 + 0x663270);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x64961C);
    PUSH32(esp, 0x00517B41u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00517B41: ;
    SET_LO8(eax, MEM8(0x6C342D));
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 4) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00517BA4; /* je: equal / zero */

loc_00517B55: ;
    eax = MEM32(esi + 0x208);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00517BA3; /* jle: less or equal (signed <=) */

loc_00517B62: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00517B65: ;
    ecx = MEM32(esi + 0x20C);
    edx = MEM32(ecx + ebx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x6495FC);
    PUSH32(esp, 0x00517B7Au); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00517B7A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x20C);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00517B94u); RECOMP_ABI_CALL(0x00524720u, sub_00524720); /* call 0x00524720 */

loc_00517B94: ;
    eax = MEM32(esi + 0x208);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00517B65; /* jl: less (signed <) */

loc_00517BA2: ;
    POP32(esp, ebx);

loc_00517BA3: ;
    POP32(esp, edi);

loc_00517BA4: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00517BB0
 * Original: 0x00517BB0 - 0x00517BE2 (50 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00517BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00517BB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x208);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00517BDF; /* jle: less or equal (signed <=) */

loc_00517BC0: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00517BC3: ;
    ecx = MEM32(esi + 0x20C);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00517BD0u); RECOMP_ABI_CALL(0x00524780u, sub_00524780); /* call 0x00524780 */

loc_00517BD0: ;
    eax = MEM32(esi + 0x208);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00517BC3; /* jl: less (signed <) */

loc_00517BDE: ;
    POP32(esp, ebx);

loc_00517BDF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00517BF0
 * Original: 0x00517BF0 - 0x00517C26 (54 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00517BF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00517BF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x2DC;
    PUSH32(esp, 0x00517BFEu); RECOMP_ABI_CALL(0x00520270u, sub_00520270); /* call 0x00520270 */

loc_00517BFE: ;
    ecx = MEM32(esi + 0x430);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00517C1A; /* je: equal / zero */

loc_00517C08: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00517C0Fu); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_00517C0F: ;
    ecx = MEM32(esi + 0x430);
    PUSH32(esp, 0x00517C1Au); RECOMP_ABI_CALL(0x00522070u, sub_00522070); /* call 0x00522070 */

loc_00517C1A: ;
    ecx = esi + 0x220;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00524E70(); return; /* tail jmp 0x00524E70 */

}

/**
 * sub_00517C30
 * Original: 0x00517C30 - 0x00517CD5 (165 bytes, 47 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00517C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00517C30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi + 0x3D0) = edi;
    PUSH32(esp, 0x00517C44u); RECOMP_ABI_CALL(0x005EE900u, sub_005EE900); /* call 0x005EE900 */

loc_00517C44: ;
    ecx = MEM32(0x8583A0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x00517C54u); RECOMP_ABI_CALL(0x005FA700u, sub_005FA700); /* call 0x005FA700 */

loc_00517C54: ;
    eax = esi + 0x274;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00517C60u); RECOMP_ABI_CALL(0x0044F880u, sub_0044F880); /* call 0x0044F880 */

loc_00517C60: ;
    MEM32(0x674F9C) = eax;
    ecx = MEM32(esi + 0x210);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00517C8C; /* je: equal / zero */

loc_00517C72: ;
    SET_LO8(eax, MEM8(esi + 0x214));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00517C8C; /* je: equal / zero */

loc_00517C7C: ;
    edx = MEM32(esi + 0x3D4);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x24;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00517C8Cu); RECOMP_ABI_CALL(0x00524030u, sub_00524030); /* call 0x00524030 */

loc_00517C8C: ;
    ecx = MEM32(0x6C2640);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00517C9D; /* je: equal / zero */

loc_00517C98: ;
    PUSH32(esp, 0x00517C9Du); RECOMP_ABI_CALL(0x0051CE80u, sub_0051CE80); /* call 0x0051CE80 */

loc_00517C9D: ;
    PUSH32(esp, 0x00517CA2u); RECOMP_ABI_CALL(0x00517630u, sub_00517630); /* call 0x00517630 */

loc_00517CA2: ;
    eax = MEM32(0x6C7344);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00517CD2; /* je: equal / zero */

loc_00517CAB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00517CB2u); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_00517CB2: ;
    ecx = MEM32(0x6C7344);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2C0) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00517CCAu); RECOMP_ABI_CALL(0x00579040u, sub_00579040); /* call 0x00579040 */

loc_00517CCA: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x00517CD1u); RECOMP_ABI_CALL(0x005EE1A0u, sub_005EE1A0); /* call 0x005EE1A0 */

loc_00517CD1: ;
    POP32(esp, ecx);

loc_00517CD2: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00517CE0
 * Original: 0x00517CE0 - 0x00517D24 (68 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00517CE0(void)
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

loc_00517CE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    fp_push(MEMF(esi)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0x662E64)); /* fdiv dword ptr [0x662e64] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00517CF8u); RECOMP_ABI_CALL(0x0061AC60u, sub_0061AC60); /* call 0x0061AC60 */

loc_00517CF8: ;
    PUSH32(esp, 0x00517CFDu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00517CFD: ;
    ecx = MEM32(esp + 0x14);
    MEM32(ecx) = eax;
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0x662E64)); /* fdiv dword ptr [0x662e64] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00517D14u); RECOMP_ABI_CALL(0x0061AC60u, sub_0061AC60); /* call 0x0061AC60 */

loc_00517D14: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00517D1Cu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00517D1C: ;
    edx = MEM32(esp + 0x10);
    MEM32(edx) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00517D30
 * Original: 0x00517D30 - 0x00517D67 (55 bytes, 14 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00517D30(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00517D30: ;
    fp_push(MEMF(0x662E64)); /* fld float */
    eax = MEM32(esp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x662E64)); /* fmul dword ptr [0x662e64] */
    MEM32(eax + 4) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x662E64)); /* fmul dword ptr [0x662e64] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00517D70
 * Original: 0x00517D70 - 0x00517FC2 (594 bytes, 148 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00517D70(void)
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

loc_00517D70: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    esi = ecx;
    PUSH32(esp, 0x00517D7Du); RECOMP_ABI_CALL(0x005EE420u, sub_005EE420); /* call 0x005EE420 */

loc_00517D7D: ;
    fp_push(MEMF(esi + 0x24C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x22C)); /* fsub dword ptr [esi + 0x22c] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x14;
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x65E384)); /* fmul dword ptr [0x65e384] */
    ecx = esi + 0x2DC;
    MEM32(esp + 0x18) = 0x3F800000;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x22C)); /* fadd dword ptr [esi + 0x22c] */
    MEM32(esp + 0x1C) = 0x3F800000;
    MEM32(esp + 0x20) = 0x3F800000;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x250)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x230)); /* fsub dword ptr [esi + 0x230] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x65E384)); /* fmul dword ptr [0x65e384] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x230)); /* fadd dword ptr [esi + 0x230] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x254)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x234)); /* fsub dword ptr [esi + 0x234] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x65E384)); /* fmul dword ptr [0x65e384] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x234)); /* fadd dword ptr [esi + 0x234] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00517DFCu); RECOMP_ABI_CALL(0x005204F0u, sub_005204F0); /* call 0x005204F0 */

loc_00517DFC: ;
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D370)); /* fmul dword ptr [0x62d370] */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00517E4B; /* jp: parity */

loc_00517E43: ;
    MEM32(esp + 8) = 0;

loc_00517E4B: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00517E64; /* jp: parity */

loc_00517E5C: ;
    MEM32(esp + 0xC) = 0;

loc_00517E64: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00517E79; /* jp: parity */

loc_00517E71: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x65E384)); /* fld float */

loc_00517E79: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00517E92; /* jne: not equal / not zero */

loc_00517E8A: ;
    MEM32(esp + 8) = 0x3F800000;

loc_00517E92: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00517EAB; /* jne: not equal / not zero */

loc_00517EA3: ;
    MEM32(esp + 0xC) = 0x3F800000;

loc_00517EAB: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00517EC0; /* jne: not equal / not zero */

loc_00517EB8: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_00517EC0: ;
    fp_push(MEMF(esi + 0x238)); /* fld float */
    PUSH32(esp, edi);
    fp_push(MEMF(esi + 0x258)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x65E384)); /* fmul dword ptr [0x65e384] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x00517EF8u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00517EF8: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    edi = ZX8(LO8(eax));
    edi = edi | 0xFFFFFF00u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00517F13u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00517F13: ;
    ecx = ZX8(LO8(eax));
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    edi = edi | ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00517F26u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00517F26: ;
    edx = ZX8(LO8(eax));
    edi = edi | edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00517F31u); RECOMP_ABI_CALL(0x005EE460u, sub_005EE460); /* call 0x005EE460 */

loc_00517F31: ;
    SET_LO8(eax, MEM8(esp + 0x2C));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00517F77; /* je: equal / zero */

loc_00517F3D: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00517F47u); RECOMP_ABI_CALL(0x005EE840u, sub_005EE840); /* call 0x005EE840 */

loc_00517F47: ;
    fp_push(MEMF(esi + 0x23C)); /* fld float */
    fp_push(MEMF(esi + 0x25C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x65E384)); /* fmul dword ptr [0x65e384] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x248)); /* fmul dword ptr [esi + 0x248] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00517F6Du); RECOMP_ABI_CALL(0x005EE880u, sub_005EE880); /* call 0x005EE880 */

loc_00517F6D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00517F77: ;
    fp_push(MEMF(esi + 0x238)); /* fld float */
    PUSH32(esp, ecx);
    fp_push(MEMF(esi + 0x258)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x65E384)); /* fmul dword ptr [0x65e384] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00517F98u); RECOMP_ABI_CALL(0x005EE840u, sub_005EE840); /* call 0x005EE840 */

loc_00517F98: ;
    fp_push(MEMF(esi + 0x23C)); /* fld float */
    fp_push(MEMF(esi + 0x25C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x65E384)); /* fmul dword ptr [0x65e384] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00517FB8u); RECOMP_ABI_CALL(0x005EE880u, sub_005EE880); /* call 0x005EE880 */

loc_00517FB8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_00517FD0
 * Original: 0x00517FD0 - 0x00517FEA (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00517FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00517FD0: ;
    eax = MEM32(ecx + 0x210);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00517FE7; /* je: equal / zero */

loc_00517FDA: ;
    SET_LO8(ecx, MEM8(eax + 7));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00517FE7; /* je: equal / zero */

loc_00517FE1: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00517FE7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00517FF0
 * Original: 0x00517FF0 - 0x005180F7 (263 bytes, 65 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00517FF0(void)
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

loc_00517FF0: ;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esp + 8;
    PUSH32(esp, 0x00518000u); RECOMP_ABI_CALL(0x005EDA70u, sub_005EDA70); /* call 0x005EDA70 */

loc_00518000: ;
    fp_push(MEMF(esi + 0x2A8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x00518011u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00518011: ;
    fp_push(MEMF(esi + 0x2AC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    edi = ZX8(LO8(eax));
    edi = edi | 0xFFFFFF00u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0051802Eu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0051802E: ;
    eax = ZX8(LO8(eax));
    fp_push(MEMF(esi + 0x2B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00518047u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00518047: ;
    ecx = ZX8(LO8(eax));
    edi = edi | ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00518052u); RECOMP_ABI_CALL(0x005EE760u, sub_005EE760); /* call 0x005EE760 */

loc_00518052: ;
    edx = MEM32(esi + 0x2B8);
    fp_push(MEMF(esi + 0x2BC)); /* fld float */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x1A;
    edi = esp + 0xC;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x48;
    fp_push(MEMF(esi + 0x2C0)); /* fld float */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 8) = 3;
    MEM32(esp + 0x48) = edx;
    PUSH32(esp, 0x00518091u); RECOMP_ABI_CALL(0x004572A0u, sub_004572A0); /* call 0x004572A0 */

loc_00518091: ;
    fp_push(MEMF(esi + 0x2C8)); /* fld float */
    eax = MEM32(esi + 0x2C4);
    ecx = MEM32(esi + 0x2D4);
    edx = MEM32(esi + 0x2D8);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x2CC)); /* fld float */
    MEM32(esp + 0xC) = eax;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x2D0)); /* fld float */
    esi = MEM32(esp + 0x74);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    MEM32(esp + 0x5C) = 0x447A0000;
    MEM32(esp + 0x64) = ecx;
    MEM32(esp + 0x60) = edx;
    PUSH32(esp, 0x005180E4u); RECOMP_ABI_CALL(0x005EE940u, sub_005EE940); /* call 0x005EE940 */

loc_005180E4: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005180ECu); RECOMP_ABI_CALL(0x005EE020u, sub_005EE020); /* call 0x005EE020 */

loc_005180EC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00518100
 * Original: 0x00518100 - 0x005182AB (427 bytes, 142 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00518100(void)
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

loc_00518100: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x420);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0xC));
    edx = MEM32(esp + 8);
    ecx = MEM32(ecx + 0x21C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005182A6; /* je: equal / zero */

loc_00518124: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    ebx = MEM32(0x6C2638);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    edx = esi + ebx * 4;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(0x6C262C);
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x10) = eax;
    goto loc_00518150;

    /* nop */

loc_00518150: ;
    ecx = MEM32(esp + 0x20);
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0051828C; /* jp: parity */

loc_00518165: ;
    fp_push(MEMF(ebp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    fp_push(MEMF(ebp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x6C2634)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x6c2634] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    eax = MEM32(esp + 0x2C);
    if (TEST_NZ(_fa, _fb)) goto loc_005181AE; /* jne: not equal / not zero */

loc_005181A5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005181B0; /* jne: not equal / not zero */

loc_005181A9: ;
    goto loc_0051828C;

loc_005181AE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */

loc_005181B0: ;
    if (CMP_GE(_fas, _fbs)) goto loc_005181EC; /* jge: greater or equal (signed >=) */

loc_005181B2: ;
    fp_push(MEMF(0x6C2630)); /* fld float */
    eax = MEM32(esp + 0x10);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x1c] */
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + edx) = ebp;
    MEM32(edx) = ecx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005181DF; /* jne: not equal / not zero */

loc_005181D0: ;
    eax = ecx;
    MEM32(0x6C2630) = eax;
    MEM32(0x6C2634) = ecx;
    edi = ebx;

loc_005181DF: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = edx;
    goto loc_0051828C;

loc_005181EC: ;
    edx = MEM32(esp + 0x24);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEM32(edx + edi * 4) = ebp;
    MEMF(esi + edi * 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0051825B; /* jl: less (signed <) */

loc_00518201: ;
    ecx = 3;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00518209: ;
    fp_push(MEMF(esi + -8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00518219; /* jne: not equal / not zero */

loc_00518217: ;
    edi = edx;

loc_00518219: ;
    fp_push(MEMF(esi + -4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0051822A; /* jne: not equal / not zero */

loc_00518227: ;
    edi = ecx + -2;

loc_0051822A: ;
    fp_push(MEMF(esi)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0051823A; /* jne: not equal / not zero */

loc_00518237: ;
    edi = ecx + -1;

loc_0051823A: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0051824A; /* jne: not equal / not zero */

loc_00518248: ;
    edi = ecx;

loc_0051824A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00518209; /* jl: less (signed <) */

loc_00518257: ;
    esi = MEM32(esp + 0x28);

loc_0051825B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00518275; /* jge: greater or equal (signed >=) */

loc_0051825F: ;
    /* nop */

loc_00518260: ;
    fp_push(MEMF(esi + edx * 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00518270; /* jne: not equal / not zero */

loc_0051826E: ;
    edi = edx;

loc_00518270: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00518260; /* jl: less (signed <) */

loc_00518275: ;
    fp_push(MEMF(esi + edi * 4)); /* fld float */
    edx = MEM32(esp + 0x18);
    MEMF(0x6C2630) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(0x6C2630);
    MEM32(0x6C2634) = eax;

loc_0051828C: ;
    ebp = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00518150; /* jne: not equal / not zero */

loc_00518297: ;
    MEM32(0x6C262C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x6C2638) = ebx;
    POP32(esp, ebx);

loc_005182A6: ;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005182B0
 * Original: 0x005182B0 - 0x005182FF (79 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005182B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005182B0: ;
    ecx = MEM32(ecx + 0x21C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x20);
    eax = ecx + eax * 4;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005182D5; /* je: equal / zero */

loc_005182C7: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005182E6; /* je: equal / zero */

loc_005182CD: ;
    eax = ecx + 0xC;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005182C7; /* jne: not equal / not zero */

loc_005182D5: ;
    PUSH32(esp, 0x649640);
    PUSH32(esp, 0x005182DFu); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005182DF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_005182E6: ;
    edx = MEM32(esi + 0xC);
    ecx = esi;
    MEM32(eax) = edx;
    PUSH32(esp, 0x005182F2u); RECOMP_ABI_CALL(0x005C3530u, sub_005C3530); /* call 0x005C3530 */

loc_005182F2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005182F8u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005182F8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00518300
 * Original: 0x00518300 - 0x0051834C (76 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00518300(void)
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

loc_00518300: ;
    edx = MEM32(esp + 4);
    fp_push(MEMF(edx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x404)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x404] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00518347; /* jne: not equal / not zero */

loc_00518313: ;
    fp_push(MEMF(edx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x410)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x410] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00518347; /* jp: parity */

loc_00518322: ;
    fp_push(MEMF(edx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x40C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x40c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00518347; /* jne: not equal / not zero */

loc_00518332: ;
    fp_push(MEMF(edx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x418)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x418] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00518347; /* jp: parity */

loc_00518342: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_00518347: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00518350
 * Original: 0x00518350 - 0x00518362 (18 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00518350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00518350: ;
    ecx = MEM32(ecx + 0x210);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051835F; /* je: equal / zero */

loc_0051835A: ;
    g_seh_ebp = ebp; sub_00523800(); return; /* tail jmp 0x00523800 */

loc_0051835F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00518370
 * Original: 0x00518370 - 0x005183EF (127 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00518370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00518370: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x208);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 8) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_005183EB; /* jle: less or equal (signed <=) */

loc_00518385: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_00518390;

    /* nop */

loc_00518390: ;
    esi = MEM32(ebx + 0x20C);
    eax = MEM32(esi + ebp + 4);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005183B5; /* jle: less or equal (signed <=) */

loc_005183A2: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + edi * 4);
    PUSH32(esp, 0x005183ADu); RECOMP_ABI_CALL(0x005178A0u, sub_005178A0); /* call 0x005178A0 */

loc_005183AD: ;
    eax = MEM32(esi + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005183A2; /* jl: less (signed <) */

loc_005183B5: ;
    eax = MEM32(esi + 0xC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005183D3; /* jle: less or equal (signed <=) */

loc_005183BE: ;
    edi = edi;

loc_005183C0: ;
    ecx = MEM32(esi + 0x10);
    ecx = MEM32(ecx + edi * 4);
    PUSH32(esp, 0x005183CBu); RECOMP_ABI_CALL(0x005178A0u, sub_005178A0); /* call 0x005178A0 */

loc_005183CB: ;
    eax = MEM32(esi + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005183C0; /* jl: less (signed <) */

loc_005183D3: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(ebx + 0x208);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x14;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00518390; /* jl: less (signed <) */

loc_005183E9: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_005183EB: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_005183F0
 * Original: 0x005183F0 - 0x005186AF (703 bytes, 196 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005183F0(void)
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

loc_005183F0: ;
    _fb = (uint32_t)(0x1B4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1B4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x1B8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x6496C8);
    esi = ecx;
    ecx = MEM32(0x860220);
    PUSH32(esp, 0x6496B8);
    PUSH32(esp, eax);
    MEM32(esp + 0x2C) = esi;
    PUSH32(esp, 0x00518421u); RECOMP_ABI_CALL(0x006137C0u, sub_006137C0); /* call 0x006137C0 */

loc_00518421: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 0x1C) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00518478; /* jne: not equal / not zero */

loc_0051842B: ;
    PUSH32(esp, 0x649694);
    PUSH32(esp, 0x00518435u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_00518435: ;
    eax = 0x3DCCCCCD;
    MEM32(esi + 0x3D8) = eax;
    MEM32(esi + 0x3DC) = eax;
    MEM32(esi + 0x3E0) = eax;
    MEM32(esi + 0x3E4) = eax;
    MEM32(esi + 0x3E8) = eax;
    MEM32(esi + 0x3EC) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x3F0) = eax;
    MEM32(esi + 0x3F4) = eax;
    MEM32(esi + 0x3F8) = eax;
    goto loc_00518698;

loc_00518478: ;
    PUSH32(esp, ebp);
    ebp = esi + 0x3D8;
    MEM32(ebp + 8) = ebx;
    MEM32(ebp + 4) = ebx;
    MEM32(ebp) = ebx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = esi + 0x3E4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x6496B8);
    ecx = esp + 0x2C;
    MEM32(ebx + 8) = eax;
    MEM32(ebx + 4) = eax;
    MEM32(ebx) = eax;
    PUSH32(esp, 0x005184A7u); RECOMP_ABI_CALL(0x00616420u, sub_00616420); /* call 0x00616420 */

loc_005184A7: ;
    PUSH32(esp, 0x100);
    ecx = esp + 0xC8;
    PUSH32(esp, ecx);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x005184BDu); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_005184BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00518690; /* je: equal / zero */

loc_005184C5: ;
    goto loc_005184D0;

    /* nop */
    edi = edi;

loc_005184D0: ;
    edi = 0x64968C;
    esi = esp + 0xC4;
    ecx = 8;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00518586; /* jne: not equal / not zero */

loc_005184EB: ;
    PUSH32(esp, 0x63E350);
    ecx = esp + 0x28;
    PUSH32(esp, 0x005184F9u); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_005184F9: ;
    PUSH32(esp, 0x63E8A0);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00518507u); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_00518507: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00518515u); RECOMP_ABI_CALL(0x00615870u, sub_00615870); /* call 0x00615870 */

loc_00518515: ;
    PUSH32(esp, 0x63E344);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00518523u); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_00518523: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_push(MEMF(ebp + 4)); /* fld float */
    fp_push(MEMF(ebp)); /* fld float */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 5) & 7]); /* fmul st(5) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0051866A; /* jp: parity */

loc_0051856B: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    ecx = ebp;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    goto loc_0051866A;

loc_00518586: ;
    edi = 0x649680;
    esi = esp + 0xC4;
    ecx = 0xC;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0051865D; /* jne: not equal / not zero */

loc_005185A1: ;
    PUSH32(esp, 0x63E350);
    ecx = esp + 0x28;
    PUSH32(esp, 0x005185AFu); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_005185AF: ;
    PUSH32(esp, 0x63E8A0);
    ecx = esp + 0x28;
    PUSH32(esp, 0x005185BDu); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_005185BD: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x005185CBu); RECOMP_ABI_CALL(0x00615870u, sub_00615870); /* call 0x00615870 */

loc_005185CB: ;
    PUSH32(esp, 0x649674);
    ecx = esp + 0x28;
    PUSH32(esp, 0x005185D9u); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_005185D9: ;
    fp_push(MEMF(ebx + 8)); /* fld float */
    fp_push(MEMF(ebx + 4)); /* fld float */
    fp_push(MEMF(ebx)); /* fld float */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 5) & 7]); /* fmul st(5) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0051863F; /* jp: parity */

loc_0051861C: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edx = ebx;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x3F0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3F0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 8) = eax;
    PUSH32(esp, ecx);
    goto loc_00518644;

loc_0051863F: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);

loc_00518644: ;
    ecx = esp + 0x28;
    PUSH32(esp, 0x0051864Du); RECOMP_ABI_CALL(0x00615870u, sub_00615870); /* call 0x00615870 */

loc_0051864D: ;
    PUSH32(esp, 0x63E344);
    ecx = esp + 0x28;
    PUSH32(esp, 0x0051865Bu); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_0051865B: ;
    goto loc_0051866A;

loc_0051865D: ;
    PUSH32(esp, 0x649658);
    PUSH32(esp, 0x00518667u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_00518667: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0051866A: ;
    PUSH32(esp, 0x100);
    eax = esp + 0xC8;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x00518680u); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_00518680: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005184D0; /* jne: not equal / not zero */

loc_00518688: ;
    esi = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x20);

loc_00518690: ;
    ecx = edi;
    PUSH32(esp, 0x00518697u); RECOMP_ABI_CALL(0x00617FB0u, sub_00617FB0); /* call 0x00617FB0 */

loc_00518697: ;
    POP32(esp, ebp);

loc_00518698: ;
    ecx = esi + 0x3F0;
    PUSH32(esp, 0x005186A3u); RECOMP_ABI_CALL(0x004572A0u, sub_004572A0); /* call 0x004572A0 */

loc_005186A3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1B4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1B4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005186B0
 * Original: 0x005186B0 - 0x005187DB (299 bytes, 93 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005186B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005186B0: ;
    _fb = (uint32_t)(0x1A4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1A4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1B0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebp = ecx;
    eax = MEM32(ebp + 4);
    ecx = MEM32(0x860220);
    PUSH32(esp, 0x649718);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005186DAu); RECOMP_ABI_CALL(0x006137C0u, sub_006137C0); /* call 0x006137C0 */

loc_005186DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_005186FA; /* jne: not equal / not zero */

loc_005186E2: ;
    PUSH32(esp, 0x6496F4);
    PUSH32(esp, 0x005186ECu); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_005186EC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x1A4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1A4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_005186FA: ;
    ecx = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00518708u); RECOMP_ABI_CALL(0x00616420u, sub_00616420); /* call 0x00616420 */

loc_00518708: ;
    PUSH32(esp, 0x6496E4);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00518716u); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_00518716: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x0051871Fu); RECOMP_ABI_CALL(0x00615790u, sub_00615790); /* call 0x00615790 */

loc_0051871F: ;
    MEM32(ebp + 0x3FC) = eax;
    edx = MEM32(0x6496D8);
    ecx = MEM32(0x6496DC);
    MEM32(esp + 0xAC) = edx;
    edx = MEM32(0x6496E0);
    MEM32(esp + 0xB0) = ecx;
    ecx = esi;
    PUSH32(esp, ebx);
    MEM32(esp + 0xB8) = edx;
    edx = ecx;
    PUSH32(esp, edi);

loc_00518752: ;
    SET_LO8(ebx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00518752; /* jne: not equal / not zero */

loc_00518759: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp + 0xB4;
    ebx = ecx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00518765: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00518765; /* jne: not equal / not zero */

loc_0051876D: ;
    ecx = ebx;
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
    ecx = ebx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
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
    POP32(esp, ebx);
    if (CMP_LE(_fas, _fbs)) goto loc_005187C7; /* jle: less or equal (signed <=) */

loc_00518783: ;
    PUSH32(esp, 0x5BE);
    PUSH32(esp, 0x6496CC);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x00518794u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00518794: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005187A4; /* je: equal / zero */

loc_0051879B: ;
    ecx = eax;
    PUSH32(esp, 0x005187A2u); RECOMP_ABI_CALL(0x00531240u, sub_00531240); /* call 0x00531240 */

loc_005187A2: ;
    goto loc_005187A6;

loc_005187A4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005187A6: ;
    ecx = MEM32(ebp + 0x3FC);
    PUSH32(esp, ecx);
    edx = esp + 0xB0;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(ebp + 0x400) = eax;
    PUSH32(esp, 0x005187C7u); RECOMP_ABI_CALL(0x005316A0u, sub_005316A0); /* call 0x005316A0 */

loc_005187C7: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x005187D0u); RECOMP_ABI_CALL(0x00617FB0u, sub_00617FB0); /* call 0x00617FB0 */

loc_005187D0: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x1A4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1A4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005187E0
 * Original: 0x005187E0 - 0x005188D2 (242 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005187E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005187E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x220;
    MEM32(esi) = 0x649720;
    PUSH32(esp, 0x005187F4u); RECOMP_ABI_CALL(0x00525100u, sub_00525100); /* call 0x00525100 */

loc_005187F4: ;
    ecx = esi + 0x2DC;
    PUSH32(esp, 0x005187FFu); RECOMP_ABI_CALL(0x00520110u, sub_00520110); /* call 0x00520110 */

loc_005187FF: ;
    MEM32(0x6C263C) = esi;
    PUSH32(esp, 0x0051880Au); RECOMP_ABI_CALL(0x00522B90u, sub_00522B90); /* call 0x00522B90 */

loc_0051880A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x208) = eax;
    MEM32(esi + 0x20C) = eax;
    MEM32(esi + 0x210) = eax;
    MEM8(esi + 0x214) = 1;
    MEM32(esi + 0x218) = 0x43160000;
    MEM32(esi + 0x40C) = eax;
    MEM32(esi + 0x408) = eax;
    MEM32(esi + 0x404) = eax;
    MEM32(esi + 0x418) = eax;
    MEM32(esi + 0x414) = eax;
    MEM32(esi + 0x410) = eax;
    MEM32(esi + 0x41C) = eax;
    MEM32(esi + 0x420) = eax;
    MEM32(esi + 0x424) = eax;
    MEM32(esi + 0x21C) = eax;
    MEM32(esi + 0x3D0) = eax;
    MEM32(esi + 0x3D4) = eax;
    MEM32(esi + 0x428) = eax;
    MEM32(esi + 0x42C) = eax;
    MEM32(esi + 0x3E0) = eax;
    MEM32(esi + 0x3DC) = eax;
    MEM32(esi + 0x3D8) = eax;
    MEM32(esi + 0x3EC) = eax;
    MEM32(esi + 0x3E8) = eax;
    MEM32(esi + 0x3E4) = eax;
    MEM32(esi + 0x3F8) = eax;
    MEM32(esi + 0x3F4) = eax;
    MEM32(esi + 0x3F0) = eax;
    MEM32(esi + 0x3FC) = eax;
    MEM32(esi + 0x400) = eax;
    MEM32(esi + 0x430) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005188E0
 * Original: 0x005188E0 - 0x00518E69 (1417 bytes, 376 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005188E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005188E0: ;
    _fb = (uint32_t)(0x1A4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1A4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x1A8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xC4);
    PUSH32(esp, 0x6496CC);
    PUSH32(esp, eax);
    ebx = ecx;
    PUSH32(esp, 0x00518902u); RECOMP_ABI_CALL(0x00614A10u, sub_00614A10); /* call 0x00614A10 */

loc_00518902: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x649834);
    esi = ebx + 8;
    PUSH32(esp, 0x100);
    PUSH32(esp, esi);
    MEM32(ebx + 4) = eax;
    PUSH32(esp, 0x00518919u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00518919: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x649828);
    ecx = ebx + 0x108;
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00518930u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00518930: ;
    edx = MEM32(ebx + 4);
    ecx = MEM32(0x860220);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x649824);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0051894Cu); RECOMP_ABI_CALL(0x006137C0u, sub_006137C0); /* call 0x006137C0 */

loc_0051894C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0xC) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00518967; /* jne: not equal / not zero */

loc_00518956: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x649808);
    PUSH32(esp, 0x00518964u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_00518964: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00518967: ;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00518975u); RECOMP_ABI_CALL(0x00616420u, sub_00616420); /* call 0x00616420 */

loc_00518975: ;
    edx = MEM32(ebx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x6497F0);
    PUSH32(esp, 0x00518983u); RECOMP_ABI_CALL(0x00618610u, sub_00618610); /* call 0x00618610 */

loc_00518983: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x100);
    eax = esp + 0xB4;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0051899Cu); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_0051899C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00518CCA; /* je: equal / zero */

loc_005189A4: ;
    PUSH32(esp, ebp);
    goto loc_005189B0;

    /* nop */
    edi = edi;

loc_005189B0: ;
    edi = esp + 0xB4;
    esi = 0x6497E4;
    ecx = 0xA;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00518A4D; /* jne: not equal / not zero */

loc_005189CB: ;
    PUSH32(esp, 0x100);
    eax = esp + 0xB8;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x005189E1u); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_005189E1: ;
    ecx = esp + 0xB4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005189EEu); RECOMP_ABI_CALL(0x0061A5DCu, sub_0061A5DC); /* call 0x0061A5DC */

loc_005189EE: ;
    esi = eax;
    PUSH32(esp, 0xDF);
    edx = esi + esi * 4;
    eax = edx * 4 + 4;
    PUSH32(esp, 0x6496CC);
    PUSH32(esp, eax);
    MEM32(ebx + 0x208) = esi;
    PUSH32(esp, 0x00518A10u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00518A10: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00518A40; /* je: equal / zero */

loc_00518A17: ;
    ebp = eax + 4;
    MEM32(eax) = esi;
    eax = esi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_00518A42; /* jl: less (signed <) */

loc_00518A25: ;
    esi = eax + 1;

loc_00518A28: ;
    ecx = edi;
    PUSH32(esp, 0x00518A2Fu); RECOMP_ABI_CALL(0x00599B50u, sub_00599B50); /* call 0x00599B50 */

loc_00518A2F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00518A28; /* jne: not equal / not zero */

loc_00518A35: ;
    MEM32(ebx + 0x20C) = ebp;
    goto loc_00518CA7;

loc_00518A40: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00518A42: ;
    MEM32(ebx + 0x20C) = ebp;
    goto loc_00518CA7;

loc_00518A4D: ;
    edi = esp + 0xB4;
    esi = 0x6497DC;
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
    if ((_flags == 0)) goto loc_00518B9A; /* jne: not equal / not zero */

loc_00518A68: ;
    PUSH32(esp, 0x100);
    eax = esp + 0xB8;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00518A7Eu); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_00518A7E: ;
    ecx = esp + 0xB4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00518A8Bu); RECOMP_ABI_CALL(0x0061A5DCu, sub_0061A5DC); /* call 0x0061A5DC */

loc_00518A8B: ;
    ebp = eax;
    eax = MEM32(ebx + 0x208);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00518AA7; /* jl: less (signed <) */

loc_00518A9A: ;
    PUSH32(esp, 0x6497C0);
    PUSH32(esp, 0x00518AA4u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_00518AA4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00518AA7: ;
    PUSH32(esp, 0x100);
    edx = esp + 0xB8;
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00518ABDu); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_00518ABD: ;
    edi = 0x63E350;
    esi = esp + 0xB4;
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
    if ((_flags != 0)) goto loc_00518AE5; /* je: equal / zero */

loc_00518AD4: ;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6497A4);
    PUSH32(esp, 0x00518AE2u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_00518AE2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00518AE5: ;
    PUSH32(esp, 0x100);
    edx = esp + 0xB8;
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00518AFBu); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_00518AFB: ;
    edi = 0x63E684;
    esi = esp + 0xB4;
    ecx = 6;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_00518B23; /* je: equal / zero */

loc_00518B12: ;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6497A4);
    PUSH32(esp, 0x00518B20u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_00518B20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00518B23: ;
    PUSH32(esp, 0x100);
    edx = esp + 0xB8;
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00518B39u); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_00518B39: ;
    edx = MEM32(ebx + 0x20C);
    eax = esp + 0xB4;
    ecx = ebp + ebp * 4;
    PUSH32(esp, eax);
    ecx = edx + ecx * 4;
    PUSH32(esp, 0x00518B53u); RECOMP_ABI_CALL(0x00524680u, sub_00524680); /* call 0x00524680 */

loc_00518B53: ;
    PUSH32(esp, 0x100);
    eax = esp + 0xB8;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00518B69u); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_00518B69: ;
    edi = 0x63E344;
    esi = esp + 0xB4;
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
    if ((_flags != 0)) goto loc_00518CA7; /* je: equal / zero */

loc_00518B84: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6497A4);
    PUSH32(esp, 0x00518B92u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_00518B92: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00518CA7;

loc_00518B9A: ;
    edi = esp + 0xB4;
    esi = 0x649798;
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
    if ((_flags == 0)) goto loc_00518BD4; /* jne: not equal / not zero */

loc_00518BB1: ;
    PUSH32(esp, 0x63E350);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00518BBFu); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_00518BBF: ;
    eax = ebx + 0x404;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00518BCFu); RECOMP_ABI_CALL(0x00615870u, sub_00615870); /* call 0x00615870 */

loc_00518BCF: ;
    goto loc_00518C99;

loc_00518BD4: ;
    edi = esp + 0xB4;
    esi = 0x64978C;
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
    if ((_flags == 0)) goto loc_00518C0E; /* jne: not equal / not zero */

loc_00518BEB: ;
    PUSH32(esp, 0x63E350);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00518BF9u); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_00518BF9: ;
    eax = ebx + 0x410;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00518C09u); RECOMP_ABI_CALL(0x00615870u, sub_00615870); /* call 0x00615870 */

loc_00518C09: ;
    goto loc_00518C99;

loc_00518C0E: ;
    edi = esp + 0xB4;
    esi = 0x649780;
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
    if ((_flags == 0)) goto loc_00518C74; /* jne: not equal / not zero */

loc_00518C25: ;
    PUSH32(esp, 0x63E350);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00518C33u); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_00518C33: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x00518C3Cu); RECOMP_ABI_CALL(0x00615790u, sub_00615790); /* call 0x00615790 */

loc_00518C3C: ;
    ecx = esp + 0x14;
    MEM32(ebx + 0x420) = eax;
    PUSH32(esp, 0x00518C4Bu); RECOMP_ABI_CALL(0x00615790u, sub_00615790); /* call 0x00615790 */

loc_00518C4B: ;
    PUSH32(esp, 0x63E344);
    ecx = esp + 0x18;
    MEM32(ebx + 0x424) = eax;
    PUSH32(esp, 0x00518C5Fu); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_00518C5F: ;
    eax = MEM32(ebx + 0x424);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebx + 0x420));
    MEM32(ebx + 0x41C) = eax;
    goto loc_00518CA7;

loc_00518C74: ;
    edi = esp + 0xB4;
    esi = 0x649778;
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
    if ((_flags == 0)) goto loc_00518CA7; /* jne: not equal / not zero */

loc_00518C8B: ;
    PUSH32(esp, 0x63E350);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00518C99u); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_00518C99: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x63E344);
    PUSH32(esp, 0x00518CA7u); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_00518CA7: ;
    PUSH32(esp, 0x100);
    eax = esp + 0xB8;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00518CBDu); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_00518CBD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005189B0; /* jne: not equal / not zero */

loc_00518CC5: ;
    esi = MEM32(esp + 0x10);
    POP32(esp, ebp);

loc_00518CCA: ;
    ecx = esi;
    PUSH32(esp, 0x00518CD1u); RECOMP_ABI_CALL(0x00617FB0u, sub_00617FB0); /* call 0x00617FB0 */

loc_00518CD1: ;
    ecx = ebx + 0x42C;
    PUSH32(esp, ecx);
    edx = ebx + 0x428;
    PUSH32(esp, edx);
    eax = ebx + 0x404;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00518CEBu); RECOMP_ABI_CALL(0x00517CE0u, sub_00517CE0); /* call 0x00517CE0 */

loc_00518CEB: ;
    ecx = MEM32(ebx + 0x208);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x649758);
    PUSH32(esp, 0x00518CFCu); RECOMP_ABI_CALL(0x00618610u, sub_00618610); /* call 0x00618610 */

loc_00518CFC: ;
    eax = MEM32(ebx + 0x208);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00518D51; /* jle: less or equal (signed <=) */

loc_00518D0B: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00518D10: ;
    SET_LO8(eax, MEM8(esi + 0x6C3310));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00518D43; /* je: equal / zero */

loc_00518D1A: ;
    edx = MEM32(ebx + 0x20C);
    eax = MEM32(edi + edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x64973C);
    PUSH32(esp, 0x00518D2Fu); RECOMP_ABI_CALL(0x00618610u, sub_00618610); /* call 0x00618610 */

loc_00518D2F: ;
    ecx = MEM32(ebx + 0x20C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx + 8;
    PUSH32(esp, eax);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00518D43u); RECOMP_ABI_CALL(0x005248D0u, sub_005248D0); /* call 0x005248D0 */

loc_00518D43: ;
    eax = MEM32(ebx + 0x208);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00518D10; /* jl: less (signed <) */

loc_00518D51: ;
    PUSH32(esp, 0x64972C);
    PUSH32(esp, 0x00518D5Bu); RECOMP_ABI_CALL(0x00618610u, sub_00618610); /* call 0x00618610 */

loc_00518D5B: ;
    PUSH32(esp, 0x649724);
    PUSH32(esp, 0x00518D65u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_00518D65: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00518DCD; /* jne: not equal / not zero */

loc_00518D6C: ;
    PUSH32(esp, 0x13D);
    PUSH32(esp, 0x6496CC);
    PUSH32(esp, 0x4844);
    PUSH32(esp, 0x00518D80u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00518D80: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00518D90; /* je: equal / zero */

loc_00518D87: ;
    ecx = eax;
    PUSH32(esp, 0x00518D8Eu); RECOMP_ABI_CALL(0x00523840u, sub_00523840); /* call 0x00523840 */

loc_00518D8E: ;
    goto loc_00518D92;

loc_00518D90: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00518D92: ;
    ecx = eax;
    MEM32(ebx + 0x210) = eax;
    PUSH32(esp, 0x00518D9Fu); RECOMP_ABI_CALL(0x00523ED0u, sub_00523ED0); /* call 0x00523ED0 */

loc_00518D9F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(ebx + 0x214) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00518DCD; /* jne: not equal / not zero */

loc_00518DA9: ;
    esi = MEM32(ebx + 0x210);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00518DC3; /* je: equal / zero */

loc_00518DB3: ;
    ecx = esi;
    PUSH32(esp, 0x00518DBAu); RECOMP_ABI_CALL(0x00523910u, sub_00523910); /* call 0x00523910 */

loc_00518DBA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00518DC0u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00518DC0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00518DC3: ;
    MEM32(ebx + 0x210) = 0;

loc_00518DCD: ;
    eax = MEM32(ebx + 0x430);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00518E0A; /* jne: not equal / not zero */

loc_00518DD7: ;
    PUSH32(esp, 0x14D);
    PUSH32(esp, 0x6496CC);
    PUSH32(esp, 0x4430);
    PUSH32(esp, 0x00518DEBu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00518DEB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00518DFB; /* je: equal / zero */

loc_00518DF2: ;
    ecx = eax;
    PUSH32(esp, 0x00518DF9u); RECOMP_ABI_CALL(0x00522960u, sub_00522960); /* call 0x00522960 */

loc_00518DF9: ;
    goto loc_00518DFD;

loc_00518DFB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00518DFD: ;
    ecx = eax;
    MEM32(ebx + 0x430) = eax;
    PUSH32(esp, 0x00518E0Au); RECOMP_ABI_CALL(0x00521FB0u, sub_00521FB0); /* call 0x00521FB0 */

loc_00518E0A: ;
    ecx = ebx;
    PUSH32(esp, 0x00518E11u); RECOMP_ABI_CALL(0x00518370u, sub_00518370); /* call 0x00518370 */

loc_00518E11: ;
    eax = MEM32(ebx + 0x41C);
    PUSH32(esp, 0x156);
    ecx = eax * 4;
    PUSH32(esp, 0x6496CC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00518E2Eu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00518E2E: ;
    ecx = MEM32(ebx + 0x41C);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    edi = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0x21C) = edi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx + 8;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00518E5Du); RECOMP_ABI_CALL(0x005186B0u, sub_005186B0); /* call 0x005186B0 */

loc_00518E5D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1A4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1A4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00518E70
 * Original: 0x00518E70 - 0x00518F9A (298 bytes, 81 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00518E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00518E70: ;
    eax = MEM32(0x6C32D0);
    edx = MEM32(0x6C32CC);
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(eax * 4 + 0x66327C);
    eax = MEM32(edx * 4 + 0x663270);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x649634);
    edx = esp + 0x118;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00518EB0u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00518EB0: ;
    eax = MEM32(0x6C32D0);
    ecx = MEM32(eax * 4 + 0x66327C);
    edx = MEM32(0x6C32CC);
    eax = MEM32(edx * 4 + 0x663270);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x64983C);
    PUSH32(esp, 0x00518ED5u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00518ED5: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x108;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00518EE7u); RECOMP_ABI_CALL(0x005183F0u, sub_005183F0); /* call 0x005183F0 */

loc_00518EE7: ;
    edx = MEM32(0x6C32D0);
    eax = MEM32(edx * 4 + 0x66327C);
    ecx = MEM32(0x6C32CC);
    edx = MEM32(ecx * 4 + 0x663270);
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x648678);
    ecx = esp + 0x18;
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00518F1Bu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00518F1B: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 8;
    edi = esi + 0x220;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00518F30u); RECOMP_ABI_CALL(0x00524E60u, sub_00524E60); /* call 0x00524E60 */

loc_00518F30: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00518F37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00518F34u); } /* indirect call */
    }

loc_00518F37: ;
    ecx = MEM32(esi + 0x430);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00518F61; /* je: equal / zero */

loc_00518F41: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00518F4Bu); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_00518F4B: ;
    ecx = MEM32(esi + 0x430);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00518F56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00518F53u); } /* indirect call */
    }

loc_00518F56: ;
    ecx = MEM32(esi + 0x430);
    PUSH32(esp, 0x00518F61u); RECOMP_ABI_CALL(0x00522020u, sub_00522020); /* call 0x00522020 */

loc_00518F61: ;
    ecx = MEM32(0x6C32D0);
    edx = MEM32(0x6C32CC);
    eax = MEM32(0x6C32C8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x114;
    _fb = (uint32_t)(0x2DC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2DC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00518F8Au); RECOMP_ABI_CALL(0x00520CB0u, sub_00520CB0); /* call 0x00520CB0 */

loc_00518F8A: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00518F91u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00518F8Eu); } /* indirect call */
    }

loc_00518F91: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00518FA0
 * Original: 0x00518FA0 - 0x00518FD6 (54 bytes, 22 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00518FA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00518FA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00518FB9u); RECOMP_ABI_CALL(0x00517CE0u, sub_00517CE0); /* call 0x00517CE0 */

loc_00518FB9: ;
    ecx = MEM32(esi + 0x428);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebx) = MEM32(ebx) - ecx;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esi + 0x42C);
    eax = MEM32(edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edi) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00518FE0
 * Original: 0x00518FE0 - 0x00519006 (38 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00518FE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00518FE0: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(ecx + 0x42C);
    PUSH32(esp, eax);
    _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + 0x428);
    PUSH32(esp, edx);
    _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00519000u); RECOMP_ABI_CALL(0x00517D30u, sub_00517D30); /* call 0x00517D30 */

loc_00519000: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00519010
 * Original: 0x00519010 - 0x00519104 (244 bytes, 100 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00519010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00519010: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = esi;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0051902Eu); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_0051902E: ;
    edi = MEM32(ebp + 0xC);
    ecx = esi;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    edx = MEM32(ebp + 8);
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -12) = esp;
    MEM32(0x6C262C) = eax;
    MEM32(0x6C2638) = eax;
    MEM32(0x6C2630) = eax;
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebx;
    MEM32(0x6C2634) = 0x497423F0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00519074u); RECOMP_ABI_CALL(0x00518FA0u, sub_00518FA0); /* call 0x00518FA0 */

loc_00519074: ;
    edi = MEM32(ebp + -8);
    ecx = MEM32(ebp + -4);
    eax = edi + -1;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx + -1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    MEM32(ebp + -8) = ecx;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebx + 0x420);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(ebp + -16) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0051909F; /* jl: less (signed <) */

loc_0051909C: ;
    edi = eax + -1;

loc_0051909F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebx + 0x424);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005190B9; /* jl: less (signed <) */

loc_005190B3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = eax;
    ecx = eax;

loc_005190B9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    MEM32(ebp + -4) = esi;
    if (CMP_G(_fas, _fbs)) goto loc_005190F8; /* jg: greater (signed >) */

loc_005190C0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    esi = edx;
    if (CMP_G(_fas, _fbs)) goto loc_005190ED; /* jg: greater (signed >) */

loc_005190C6: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + -12);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    edx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005190E2u); RECOMP_ABI_CALL(0x00518100u, sub_00518100); /* call 0x00518100 */

loc_005190E2: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005190C6; /* jle: less or equal (signed <=) */

loc_005190E7: ;
    ecx = MEM32(ebp + -8);
    edx = MEM32(ebp + -16);

loc_005190ED: ;
    eax = MEM32(ebp + -4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_005190C0; /* jle: less or equal (signed <=) */

loc_005190F8: ;
    esp = ebp + -28;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00519110
 * Original: 0x00519110 - 0x0051919F (143 bytes, 53 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00519110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00519110: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = ebx + 0x24;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0051912Fu); RECOMP_ABI_CALL(0x00518FA0u, sub_00518FA0); /* call 0x00518FA0 */

loc_0051912F: ;
    eax = MEM32(esp + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(esi, MEM16(edi + 0x420));
    SET_LO16(esi, (uint32_t)((int32_t)LO16(esi) * (int32_t)MEM16(esp + 0x14)));
    PUSH32(esp, 0x47C);
    PUSH32(esp, 0x6496CC);
    PUSH32(esp, 0x24);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00519155u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00519155: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051918A; /* je: equal / zero */

loc_0051915C: ;
    edx = MEM32(edi + 0x21C);
    ecx = SX16(LO16(esi));
    ecx = MEM32(edx + ecx * 4);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x00519177u); RECOMP_ABI_CALL(0x00523290u, sub_00523290); /* call 0x00523290 */

loc_00519177: ;
    edx = MEM32(edi + 0x21C);
    ecx = SX16(LO16(esi));
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx + ecx * 4) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0051918A: ;
    edx = MEM32(edi + 0x21C);
    ecx = SX16(LO16(esi));
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    MEM32(edx + ecx * 4) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005191A0
 * Original: 0x005191A0 - 0x005192A6 (262 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005191A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005191A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x400);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x649720;
    if (CMP_EQ(_fa, _fb)) goto loc_005191B9; /* je: equal / zero */

loc_005191B3: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x005191B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005191B7u); } /* indirect call */
    }

loc_005191B9: ;
    ecx = MEM32(esi + 0x430);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005191C9; /* je: equal / zero */

loc_005191C3: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x005191C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005191C7u); } /* indirect call */
    }

loc_005191C9: ;
    eax = MEM32(esi + 0x21C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00519218; /* je: equal / zero */

loc_005191D5: ;
    eax = MEM32(esi + 0x41C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00519209; /* jle: less or equal (signed <=) */

loc_005191E1: ;
    eax = MEM32(esi + 0x21C);
    edi = MEM32(eax + ebx * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005191FE; /* je: equal / zero */

loc_005191EE: ;
    ecx = edi;
    PUSH32(esp, 0x005191F5u); RECOMP_ABI_CALL(0x005C3530u, sub_005C3530); /* call 0x005C3530 */

loc_005191F5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x005191FBu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005191FB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005191FE: ;
    eax = MEM32(esi + 0x41C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005191E1; /* jl: less (signed <) */

loc_00519209: ;
    ecx = MEM32(esi + 0x21C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00519215u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00519215: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00519218: ;
    edi = MEM32(esi + 0x210);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00519232; /* je: equal / zero */

loc_00519222: ;
    ecx = edi;
    PUSH32(esp, 0x00519229u); RECOMP_ABI_CALL(0x00523910u, sub_00523910); /* call 0x00523910 */

loc_00519229: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0051922Fu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0051922F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00519232: ;
    ecx = MEM32(esi + 0x20C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00519267; /* je: equal / zero */

loc_0051923C: ;
    eax = MEM32(ecx + -4);
    PUSH32(esp, ebp);
    ebp = ecx + -4;
    edx = eax + eax * 4;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = ecx + edx * 4;
    if ((_fas < 0)) goto loc_0051925D; /* js: sign (negative) */

loc_0051924C: ;
    ebx = eax + 1;
    /* nop */

loc_00519250: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edi;
    PUSH32(esp, 0x0051925Au); RECOMP_ABI_CALL(0x005248B0u, sub_005248B0); /* call 0x005248B0 */

loc_0051925A: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00519250; /* jne: not equal / not zero */

loc_0051925D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00519263u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00519263: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);

loc_00519267: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00519279; /* je: equal / zero */

loc_00519270: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00519276u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00519276: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00519279: ;
    PUSH32(esp, 0x0051927Eu); RECOMP_ABI_CALL(0x00522C10u, sub_00522C10); /* call 0x00522C10 */

loc_0051927E: ;
    ecx = esi + 0x2DC;
    MEM32(0x6C263C) = 0;
    PUSH32(esp, 0x00519293u); RECOMP_ABI_CALL(0x00520240u, sub_00520240); /* call 0x00520240 */

loc_00519293: ;
    ecx = esi + 0x220;
    PUSH32(esp, 0x0051929Eu); RECOMP_ABI_CALL(0x005E3280u, sub_005E3280); /* call 0x005E3280 */

loc_0051929E: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00614360(); return; /* tail jmp 0x00614360 */

}

/**
 * sub_005192B0
 * Original: 0x005192B0 - 0x005192FE (78 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005192B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005192B0: ;
    PUSH32(esp, ecx);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x005192CAu); RECOMP_ABI_CALL(0x00518FA0u, sub_00518FA0); /* call 0x00518FA0 */

loc_005192CA: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005192F6; /* jl: less (signed <) */

loc_005192D2: ;
    eax = MEM32(esi + 0x420);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005192F6; /* jge: greater or equal (signed >=) */

loc_005192DC: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005192F6; /* jl: less (signed <) */

loc_005192E4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x424)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x424) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005192F6; /* jge: greater or equal (signed >=) */

loc_005192EC: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_005192F6: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00519300
 * Original: 0x00519300 - 0x005198B6 (1462 bytes, 444 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00519300(void)
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

loc_00519300: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x84);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x8C);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x00519322u); RECOMP_ABI_CALL(0x00519010u, sub_00519010); /* call 0x00519010 */

loc_00519322: ;
    fp_push(MEMF(edi + 0x2B0)); /* fld float */
    edx = MEM32(edi + 0x2AC);
    fp_push(MEMF(edi + 0x2B4)); /* fld float */
    ecx = MEM32(edi + 0x2A8);
    MEMF(esp + 0x30) = (float)fp_top(); /* fst */
    MEM32(esp + 0x28) = edx;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    MEM32(esp + 0x24) = ecx;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    if (CMP_L(_fas, _fbs)) goto loc_0051973A; /* jl: less (signed <) */

loc_00519359: ;
    PUSH32(esp, ebx);
    ebx = 3;

loc_0051935F: ;
    ecx = MEM32(esp + edx * 4 + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051944B; /* je: equal / zero */

loc_0051936B: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0051944B; /* jnp: not parity */

loc_0051937C: ;
    fp_push(MEMF(ecx)); /* fld float */
    eax = MEM32(edi + 0x26C);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi)); /* fsub dword ptr [esi] */
    MEM32(esp + 0x14) = eax;
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 4)); /* fsub dword ptr [esi + 4] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 8)); /* fsub dword ptr [esi + 8] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005193D9; /* jp: parity */

loc_005193CF: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x65E384)); /* fld float */
    goto loc_005193EE;

loc_005193D9: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005193EE; /* jne: not equal / not zero */

loc_005193E6: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_005193EE: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x268)); /* fmul dword ptr [edi + 0x268] */
    ecx = MEM32(ecx + 0x1C);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    MEM32(esp + 0x18) = eax;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    eax = MEM32(ecx + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEM32(esp + 0x20) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEM32(esp + 0x24) = ecx;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] + fp_top()); fp_pop(); /* faddp st(2) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_stack[(g_fp_top + 5) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 5) & 7] + fp_top()); fp_pop(); /* faddp st(5) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */

loc_0051944B: ;
    ecx = MEM32(esp + edx * 4 + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00519537; /* je: equal / zero */

loc_00519457: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00519537; /* jnp: not parity */

loc_00519468: ;
    fp_push(MEMF(ecx)); /* fld float */
    eax = MEM32(edi + 0x26C);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi)); /* fsub dword ptr [esi] */
    MEM32(esp + 0x14) = eax;
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 4)); /* fsub dword ptr [esi + 4] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 8)); /* fsub dword ptr [esi + 8] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005194C5; /* jp: parity */

loc_005194BB: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x65E384)); /* fld float */
    goto loc_005194DA;

loc_005194C5: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005194DA; /* jne: not equal / not zero */

loc_005194D2: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_005194DA: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x268)); /* fmul dword ptr [edi + 0x268] */
    ecx = MEM32(ecx + 0x1C);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    MEM32(esp + 0x18) = eax;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    eax = MEM32(ecx + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEM32(esp + 0x20) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEM32(esp + 0x24) = ecx;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] + fp_top()); fp_pop(); /* faddp st(2) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_stack[(g_fp_top + 5) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 5) & 7] + fp_top()); fp_pop(); /* faddp st(5) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */

loc_00519537: ;
    ecx = MEM32(esp + edx * 4 + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00519623; /* je: equal / zero */

loc_00519543: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00519623; /* jnp: not parity */

loc_00519554: ;
    fp_push(MEMF(ecx)); /* fld float */
    eax = MEM32(edi + 0x26C);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi)); /* fsub dword ptr [esi] */
    MEM32(esp + 0x14) = eax;
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 4)); /* fsub dword ptr [esi + 4] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 8)); /* fsub dword ptr [esi + 8] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005195B1; /* jp: parity */

loc_005195A7: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x65E384)); /* fld float */
    goto loc_005195C6;

loc_005195B1: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005195C6; /* jne: not equal / not zero */

loc_005195BE: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_005195C6: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x268)); /* fmul dword ptr [edi + 0x268] */
    ecx = MEM32(ecx + 0x1C);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    MEM32(esp + 0x18) = eax;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    eax = MEM32(ecx + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEM32(esp + 0x20) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEM32(esp + 0x24) = ecx;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] + fp_top()); fp_pop(); /* faddp st(2) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_stack[(g_fp_top + 5) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 5) & 7] + fp_top()); fp_pop(); /* faddp st(5) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */

loc_00519623: ;
    ecx = MEM32(esp + edx * 4 + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051970F; /* je: equal / zero */

loc_0051962F: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0051970F; /* jnp: not parity */

loc_00519640: ;
    fp_push(MEMF(ecx)); /* fld float */
    eax = MEM32(edi + 0x26C);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi)); /* fsub dword ptr [esi] */
    MEM32(esp + 0x14) = eax;
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 4)); /* fsub dword ptr [esi + 4] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 8)); /* fsub dword ptr [esi + 8] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0051969D; /* jp: parity */

loc_00519693: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x65E384)); /* fld float */
    goto loc_005196B2;

loc_0051969D: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005196B2; /* jne: not equal / not zero */

loc_005196AA: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_005196B2: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x268)); /* fmul dword ptr [edi + 0x268] */
    ecx = MEM32(ecx + 0x1C);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    MEM32(esp + 0x18) = eax;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    eax = MEM32(ecx + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEM32(esp + 0x20) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEM32(esp + 0x24) = ecx;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] + fp_top()); fp_pop(); /* faddp st(2) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_stack[(g_fp_top + 5) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 5) & 7] + fp_top()); fp_pop(); /* faddp st(5) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */

loc_0051970F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0051935F; /* jl: less (signed <) */

loc_0051971D: ;
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    POP32(esp, ebx);
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEMF(esp + 0x30) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */

loc_0051973A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00519845; /* jge: greater or equal (signed >=) */

loc_00519742: ;
    ecx = MEM32(esp + edx * 4 + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051982E; /* je: equal / zero */

loc_0051974E: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0051982E; /* jnp: not parity */

loc_0051975F: ;
    fp_push(MEMF(ecx)); /* fld float */
    eax = MEM32(edi + 0x26C);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi)); /* fsub dword ptr [esi] */
    MEM32(esp + 0x10) = eax;
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 4)); /* fsub dword ptr [esi + 4] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 8)); /* fsub dword ptr [esi + 8] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005197BC; /* jp: parity */

loc_005197B2: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x65E384)); /* fld float */
    goto loc_005197D1;

loc_005197BC: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005197D1; /* jne: not equal / not zero */

loc_005197C9: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_005197D1: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x268)); /* fmul dword ptr [edi + 0x268] */
    ecx = MEM32(ecx + 0x1C);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    MEM32(esp + 0x14) = eax;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    eax = MEM32(ecx + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(esp + 0x1C) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEM32(esp + 0x20) = ecx;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] + fp_top()); fp_pop(); /* faddp st(2) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_stack[(g_fp_top + 5) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 5) & 7] + fp_top()); fp_pop(); /* faddp st(5) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */

loc_0051982E: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00519742; /* jl: less (signed <) */

loc_00519837: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0051984B;

loc_00519845: ;
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */

loc_0051984B: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    POP32(esp, edi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00519867; /* jne: not equal / not zero */

loc_0051985F: ;
    MEM32(esp + 0x18) = 0x3F800000;

loc_00519867: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00519880; /* jne: not equal / not zero */

loc_00519878: ;
    MEM32(esp + 0x1C) = 0x3F800000;

loc_00519880: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00519895; /* jne: not equal / not zero */

loc_0051988D: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_00519895: ;
    eax = MEM32(esp + 0x7C);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    edx = MEM32(esp + 0x1C);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x24);
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 4) = edx;
    MEM32(eax + 0xC) = ecx;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005198C0
 * Original: 0x005198C0 - 0x00519F5F (1695 bytes, 504 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005198C0(void)
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

loc_005198C0: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x8C);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x005198DDu); RECOMP_ABI_CALL(0x00519010u, sub_00519010); /* call 0x00519010 */

loc_005198DD: ;
    ebp = MEM32(esp + 0x94);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005198E6: ;
    ecx = MEM32(esp + ebx * 4 + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005198F6; /* je: equal / zero */

loc_005198EE: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x005198F6u); RECOMP_ABI_CALL(0x00522D10u, sub_00522D10); /* call 0x00522D10 */

loc_005198F6: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005198E6; /* jl: less (signed <) */

loc_005198FC: ;
    ebp = MEM32(esp + 0x98);
    PUSH32(esp, ebp);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00519911u); RECOMP_ABI_CALL(0x00519010u, sub_00519010); /* call 0x00519010 */

loc_00519911: ;
    fp_push(MEMF(edi + 0x2A8)); /* fld float */
    fp_push(MEMF(edi + 0x2AC)); /* fld float */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    fp_push(MEMF(edi + 0x2B0)); /* fld float */
    MEMF(esp + 0x30) = (float)fp_top(); /* fst */
    fp_push(MEMF(edi + 0x2B4)); /* fld float */
    MEMF(esp + 0x34) = (float)fp_top(); /* fst */
    if (CMP_L(_fas, _fbs)) goto loc_00519D3E; /* jl: less (signed <) */

loc_0051993C: ;
    ebx = 3;

loc_00519941: ;
    ecx = MEM32(esp + edx * 4 + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00519A38; /* je: equal / zero */

loc_0051994D: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00519A38; /* jnp: not parity */

loc_0051995E: ;
    fp_push(MEMF(ecx)); /* fld float */
    eax = MEM32(edi + 0x26C);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi)); /* fsub dword ptr [esi] */
    MEM32(esp + 0x14) = eax;
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 4)); /* fsub dword ptr [esi + 4] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 8)); /* fsub dword ptr [esi + 8] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005199BB; /* jp: parity */

loc_005199B1: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x65E384)); /* fld float */
    goto loc_005199D0;

loc_005199BB: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005199D0; /* jne: not equal / not zero */

loc_005199C8: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_005199D0: ;
    ecx = MEM32(ecx + 0x1C);
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    eax = ecx + 0x1C;
    ebp = MEM32(eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D408)); /* fmul dword ptr [0x63d408] */
    MEM32(esp + 0x18) = ebp;
    ebp = MEM32(eax + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x268)); /* fmul dword ptr [edi + 0x268] */
    MEM32(esp + 0x1C) = ebp;
    ebp = MEM32(eax + 8);
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    eax = MEM32(eax + 0xC);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(esp + 0x20) = ebp;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEM32(esp + 0x24) = eax;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_stack[(g_fp_top + 5) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 5) & 7] + fp_top()); fp_pop(); /* faddp st(5) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */

loc_00519A38: ;
    ecx = MEM32(esp + edx * 4 + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00519B2F; /* je: equal / zero */

loc_00519A44: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00519B2F; /* jnp: not parity */

loc_00519A55: ;
    fp_push(MEMF(ecx)); /* fld float */
    eax = MEM32(edi + 0x26C);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi)); /* fsub dword ptr [esi] */
    MEM32(esp + 0x14) = eax;
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 4)); /* fsub dword ptr [esi + 4] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 8)); /* fsub dword ptr [esi + 8] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00519AB2; /* jp: parity */

loc_00519AA8: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x65E384)); /* fld float */
    goto loc_00519AC7;

loc_00519AB2: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00519AC7; /* jne: not equal / not zero */

loc_00519ABF: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_00519AC7: ;
    ecx = MEM32(ecx + 0x1C);
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    eax = ecx + 0x1C;
    ebp = MEM32(eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D408)); /* fmul dword ptr [0x63d408] */
    MEM32(esp + 0x18) = ebp;
    ebp = MEM32(eax + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x268)); /* fmul dword ptr [edi + 0x268] */
    MEM32(esp + 0x1C) = ebp;
    ebp = MEM32(eax + 8);
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    eax = MEM32(eax + 0xC);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(esp + 0x20) = ebp;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEM32(esp + 0x24) = eax;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_stack[(g_fp_top + 5) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 5) & 7] + fp_top()); fp_pop(); /* faddp st(5) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */

loc_00519B2F: ;
    ecx = MEM32(esp + edx * 4 + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00519C26; /* je: equal / zero */

loc_00519B3B: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00519C26; /* jnp: not parity */

loc_00519B4C: ;
    fp_push(MEMF(ecx)); /* fld float */
    eax = MEM32(edi + 0x26C);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi)); /* fsub dword ptr [esi] */
    MEM32(esp + 0x14) = eax;
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 4)); /* fsub dword ptr [esi + 4] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 8)); /* fsub dword ptr [esi + 8] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00519BA9; /* jp: parity */

loc_00519B9F: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x65E384)); /* fld float */
    goto loc_00519BBE;

loc_00519BA9: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00519BBE; /* jne: not equal / not zero */

loc_00519BB6: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_00519BBE: ;
    ecx = MEM32(ecx + 0x1C);
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    eax = ecx + 0x1C;
    ebp = MEM32(eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D408)); /* fmul dword ptr [0x63d408] */
    MEM32(esp + 0x18) = ebp;
    ebp = MEM32(eax + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x268)); /* fmul dword ptr [edi + 0x268] */
    MEM32(esp + 0x1C) = ebp;
    ebp = MEM32(eax + 8);
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    eax = MEM32(eax + 0xC);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(esp + 0x20) = ebp;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEM32(esp + 0x24) = eax;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_stack[(g_fp_top + 5) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 5) & 7] + fp_top()); fp_pop(); /* faddp st(5) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */

loc_00519C26: ;
    ecx = MEM32(esp + edx * 4 + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00519D1D; /* je: equal / zero */

loc_00519C32: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00519D1D; /* jnp: not parity */

loc_00519C43: ;
    fp_push(MEMF(ecx)); /* fld float */
    eax = MEM32(edi + 0x26C);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi)); /* fsub dword ptr [esi] */
    MEM32(esp + 0x14) = eax;
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 4)); /* fsub dword ptr [esi + 4] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 8)); /* fsub dword ptr [esi + 8] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00519CA0; /* jp: parity */

loc_00519C96: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x65E384)); /* fld float */
    goto loc_00519CB5;

loc_00519CA0: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00519CB5; /* jne: not equal / not zero */

loc_00519CAD: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_00519CB5: ;
    ecx = MEM32(ecx + 0x1C);
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    eax = ecx + 0x1C;
    ebp = MEM32(eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D408)); /* fmul dword ptr [0x63d408] */
    MEM32(esp + 0x18) = ebp;
    ebp = MEM32(eax + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x268)); /* fmul dword ptr [edi + 0x268] */
    MEM32(esp + 0x1C) = ebp;
    ebp = MEM32(eax + 8);
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    eax = MEM32(eax + 0xC);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(esp + 0x20) = ebp;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEM32(esp + 0x24) = eax;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_stack[(g_fp_top + 5) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 5) & 7] + fp_top()); fp_pop(); /* faddp st(5) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */

loc_00519D1D: ;
    ebp = MEM32(esp + 0x98);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00519941; /* jl: less (signed <) */

loc_00519D32: ;
    MEMF(esp + 0x34) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x30) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */

loc_00519D3E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00519E5A; /* jge: greater or equal (signed >=) */

loc_00519D46: ;
    goto loc_00519D50;

    /* nop */
    /* nop */

loc_00519D50: ;
    ecx = MEM32(esp + edx * 4 + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00519E47; /* je: equal / zero */

loc_00519D5C: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00519E47; /* jnp: not parity */

loc_00519D6D: ;
    fp_push(MEMF(ecx)); /* fld float */
    eax = MEM32(edi + 0x26C);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi)); /* fsub dword ptr [esi] */
    MEM32(esp + 0x14) = eax;
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 4)); /* fsub dword ptr [esi + 4] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 8)); /* fsub dword ptr [esi + 8] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00519DCA; /* jp: parity */

loc_00519DC0: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x65E384)); /* fld float */
    goto loc_00519DDF;

loc_00519DCA: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00519DDF; /* jne: not equal / not zero */

loc_00519DD7: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_00519DDF: ;
    ecx = MEM32(ecx + 0x1C);
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    eax = ecx + 0x1C;
    ebx = MEM32(eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D408)); /* fmul dword ptr [0x63d408] */
    MEM32(esp + 0x18) = ebx;
    ebx = MEM32(eax + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x268)); /* fmul dword ptr [edi + 0x268] */
    MEM32(esp + 0x1C) = ebx;
    ebx = MEM32(eax + 8);
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    eax = MEM32(eax + 0xC);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(esp + 0x20) = ebx;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEM32(esp + 0x24) = eax;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_stack[(g_fp_top + 5) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 5) & 7] + fp_top()); fp_pop(); /* faddp st(5) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */

loc_00519E47: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00519D50; /* jl: less (signed <) */

loc_00519E50: ;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00519E5E;

loc_00519E5A: ;
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */

loc_00519E5E: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x94)); /* fmul dword ptr [esp + 0x94] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x94)); /* fmul dword ptr [esp + 0x94] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x94)); /* fmul dword ptr [esp + 0x94] */
    MEMF(esp + 0x30) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x94)); /* fmul dword ptr [esp + 0x94] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00519EAD; /* jne: not equal / not zero */

loc_00519EA5: ;
    MEM32(esp + 0x28) = 0x3F800000;

loc_00519EAD: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00519EC6; /* jne: not equal / not zero */

loc_00519EBE: ;
    MEM32(esp + 0x2C) = 0x3F800000;

loc_00519EC6: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00519EDB; /* jne: not equal / not zero */

loc_00519ED3: ;
    MEM32(esp + 0x30) = 0x3F800000;

loc_00519EDB: ;
    PUSH32(esp, 2);
    ecx = edi;
    PUSH32(esp, 0x00519EE4u); RECOMP_ABI_CALL(0x00517FF0u, sub_00517FF0); /* call 0x00517FF0 */

loc_00519EE4: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x00519EF3u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00519EF3: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    esi = ZX8(LO8(eax));
    esi = esi | 0xFFFFFF00u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi << 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00519F0Eu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00519F0E: ;
    ecx = ZX8(LO8(eax));
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    esi = esi | ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi << 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00519F25u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00519F25: ;
    edx = ZX8(LO8(eax));
    esi = esi | edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00519F30u); RECOMP_ABI_CALL(0x005EE760u, sub_005EE760); /* call 0x005EE760 */

loc_00519F30: ;
    eax = MEM32(esp + 0x90);
    ecx = MEM32(esp + 0x30);
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    edx = MEM32(esp + 0x34);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x2C);
    POP32(esp, ebp);
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00519F60
 * Original: 0x00519F60 - 0x00519F7E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00519F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00519F60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00519F68u); RECOMP_ABI_CALL(0x005191A0u, sub_005191A0); /* call 0x005191A0 */

loc_00519F68: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00519F78; /* je: equal / zero */

loc_00519F6F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00519F75u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00519F75: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00519F78: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00519F80
 * Original: 0x00519F80 - 0x00519F9F (31 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00519F80(void)
{

loc_00519F80: ;
    eax = MEM32(ecx + 0x270);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00519F99u); RECOMP_ABI_CALL(0x005198C0u, sub_005198C0); /* call 0x005198C0 */

loc_00519F99: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00519FA0
 * Original: 0x00519FA0 - 0x00519FC3 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00519FA0(void)
{

loc_00519FA0: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(0x85836C);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x14C); PUSH32(esp, 0x00519FC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00519FBCu); } /* indirect call */
    }

loc_00519FC2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00519FD0
 * Original: 0x00519FD0 - 0x0051A059 (137 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00519FD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00519FD0: ;
    eax = 0x3F800000;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x14) = edx;
    MEM32(ecx + 0x18) = edx;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    MEM32(ecx + 0x30) = edx;
    MEM32(ecx + 0x34) = edx;
    MEM32(ecx + 0x38) = edx;
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x40) = eax;
    MEM32(ecx + 0x44) = eax;
    MEM32(ecx + 0x48) = eax;
    MEM32(ecx + 0x4C) = eax;
    MEM32(ecx + 0x50) = eax;
    MEM32(ecx + 0x54) = edx;
    MEM32(ecx + 0x58) = edx;
    MEM32(ecx + 0x5C) = edx;
    MEM32(ecx + 0x60) = edx;
    MEM32(ecx + 0x64) = eax;
    MEM32(ecx + 0x68) = eax;
    MEM32(ecx + 0x6C) = eax;
    MEM32(ecx + 0x70) = edx;
    MEM32(ecx + 0x74) = eax;
    MEM32(ecx + 0x78) = edx;
    MEM32(ecx + 0x7C) = edx;
    MEM32(ecx + 0x80) = edx;
    MEM32(ecx + 0x84) = edx;
    MEM32(ecx + 0x88) = eax;
    MEM32(ecx + 0x8C) = eax;
    MEM32(ecx + 0x90) = eax;
    MEM32(ecx + 0x94) = eax;
    MEM32(ecx + 0x98) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0051A060
 * Original: 0x0051A060 - 0x0051A079 (25 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051A060(void)
{

loc_0051A060: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0051A068u); RECOMP_ABI_CALL(0x005E33D0u, sub_005E33D0); /* call 0x005E33D0 */

loc_0051A068: ;
    ecx = esi;
    MEM32(esi) = 0x649858;
    PUSH32(esp, 0x0051A075u); RECOMP_ABI_CALL(0x00519FD0u, sub_00519FD0); /* call 0x00519FD0 */

loc_0051A075: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0051A080
 * Original: 0x0051A080 - 0x0051A086 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051A080(void)
{

loc_0051A080: ;
    eax = 0x649878;
    esp += 4; return; /* ret */

}

/**
 * sub_0051A090
 * Original: 0x0051A090 - 0x0051A153 (195 bytes, 71 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051A090(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0051A090: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 1);
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6498F0);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0051A0AEu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0051A0AE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6498DC);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x0051A0C4u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0051A0C4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x50;
    PUSH32(esp, edx);
    PUSH32(esp, 0x6498D0);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0051A0DAu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0051A0DA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6498C0);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x0051A0F0u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0051A0F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x74;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6498B4);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0051A106u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0051A106: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x64;
    PUSH32(esp, edx);
    PUSH32(esp, 0x6498A4);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x0051A11Cu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0051A11C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x98;
    PUSH32(esp, eax);
    PUSH32(esp, 0x649898);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0051A135u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0051A135: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x88;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x649888);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x0051A14Eu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0051A14E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0051A160
 * Original: 0x0051A160 - 0x0051A197 (55 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051A160(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0051A160: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63B81C);
    edx = esp + 0x10;
    PUSH32(esp, 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0051A181u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0051A181: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0051A190u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_0051A190: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0051A1A0
 * Original: 0x0051A1A0 - 0x0051A1EB (75 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051A1A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0051A1A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esi) = 0x649900;
    if (CMP_EQ(_fa, _fb)) goto loc_0051A1B9; /* je: equal / zero */

loc_0051A1B3: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0051A1B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0051A1B7u); } /* indirect call */
    }

loc_0051A1B9: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051A1C6; /* je: equal / zero */

loc_0051A1C0: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0051A1C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0051A1C4u); } /* indirect call */
    }

loc_0051A1C6: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051A1D3; /* je: equal / zero */

loc_0051A1CD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0051A1D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0051A1D1u); } /* indirect call */
    }

loc_0051A1D3: ;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x18) = edi;
    MEM32(0x6C2640) = edi;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005E3280(); return; /* tail jmp 0x005E3280 */

}

/**
 * sub_0051A1F0
 * Original: 0x0051A1F0 - 0x0051A1F6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051A1F0(void)
{

loc_0051A1F0: ;
    eax = 0x649920;
    esp += 4; return; /* ret */

}

/**
 * sub_0051A200
 * Original: 0x0051A200 - 0x0051A320 (288 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051A200(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0051A200: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x62D5F0);
    esi = ecx;
    PUSH32(esp, 0x0051A20Du); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_0051A20D: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0051A214u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0051A211u); } /* indirect call */
    }

loc_0051A214: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x645D68);
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x0051A229u); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_0051A229: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x649948);
    MEM32(esi + 0x104) = eax;
    PUSH32(esp, 0x0051A23Du); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_0051A23D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x645D58);
    MEM32(esi + 0x118) = eax;
    PUSH32(esp, 0x0051A251u); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_0051A251: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x645D44);
    MEM32(esi + 0x108) = eax;
    PUSH32(esp, 0x0051A265u); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_0051A265: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x649934);
    MEM32(esi + 0x10C) = eax;
    PUSH32(esp, 0x0051A279u); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_0051A279: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x643438);
    MEM32(esi + 0x110) = eax;
    PUSH32(esp, 0x0051A28Du); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_0051A28D: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x649928);
    MEM32(esi + 0x114) = eax;
    PUSH32(esp, 0x0051A2A4u); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_0051A2A4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x80000004u);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x80);
    MEM32(esi + 0x11C) = eax;
    PUSH32(esp, 0x0051A2C0u); RECOMP_ABI_CALL(0x005FA280u, sub_005FA280); /* call 0x005FA280 */

loc_0051A2C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x80000004u);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x40);
    MEM32(esi + 0x78) = eax;
    PUSH32(esp, 0x0051A2D3u); RECOMP_ABI_CALL(0x005FA280u, sub_005FA280); /* call 0x005FA280 */

loc_0051A2D3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x80000004u);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x20);
    MEM32(esi + 0x7C) = eax;
    PUSH32(esp, 0x0051A2E6u); RECOMP_ABI_CALL(0x005FA280u, sub_005FA280); /* call 0x005FA280 */

loc_0051A2E6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x80000004u);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x20);
    MEM32(esi + 0x80) = eax;
    PUSH32(esp, 0x0051A2FCu); RECOMP_ABI_CALL(0x005FA280u, sub_005FA280); /* call 0x005FA280 */

loc_0051A2FC: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x80000004u);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x20);
    MEM32(esi + 0x84) = eax;
    PUSH32(esp, 0x0051A315u); RECOMP_ABI_CALL(0x005FA280u, sub_005FA280); /* call 0x005FA280 */

loc_0051A315: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x88) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0051A320
 * Original: 0x0051A320 - 0x0051A3F8 (216 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051A320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0051A320: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x120);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0051A332u); RECOMP_ABI_CALL(0x005F3D80u, sub_005F3D80); /* call 0x005F3D80 */

loc_0051A332: ;
    ecx = MEM32(esi + 0x11C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0051A33Eu); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_0051A33E: ;
    edx = MEM32(esi + 0x114);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0051A34Au); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_0051A34A: ;
    eax = MEM32(esi + 0x110);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0051A356u); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_0051A356: ;
    ecx = MEM32(esi + 0x10C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0051A362u); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_0051A362: ;
    edx = MEM32(esi + 0x108);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0051A36Eu); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_0051A36E: ;
    eax = MEM32(esi + 0x118);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0051A37Au); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_0051A37A: ;
    ecx = MEM32(esi + 0x104);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0051A386u); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_0051A386: ;
    eax = MEM32(esi + 0x18C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051A39E; /* je: equal / zero */

loc_0051A395: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0051A39Bu); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_0051A39B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0051A39E: ;
    edi = esi + 0x78;
    ebx = 5;

loc_0051A3A6: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051A3B5; /* je: equal / zero */

loc_0051A3AC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0051A3B2u); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_0051A3B2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0051A3B5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0051A3A6; /* jne: not equal / not zero */

loc_0051A3BB: ;
    MEM32(esi + 0x11C) = ebp;
    MEM32(esi + 0x114) = ebp;
    MEM32(esi + 0x110) = ebp;
    MEM32(esi + 0x10C) = ebp;
    MEM32(esi + 0x108) = ebp;
    MEM32(esi + 0x118) = ebp;
    MEM32(esi + 0x104) = ebp;
    MEM32(0x6C2640) = ebp;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0051A3F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0051A3F1u); } /* indirect call */
    }

loc_0051A3F3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0051A400
 * Original: 0x0051A400 - 0x0051A496 (150 bytes, 48 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051A400(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0051A400: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x8C);
    PUSH32(esp, eax);
    esi = ecx;
    ecx = MEM32(esp + 0x94);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x648678);
    edx = esp + 0x18;
    PUSH32(esp, 0x80);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0051A433u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0051A433: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0051A442u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_0051A442: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0051A449u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0051A446u); } /* indirect call */
    }

loc_0051A449: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x649964);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0051A457u); RECOMP_ABI_CALL(0x0051A160u, sub_0051A160); /* call 0x0051A160 */

loc_0051A457: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0051A45Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0051A45Cu); } /* indirect call */
    }

loc_0051A45F: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x64995C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0051A46Du); RECOMP_ABI_CALL(0x0051A160u, sub_0051A160); /* call 0x0051A160 */

loc_0051A46D: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0051A475u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0051A472u); } /* indirect call */
    }

loc_0051A475: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x649954);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0051A483u); RECOMP_ABI_CALL(0x0051A160u, sub_0051A160); /* call 0x0051A160 */

loc_0051A483: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0051A48Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0051A488u); } /* indirect call */
    }

loc_0051A48B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0051A4A0
 * Original: 0x0051A4A0 - 0x0051A4CA (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051A4A0(void)
{

loc_0051A4A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x0051A4AAu); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_0051A4AA: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0051A4B4u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_0051A4B4: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0051A4BEu); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_0051A4BE: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0051A4C8u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_0051A4C8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0051A4D0
 * Original: 0x0051A4D0 - 0x0051A701 (561 bytes, 191 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051A4D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0051A4D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 1);
    eax = esi + 0x188;
    PUSH32(esp, eax);
    PUSH32(esp, 0x649B04);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0051A4F1u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0051A4F1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x184;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x649AFC);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0051A50Au); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0051A50A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x649AE8);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0051A520u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0051A520: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x649AD4);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0051A536u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0051A536: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x649AC8);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x0051A54Cu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0051A54C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, 0x649ABC);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x0051A562u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0051A562: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, 0x649AB0);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0051A578u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0051A578: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x68;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x649AA4);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0051A58Eu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0051A58E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x70;
    PUSH32(esp, edx);
    PUSH32(esp, 0x649A94);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0051A5A4u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0051A5A4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x6C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x649A88);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0051A5BAu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0051A5BA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x74;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x649A74);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x0051A5D0u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0051A5D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x124;
    PUSH32(esp, edx);
    PUSH32(esp, 0x649A60);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0051A5E9u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0051A5E9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x128;
    PUSH32(esp, eax);
    PUSH32(esp, 0x649A4C);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0051A602u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0051A602: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x12C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x649A34);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0051A61Bu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0051A61B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x130;
    PUSH32(esp, edx);
    PUSH32(esp, 0x649A1C);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0051A634u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0051A634: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x134;
    PUSH32(esp, eax);
    PUSH32(esp, 0x649A08);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0051A64Du); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0051A64D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x138;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6499F4);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0051A666u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0051A666: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x154;
    PUSH32(esp, edx);
    PUSH32(esp, 0x6499E0);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x0051A67Fu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0051A67F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x13C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6499C8);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0051A698u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0051A698: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x140;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6499B0);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0051A6B1u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0051A6B1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x144;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64999C);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x0051A6CAu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0051A6CA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x164;
    PUSH32(esp, eax);
    PUSH32(esp, 0x649988);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x0051A6E3u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0051A6E3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x174) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x174;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x649974);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x0051A6FCu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0051A6FC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0051A710
 * Original: 0x0051A710 - 0x0051AA4A (826 bytes, 263 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051A710(void)
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

loc_0051A710: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(0x858418));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0051A72B; /* je: equal / zero */

loc_0051A726: ;
    PUSH32(esp, 0x0051A72Bu); RECOMP_ABI_CALL(0x005EDB60u, sub_005EDB60); /* call 0x005EDB60 */

loc_0051A72B: ;
    edi = ebx + 0xBC;
    ecx = 0x10;
    esi = 0x858480;
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
    ecx = MEM32(0x858378);
    eax = MEM32(0x8583A0);
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x0051A752u); RECOMP_ABI_CALL(0x005F23A0u, sub_005F23A0); /* call 0x005F23A0 */

loc_0051A752: ;
    SET_LO8(edx, MEM8(0x85843E));
    PUSH32(esp, 0);
    MEM8(esp + 0x20) = LO8(edx);
    PUSH32(esp, 0x0051A763u); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_0051A763: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x0051A76Au); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_0051A76A: ;
    fp_push((double)SMEM32(0x674FAC)); /* fild */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) / fp_top()); /* fdivr dword ptr [0x62d57c] */
    MEMF(0x85AE4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(0x674FB0)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) / fp_top()); /* fdivr dword ptr [0x62d57c] */
    MEMF(0x85AE50) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebx + 0x78);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0051A79Bu); RECOMP_ABI_CALL(0x005EFC10u, sub_005EFC10); /* call 0x005EFC10 */

loc_0051A79B: ;
    eax = MEM32(0x85A9AC);
    esi = 4;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edi = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0051A7C9; /* je: equal / zero */

loc_0051A7B1: ;
    eax = MEM32(0x85836C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    MEM32(0x85A9AC) = esi;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x10C); PUSH32(esp, 0x0051A7C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0051A7C3u); } /* indirect call */
    }

loc_0051A7C9: ;
    _fa = (uint32_t)(MEM32(0x85A9B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x85A9B8), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051A7E9; /* je: equal / zero */

loc_0051A7D1: ;
    eax = MEM32(0x85836C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    MEM32(0x85A9B8) = esi;
    edx = MEM32(eax);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10C); PUSH32(esp, 0x0051A7E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0051A7E3u); } /* indirect call */
    }

loc_0051A7E9: ;
    _fa = (uint32_t)(MEM32(0x85AA30)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x85AA30), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051A808; /* je: equal / zero */

loc_0051A7F1: ;
    eax = MEM32(0x85836C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    MEM32(0x85AA30) = edi;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x10C); PUSH32(esp, 0x0051A808u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0051A802u); } /* indirect call */
    }

loc_0051A808: ;
    _fa = (uint32_t)(MEM32(0x85AA3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x85AA3C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051A827; /* je: equal / zero */

loc_0051A810: ;
    eax = MEM32(0x85836C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x85AA3C) = edi;
    edx = MEM32(eax);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10C); PUSH32(esp, 0x0051A827u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0051A821u); } /* indirect call */
    }

loc_0051A827: ;
    eax = MEM32(0x85A7DC);
    esi = 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051A84D; /* je: equal / zero */

loc_0051A835: ;
    eax = MEM32(0x85836C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    MEM32(0x85A7DC) = esi;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x114); PUSH32(esp, 0x0051A84Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0051A847u); } /* indirect call */
    }

loc_0051A84D: ;
    _fa = (uint32_t)(MEM32(0x85A7E0)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x85A7E0), esi (32-bit) */
    ebp = 2;
    if (CMP_EQ(_fa, _fb)) goto loc_0051A872; /* je: equal / zero */

loc_0051A85A: ;
    eax = MEM32(0x85836C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    MEM32(0x85A7E0) = esi;
    edx = MEM32(eax);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x114); PUSH32(esp, 0x0051A872u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0051A86Cu); } /* indirect call */
    }

loc_0051A872: ;
    _fa = (uint32_t)(MEM32(0x85A7F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x85A7F4), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051A893; /* je: equal / zero */

loc_0051A87A: ;
    eax = MEM32(0x85836C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 7);
    PUSH32(esp, 0);
    MEM32(0x85A7F4) = ebp;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x114); PUSH32(esp, 0x0051A893u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0051A88Du); } /* indirect call */
    }

loc_0051A893: ;
    _fa = (uint32_t)(MEM32(0x85A7F0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x85A7F0), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051A8B4; /* je: equal / zero */

loc_0051A89B: ;
    eax = MEM32(0x85836C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 6);
    PUSH32(esp, 0);
    MEM32(0x85A7F0) = ebp;
    edx = MEM32(eax);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x114); PUSH32(esp, 0x0051A8B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0051A8AEu); } /* indirect call */
    }

loc_0051A8B4: ;
    _fa = (uint32_t)(MEM32(0x85A7EC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x85A7EC), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051A8D5; /* je: equal / zero */

loc_0051A8BC: ;
    eax = MEM32(0x85836C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 5);
    PUSH32(esp, 0);
    MEM32(0x85A7EC) = ebp;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x114); PUSH32(esp, 0x0051A8D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0051A8CFu); } /* indirect call */
    }

loc_0051A8D5: ;
    edx = MEM32(0x85836C);
    esi = MEM32(edx);
    PUSH32(esp, 0x0051A8E2u); RECOMP_ABI_CALL(0x005F0060u, sub_005F0060); /* call 0x005F0060 */

loc_0051A8E2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(0x85836C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x104); PUSH32(esp, 0x0051A8F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0051A8EBu); } /* indirect call */
    }

loc_0051A8F1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x64FF0000);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0051A90Bu); RECOMP_ABI_CALL(0x005EF460u, sub_005EF460); /* call 0x005EF460 */

loc_0051A90B: ;
    ecx = MEM32(esp + 0x44);
    edx = MEM32(esp + 0x40);
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x4C);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x45);
    PUSH32(esp, 0x45);
    PUSH32(esp, 5);
    PUSH32(esp, 5);
    PUSH32(esp, 0x0051A938u); RECOMP_ABI_CALL(0x005EF6F0u, sub_005EF6F0); /* call 0x005EF6F0 */

loc_0051A938: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x40;
    esi = 0x20;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0051A950;

    /* nop */

loc_0051A950: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x34) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0051A9F5; /* jge: greater or equal (signed >=) */

loc_0051A95A: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx + ebx * 4 + 0x7C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0051A96Cu); RECOMP_ABI_CALL(0x005EFC10u, sub_005EFC10); /* call 0x005EFC10 */

loc_0051A96C: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx + ebx * 4 + 0x78);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0051A97Au); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_0051A97A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, 0);
    PUSH32(esp, 0x64FF0000);
    if (CMP_NE(_fa, _fb)) goto loc_0051A98E; /* jne: not equal / not zero */

loc_0051A988: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x40);
    goto loc_0051A992;

loc_0051A98E: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x20);

loc_0051A992: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0051A99Bu); RECOMP_ABI_CALL(0x005EF460u, sub_005EF460); /* call 0x005EF460 */

loc_0051A99B: ;
    ecx = MEM32(0x6C26FC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    edx = ecx + edi + 5;
    ecx = MEM32(0x6C26F8);
    PUSH32(esp, edx);
    edx = ecx + edi + 5;
    ecx = MEM32(0x6C26F4);
    PUSH32(esp, edx);
    edx = MEM32(0x6C26F0);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    eax = esi + 5;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, 5);
    PUSH32(esp, 0x0051A9DEu); RECOMP_ABI_CALL(0x005EF6F0u, sub_005EF6F0); /* call 0x005EF6F0 */

loc_0051A9DE: ;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi;
    esi = eax;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0051A950; /* jge: greater or equal (signed >=) */

loc_0051A9F5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0051AA00u); RECOMP_ABI_CALL(0x005EFC10u, sub_005EFC10); /* call 0x005EFC10 */

loc_0051AA00: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0051AA0Au); RECOMP_ABI_CALL(0x005F23A0u, sub_005F23A0); /* call 0x005F23A0 */

loc_0051AA0A: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x0051AA11u); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_0051AA11: ;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0051AA1Bu); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_0051AA1B: ;
    eax = MEM32(esp + 0x48);
    edx = MEM32(esp + 0x28);
    ecx = MEM32(edx + ebx * 4 + 0x78);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFFEu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x10) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    ecx = 6;
    POP32(esp, ebp);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0051AA50
 * Original: 0x0051AA50 - 0x0051B2BA (2154 bytes, 527 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051AA50(void)
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

loc_0051AA50: ;
    _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xE0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    esi = ebx + 0x78;
    edi = 5;

loc_0051AA63: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx + 0xC);
    eax = eax | 0x60000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0051AA73u); RECOMP_ABI_CALL(0x004E5440u, sub_004E5440); /* call 0x004E5440 */

loc_0051AA73: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0051AA63; /* jne: not equal / not zero */

loc_0051AA79: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x0051AA80u); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_0051AA80: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0051AA87u); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_0051AA87: ;
    SET_LO8(eax, MEM8(ebx + 0x190));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0051AAA0; /* jne: not equal / not zero */

loc_0051AA94: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0051AA9Du); RECOMP_ABI_CALL(0x005EE5A0u, sub_005EE5A0); /* call 0x005EE5A0 */

loc_0051AA9D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0051AAA0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0051AAA7u); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_0051AAA7: ;
    fp_push(MEMF(0x858548)); /* fld float */
    fp_push(MEMF(0x85854C)); /* fld float */
    ecx = MEM32(0x858550);
    edx = MEM32(0x858558);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xF8)); /* fmul dword ptr [esp + 0xf8] */
    eax = MEM32(0x85855C);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(0x858560);
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x30) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xF8)); /* fmul dword ptr [esp + 0xf8] */
    MEM32(esp + 0x34) = ecx;
    PUSH32(esp, 1);
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xFC)); /* fmul dword ptr [esp + 0xfc] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x100)); /* fmul dword ptr [esp + 0x100] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x100)); /* fmul dword ptr [esp + 0x100] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x100)); /* fmul dword ptr [esp + 0x100] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0051AB35u); RECOMP_ABI_CALL(0x005EE1A0u, sub_005EE1A0); /* call 0x005EE1A0 */

loc_0051AB35: ;
    SET_LO8(edx, MEM8(0x85843E));
    PUSH32(esp, 0);
    MEM8(esp + 0x30) = LO8(edx);
    PUSH32(esp, 0x0051AB46u); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_0051AB46: ;
    PUSH32(esp, 4);
    PUSH32(esp, 5);
    PUSH32(esp, 0x0051AB4Fu); RECOMP_ABI_CALL(0x005FB070u, sub_005FB070); /* call 0x005FB070 */

loc_0051AB4F: ;
    esi = MEM32(esp + 0x104);
    MEM32(0x85B2C0) = 0;
    fp_push(MEMF(esi + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x48)); /* fsub dword ptr [esp + 0x48] */
    eax = MEM32(0x85B2AC);
    fp_push(MEMF(esi + 0x28)); /* fld float */
    edi = 0x18;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x4C)); /* fsub dword ptr [esp + 0x4c] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x50)); /* fsub dword ptr [esp + 0x50] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x3C)); /* fsub dword ptr [esp + 0x3c] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x40)); /* fsub dword ptr [esp + 0x40] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x44)); /* fsub dword ptr [esp + 0x44] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x34);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = ecx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = edx;
    eax = MEM32(0x85B2AC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    fp_push(MEMF(esi + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x48)); /* fsub dword ptr [esp + 0x48] */
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x4C)); /* fsub dword ptr [esp + 0x4c] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x50)); /* fsub dword ptr [esp + 0x50] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x3C)); /* fadd dword ptr [esp + 0x3c] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x40)); /* fadd dword ptr [esp + 0x40] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x44)); /* fadd dword ptr [esp + 0x44] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x34);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = ecx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = edx;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    ecx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = edx;
    eax = MEM32(0x85B2AC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x24)); /* fadd dword ptr [esi + 0x24] */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x28)); /* fadd dword ptr [esi + 0x28] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x2C)); /* fadd dword ptr [esi + 0x2c] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x3C)); /* fsub dword ptr [esp + 0x3c] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x40)); /* fsub dword ptr [esp + 0x40] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x44)); /* fsub dword ptr [esp + 0x44] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x34);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = ecx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x85B2C0);
    fp_push(MEMF(esp + 0x48)); /* fld float */
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = edx;
    eax = MEM32(0x85B2AC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x24)); /* fadd dword ptr [esi + 0x24] */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x28)); /* fadd dword ptr [esi + 0x28] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x2C)); /* fadd dword ptr [esi + 0x2c] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x3C)); /* fadd dword ptr [esp + 0x3c] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x40)); /* fadd dword ptr [esp + 0x40] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x44)); /* fadd dword ptr [esp + 0x44] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x34);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = ecx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = edx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x85B2AC) = MEM32(0x85B2AC) + edi;
    _fa = (uint32_t)(MEM32(0x85B2AC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0051AD11u); RECOMP_ABI_CALL(0x005FB150u, sub_005FB150); /* call 0x005FB150 */

loc_0051AD11: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x0051AD18u); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_0051AD18: ;
    eax = esi;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x58) = ecx;
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10C)); /* fmul dword ptr [esp + 0x10c] */
    MEM32(esp + 0x5C) = edx;
    MEM32(esp + 0x60) = eax;
    ecx = esi + 0xC;
    edx = MEM32(ecx);
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    eax = MEM32(ecx + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10C)); /* fmul dword ptr [esp + 0x10c] */
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = eax;
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x2C) = ecx;
    fp_push(MEMF(esp + 0x60)); /* fld float */
    PUSH32(esp, 4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x110)); /* fmul dword ptr [esp + 0x110] */
    PUSH32(esp, 5);
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x118)); /* fmul dword ptr [esp + 0x118] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x118)); /* fmul dword ptr [esp + 0x118] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x118)); /* fmul dword ptr [esp + 0x118] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0051ADA8u); RECOMP_ABI_CALL(0x005FB070u, sub_005FB070); /* call 0x005FB070 */

loc_0051ADA8: ;
    MEM32(0x85B2C0) = 0xFFFFFFFFu;
    fp_push(MEMF(esi + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x60)); /* fsub dword ptr [esp + 0x60] */
    eax = MEM32(0x85B2AC);
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x64)); /* fsub dword ptr [esp + 0x64] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x68)); /* fsub dword ptr [esp + 0x68] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x2C)); /* fsub dword ptr [esp + 0x2c] */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x30)); /* fsub dword ptr [esp + 0x30] */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x34)); /* fsub dword ptr [esp + 0x34] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x40);
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
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    fp_push(MEMF(esi + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x60)); /* fsub dword ptr [esp + 0x60] */
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x64)); /* fsub dword ptr [esp + 0x64] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x68)); /* fsub dword ptr [esp + 0x68] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x2C)); /* fadd dword ptr [esp + 0x2c] */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x30)); /* fadd dword ptr [esp + 0x30] */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x34)); /* fadd dword ptr [esp + 0x34] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x40);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = edx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x85B2C0);
    fp_push(MEMF(esp + 0x60)); /* fld float */
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(0x85B2AC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x24)); /* fadd dword ptr [esi + 0x24] */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x28)); /* fadd dword ptr [esi + 0x28] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x2C)); /* fadd dword ptr [esi + 0x2c] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x2C)); /* fsub dword ptr [esp + 0x2c] */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x30)); /* fsub dword ptr [esp + 0x30] */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x34)); /* fsub dword ptr [esp + 0x34] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x40);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = edx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x85B2C0);
    fp_push(MEMF(esp + 0x60)); /* fld float */
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(0x85B2AC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x24)); /* fadd dword ptr [esi + 0x24] */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x28)); /* fadd dword ptr [esi + 0x28] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x2C)); /* fadd dword ptr [esi + 0x2c] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x2C)); /* fadd dword ptr [esp + 0x2c] */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x30)); /* fadd dword ptr [esp + 0x30] */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x34)); /* fadd dword ptr [esp + 0x34] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x40);
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
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x85B2AC) = MEM32(0x85B2AC) + edi;
    _fa = (uint32_t)(MEM32(0x85B2AC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0051AF5Eu); RECOMP_ABI_CALL(0x005FB150u, sub_005FB150); /* call 0x005FB150 */

loc_0051AF5E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0051AF65u); RECOMP_ABI_CALL(0x005EE1A0u, sub_005EE1A0); /* call 0x005EE1A0 */

loc_0051AF65: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x0051AF6Cu); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_0051AF6C: ;
    edx = MEM32(esp + 0x4C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0051AF76u); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_0051AF76: ;
    SET_LO8(eax, MEM8(0x858418));
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051AF87; /* je: equal / zero */

loc_0051AF82: ;
    PUSH32(esp, 0x0051AF87u); RECOMP_ABI_CALL(0x005EDB60u, sub_005EDB60); /* call 0x005EDB60 */

loc_0051AF87: ;
    fp_push(MEMF(esi + 0x24)); /* fld float */
    eax = MEM32(0x858480);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x34)); /* fsub dword ptr [esp + 0x34] */
    ecx = MEM32(0x858484);
    edx = MEM32(0x858488);
    MEM32(esp + 0xAC) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    eax = MEM32(0x85848C);
    MEM32(esp + 0xB8) = eax;
    eax = MEM32(0x858498);
    MEMF(esp + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0xB0) = ecx;
    fp_push(MEMF(esi + 0x28)); /* fld float */
    ecx = MEM32(0x858490);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x38)); /* fsub dword ptr [esp + 0x38] */
    MEM32(esp + 0xC4) = eax;
    eax = MEM32(0x8584A4);
    MEM32(esp + 0xBC) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x2C)); /* fsub dword ptr [esp + 0x2c] */
    ecx = MEM32(0x85849C);
    MEM32(esp + 0xB4) = edx;
    edx = MEM32(0x858494);
    MEMF(esp + 0x80) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    MEM32(esp + 0xD0) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x3C)); /* fsub dword ptr [esp + 0x3c] */
    eax = MEM32(0x8584B0);
    MEM32(esp + 0xC8) = ecx;
    ecx = MEM32(0x8584A8);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x30)); /* fsub dword ptr [esp + 0x30] */
    MEM32(esp + 0xC0) = edx;
    edx = MEM32(0x8584A0);
    MEM32(esp + 0xDC) = eax;
    eax = MEM32(0x8584BC);
    MEMF(esp + 0x84) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    MEM32(esp + 0xD4) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x24)); /* fadd dword ptr [esi + 0x24] */
    ecx = MEM32(0x8584B4);
    MEM32(esp + 0xCC) = edx;
    edx = MEM32(0x8584AC);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x34)); /* fadd dword ptr [esp + 0x34] */
    MEM32(esp + 0xE8) = eax;
    eax = MEM32(0x8583A0);
    MEM32(esp + 0xE0) = ecx;
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(eax + 0x16C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x28)); /* fadd dword ptr [esi + 0x28] */
    MEM32(esp + 0xD8) = edx;
    edx = MEM32(0x8584B8);
    MEM32(esp + 0xE4) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x38)); /* fadd dword ptr [esp + 0x38] */
    MEM32(esp + 0x88) = 0x3F800000;
    MEM32(esp + 0x78) = 0x3F800000;
    MEMF(esp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x3C)); /* fadd dword ptr [esp + 0x3c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x2C)); /* fadd dword ptr [esi + 0x2c] */
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(eax + 0x16C)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0051B0DF; /* jge: greater or equal (signed >=) */

loc_0051B0D9: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_0051B0DF: ;
    edx = MEM32(eax + 0x164);
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push((double)SMEM32(eax + 0x164)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0051B0F9; /* jge: greater or equal (signed >=) */

loc_0051B0F3: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_0051B0F9: ;
    ecx = MEM32(eax + 0x170);
    MEMF(esp + 0x50) = (float)fp_top(); /* fst */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x5C)); /* fadd dword ptr [esp + 0x5c] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D57C)); /* fsub dword ptr [0x62d57c] */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D57C)); /* fadd dword ptr [0x62d57c] */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(eax + 0x170)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0051B12F; /* jge: greater or equal (signed >=) */

loc_0051B129: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_0051B12F: ;
    edx = MEM32(eax + 0x168);
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push((double)SMEM32(eax + 0x168)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0051B149; /* jge: greater or equal (signed >=) */

loc_0051B143: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_0051B149: ;
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0051B150: ;
    edi = esp + esi + 0x8C;
    PUSH32(esp, edi);
    eax = esp + esi + 0x70;
    PUSH32(esp, eax);
    ecx = esp + 0xB4;
    PUSH32(esp, 0x0051B169u); RECOMP_ABI_CALL(0x00504DA0u, sub_00504DA0); /* call 0x00504DA0 */

loc_0051B169: ;
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + esi + 0x98)); /* fdiv dword ptr [esp + esi + 0x98] */
    MEMF(esp + 0x4C) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D57C)); /* fadd dword ptr [0x62d57c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x5C)); /* fmul dword ptr [esp + 0x5c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x50)); /* fadd dword ptr [esp + 0x50] */
    MEMF(edi) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + esi + 0x90)); /* fmul dword ptr [esp + esi + 0x90] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D57C)); /* fadd dword ptr [0x62d57c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x68)); /* fmul dword ptr [esp + 0x68] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x54)); /* fadd dword ptr [esp + 0x54] */
    MEMF(esp + 0x4C) = (float)fp_top(); /* fst */
    MEMF(esp + esi + 0x90) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x58)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x58] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0051B1D5; /* jp: parity */

loc_0051B1CD: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    goto loc_0051B1E6;

loc_0051B1D5: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x60)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x60] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0051B1E6; /* jne: not equal / not zero */

loc_0051B1E0: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x60)); /* fld float */

loc_0051B1E6: ;
    ecx = MEM32(esp + 0x4C);
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    MEM32(esp + 0x24) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x68)); /* fadd dword ptr [esp + 0x68] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D57C)); /* fsub dword ptr [0x62d57c] */
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D57C)); /* fadd dword ptr [0x62d57c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x4C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x4c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0051B232; /* je: equal / zero */

loc_0051B217: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x64)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x64] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0051B22E; /* jne: not equal / not zero */

loc_0051B228: ;
    fp_push(MEMF(esp + 0x64)); /* fld float */
    goto loc_0051B232;

loc_0051B22E: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */

loc_0051B232: ;
    MEMF(esp + esi + 0x90) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0051B150; /* jl: less (signed <) */

loc_0051B245: ;
    edx = MEM32(esp + 0x100);
    ecx = MEM32(0x662E6C);
    eax = MEM32(esp + 0xFC);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_push(MEMF(esp + ecx + 0x90)); /* fld float */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0051B26Au); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0051B26A: ;
    fp_push(MEMF(esp + 0xA4)); /* fld float */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0051B277u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0051B277: ;
    edx = MEM32(0x6C2700);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_push(MEMF(esp + edx + 0x9C)); /* fld float */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0051B28Du); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0051B28D: ;
    fp_push(MEMF(esp + 0x9C)); /* fld float */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0051B29Au); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0051B29A: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0051B2A2u); RECOMP_ABI_CALL(0x0051A710u, sub_0051A710); /* call 0x0051A710 */

loc_0051B2A2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0051B2ABu); RECOMP_ABI_CALL(0x005EE5A0u, sub_005EE5A0); /* call 0x005EE5A0 */

loc_0051B2AB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xE0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0051B2C0
 * Original: 0x0051B2C0 - 0x0051B3A0 (224 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051B2C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0051B2C0: ;
    eax = ecx;
    ecx = 0x3F800000;
    MEM32(eax) = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x2C) = edx;
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x24) = edx;
    MEM8(eax + 0x30) = LO8(edx);
    MEM8(eax + 0x31) = LO8(edx);
    MEM32(eax + 0x34) = edx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x64) = ecx;
    MEM32(eax + 0x60) = ecx;
    MEM32(eax + 0x5C) = ecx;
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0x74) = ecx;
    MEM32(eax + 0x70) = ecx;
    MEM32(eax + 0x6C) = ecx;
    MEM32(eax + 0x68) = ecx;
    MEM32(eax + 0x88) = ecx;
    MEM32(eax + 0x8C) = ecx;
    MEM32(eax + 0x90) = ecx;
    MEM32(eax + 0x94) = ecx;
    MEM32(eax + 0x98) = ecx;
    MEM32(eax + 0x9C) = ecx;
    MEM32(eax + 0x84) = ecx;
    MEM32(eax + 0x80) = ecx;
    MEM32(eax + 0x7C) = ecx;
    MEM32(eax + 0x78) = ecx;
    MEM32(eax + 0xA4) = 0x41200000;
    MEM32(eax + 0xA0) = 0x40000000;
    MEM32(eax + 0xA8) = edx;
    MEM32(eax + 0xAC) = edx;
    MEM32(eax + 0xB0) = edx;
    MEM32(eax + 0xB4) = edx;
    MEM8(eax + 0xB8) = LO8(edx);
    MEM32(eax + 0xBC) = ecx;
    MEM32(eax + 0xC0) = ecx;
    MEM32(eax + 0xC4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0051B3A0
 * Original: 0x0051B3A0 - 0x0051B6EA (842 bytes, 211 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0051B3A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0051B3A0: ;
    edx = MEM32(esp + 4);
    fp_push(MEMF(edx + 0xC)); /* fld float */
    eax = MEM32(esp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0xC)); /* fadd dword ptr [eax + 0xc] */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x10)); /* fadd dword ptr [eax + 0x10] */
    MEMF(ecx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x14)); /* fadd dword ptr [eax + 0x14] */
    MEMF(ecx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x18)); /* fadd dword ptr [eax + 0x18] */
    MEMF(ecx + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x1C)); /* fadd dword ptr [eax + 0x1c] */
    MEMF(ecx + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x20)); /* fadd dword ptr [eax + 0x20] */
    MEMF(ecx + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x24)); /* fadd dword ptr [eax + 0x24] */
    MEMF(ecx + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x28)); /* fadd dword ptr [eax + 0x28] */
    MEMF(ecx + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x2C)); /* fadd dword ptr [eax + 0x2c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x30)); /* fadd dword ptr [eax + 0x30] */
    MEMF(ecx + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x34)); /* fadd dword ptr [eax + 0x34] */
    MEMF(ecx + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x38)); /* fadd dword ptr [eax + 0x38] */
    MEMF(ecx + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x3C)); /* fadd dword ptr [eax + 0x3c] */
    MEMF(ecx + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x40)); /* fadd dword ptr [eax + 0x40] */
    MEMF(ecx + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x44)); /* fadd dword ptr [eax + 0x44] */
    MEMF(ecx + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x48)); /* fadd dword ptr [eax + 0x48] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x4C)); /* fadd dword ptr [eax + 0x4c] */
    MEMF(ecx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x50)); /* fadd dword ptr [eax + 0x50] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x54)); /* fadd dword ptr [eax + 0x54] */
    MEMF(ecx + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x58)); /* fadd dword ptr [eax + 0x58] */
    MEMF(ecx + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x5C)); /* fadd dword ptr [eax + 0x5c] */
    MEMF(ecx + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x60)); /* fadd dword ptr [eax + 0x60] */
    MEMF(ecx + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x64)); /* fadd dword ptr [eax + 0x64] */
    MEMF(ecx + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x68)); /* fadd dword ptr [eax + 0x68] */
    MEMF(ecx + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x6C)); /* fadd dword ptr [eax + 0x6c] */
    MEMF(ecx + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x70)); /* fadd dword ptr [eax + 0x70] */
    MEMF(ecx + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x74)); /* fadd dword ptr [eax + 0x74] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x78)); /* fadd dword ptr [eax + 0x78] */
    MEMF(ecx + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x7C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x7C)); /* fadd dword ptr [eax + 0x7c] */
    MEMF(ecx + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x80)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x80)); /* fadd dword ptr [eax + 0x80] */
    MEMF(ecx + 0x80) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x84)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x84)); /* fadd dword ptr [eax + 0x84] */
    MEMF(ecx + 0x84) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x7C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x80)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0x80) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x84)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0x84) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x88)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x88)); /* fadd dword ptr [eax + 0x88] */
    MEMF(ecx + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x8C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x8C)); /* fadd dword ptr [eax + 0x8c] */
    MEMF(ecx + 0x8C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x90)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x90)); /* fadd dword ptr [eax + 0x90] */
    MEMF(ecx + 0x90) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x94)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x94)); /* fadd dword ptr [eax + 0x94] */
    MEMF(ecx + 0x94) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x88)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x8C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0x8C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x90)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0x90) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x94)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0x94) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x98)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x98)); /* fadd dword ptr [eax + 0x98] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 0x98) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0051B6F0
 * Original: 0x0051B6F0 - 0x0051B998 (680 bytes, 191 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0051B6F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0051B6F0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    fp_push(MEMF(edx + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0xC)); /* fsub dword ptr [eax + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0xC)); /* fadd dword ptr [eax + 0xc] */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x10)); /* fsub dword ptr [eax + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x10)); /* fadd dword ptr [eax + 0x10] */
    MEMF(ecx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x14)); /* fsub dword ptr [eax + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x14)); /* fadd dword ptr [eax + 0x14] */
    MEMF(ecx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x18)); /* fsub dword ptr [eax + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x18)); /* fadd dword ptr [eax + 0x18] */
    MEMF(ecx + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x1C)); /* fsub dword ptr [eax + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x1C)); /* fadd dword ptr [eax + 0x1c] */
    MEMF(ecx + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x20)); /* fsub dword ptr [eax + 0x20] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x20)); /* fadd dword ptr [eax + 0x20] */
    MEMF(ecx + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x24)); /* fsub dword ptr [eax + 0x24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x24)); /* fadd dword ptr [eax + 0x24] */
    MEMF(ecx + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x28)); /* fsub dword ptr [eax + 0x28] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x28)); /* fadd dword ptr [eax + 0x28] */
    MEMF(ecx + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x2C)); /* fld float */
    fp_push(MEMF(edx + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(ecx + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(edx + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x30)); /* fsub dword ptr [eax + 0x30] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x30)); /* fadd dword ptr [eax + 0x30] */
    MEMF(ecx + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x34)); /* fsub dword ptr [eax + 0x34] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x34)); /* fadd dword ptr [eax + 0x34] */
    MEMF(ecx + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x38)); /* fsub dword ptr [eax + 0x38] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x38)); /* fadd dword ptr [eax + 0x38] */
    MEMF(ecx + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x3C)); /* fsub dword ptr [eax + 0x3c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x3C)); /* fadd dword ptr [eax + 0x3c] */
    MEMF(ecx + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x40)); /* fsub dword ptr [eax + 0x40] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x40)); /* fadd dword ptr [eax + 0x40] */
    MEMF(ecx + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x44)); /* fsub dword ptr [eax + 0x44] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x44)); /* fadd dword ptr [eax + 0x44] */
    MEMF(ecx + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x48)); /* fsub dword ptr [eax + 0x48] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x48)); /* fadd dword ptr [eax + 0x48] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x4C)); /* fsub dword ptr [eax + 0x4c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x4C)); /* fadd dword ptr [eax + 0x4c] */
    MEMF(ecx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x50)); /* fld float */
    fp_push(MEMF(edx + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(edx + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x54)); /* fsub dword ptr [eax + 0x54] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x54)); /* fadd dword ptr [eax + 0x54] */
    MEMF(ecx + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x58)); /* fsub dword ptr [eax + 0x58] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x58)); /* fadd dword ptr [eax + 0x58] */
    MEMF(ecx + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x5C)); /* fsub dword ptr [eax + 0x5c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x5C)); /* fadd dword ptr [eax + 0x5c] */
    MEMF(ecx + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x60)); /* fsub dword ptr [eax + 0x60] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x60)); /* fadd dword ptr [eax + 0x60] */
    MEMF(ecx + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x64)); /* fsub dword ptr [eax + 0x64] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x64)); /* fadd dword ptr [eax + 0x64] */
    MEMF(ecx + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x68)); /* fsub dword ptr [eax + 0x68] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x68)); /* fadd dword ptr [eax + 0x68] */
    MEMF(ecx + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x6C)); /* fsub dword ptr [eax + 0x6c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x6C)); /* fadd dword ptr [eax + 0x6c] */
    MEMF(ecx + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x70)); /* fsub dword ptr [eax + 0x70] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x70)); /* fadd dword ptr [eax + 0x70] */
    MEMF(ecx + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x74)); /* fld float */
    fp_push(MEMF(edx + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(ecx + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(edx + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x78)); /* fsub dword ptr [eax + 0x78] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x78)); /* fadd dword ptr [eax + 0x78] */
    MEMF(ecx + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x7C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x7C)); /* fsub dword ptr [eax + 0x7c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x7C)); /* fadd dword ptr [eax + 0x7c] */
    MEMF(ecx + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x80)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x80)); /* fsub dword ptr [eax + 0x80] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x80)); /* fadd dword ptr [eax + 0x80] */
    MEMF(ecx + 0x80) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x84)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x84)); /* fsub dword ptr [eax + 0x84] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x84)); /* fadd dword ptr [eax + 0x84] */
    MEMF(ecx + 0x84) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x88)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x88)); /* fsub dword ptr [eax + 0x88] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x88)); /* fadd dword ptr [eax + 0x88] */
    MEMF(ecx + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x8C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x8C)); /* fsub dword ptr [eax + 0x8c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x8C)); /* fadd dword ptr [eax + 0x8c] */
    MEMF(ecx + 0x8C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x90)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x90)); /* fsub dword ptr [eax + 0x90] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x90)); /* fadd dword ptr [eax + 0x90] */
    MEMF(ecx + 0x90) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x94)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x94)); /* fsub dword ptr [eax + 0x94] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x94)); /* fadd dword ptr [eax + 0x94] */
    MEMF(ecx + 0x94) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x98)); /* fld float */
    fp_push(MEMF(edx + 0x98)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(ecx + 0x98) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0051B9A0
 * Original: 0x0051B9A0 - 0x0051BCE4 (836 bytes, 196 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051B9A0(void)
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

loc_0051B9A0: ;
    eax = MEM32(0x6C2704);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0051B9B5; /* jle: less or equal (signed <=) */

loc_0051B9AF: ;
    MEM32(0x6C2704) = ecx;

loc_0051B9B5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x15E (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0051BCE0; /* jge: greater or equal (signed >=) */

loc_0051B9C1: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    fp_push(MEMF(edi + 0xC0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0051BCDF; /* jnp: not parity */

loc_0051B9DD: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = ecx + esi + 0x194;
    PUSH32(esp, 0x0051B9F1u); RECOMP_ABI_CALL(0x00419860u, sub_00419860); /* call 0x00419860 */

loc_0051B9F1: ;
    eax = MEM32(esi + 0x38);
    SET_LO8(ecx, MEM8(edi + 0x30));
    eax = (uint32_t)((int32_t)eax * (int32_t)0xC8);
    MEM8(eax + esi + 0x1C4) = LO8(ecx);
    edx = MEM32(esi + 0x38);
    SET_LO8(eax, MEM8(edi + 0x31));
    edx = (uint32_t)((int32_t)edx * (int32_t)0xC8);
    MEM8(edx + esi + 0x1C5) = LO8(eax);
    ecx = MEM32(esi + 0x38);
    edx = MEM32(edi + 0x34);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC8);
    MEM32(ecx + esi + 0x1C8) = edx;
    ecx = MEM32(esi + 0x38);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC8);
    edx = ecx + esi + 0x1CC;
    eax = edi + 0x38;
    ecx = eax;
    ebx = MEM32(ecx);
    MEM32(edx) = ebx;
    ebx = MEM32(ecx + 4);
    MEM32(edx + 4) = ebx;
    ebx = MEM32(ecx + 8);
    MEM32(edx + 8) = ebx;
    ecx = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esi + 0x38);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC8);
    ecx = ecx + esi + 0x1DC;
    edx = edi + 0x48;
    ebx = MEM32(edx);
    MEM32(ecx) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(ecx + 4) = ebx;
    ebx = MEM32(edx + 8);
    MEM32(ecx + 8) = ebx;
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(esi + 0x38);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xC8);
    edx = edx + esi + 0x1EC;
    ecx = edi + 0x58;
    ebx = MEM32(ecx);
    MEM32(edx) = ebx;
    ebx = MEM32(ecx + 4);
    MEM32(edx + 4) = ebx;
    ebx = MEM32(ecx + 8);
    MEM32(edx + 8) = ebx;
    ecx = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = ecx;
    edx = MEM32(esi + 0x38);
    fp_push(MEMF(eax)); /* fld float */
    edx = (uint32_t)((int32_t)edx * (int32_t)0xC8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64021C)); /* fmul dword ptr [0x64021c] */
    MEMF(edx + esi + 0x1FC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x38);
    fp_push(MEMF(edi + 0x3C)); /* fld float */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xC8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63EA68)); /* fmul dword ptr [0x63ea68] */
    edx = edi + 0x78;
    MEMF(eax + esi + 0x200) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x38);
    fp_push(MEMF(edi + 0x40)); /* fld float */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + esi + 0x204) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x38);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xC8);
    ecx = eax + esi + 0x20C;
    eax = MEM32(edx);
    MEM32(ecx) = eax;
    eax = MEM32(edx + 4);
    MEM32(ecx + 4) = eax;
    eax = MEM32(edx + 8);
    MEM32(ecx + 8) = eax;
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = edx;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(edi + 0x88);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xC8);
    MEM32(eax + esi + 0x21C) = ecx;
    edx = MEM32(esi + 0x38);
    eax = MEM32(edi + 0x8C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xC8);
    MEM32(edx + esi + 0x220) = eax;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(edi + 0x90);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC8);
    MEM32(ecx + esi + 0x224) = edx;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(edi + 0x94);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xC8);
    MEM32(eax + esi + 0x228) = ecx;
    edx = MEM32(esi + 0x38);
    eax = MEM32(edi + 0x98);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xC8);
    MEM32(edx + esi + 0x22C) = eax;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(edi + 0x9C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC8);
    MEM32(ecx + esi + 0x230) = edx;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(edi + 0xA0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xC8);
    MEM32(eax + esi + 0x234) = ecx;
    edx = MEM32(esi + 0x38);
    eax = MEM32(edi + 0xA4);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xC8);
    MEM32(edx + esi + 0x238) = eax;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(edi + 0xA8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC8);
    MEM32(ecx + esi + 0x23C) = edx;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(edi + 0xAC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xC8);
    MEM32(eax + esi + 0x240) = ecx;
    edx = MEM32(esi + 0x38);
    eax = MEM32(edi + 0xB0);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xC8);
    MEM32(edx + esi + 0x244) = eax;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(edi + 0xB4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC8);
    MEM32(ecx + esi + 0x248) = edx;
    eax = MEM32(esi + 0x38);
    SET_LO8(ecx, MEM8(edi + 0xB8));
    eax = (uint32_t)((int32_t)eax * (int32_t)0xC8);
    MEM8(eax + esi + 0x24C) = LO8(ecx);
    edx = MEM32(esi + 0x38);
    eax = MEM32(edi + 0xBC);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xC8);
    MEM32(edx + esi + 0x250) = eax;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(edi + 0xC0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC8);
    MEM32(ecx + esi + 0x254) = edx;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(edi + 0xC4);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xC8);
    MEM32(eax + esi) = ecx;
    ecx = MEM32(esi + 0x38);
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0xC8);
    SET_LO8(ebx, MEM8(edx + esi + 0x24C));
    eax = edx + esi;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(ebx, MEM8(eax + 0x1C8));
    SET_LO8(edx, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_0051BCA3; /* je: equal / zero */

loc_0051BC9A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0051BCAA; /* je: equal / zero */

loc_0051BC9E: ;
    MEM32(esi + 0x30) = MEM32(esi + 0x30) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0051BCAA;

loc_0051BCA3: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0051BCAA; /* je: equal / zero */

loc_0051BCA7: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0051BCAA: ;
    _fa = (uint32_t)(MEM8(eax + 0x1C8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1C8), 2 (8-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0051BCB7; /* je: equal / zero */

loc_0051BCB4: ;
    MEM32(esi + 0x28) = MEM32(esi + 0x28) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0051BCB7: ;
    _fa = (uint32_t)(MEM8(eax + 0x1C8)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1C8), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0051BCC3; /* je: equal / zero */

loc_0051BCC0: ;
    MEM32(esi + 0x2C) = MEM32(esi + 0x2C) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0051BCC3: ;
    _fa = (uint32_t)(MEM8(eax + 0x1C8)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1C8), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0051BCCF; /* je: equal / zero */

loc_0051BCCC: ;
    MEM32(esi + 0x34) = MEM32(esi + 0x34) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0051BCCF: ;
    _fa = (uint32_t)(MEM8(eax + 0x1C8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1C8), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0051BCDB; /* je: equal / zero */

loc_0051BCD8: ;
    MEM32(esi + 0x40) = MEM32(esi + 0x40) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0051BCDB: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x38) = ecx;

loc_0051BCDF: ;
    POP32(esp, edi);

loc_0051BCE0: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0051BCF0
 * Original: 0x0051BCF0 - 0x0051C1B6 (1222 bytes, 311 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051BCF0(void)
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

loc_0051BCF0: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x40);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051BD11; /* je: equal / zero */

loc_0051BD04: ;
    PUSH32(esp, 0x679684);
    PUSH32(esp, 0x0051BD0Eu); RECOMP_ABI_CALL(0x005EDB20u, sub_005EDB20); /* call 0x005EDB20 */

loc_0051BD0E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0051BD11: ;
    esi = MEM32(edi + 0x40);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051C1A9; /* je: equal / zero */

loc_0051BD1C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xAA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0051BD29; /* jl: less (signed <) */

loc_0051BD24: ;
    esi = 0xAA;

loc_0051BD29: ;
    eax = MEM32(edi + 0x11C);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x0051BD39u); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_0051BD39: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0051BD45u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_0051BD45: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x0051BD4Cu); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_0051BD4C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0051BD52u); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_0051BD52: ;
    ecx = esi + esi * 2;
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0051BD5Fu); RECOMP_ABI_CALL(0x005FB070u, sub_005FB070); /* call 0x005FB070 */

loc_0051BD5F: ;
    eax = MEM32(edi + 0x38);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x2C) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_0051C196; /* jle: less or equal (signed <=) */

loc_0051BD71: ;
    PUSH32(esp, ebp);
    ebp = edi + 0x1B8;
    goto loc_0051BD80;

    /* nop */

loc_0051BD80: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0051C179; /* je: equal / zero */

loc_0051BD8A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0051BDC3; /* jl: less (signed <) */

loc_0051BD8E: ;
    esi = MEM32(edi + 0x40);
    _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xAA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0051BDA4; /* jl: less (signed <) */

loc_0051BD9D: ;
    esi = 0xAA;
    goto loc_0051BDAC;

loc_0051BDA4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051C193; /* je: equal / zero */

loc_0051BDAC: ;
    PUSH32(esp, 0x0051BDB1u); RECOMP_ABI_CALL(0x005FB150u, sub_005FB150); /* call 0x005FB150 */

loc_0051BDB1: ;
    edx = esi + esi * 2;
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0051BDBEu); RECOMP_ABI_CALL(0x005FB070u, sub_005FB070); /* call 0x005FB070 */

loc_0051BDBE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0051BDC3: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    eax = MEM32(ebp);
    ecx = MEM32(ebp + 0x84);
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0xB4)); /* fld float */
    MEM32(esp + 0x24) = eax;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 0x84)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp + 0x84] */
    MEM32(esp + 0x28) = ecx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0051BDF6; /* jp: parity */

loc_0051BDEE: ;
    MEM32(esp + 0x28) = 0xC61C4000u;

loc_0051BDF6: ;
    fp_push(MEMF(ebp + 0x80)); /* fld float */
    edx = MEM32(0x6C263C);
    fp_push(MEMF(ebp + 0x7C)); /* fld float */
    fp_push(MEMF(edi + 0xA8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 3) & 7]); /* fsub st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x8C)); /* fmul dword ptr [edi + 0x8c] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x90)); /* fmul dword ptr [edi + 0x90] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x94)); /* fmul dword ptr [edi + 0x94] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x98)); /* fmul dword ptr [edi + 0x98] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x9C)); /* fmul dword ptr [edi + 0x9c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0xA0)); /* fmul dword ptr [edi + 0xa0] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xA0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(edx + 0x284)); /* fdiv dword ptr [edx + 0x284] */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0051BE90; /* jp: parity */

loc_0051BE86: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x65E384)); /* fld float */
    goto loc_0051BEA5;

loc_0051BE90: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0051BEA5; /* jne: not equal / not zero */

loc_0051BE9D: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_0051BEA5: ;
    SET_LO8(eax, MEM8(ebp + 0xC));
    edx = MEM32(ebp + 0x54);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x58);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(ebp + 0x5C);
    if (CMP_EQ(_fa, _fb)) goto loc_0051BEC8; /* je: equal / zero */

loc_0051BEB6: ;
    fp_push(MEMF(ebp + 0x9C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x60)); /* fmul dword ptr [ebp + 0x60] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    goto loc_0051BECE;

loc_0051BEC8: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x60)); /* fmul dword ptr [ebp + 0x60] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */

loc_0051BECE: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0051BED6u); RECOMP_ABI_CALL(0x0045CA10u, sub_0045CA10); /* call 0x0045CA10 */

loc_0051BED6: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x48)); /* fsub dword ptr [esp + 0x48] */
    eax = MEM32(0x85B2AC);
    MEM32(0x85B2A4) = 0x3F800000;
    MEM32(0x85B2B0) = 0;
    MEMF(esp + 0x54) = (float)fp_top(); /* fst */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x3C)); /* fsub dword ptr [esp + 0x3c] */
    MEMF(esp + 0x48) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x40)); /* fsub dword ptr [esp + 0x40] */
    MEMF(esp + 0x34) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x1C)); /* fsub dword ptr [esp + 0x1c] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    MEMF(esp + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x88);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = ecx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x85B2C0);
    fp_push(MEMF(esp + 0x38)); /* fld float */
    MEM32(eax + 0xC) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x24)); /* fadd dword ptr [esp + 0x24] */
    ecx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(0x85B2B0);
    MEMF(esp + 0x50) = (float)fp_top(); /* fst */
    MEM32(eax + 0x14) = edx;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    eax = MEM32(0x85B2AC);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    MEM32(0x85B2A4) = 0x3F800000;
    MEMF(esp + 0x54) = (float)fp_top(); /* fst */
    MEM32(0x85B2B0) = 0x3F800000;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x2C)); /* fadd dword ptr [esp + 0x2c] */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x1C)); /* fsub dword ptr [esp + 0x1c] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    MEMF(esp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x70);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = ecx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = edx;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    ecx = MEM32(0x85B2A4);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEM32(eax + 0x10) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    edx = MEM32(0x85B2B0);
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x14) = edx;
    eax = MEM32(0x85B2AC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    MEM32(0x85B2A4) = 0;
    MEM32(0x85B2B0) = 0x3F800000;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0xA0) = ecx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = ecx;
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEM32(eax + 8) = edx;
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    ecx = MEM32(0x85B2C0);
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(0x85B2A4);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    MEM32(eax + 0x10) = edx;
    fp_push(MEMF(esp + 0x60)); /* fld float */
    ecx = MEM32(0x85B2B0);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x1C)); /* fsub dword ptr [esp + 0x1c] */
    edx = MEM32(esp + 0x34);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(0x85B2AC);
    MEM32(0x85B2A4) = 0x3F800000;
    MEM32(0x85B2B0) = 0;
    MEM32(esp + 0x64) = edx;
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    MEMF(esp + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x7C);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = ecx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = edx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    ecx = MEM32(0x85B2A4);
    MEMF(esp + 0x8C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x10) = ecx;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    edx = MEM32(0x85B2B0);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    ecx = MEM32(esp + 0x8C);
    MEM32(eax + 0x14) = edx;
    eax = MEM32(0x85B2AC);
    MEM32(0x85B2A4) = 0;
    MEM32(0x85B2B0) = 0x3F800000;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax) = ecx;
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = edx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    ecx = MEM32(0x85B2A4);
    MEMF(esp + 0xA4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(0x85B2B0);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    ecx = MEM32(esp + 0xA4);
    MEM32(eax + 0x14) = edx;
    eax = MEM32(0x85B2AC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    MEM32(0x85B2A4) = 0;
    MEM32(0x85B2B0) = 0;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax) = ecx;
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(0x85B2B0);
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(0x85B2AC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x85B2AC) = edx;
    MEM32(esp + 0x14) = ecx;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0051C179: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(edi + 0x38);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x30) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0051BD80; /* jl: less (signed <) */

loc_0051C193: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);

loc_0051C196: ;
    PUSH32(esp, 0x0051C19Bu); RECOMP_ABI_CALL(0x005FB150u, sub_005FB150); /* call 0x005FB150 */

loc_0051C19B: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0051C1A6u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_0051C1A6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0051C1A9: ;
    MEM32(edi + 0x40) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0051C1C0
 * Original: 0x0051C1C0 - 0x0051C3B3 (499 bytes, 137 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0051C1C0(void)
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

loc_0051C1C0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    edi = ecx;
    fp_push(MEMF(edi + 0xB0)); /* fld float */
    ecx = esp + 0x10;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x24)); /* fsub dword ptr [esi + 0x24] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0xB4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x28)); /* fsub dword ptr [esi + 0x28] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0xB8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x2C)); /* fsub dword ptr [esi + 0x2c] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0051C1FBu); RECOMP_ABI_CALL(0x004572A0u, sub_004572A0); /* call 0x004572A0 */

loc_0051C1FB: ;
    SET_LO8(eax, MEM8(esi + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051C273; /* je: equal / zero */

loc_0051C202: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x20)); /* fmul dword ptr [esi + 0x20] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x18)); /* fmul dword ptr [esi + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x630320)); /* fmul dword ptr [0x630320] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x184)); /* fsub dword ptr [edi + 0x184] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0051C23C; /* jp: parity */

loc_0051C234: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x65E384)); /* fld float */

loc_0051C23C: ;
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x184)); /* fsub dword ptr [edi + 0x184] */
    fp_top() = RECOMP_FP_PC(fp_st1() / fp_top()); /* fdivr st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0051C27B; /* jp: parity */

loc_0051C261: ;
    POP32(esp, edi);
    MEM32(esi + 0xC0) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0051C273: ;
    MEM32(esp + 0x20) = 0x3F800000;

loc_0051C27B: ;
    SET_LO8(eax, MEM8(esi + 0x31));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051C2A1; /* je: equal / zero */

loc_0051C282: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D678)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d678] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0051C299; /* jne: not equal / not zero */

loc_0051C293: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    goto loc_0051C2A7;

loc_0051C299: ;
    fp_push(MEMF(0x62D678)); /* fld float */
    goto loc_0051C2A7;

loc_0051C2A1: ;
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_0051C2A7: ;
    eax = MEM32(esi + 0xC4);
    MEM32(esp + 8) = eax;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64020C)); /* fmul dword ptr [0x64020c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0051C2D2; /* jp: parity */

loc_0051C2C8: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */
    goto loc_0051C2E7;

loc_0051C2D2: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x643030)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x643030] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0051C2E7; /* jne: not equal / not zero */

loc_0051C2DF: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x643030)); /* fld float */

loc_0051C2E7: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_push(MEMF(0x662E68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0051C350; /* jne: not equal / not zero */

loc_0051C30C: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0xC)); /* fdiv dword ptr [esp + 0xc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0051C331; /* jp: parity */

loc_0051C327: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x65E384)); /* fld float */
    goto loc_0051C346;

loc_0051C331: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0051C346; /* jne: not equal / not zero */

loc_0051C33E: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_0051C346: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */

loc_0051C350: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0051C365; /* jne: not equal / not zero */

loc_0051C35D: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_0051C365: ;
    MEMF(esi + 0xC0) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    MEMF(esi + 0xBC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x24)); /* fadd dword ptr [esi + 0x24] */
    MEMF(esi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x28)); /* fadd dword ptr [esi + 0x28] */
    MEMF(esi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x2C)); /* fadd dword ptr [esi + 0x2c] */
    MEMF(esi + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0051C3C0
 * Original: 0x0051C3C0 - 0x0051C6ED (813 bytes, 179 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051C3C0(void)
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

loc_0051C3C0: ;
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esp + 0x18;
    PUSH32(esp, 0x0051C3D5u); RECOMP_ABI_CALL(0x0051B2C0u, sub_0051B2C0); /* call 0x0051B2C0 */

loc_0051C3D5: ;
    esi = MEM32(esp + 0xE4);
    fp_push(MEMF(esi + 0x24)); /* fld float */
    eax = MEM32(esi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0xB0)); /* fsub dword ptr [edi + 0xb0] */
    ecx = MEM32(esi + 4);
    fp_push(MEMF(esi + 0x28)); /* fld float */
    edx = MEM32(esi + 8);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0xB4)); /* fsub dword ptr [edi + 0xb4] */
    ebp = MEM32(esp + 0xE8);
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    ebx = MEM32(esp + 0xEC);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0xB8)); /* fsub dword ptr [edi + 0xb8] */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(esp + 0x24) = eax;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    eax = MEM32(esi + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEM32(esp + 0x1C) = ecx;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    ecx = MEM32(esi + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esi + 0x24);
    MEM32(esp + 0x20) = edx;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    edx = MEM32(esi + 0x14);
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEM32(esp + 0x28) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    ecx = MEM32(esi + 0x1C);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(esp + 0xF0);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(esi + 0x20);
    MEM32(esp + 0x34) = ecx;
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    ecx = MEM32(esi + 0x28);
    MEM32(esp + 0x68) = eax;
    MEM32(esp + 0x58) = eax;
    eax = MEM32(edi + 0x184);
    MEM32(esp + 0x38) = edx;
    edx = MEM32(esi + 0x2C);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(esp + 0xF4);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x60) = ebp;
    MEM32(esp + 0x64) = ebx;
    MEM32(esp + 0x6C) = ecx;
    MEM32(esp + 0x50) = ebp;
    MEM32(esp + 0x54) = ebx;
    MEM32(esp + 0x5C) = ecx;
    MEM32(esp + 0x80) = 0x3E19999A;
    MEM32(esp + 0x84) = 0x3E19999A;
    MEM32(esp + 0x88) = 0x3EE66666;
    MEM32(esp + 0x8C) = 0x3F800000;
    MEM8(esp + 0x48) = 1;
    MEM8(esp + 0xD0) = 0;
    MEM8(esp + 0x49) = 0;
    MEM32(esp + 0xA4) = 0x40A00000;
    MEM32(esp + 0xA0) = 0x40A00000;
    MEM32(esp + 0xB0) = 0x41A00000;
    MEM32(esp + 0xB4) = 0x3F000000;
    MEM32(esp + 0xD8) = 0x3F800000;
    MEM32(esp + 0xD4) = 0x3F800000;
    MEM32(esp + 0x4C) = 3;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 0xDC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(edi + 0x188);
    edx = esp + 0x18;
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(edi + 0x184) = eax;
    MEM32(edi + 0x188) = eax;
    PUSH32(esp, 0x0051C55Bu); RECOMP_ABI_CALL(0x0051C1C0u, sub_0051C1C0); /* call 0x0051C1C0 */

loc_0051C55B: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0051C567u); RECOMP_ABI_CALL(0x0051B9A0u, sub_0051B9A0); /* call 0x0051B9A0 */

loc_0051C567: ;
    fp_push(MEMF(esi + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0xB0)); /* fsub dword ptr [edi + 0xb0] */
    ecx = MEM32(esi);
    fp_push(MEMF(esi + 0x28)); /* fld float */
    eax = MEM32(esi + 8);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0xB4)); /* fsub dword ptr [edi + 0xb4] */
    edx = MEM32(esi + 4);
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    MEM32(esp + 0x18) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0xB8)); /* fsub dword ptr [edi + 0xb8] */
    ecx = MEM32(esi + 0xC);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esi + 0x14);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEM32(esp + 0x1C) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    edx = MEM32(esi + 0x10);
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEM32(esp + 0x24) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    ecx = MEM32(esi + 0x18);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esi + 0x20);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEM32(esp + 0x28) = edx;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    edx = MEM32(esi + 0x1C);
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(esi + 0x24);
    MEM32(esp + 0x38) = eax;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    eax = MEM32(esi + 0x2C);
    MEM32(esp + 0x34) = edx;
    edx = MEM32(esi + 0x28);
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEM32(esp + 0x3C) = ecx;
    ecx = MEM32(esp + 0xF4);
    MEM32(esp + 0x44) = eax;
    eax = MEM32(esp + 0xF0);
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x60) = ebp;
    MEM32(esp + 0x64) = ebx;
    MEM32(esp + 0x68) = eax;
    MEM32(esp + 0x6C) = ecx;
    MEM32(esp + 0x50) = ebp;
    MEM32(esp + 0x54) = ebx;
    MEM32(esp + 0x58) = eax;
    MEM32(esp + 0x5C) = ecx;
    MEM32(esp + 0x80) = 0x3E19999A;
    MEM32(esp + 0x84) = 0x3E19999A;
    MEM32(esp + 0x88) = 0x3EE66666;
    MEM32(esp + 0x8C) = 0x3F800000;
    MEM8(esp + 0x48) = 1;
    MEM8(esp + 0xD0) = 0;
    MEM8(esp + 0x49) = 1;
    MEM32(esp + 0xA4) = 0x41A00000;
    MEM32(esp + 0xA0) = 0x41200000;
    MEM32(esp + 0xB0) = 0x41A00000;
    MEM32(esp + 0xB4) = 0x3E4CCCCD;
    MEM32(esp + 0xD8) = 0x3F800000;
    MEM32(esp + 0xD4) = 0x3F800000;
    MEM32(esp + 0x4C) = 7;
    MEM32(edi + 0x184) = 0x3F666666;
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 0xDC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0051C6C0u); RECOMP_ABI_CALL(0x0051C1C0u, sub_0051C1C0); /* call 0x0051C1C0 */

loc_0051C6C0: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0051C6CCu); RECOMP_ABI_CALL(0x0051B9A0u, sub_0051B9A0); /* call 0x0051B9A0 */

loc_0051C6CC: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    MEM32(edi + 0x184) = eax;
    MEM32(edi + 0x188) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0051C6F0
 * Original: 0x0051C6F0 - 0x0051C896 (422 bytes, 100 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051C6F0(void)
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

loc_0051C6F0: ;
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0051C703u); RECOMP_ABI_CALL(0x0051B2C0u, sub_0051B2C0); /* call 0x0051B2C0 */

loc_0051C703: ;
    eax = MEM32(esp + 0xD8);
    fp_push(MEMF(eax + 0x24)); /* fld float */
    ecx = MEM32(esp + 0xDC);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xB0)); /* fsub dword ptr [esi + 0xb0] */
    edx = ecx;
    fp_push(MEMF(eax + 0x28)); /* fld float */
    edi = MEM32(edx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xB4)); /* fsub dword ptr [esi + 0xb4] */
    MEM32(esp + 0x54) = edi;
    fp_push(MEMF(eax + 0x2C)); /* fld float */
    edi = MEM32(edx + 4);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xB8)); /* fsub dword ptr [esi + 0xb8] */
    MEM32(esp + 0x58) = edi;
    edi = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEM32(esp + 0x60) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    edx = MEM32(ecx);
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEM32(esp + 0x44) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x48) = edx;
    edx = MEM32(ecx + 8);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    ecx = MEM32(ecx + 0xC);
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEM32(esp + 0x4C) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    edx = MEM32(eax);
    MEM32(esp + 0x50) = ecx;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEM8(esp + 0xC4) = LO8(ecx);
    MEM8(esp + 0x3D) = LO8(ecx);
    ecx = MEM32(eax + 4);
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEM32(esp + 0xC) = edx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax + 0xC);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(eax + 0x14);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(eax + 0x18);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(eax + 0x1C);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 0x20);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(eax + 0x24);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(eax + 0x28);
    eax = MEM32(eax + 0x2C);
    MEM32(esp + 0x5C) = edi;
    MEM32(esp + 0x74) = 0x3E19999A;
    MEM32(esp + 0x78) = 0x3E19999A;
    MEM32(esp + 0x7C) = 0x3EE66666;
    MEM32(esp + 0x80) = 0x3F800000;
    MEM8(esp + 0x3C) = 1;
    MEM32(esp + 0x98) = 0x3F800000;
    MEM32(esp + 0x94) = 0x3F800000;
    MEM32(esp + 0xA4) = 0x40A00000;
    MEM32(esp + 0xA8) = 0x3E4CCCCD;
    MEM32(esp + 0xCC) = 0x3F800000;
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x38) = eax;
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 0xD0) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x184);
    edx = esp + 0xC;
    MEM32(esp + 8) = ecx;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0xCC) = 0x3F800000;
    MEM32(esp + 0x44) = 7;
    MEM32(esi + 0x184) = 0x3F333333;
    PUSH32(esp, 0x0051C875u); RECOMP_ABI_CALL(0x0051C1C0u, sub_0051C1C0); /* call 0x0051C1C0 */

loc_0051C875: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0051C881u); RECOMP_ABI_CALL(0x0051B9A0u, sub_0051B9A0); /* call 0x0051B9A0 */

loc_0051C881: ;
    ecx = MEM32(esp + 8);
    POP32(esp, edi);
    MEM32(esi + 0x184) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0051C8A0
 * Original: 0x0051C8A0 - 0x0051CAF5 (597 bytes, 134 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051C8A0(void)
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

loc_0051C8A0: ;
    _fb = (uint32_t)(0xD8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x192));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051CAEB; /* je: equal / zero */

loc_0051C8B7: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0051C8C1u); RECOMP_ABI_CALL(0x0051B2C0u, sub_0051B2C0); /* call 0x0051B2C0 */

loc_0051C8C1: ;
    ebx = MEM32(esp + 0xE4);
    fp_push(MEMF(ebx + 0x24)); /* fld float */
    eax = MEM32(esp + 0xEC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xB0)); /* fsub dword ptr [esi + 0xb0] */
    fp_push(MEMF(ebx + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xB4)); /* fsub dword ptr [esi + 0xb4] */
    fp_push(MEMF(ebx + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xB8)); /* fsub dword ptr [esi + 0xb8] */
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
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas, _fbs)) goto loc_0051CAEA; /* jle: less or equal (signed <=) */

loc_0051C90E: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xEC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xF8);
    MEM32(esp + 0x10) = eax;

loc_0051C922: ;
    eax = MEM32(esp + 0x1C);
    ecx = edi;
    edx = MEM32(ecx);
    MEM32(esp + 0x68) = edx;
    fp_push(MEMF(esp + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x154)); /* fmul dword ptr [esi + 0x154] */
    MEM32(esp + 0xE4) = eax;
    eax = MEM32(ecx + 4);
    edx = MEM32(ecx + 8);
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x6C) = eax;
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    eax = MEM32(ecx + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x158)); /* fmul dword ptr [esi + 0x158] */
    MEM32(esp + 0x70) = edx;
    edx = MEM32(ecx);
    MEM32(esp + 0x74) = eax;
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx + 4);
    fp_push(MEMF(esp + 0x70)); /* fld float */
    MEM32(esp + 0x58) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x15C)); /* fmul dword ptr [esi + 0x15c] */
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x5C) = eax;
    eax = MEM32(ecx + 0xC);
    MEMF(esp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x138);
    fp_push(MEMF(esp + 0x74)); /* fld float */
    MEM32(esp + 0x60) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x160)); /* fmul dword ptr [esi + 0x160] */
    edx = MEM32(esi + 0x134);
    MEM32(esp + 0x64) = eax;
    PUSH32(esp, ebx);
    MEMF(esp + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0xB0) = ecx;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    PUSH32(esp, ebp);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x154)); /* fmul dword ptr [esi + 0x154] */
    ecx = esp + 0x28;
    MEM32(esp + 0x90) = 0x3E19999A;
    MEM32(esp + 0x94) = 0x3E19999A;
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x98) = 0x3EE66666;
    fp_push(MEMF(esp + 0x64)); /* fld float */
    MEM32(esp + 0x9C) = 0x3F800000;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x158)); /* fmul dword ptr [esi + 0x158] */
    MEM8(esp + 0x58) = 1;
    MEM8(esp + 0xE0) = 0;
    MEM8(esp + 0x59) = 0;
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0xB0) = edx;
    fp_push(MEMF(esp + 0x68)); /* fld float */
    MEM32(esp + 0xC0) = 0x40A00000;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x15C)); /* fmul dword ptr [esi + 0x15c] */
    MEM32(esp + 0xC4) = 0x3D99999A;
    MEM32(esp + 0xE8) = 0x3F800000;
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x160)); /* fmul dword ptr [esi + 0x160] */
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0051CA59u); RECOMP_ABI_CALL(0x00606860u, sub_00606860); /* call 0x00606860 */

loc_0051CA59: ;
    SET_LO8(eax, MEM8(esp + 0xFC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0xDC) = 0x3F800000;
    MEM32(esp + 0x54) = 7;
    if (CMP_EQ(_fa, _fb)) goto loc_0051CA7F; /* je: equal / zero */

loc_0051CA77: ;
    MEM32(esp + 0x54) = 0x27;

loc_0051CA7F: ;
    eax = MEM32(esi + 0x184);
    MEM32(esi + 0x184) = 0x3ECCCCCD;
    ecx = MEM32(0x662E68);
    edx = esp + 0x20;
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x1C) = eax;
    MEM32(0x662E68) = 0x43960000;
    PUSH32(esp, 0x0051CAB3u); RECOMP_ABI_CALL(0x0051C1C0u, sub_0051C1C0); /* call 0x0051C1C0 */

loc_0051CAB3: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0051CABFu); RECOMP_ABI_CALL(0x0051B9A0u, sub_0051B9A0); /* call 0x0051B9A0 */

loc_0051CABF: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x30;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x662E68) = ecx;
    MEM32(esi + 0x184) = edx;
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_0051C922; /* jne: not equal / not zero */

loc_0051CAE8: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0051CAEA: ;
    POP32(esp, ebx);

loc_0051CAEB: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xD8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0051CB00
 * Original: 0x0051CB00 - 0x0051CCDA (474 bytes, 117 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051CB00(void)
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

loc_0051CB00: ;
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 4;
    PUSH32(esp, 0x0051CB12u); RECOMP_ABI_CALL(0x0051B2C0u, sub_0051B2C0); /* call 0x0051B2C0 */

loc_0051CB12: ;
    eax = MEM32(esp + 0xD0);
    fp_push(MEMF(eax + 0x24)); /* fld float */
    ecx = MEM32(eax);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xB0)); /* fsub dword ptr [esi + 0xb0] */
    edx = MEM32(eax + 4);
    fp_push(MEMF(eax + 0x28)); /* fld float */
    MEM32(esp + 4) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xB4)); /* fsub dword ptr [esi + 0xb4] */
    ecx = MEM32(eax + 8);
    fp_push(MEMF(eax + 0x2C)); /* fld float */
    MEM32(esp + 8) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xB8)); /* fsub dword ptr [esi + 0xb8] */
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(eax + 0x10);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEM32(esp + 0x10) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    edx = MEM32(eax + 0x14);
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEM32(esp + 0x14) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    ecx = MEM32(eax + 0x18);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 0x1C);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEM32(esp + 0x1C) = ecx;
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    ecx = MEM32(eax + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(eax + 0x24);
    MEM32(esp + 0x24) = ecx;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    ecx = MEM32(eax + 0x28);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(eax + 0x2C);
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    eax = MEM32(esp + 0xD4);
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = edx;
    ecx = eax;
    edx = MEM32(ecx);
    MEM32(esp + 0x4C) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x50) = edx;
    edx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(esp + 0x54) = edx;
    MEM32(esp + 0x58) = ecx;
    edx = eax;
    ecx = MEM32(edx);
    MEM32(esp + 0x3C) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x48) = edx;
    ecx = eax;
    edx = MEM32(ecx);
    MEM32(esp + 0x6C) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x70) = edx;
    edx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(esp + 0x74) = edx;
    edx = MEM32(eax);
    MEM32(esp + 0x78) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x7C) = edx;
    MEM32(esp + 0x80) = ecx;
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 0xC8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    SET_LO8(ecx, MEM8(esp + 0xDC));
    MEM32(esp + 0x88) = eax;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM32(esp + 0x84) = edx;
    edx = MEM32(esp + 0xD8);
    MEM8(esp + 0x34) = LO8(ecx);
    ecx = MEM32(esp + 0xE0);
    MEM8(esp + 0xBC) = LO8(eax);
    MEM8(esp + 0x35) = LO8(eax);
    eax = edx;
    MEM32(esp + 0x90) = edx;
    edx = MEM32(esp + 0xE8);
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(esp + 0xEC);
    MEM32(esp + 0xA8) = edx;
    MEM32(esp + 0x8C) = eax;
    eax = MEM32(esp + 0xE4);
    edx = esp + 4;
    MEM32(esp + 0xAC) = ecx;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0xA0) = 0x40A00000;
    MEM32(esp + 0xA4) = 0x3CCCCCCD;
    MEM32(esp + 0xC8) = 0x3F800000;
    MEM32(esp + 0xC4) = 0x3F800000;
    MEM32(esp + 0xA8) = eax;
    PUSH32(esp, 0x0051CCC4u); RECOMP_ABI_CALL(0x0051C1C0u, sub_0051C1C0); /* call 0x0051C1C0 */

loc_0051CCC4: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0051CCD0u); RECOMP_ABI_CALL(0x0051B9A0u, sub_0051B9A0); /* call 0x0051B9A0 */

loc_0051CCD0: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0051CCE0
 * Original: 0x0051CCE0 - 0x0051CE60 (384 bytes, 98 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051CCE0(void)
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

loc_0051CCE0: ;
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 4;
    PUSH32(esp, 0x0051CCF2u); RECOMP_ABI_CALL(0x0051B2C0u, sub_0051B2C0); /* call 0x0051B2C0 */

loc_0051CCF2: ;
    eax = MEM32(esp + 0xD0);
    fp_push(MEMF(eax + 0x24)); /* fld float */
    ecx = MEM32(eax);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xB0)); /* fsub dword ptr [esi + 0xb0] */
    edx = MEM32(eax + 4);
    fp_push(MEMF(eax + 0x28)); /* fld float */
    MEM32(esp + 4) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xB4)); /* fsub dword ptr [esi + 0xb4] */
    ecx = MEM32(eax + 8);
    fp_push(MEMF(eax + 0x2C)); /* fld float */
    MEM32(esp + 8) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xB8)); /* fsub dword ptr [esi + 0xb8] */
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(eax + 0x10);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEM32(esp + 0x10) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    edx = MEM32(eax + 0x14);
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEM32(esp + 0x14) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    ecx = MEM32(eax + 0x18);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 0x1C);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEM32(esp + 0x1C) = ecx;
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    ecx = MEM32(eax + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(eax + 0x24);
    MEM32(esp + 0x24) = ecx;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    ecx = MEM32(eax + 0x28);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(eax + 0x2C);
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    eax = MEM32(esp + 0xD4);
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = edx;
    ecx = eax;
    edx = MEM32(ecx);
    MEM32(esp + 0x4C) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x50) = edx;
    edx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(esp + 0x54) = edx;
    MEM32(esp + 0x58) = ecx;
    edx = eax;
    ecx = MEM32(edx);
    MEM32(esp + 0x3C) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(eax);
    MEM32(esp + 0x48) = edx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x6C) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x70) = edx;
    edx = MEM32(eax + 0xC);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM32(esp + 0x74) = ecx;
    MEM32(esp + 0x78) = edx;
    MEM8(esp + 0x34) = 1;
    MEM8(esp + 0xBC) = LO8(eax);
    MEM8(esp + 0x35) = LO8(eax);
    MEM32(esp + 0x90) = 0x3F800000;
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 0xC8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x90) = 0x3F800000;
    MEM32(esp + 0xA0) = 0x40A00000;
    MEM32(esp + 0xA4) = 0x3CCCCCCD;
    MEM32(esp + 0xC8) = 0x3F800000;
    MEM32(esp + 0xC4) = 0x3F800000;
    MEM32(esp + 0x3C) = 3;
    PUSH32(esp, 0x0051CE4Au); RECOMP_ABI_CALL(0x0051C1C0u, sub_0051C1C0); /* call 0x0051C1C0 */

loc_0051CE4A: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0051CE56u); RECOMP_ABI_CALL(0x0051B9A0u, sub_0051B9A0); /* call 0x0051B9A0 */

loc_0051CE56: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0051CE60
 * Original: 0x0051CE60 - 0x0051CE7E (30 bytes, 10 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051CE60(void)
{

loc_0051CE60: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x6C2670);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0051CE7Bu); RECOMP_ABI_CALL(0x0051C8A0u, sub_0051C8A0); /* call 0x0051C8A0 */

loc_0051CE7B: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0051CE80
 * Original: 0x0051CE80 - 0x0051CE92 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051CE80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0051CE80: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x8C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = 0x858548;
    PUSH32(esp, 0x0051CE91u); RECOMP_ABI_CALL(0x00609E20u, sub_00609E20); /* call 0x00609E20 */

loc_0051CE91: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0051CEA0
 * Original: 0x0051CEA0 - 0x0051CFED (333 bytes, 83 insns)
 * CC: cdecl, 9 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051CEA0(void)
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

loc_0051CEA0: ;
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 8;
    PUSH32(esp, 0x0051CEB2u); RECOMP_ABI_CALL(0x0051B2C0u, sub_0051B2C0); /* call 0x0051B2C0 */

loc_0051CEB2: ;
    eax = MEM32(esp + 0xDC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0051CFE3; /* jle: less or equal (signed <=) */

loc_0051CEC1: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0xF8));
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xE0);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xEC);
    MEM32(esp + 0x10) = eax;
    /* nop */

loc_0051CEE0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    MEM8(esp + 0x4C) = LO8(ebx);
    MEM8(esp + 0xD4) = 0;
    MEM8(esp + 0x4D) = 1;
    MEM32(esp + 0xDC) = 0x3F800000;
    PUSH32(esp, 0x0051CF07u); RECOMP_ABI_CALL(0x00606860u, sub_00606860); /* call 0x00606860 */

loc_0051CF07: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xB0)); /* fsub dword ptr [esi + 0xb0] */
    eax = MEM32(0x6C263C);
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xB4)); /* fsub dword ptr [esi + 0xb4] */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xB8)); /* fsub dword ptr [esi + 0xb8] */
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
    MEMF(esp + 0xD8) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax + 0x284)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [eax + 0x284] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0051CFCE; /* jp: parity */

loc_0051CF56: ;
    ecx = MEM32(esp + 0xFC);
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x8C) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x90) = eax;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 0xF4);
    MEM32(esp + 0xB8) = ecx;
    ecx = esp + 0x14;
    MEM32(esp + 0x94) = edx;
    edx = MEM32(esp + 0xF0);
    MEM32(esp + 0x98) = eax;
    eax = MEM32(esp + 0xF8);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x4C) = 0x10;
    MEM32(esp + 0xB8) = edx;
    MEM32(esp + 0xC0) = eax;
    PUSH32(esp, 0x0051CFC2u); RECOMP_ABI_CALL(0x0051C1C0u, sub_0051C1C0); /* call 0x0051C1C0 */

loc_0051CFC2: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0051CFCEu); RECOMP_ABI_CALL(0x0051B9A0u, sub_0051B9A0); /* call 0x0051B9A0 */

loc_0051CFCE: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_0051CEE0; /* jne: not equal / not zero */

loc_0051CFE0: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0051CFE3: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 40; return; /* ret 36 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0051CFF0
 * Original: 0x0051CFF0 - 0x0051D179 (393 bytes, 95 insns)
 * CC: cdecl, 9 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051CFF0(void)
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

loc_0051CFF0: ;
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0051D003u); RECOMP_ABI_CALL(0x0051B2C0u, sub_0051B2C0); /* call 0x0051B2C0 */

loc_0051D003: ;
    ebx = MEM32(esp + 0xE0);
    fp_push(MEMF(ebx + 0x24)); /* fld float */
    eax = MEM32(esp + 0xE4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xB0)); /* fsub dword ptr [esi + 0xb0] */
    fp_push(MEMF(ebx + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xB4)); /* fsub dword ptr [esi + 0xb4] */
    fp_push(MEMF(ebx + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xB8)); /* fsub dword ptr [esi + 0xb8] */
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
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas, _fbs)) goto loc_0051D16E; /* jle: less or equal (signed <=) */

loc_0051D050: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xF4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xF0);
    MEM32(esp + 0x10) = eax;
    goto loc_0051D070;

    /* nop */
    /* nop */

loc_0051D070: ;
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0xDC) = eax;
    ecx = ebp;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x60) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x64) = eax;
    eax = MEM32(ecx + 0xC);
    MEM32(esp + 0x68) = edx;
    edx = MEM32(ecx);
    MEM32(esp + 0x6C) = eax;
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x50) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x54) = eax;
    eax = MEM32(ecx + 0xC);
    SET_LO8(ecx, MEM8(esp + 0xFC));
    MEM32(esp + 0x58) = edx;
    edx = MEM32(esp + 0xF4);
    MEM32(esp + 0x5C) = eax;
    PUSH32(esp, ebx);
    MEM8(esp + 0x4D) = LO8(ecx);
    eax = edx;
    PUSH32(esp, edi);
    ecx = esp + 0x20;
    MEM32(esp + 0x88) = 0x3E19999A;
    MEM32(esp + 0x8C) = 0x3E19999A;
    MEM32(esp + 0x90) = 0x3EE66666;
    MEM32(esp + 0x94) = 0x3F800000;
    MEM8(esp + 0x50) = 1;
    MEM8(esp + 0xD8) = 0;
    MEM32(esp + 0xAC) = edx;
    MEM32(esp + 0xA8) = eax;
    MEM32(esp + 0xB8) = 0x40A00000;
    MEM32(esp + 0xBC) = 0x3CCCCCCD;
    MEM32(esp + 0xE0) = 0x3F800000;
    PUSH32(esp, 0x0051D13Au); RECOMP_ABI_CALL(0x00606860u, sub_00606860); /* call 0x00606860 */

loc_0051D13A: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x50) = 7;
    PUSH32(esp, 0x0051D14Eu); RECOMP_ABI_CALL(0x0051C1C0u, sub_0051C1C0); /* call 0x0051C1C0 */

loc_0051D14E: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0051D15Au); RECOMP_ABI_CALL(0x0051B9A0u, sub_0051B9A0); /* call 0x0051B9A0 */

loc_0051D15A: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_0051D070; /* jne: not equal / not zero */

loc_0051D16C: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0051D16E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 40; return; /* ret 36 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0051D180
 * Original: 0x0051D180 - 0x0051D234 (180 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051D180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0051D180: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0051D188u); RECOMP_ABI_CALL(0x005E33D0u, sub_005E33D0); /* call 0x005E33D0 */

loc_0051D188: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esi) = 0x649858;
    PUSH32(esp, 0x0051D19Fu); RECOMP_ABI_CALL(0x0051A160u, sub_0051A160); /* call 0x0051A160 */

loc_0051D19F: ;
    ecx = esi;
    PUSH32(esp, 0x0051D1A6u); RECOMP_ABI_CALL(0x00519FD0u, sub_00519FD0); /* call 0x00519FD0 */

loc_0051D1A6: ;
    eax = 0x3F800000;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = ecx;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = ecx;
    MEM32(esi + 0x34) = ecx;
    MEM32(esi + 0x38) = ecx;
    MEM32(esi + 0x3C) = ecx;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x54) = ecx;
    MEM32(esi + 0x58) = ecx;
    MEM32(esi + 0x5C) = ecx;
    MEM32(esi + 0x60) = ecx;
    MEM32(esi + 0x64) = eax;
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0x6C) = eax;
    MEM32(esi + 0x70) = ecx;
    MEM32(esi + 0x74) = eax;
    MEM32(esi + 0x78) = ecx;
    MEM32(esi + 0x7C) = ecx;
    MEM32(esi + 0x80) = ecx;
    MEM32(esi + 0x84) = ecx;
    MEM32(esi + 0x88) = eax;
    MEM32(esi + 0x8C) = eax;
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 0x98) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0051D240
 * Original: 0x0051D240 - 0x0051D608 (968 bytes, 205 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051D240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0051D240: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 0x0051D24Bu); RECOMP_ABI_CALL(0x005E33D0u, sub_005E33D0); /* call 0x005E33D0 */

loc_0051D24B: ;
    MEM32(ebp) = 0x649900;
    esi = ebp + 0x194;
    edi = 0x15E;
    /* nop */

loc_0051D260: ;
    ecx = esi;
    PUSH32(esp, 0x0051D267u); RECOMP_ABI_CALL(0x0051B2C0u, sub_0051B2C0); /* call 0x0051B2C0 */

loc_0051D267: ;
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0051D260; /* jne: not equal / not zero */

loc_0051D270: ;
    MEM32(0x6C2640) = ebp;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0xB3);
    PUSH32(esp, 0x649B2C);
    PUSH32(esp, 0x9C);
    MEM32(ebp + 0x1C) = ebx;
    MEM32(ebp + 0x20) = ebx;
    MEM32(ebp + 0x24) = ebx;
    MEM32(ebp + 0x28) = ebx;
    MEM32(ebp + 0x2C) = ebx;
    MEM32(ebp + 0x30) = ebx;
    MEM32(ebp + 0x34) = ebx;
    MEM32(ebp + 0x38) = ebx;
    MEM32(ebp + 0x3C) = ebx;
    MEM32(ebp + 0x40) = ebx;
    PUSH32(esp, 0x0051D2AAu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0051D2AA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051D2C4; /* je: equal / zero */

loc_0051D2B1: ;
    PUSH32(esp, 0x649964);
    PUSH32(esp, 0x649B24);
    ecx = eax;
    PUSH32(esp, 0x0051D2C2u); RECOMP_ABI_CALL(0x0051D180u, sub_0051D180); /* call 0x0051D180 */

loc_0051D2C2: ;
    goto loc_0051D2C6;

loc_0051D2C4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0051D2C6: ;
    PUSH32(esp, 0xB4);
    PUSH32(esp, 0x649B2C);
    PUSH32(esp, 0x9C);
    MEM32(ebp + 0x18) = eax;
    PUSH32(esp, 0x0051D2DDu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0051D2DD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051D2F7; /* je: equal / zero */

loc_0051D2E4: ;
    PUSH32(esp, 0x64995C);
    PUSH32(esp, 0x649B24);
    ecx = eax;
    PUSH32(esp, 0x0051D2F5u); RECOMP_ABI_CALL(0x0051D180u, sub_0051D180); /* call 0x0051D180 */

loc_0051D2F5: ;
    goto loc_0051D2F9;

loc_0051D2F7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0051D2F9: ;
    PUSH32(esp, 0xB5);
    PUSH32(esp, 0x649B2C);
    PUSH32(esp, 0x9C);
    MEM32(ebp + 0x10) = eax;
    PUSH32(esp, 0x0051D310u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0051D310: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051D32A; /* je: equal / zero */

loc_0051D317: ;
    PUSH32(esp, 0x649954);
    PUSH32(esp, 0x649B24);
    ecx = eax;
    PUSH32(esp, 0x0051D328u); RECOMP_ABI_CALL(0x0051D180u, sub_0051D180); /* call 0x0051D180 */

loc_0051D328: ;
    goto loc_0051D32C;

loc_0051D32A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0051D32C: ;
    MEM32(ebp + 0x14) = eax;
    MEM32(ebp + 0x44) = ebx;
    MEM32(ebp + 0x4C) = ebx;
    eax = 0x3F800000;
    MEM32(ebp + 0x48) = eax;
    MEM32(ebp + 0x50) = eax;
    MEM32(ebp + 0x58) = eax;
    MEM32(ebp + 0x60) = eax;
    MEM32(ebp + 0x54) = ebx;
    MEM32(ebp + 0x5C) = ebx;
    MEM32(ebp + 0x64) = 0x42200000;
    MEM32(ebp + 0x68) = 0x42DC0000;
    MEM32(ebp + 0x6C) = 0x3E8ED917;
    MEM32(ebp + 0x70) = 0x3E0E5604;
    MEM32(ebp + 0x74) = 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x78) = eax;
    MEM32(ebp + 0x7C) = eax;
    MEM32(ebp + 0x80) = eax;
    MEM32(ebp + 0x84) = eax;
    MEM32(ebp + 0x88) = eax;
    ecx = MEM32(0x679684);
    MEM32(ebp + 0x8C) = ecx;
    edx = MEM32(0x679688);
    MEM32(ebp + 0x90) = edx;
    eax = MEM32(0x67968C);
    MEM32(ebp + 0x94) = eax;
    ecx = MEM32(0x679690);
    MEM32(ebp + 0x98) = ecx;
    edx = MEM32(0x679694);
    MEM32(ebp + 0x9C) = edx;
    eax = MEM32(0x679698);
    MEM32(ebp + 0xA0) = eax;
    ecx = MEM32(0x67969C);
    MEM32(ebp + 0xA4) = ecx;
    edx = MEM32(0x6796A0);
    MEM32(ebp + 0xA8) = edx;
    eax = MEM32(0x6796A4);
    MEM32(ebp + 0xAC) = eax;
    ecx = MEM32(0x6796A8);
    MEM32(ebp + 0xB0) = ecx;
    edx = MEM32(0x6796AC);
    MEM32(ebp + 0xB4) = edx;
    eax = MEM32(0x6796B0);
    MEM32(ebp + 0xB8) = eax;
    PUSH32(esp, 0x112);
    PUSH32(esp, ebx);
    edi = ebp + 0xBC;
    ecx = 0x10;
    esi = 0x6796F0;
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
    PUSH32(esp, 0x649B10);
    PUSH32(esp, 0x6403F4);
    MEM8(ebp + 0xFC) = 1;
    MEM32(ebp + 0x100) = ebx;
    MEM32(ebp + 0x104) = ebx;
    MEM32(ebp + 0x108) = ebx;
    MEM32(ebp + 0x10C) = ebx;
    MEM32(ebp + 0x110) = ebx;
    MEM32(ebp + 0x114) = ebx;
    MEM32(ebp + 0x118) = ebx;
    MEM32(ebp + 0x11C) = ebx;
    PUSH32(esp, 0x0051D473u); RECOMP_ABI_CALL(0x005F3D00u, sub_005F3D00); /* call 0x005F3D00 */

loc_0051D473: ;
    MEM32(ebp + 0x120) = eax;
    eax = 0x3EB33333;
    MEM32(ebp + 0x124) = eax;
    MEM32(ebp + 0x128) = eax;
    MEM32(ebp + 0x12C) = eax;
    MEM32(ebp + 0x130) = eax;
    MEM32(ebp + 0x13C) = eax;
    MEM32(ebp + 0x140) = eax;
    MEM32(ebp + 0x134) = 0x3DA3D70A;
    MEM32(ebp + 0x138) = 0x3F3D70A4;
    eax = 0x3E4CCCCD;
    MEM32(ebp + 0x148) = eax;
    MEM32(ebp + 0x14C) = eax;
    eax = 0x3F800000;
    MEM32(ebp + 0x144) = 0x3F400000;
    MEM32(ebp + 0x150) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x164) = eax;
    MEM32(ebp + 0x170) = eax;
    ecx = 0x3E19999A;
    MEM32(ebp + 0x168) = ecx;
    MEM32(ebp + 0x16C) = ecx;
    MEM32(ebp + 0x180) = eax;
    MEM32(ebp + 0x174) = 0x3F4CCCCD;
    MEM32(ebp + 0x178) = 0x3F19999A;
    MEM32(ebp + 0x17C) = 0x3DCCCCCD;
    MEM32(ebp + 0x160) = eax;
    MEM32(ebp + 0x15C) = eax;
    MEM32(ebp + 0x158) = eax;
    MEM32(ebp + 0x154) = eax;
    MEM32(ebp + 0x188) = eax;
    MEM32(ebp + 0x18C) = ebx;
    MEM8(ebp + 0x190) = LO8(ebx);
    MEM8(ebp + 0x191) = LO8(ebx);
    MEM32(ebp + 0x184) = 0x3ECCCCCD;
    MEM8(ebp + 0x192) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x6C2670) = eax;
    MEM32(0x6C2674) = eax;
    MEM32(0x6C2678) = eax;
    MEM32(0x6C267C) = eax;
    MEM32(0x6C2680) = eax;
    MEM32(0x6C2684) = eax;
    MEM32(0x6C2688) = eax;
    MEM32(0x6C268C) = eax;
    MEM32(0x6C2690) = eax;
    MEM32(0x6C2694) = eax;
    MEM32(0x6C2698) = eax;
    MEM32(0x6C269C) = eax;
    MEM32(0x6C26A0) = eax;
    MEM32(0x6C26A4) = eax;
    MEM32(0x6C26A8) = eax;
    MEM32(0x6C26AC) = eax;
    MEM32(0x6C26B0) = eax;
    MEM32(0x6C26B4) = eax;
    MEM32(0x6C26B8) = eax;
    MEM32(0x6C26BC) = eax;
    MEM32(0x6C26C0) = eax;
    MEM32(0x6C26C4) = eax;
    MEM32(0x6C26C8) = eax;
    MEM32(0x6C26CC) = eax;
    MEM32(0x6C26D0) = eax;
    MEM32(0x6C26D4) = eax;
    MEM32(0x6C26D8) = eax;
    MEM32(0x6C26DC) = eax;
    MEM32(0x6C26E0) = eax;
    MEM32(0x6C26E4) = eax;
    MEM32(0x6C26E8) = eax;
    MEM32(0x6C26EC) = eax;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0051D610
 * Original: 0x0051D610 - 0x0051D62E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051D610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0051D610: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0051D618u); RECOMP_ABI_CALL(0x0051A1A0u, sub_0051A1A0); /* call 0x0051A1A0 */

loc_0051D618: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0051D628; /* je: equal / zero */

loc_0051D61F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0051D625u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0051D625: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0051D628: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0051D630
 * Original: 0x0051D630 - 0x0051DD95 (1893 bytes, 507 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051D630(void)
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

loc_0051D630: ;
    _fb = (uint32_t)(0x11C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x11C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    SET_LO8(eax, MEM8(ebx + 0xFC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051DD8B; /* je: equal / zero */

loc_0051D647: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x12C);
    fp_push(MEMF(edi + 0x28)); /* fld float */
    eax = MEM32(edi + 0x24);
    esi = edi + 0x24;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x2C)); /* fld float */
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(0x858418));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x24) = 0x3F800000;
    if (CMP_EQ(_fa, _fb)) goto loc_0051D67E; /* je: equal / zero */

loc_0051D679: ;
    PUSH32(esp, 0x0051D67Eu); RECOMP_ABI_CALL(0x005EDB60u, sub_005EDB60); /* call 0x005EDB60 */

loc_0051D67E: ;
    PUSH32(esp, 0x858480);
    ecx = esp + 0xEC;
    PUSH32(esp, 0x0051D68Fu); RECOMP_ABI_CALL(0x00457640u, sub_00457640); /* call 0x00457640 */

loc_0051D68F: ;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esp + 0xF0;
    PUSH32(esp, 0x0051D6A5u); RECOMP_ABI_CALL(0x00504DA0u, sub_00504DA0); /* call 0x00504DA0 */

loc_0051D6A5: ;
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x4C)); /* fdiv dword ptr [esp + 0x4c] */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x44)); /* fmul dword ptr [esp + 0x44] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x630320)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x630320] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0051DD89; /* jnp: not parity */

loc_0051D6D6: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0051DD89; /* je: equal / zero */

loc_0051D6EB: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x630320)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x630320] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0051DD89; /* jnp: not parity */

loc_0051D700: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0051DD89; /* je: equal / zero */

loc_0051D715: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x679684);
    PUSH32(esp, 0x0051D720u); RECOMP_ABI_CALL(0x005EDB20u, sub_005EDB20); /* call 0x005EDB20 */

loc_0051D720: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x49742400);
    PUSH32(esp, 0x3F800000);
    eax = ebx + 0xB0;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0051D73Bu); RECOMP_ABI_CALL(0x0046C880u, sub_0046C880); /* call 0x0046C880 */

loc_0051D73B: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x188)); /* fmul dword ptr [ebx + 0x188] */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6307D4)); /* fmul dword ptr [0x6307d4] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0051D750u); RECOMP_ABI_CALL(0x00450390u, sub_00450390); /* call 0x00450390 */

loc_0051D750: ;
    ecx = MEM32(esp + 0x150);
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x148)); /* fmul dword ptr [esp + 0x148] */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0051D77Du); RECOMP_ABI_CALL(0x0051AA50u, sub_0051AA50); /* call 0x0051AA50 */

loc_0051D77D: ;
    eax = MEM32(0x858548);
    ecx = MEM32(0x85854C);
    edx = MEM32(0x858550);
    MEM32(esp + 0x38) = eax;
    eax = MEM32(0x858558);
    MEM32(esp + 0x3C) = ecx;
    ecx = MEM32(0x85855C);
    MEM32(esp + 0x40) = edx;
    edx = MEM32(0x858560);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x3C) = edx;
    PUSH32(esp, 0x0051D7C0u); RECOMP_ABI_CALL(0x005EE5A0u, sub_005EE5A0); /* call 0x005EE5A0 */

loc_0051D7C0: ;
    edi = MEM32(esp + 0x60);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0051D7CAu); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_0051D7CA: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x0051D7D1u); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_0051D7D1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0051D7D8u); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_0051D7D8: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0051D7E4u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_0051D7E4: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x154)); /* fmul dword ptr [esp + 0x154] */
    SET_LO8(eax, MEM8(0x85843E));
    MEM8(esp + 0x2C) = LO8(eax);
    PUSH32(esp, 0);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0051D841u); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_0051D841: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x0051D84Du); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_0051D84D: ;
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0051D857u); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_0051D857: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0051D860u); RECOMP_ABI_CALL(0x005EE5A0u, sub_005EE5A0); /* call 0x005EE5A0 */

loc_0051D860: ;
    ebp = MEM32(esp + 0x174);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0051D86Du); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_0051D86D: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0051D879u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_0051D879: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0051D884u); RECOMP_ABI_CALL(0x005EDCA0u, sub_005EDCA0); /* call 0x005EDCA0 */

loc_0051D884: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0051D88Cu); RECOMP_ABI_CALL(0x005EDCA0u, sub_005EDCA0); /* call 0x005EDCA0 */

loc_0051D88C: ;
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0051D897u); RECOMP_ABI_CALL(0x00457360u, sub_00457360); /* call 0x00457360 */

loc_0051D897: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0051D8A2u); RECOMP_ABI_CALL(0x00457360u, sub_00457360); /* call 0x00457360 */

loc_0051D8A2: ;
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0051D8ADu); RECOMP_ABI_CALL(0x00457360u, sub_00457360); /* call 0x00457360 */

loc_0051D8AD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0051D8B8u); RECOMP_ABI_CALL(0x00457360u, sub_00457360); /* call 0x00457360 */

loc_0051D8B8: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 2);
    PUSH32(esp, 6);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0051D8C6u); RECOMP_ABI_CALL(0x00457360u, sub_00457360); /* call 0x00457360 */

loc_0051D8C6: ;
    PUSH32(esp, 4);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0051D8D1u); RECOMP_ABI_CALL(0x00457360u, sub_00457360); /* call 0x00457360 */

loc_0051D8D1: ;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0051D8DCu); RECOMP_ABI_CALL(0x00457360u, sub_00457360); /* call 0x00457360 */

loc_0051D8DC: ;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0051D8E7u); RECOMP_ABI_CALL(0x00457360u, sub_00457360); /* call 0x00457360 */

loc_0051D8E7: ;
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0051D8F2u); RECOMP_ABI_CALL(0x00457360u, sub_00457360); /* call 0x00457360 */

loc_0051D8F2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 5);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0051D8FDu); RECOMP_ABI_CALL(0x00457360u, sub_00457360); /* call 0x00457360 */

loc_0051D8FD: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 2);
    PUSH32(esp, 6);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0051D90Bu); RECOMP_ABI_CALL(0x00457360u, sub_00457360); /* call 0x00457360 */

loc_0051D90B: ;
    PUSH32(esp, 3);
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0051D916u); RECOMP_ABI_CALL(0x00457360u, sub_00457360); /* call 0x00457360 */

loc_0051D916: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0051D921u); RECOMP_ABI_CALL(0x00457360u, sub_00457360); /* call 0x00457360 */

loc_0051D921: ;
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0051D92Cu); RECOMP_ABI_CALL(0x00457360u, sub_00457360); /* call 0x00457360 */

loc_0051D92C: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x4016E0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x20);
    edx = esp + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0051D942u); RECOMP_ABI_CALL(0x00401750u, sub_00401750); /* call 0x00401750 */

loc_0051D942: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x38)); /* fsub dword ptr [esp + 0x38] */
    ebp = MEM32(esp + 0x134);
    fp_push(MEMF(esi + 4)); /* fld float */
    PUSH32(esp, ebp);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x40)); /* fsub dword ptr [esp + 0x40] */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x44)); /* fsub dword ptr [esp + 0x44] */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x30)); /* fsub dword ptr [esp + 0x30] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0x70) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x34)); /* fsub dword ptr [esp + 0x34] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    ecx = MEM32(esp + 0x24);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x38)); /* fsub dword ptr [esp + 0x38] */
    MEM32(esp + 0x74) = ecx;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x28);
    MEM32(esp + 0x78) = edx;
    PUSH32(esp, 0x0051D99Du); RECOMP_ABI_CALL(0x0044F880u, sub_0044F880); /* call 0x0044F880 */

loc_0051D99D: ;
    ecx = MEM32(esp + 0x68);
    MEM32(esp + 0x7C) = eax;
    eax = MEM32(esp + 0x60);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ecx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEM32(esp + 0x80) = 0;
    MEM32(esp + 0x84) = 0;
    edx = ZX16(MEM16(edi + 8));
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x14) = edx;
    eax = MEM32(esp + 0x64);
    ecx = MEM32(esp + 0x6C);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ecx;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x18) / fp_top()); /* fdivr dword ptr [esp + 0x18] */
    MEMF(esp + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    edx = ZX16(MEM16(edi + 0xA));
    MEM32(esp + 0x14) = edx;
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x58) / fp_top()); /* fdivr dword ptr [esp + 0x58] */
    MEMF(esp + 0x8C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x3C)); /* fsub dword ptr [esp + 0x3c] */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x40)); /* fsub dword ptr [esp + 0x40] */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x44)); /* fsub dword ptr [esp + 0x44] */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x30)); /* fadd dword ptr [esp + 0x30] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0x90) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x34)); /* fadd dword ptr [esp + 0x34] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x38)); /* fadd dword ptr [esp + 0x38] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, ebp);
    MEM32(esp + 0x98) = ecx;
    MEM32(esp + 0x9C) = edx;
    PUSH32(esp, 0x0051DA6Eu); RECOMP_ABI_CALL(0x0044F880u, sub_0044F880); /* call 0x0044F880 */

loc_0051DA6E: ;
    MEM32(esp + 0xA0) = eax;
    MEM32(esp + 0xA4) = 0;
    MEM32(esp + 0xA8) = 0x3F800000;
    eax = ZX16(MEM16(edi + 8));
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, ebp);
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x20) / fp_top()); /* fdivr dword ptr [esp + 0x20] */
    MEMF(esp + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x6C)); /* fild */
    ecx = ZX16(MEM16(edi + 0xA));
    MEM32(esp + 0x20) = ecx;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x1C) / fp_top()); /* fdivr dword ptr [esp + 0x1c] */
    MEMF(esp + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 4)); /* fadd dword ptr [esi + 4] */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x38)); /* fsub dword ptr [esp + 0x38] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x28);
    MEM32(esp + 0xB8) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x3C)); /* fsub dword ptr [esp + 0x3c] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    eax = MEM32(esp + 0x2C);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x40)); /* fsub dword ptr [esp + 0x40] */
    MEM32(esp + 0xBC) = eax;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x30);
    MEM32(esp + 0xC0) = ecx;
    PUSH32(esp, 0x0051DB1Eu); RECOMP_ABI_CALL(0x0044F880u, sub_0044F880); /* call 0x0044F880 */

loc_0051DB1E: ;
    fp_push((double)SMEM32(esp + 0x68)); /* fild */
    MEM32(esp + 0xC4) = eax;
    MEM32(esp + 0xC8) = 0x3F800000;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0xCC) = 0;
    edx = ZX16(MEM16(edi + 8));
    MEM32(esp + 0x24) = edx;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x20) / fp_top()); /* fdivr dword ptr [esp + 0x20] */
    MEMF(esp + 0xD0) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ZX16(MEM16(edi + 0xA));
    MEM32(esp + 0x24) = eax;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x60) / fp_top()); /* fdivr dword ptr [esp + 0x60] */
    MEMF(esp + 0xD4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 4)); /* fadd dword ptr [esi + 4] */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x38)); /* fadd dword ptr [esp + 0x38] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x3C)); /* fadd dword ptr [esp + 0x3c] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x40)); /* fadd dword ptr [esp + 0x40] */
    ecx = MEM32(esp + 0x28);
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, ebp);
    MEM32(esp + 0xDC) = ecx;
    MEM32(esp + 0xE0) = edx;
    MEM32(esp + 0xE4) = eax;
    PUSH32(esp, 0x0051DBCEu); RECOMP_ABI_CALL(0x0044F880u, sub_0044F880); /* call 0x0044F880 */

loc_0051DBCE: ;
    MEM32(esp + 0xE8) = eax;
    MEM32(esp + 0xEC) = 0x3F800000;
    MEM32(esp + 0xF0) = 0x3F800000;
    ecx = ZX16(MEM16(edi + 8));
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, 0);
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x28) / fp_top()); /* fdivr dword ptr [esp + 0x28] */
    MEMF(esp + 0xF8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = ZX16(MEM16(edi + 0xA));
    MEM32(esp + 0x2C) = edx;
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x24) / fp_top()); /* fdivr dword ptr [esp + 0x24] */
    MEMF(esp + 0xFC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0051DC20u); RECOMP_ABI_CALL(0x005EF370u, sub_005EF370); /* call 0x005EF370 */

loc_0051DC20: ;
    eax = MEM32(0x85836C);
    ecx = MEM32(eax);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x242);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x164); PUSH32(esp, 0x0051DC36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0051DC30u); } /* indirect call */
    }

loc_0051DC36: ;
    PUSH32(esp, 0x20);
    edx = esp + 0x70;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, 5);
    PUSH32(esp, 0x0051DC46u); RECOMP_ABI_CALL(0x00519FA0u, sub_00519FA0); /* call 0x00519FA0 */

loc_0051DC46: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0051DC51u); RECOMP_ABI_CALL(0x00457360u, sub_00457360); /* call 0x00457360 */

loc_0051DC51: ;
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0051DC5Cu); RECOMP_ABI_CALL(0x00457360u, sub_00457360); /* call 0x00457360 */

loc_0051DC5C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0051DC65u); RECOMP_ABI_CALL(0x005EDCA0u, sub_005EDCA0); /* call 0x005EDCA0 */

loc_0051DC65: ;
    SET_LO8(eax, MEM8(ebx + 0x190));
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0051DD89; /* je: equal / zero */

loc_0051DC77: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0051DC83u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_0051DC83: ;
    eax = MEM32(ebx + 0x78);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0051DC8Cu); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_0051DC8C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0xF0);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x0051DCB5u); RECOMP_ABI_CALL(0x005EF6F0u, sub_005EF6F0); /* call 0x005EF6F0 */

loc_0051DCB5: ;
    ecx = MEM32(ebx + 0x7C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0051DCBEu); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_0051DCBE: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x1B8);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0xF0);
    PUSH32(esp, 0x0051DCE7u); RECOMP_ABI_CALL(0x005EF6F0u, sub_005EF6F0); /* call 0x005EF6F0 */

loc_0051DCE7: ;
    edx = MEM32(ebx + 0x80);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0051DCF3u); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_0051DCF3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x280);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x1B8);
    PUSH32(esp, 0x0051DD19u); RECOMP_ABI_CALL(0x005EF6F0u, sub_005EF6F0); /* call 0x005EF6F0 */

loc_0051DD19: ;
    eax = MEM32(ebx + 0x84);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0051DD28u); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_0051DD28: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1AE);
    PUSH32(esp, 0x1B8);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0xF0);
    PUSH32(esp, 0x0051DD51u); RECOMP_ABI_CALL(0x005EF6F0u, sub_005EF6F0); /* call 0x005EF6F0 */

loc_0051DD51: ;
    ecx = MEM32(ebx + 0x88);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0051DD5Du); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_0051DD5D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1AE);
    PUSH32(esp, 0x280);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x1B8);
    PUSH32(esp, 0x0051DD86u); RECOMP_ABI_CALL(0x005EF6F0u, sub_005EF6F0); /* call 0x005EF6F0 */

loc_0051DD86: ;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0051DD89: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0051DD8B: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x11C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x11C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0051DDA0
 * Original: 0x0051DDA0 - 0x0051E130 (912 bytes, 236 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051DDA0(void)
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

loc_0051DDA0: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0x6C3250;
    PUSH32(esp, 0x0051DDB0u); RECOMP_ABI_CALL(0x0053B360u, sub_0053B360); /* call 0x0053B360 */

loc_0051DDB0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051E129; /* je: equal / zero */

loc_0051DDB8: ;
    fp_push(MEMF(esi + 0x4C)); /* fld float */
    PUSH32(esp, edi);
    fp_push(MEMF(esi + 0x48)); /* fld float */
    edi = esi + 0x44;
    fp_push(MEMF(edi)); /* fld float */
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
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x6307D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x6307d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0051E128; /* jnp: not parity */

loc_0051DDED: ;
    fp_push(MEMF(esi + 0x50)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x6307D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x6307d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0051E128; /* jnp: not parity */

loc_0051DE01: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0051DE08u); RECOMP_ABI_CALL(0x005EE3E0u, sub_005EE3E0); /* call 0x005EE3E0 */

loc_0051DE08: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x0051DE0Fu); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_0051DE0F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0051DE16u); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_0051DE16: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0051DE22u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_0051DE22: ;
    PUSH32(esp, 0x679684);
    PUSH32(esp, 0x0051DE2Cu); RECOMP_ABI_CALL(0x005EDB20u, sub_005EDB20); /* call 0x005EDB20 */

loc_0051DE2C: ;
    ecx = MEM32(esi + 0x70);
    eax = MEM32(esi + 0x64);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esp + 0x10;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = 0x3F800000;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x0051DE5Bu); RECOMP_ABI_CALL(0x00609A60u, sub_00609A60); /* call 0x00609A60 */

loc_0051DE5B: ;
    edx = MEM32(esi + 0x6C);
    PUSH32(esp, edx);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0051DE68u); RECOMP_ABI_CALL(0x00609A30u, sub_00609A30); /* call 0x00609A30 */

loc_0051DE68: ;
    eax = MEM32(0x8583A0);
    fp_push(MEMF(eax + 0x138)); /* fld float */
    ecx = esi + 0x8C;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x63D420)); /* fsub dword ptr [0x63d420] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, ecx);
    ecx = esp + 0x4C;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x858578)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x85857C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x858580)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0051DECDu); RECOMP_ABI_CALL(0x00419860u, sub_00419860); /* call 0x00419860 */

loc_0051DECD: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x6C) = edx;
    edx = MEM32(esi + 0x74);
    PUSH32(esp, edx);
    MEM32(esp + 0x74) = eax;
    eax = MEM32(esi + 0x104);
    PUSH32(esp, eax);
    MEM32(esp + 0x7C) = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0051DF07u); RECOMP_ABI_CALL(0x0051D630u, sub_0051D630); /* call 0x0051D630 */

loc_0051DF07: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0051DF13u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_0051DF13: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x0051DF1Au); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_0051DF1A: ;
    fp_push(MEMF(0x858548)); /* fld float */
    eax = MEM32(0x858550);
    fp_push(MEMF(0x85854C)); /* fld float */
    ecx = MEM32(0x858558);
    edx = MEM32(0x85855C);
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esi + 0x68);
    MEM32(esp + 0x14) = ecx;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    eax = MEM32(0x858560);
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esi + 0x104);
    MEM32(esp + 0x2C) = eax;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x68)); /* fld float */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0051DFA2u); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_0051DFA2: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0051DFAEu); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_0051DFAE: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x54;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0051DFB7u); RECOMP_ABI_CALL(0x0045F8D0u, sub_0045F8D0); /* call 0x0045F8D0 */

loc_0051DFB7: ;
    PUSH32(esp, 4);
    PUSH32(esp, 5);
    PUSH32(esp, 0x0051DFC0u); RECOMP_ABI_CALL(0x005FB070u, sub_005FB070); /* call 0x005FB070 */

loc_0051DFC0: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x48)); /* fsub dword ptr [esp + 0x48] */
    eax = esp + 0x54;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x50)); /* fsub dword ptr [esp + 0x50] */
    MEM32(0x85B2A4) = 0;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    MEM32(0x85B2B0) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x54)); /* fsub dword ptr [esp + 0x54] */
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x40)); /* fsub dword ptr [esp + 0x40] */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x44)); /* fsub dword ptr [esp + 0x44] */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x48)); /* fsub dword ptr [esp + 0x48] */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0051E018u); RECOMP_ABI_CALL(0x0045CAB0u, sub_0045CAB0); /* call 0x0045CAB0 */

loc_0051E018: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x4C)); /* fsub dword ptr [esp + 0x4c] */
    MEM32(0x85B2A4) = 0;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    MEM32(0x85B2B0) = 0x3F800000;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x50)); /* fsub dword ptr [esp + 0x50] */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x54)); /* fsub dword ptr [esp + 0x54] */
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x40)); /* fadd dword ptr [esp + 0x40] */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x44)); /* fadd dword ptr [esp + 0x44] */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x48)); /* fadd dword ptr [esp + 0x48] */
    ecx = esp + 0x58;
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0051E070u); RECOMP_ABI_CALL(0x0045CAB0u, sub_0045CAB0); /* call 0x0045CAB0 */

loc_0051E070: ;
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x38)); /* fadd dword ptr [esp + 0x38] */
    edx = esp + 0x5C;
    fp_push(MEMF(esp + 0x54)); /* fld float */
    PUSH32(esp, edx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x40)); /* fadd dword ptr [esp + 0x40] */
    MEM32(0x85B2A4) = 0x3F800000;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    MEM32(0x85B2B0) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x44)); /* fadd dword ptr [esp + 0x44] */
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x48)); /* fsub dword ptr [esp + 0x48] */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x4C)); /* fsub dword ptr [esp + 0x4c] */
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x50)); /* fsub dword ptr [esp + 0x50] */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0051E0C8u); RECOMP_ABI_CALL(0x0045CAB0u, sub_0045CAB0); /* call 0x0045CAB0 */

loc_0051E0C8: ;
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x3C)); /* fadd dword ptr [esp + 0x3c] */
    eax = esp + 0x60;
    fp_push(MEMF(esp + 0x58)); /* fld float */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x44)); /* fadd dword ptr [esp + 0x44] */
    MEM32(0x85B2A4) = 0x3F800000;
    fp_push(MEMF(esp + 0x60)); /* fld float */
    MEM32(0x85B2B0) = 0x3F800000;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x48)); /* fadd dword ptr [esp + 0x48] */
    MEMF(esp + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x4C)); /* fadd dword ptr [esp + 0x4c] */
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x50)); /* fadd dword ptr [esp + 0x50] */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x54)); /* fadd dword ptr [esp + 0x54] */
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0051E120u); RECOMP_ABI_CALL(0x0045CAB0u, sub_0045CAB0); /* call 0x0045CAB0 */

loc_0051E120: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0051E128u); RECOMP_ABI_CALL(0x005FB150u, sub_005FB150); /* call 0x005FB150 */

loc_0051E128: ;
    POP32(esp, edi);

loc_0051E129: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0051E130
 * Original: 0x0051E130 - 0x0051E1C1 (145 bytes, 37 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051E130(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0051E130: ;
    _fb = (uint32_t)(0x138) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x138;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0xA4;
    PUSH32(esp, 0x0051E146u); RECOMP_ABI_CALL(0x0051A060u, sub_0051A060); /* call 0x0051A060 */

loc_0051E146: ;
    ecx = esp + 8;
    PUSH32(esp, 0x0051E14Fu); RECOMP_ABI_CALL(0x0051A060u, sub_0051A060); /* call 0x0051A060 */

loc_0051E14F: ;
    eax = MEM32(esp + 0x150);
    edi = MEM32(esp + 0x14C);
    ecx = MEM32(esp + 0x144);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esp + 0xB0;
    PUSH32(esp, 0x0051E173u); RECOMP_ABI_CALL(0x0051B6F0u, sub_0051B6F0); /* call 0x0051B6F0 */

loc_0051E173: ;
    edx = MEM32(esp + 0x154);
    eax = MEM32(esp + 0x148);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0051E18Du); RECOMP_ABI_CALL(0x0051B6F0u, sub_0051B6F0); /* call 0x0051B6F0 */

loc_0051E18D: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0xA8;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0051E1A1u); RECOMP_ABI_CALL(0x0051B3A0u, sub_0051B3A0); /* call 0x0051B3A0 */

loc_0051E1A1: ;
    ecx = esp + 8;
    PUSH32(esp, 0x0051E1AAu); RECOMP_ABI_CALL(0x005E3280u, sub_005E3280); /* call 0x005E3280 */

loc_0051E1AA: ;
    ecx = esp + 0xA4;
    PUSH32(esp, 0x0051E1B6u); RECOMP_ABI_CALL(0x005E3280u, sub_005E3280); /* call 0x005E3280 */

loc_0051E1B6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x138) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x138;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0051E1D0
 * Original: 0x0051E1D0 - 0x0051E484 (692 bytes, 145 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051E1D0(void)
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

loc_0051E1D0: ;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 0x4C;
    PUSH32(esp, 0x0051E1E3u); RECOMP_ABI_CALL(0x0051B2C0u, sub_0051B2C0); /* call 0x0051B2C0 */

loc_0051E1E3: ;
    ecx = MEM32(esp + 0x118);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x54;
    MEM32(esp + 0x24) = 0x3F800000;
    MEM32(esp + 0x28) = 0;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x34) = 0x3F800000;
    MEM32(esp + 0x38) = 0;
    MEM32(esp + 0x3C) = 0;
    MEM32(esp + 0x40) = 0;
    MEM32(esp + 0x44) = 0x3F800000;
    MEM32(esp + 0x50) = 0;
    MEM32(esp + 0x4C) = 0;
    MEM32(esp + 0x48) = 0;
    PUSH32(esp, 0x0051E259u); RECOMP_ABI_CALL(0x00606860u, sub_00606860); /* call 0x00606860 */

loc_0051E259: ;
    fp_push(MEMF(esp + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x638140)); /* fadd dword ptr [0x638140] */
    edx = MEM32(esp + 0x78);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x50;
    fp_push(MEMF(esp + 0x78)); /* fld float */
    MEM32(esp + 0x1C) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D57C)); /* fsub dword ptr [0x62d57c] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0051E28Bu); RECOMP_ABI_CALL(0x006084F0u, sub_006084F0); /* call 0x006084F0 */

loc_0051E28B: ;
    SET_LO8(ebx, MEM8(esp + 0x120));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051E2D7; /* je: equal / zero */

loc_0051E298: ;
    fp_push(MEMF(esp + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xB0)); /* fsub dword ptr [esi + 0xb0] */
    fp_push(MEMF(esp + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xB4)); /* fsub dword ptr [esi + 0xb4] */
    fp_push(MEMF(esp + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xB8)); /* fsub dword ptr [esi + 0xb8] */
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
    MEMF(esp + 0x110) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0051E2E2;

loc_0051E2D7: ;
    MEM32(esp + 0x110) = 0;

loc_0051E2E2: ;
    eax = MEM32(esp + 0x11C);
    PUSH32(esp, edi);
    fp_push(MEMF(eax + 0x6C)); /* fld float */
    ecx = eax + 0x50;
    edi = MEM32(ecx);
    MEM32(esp + 0x98) = edi;
    edi = MEM32(ecx + 4);
    MEM32(esp + 0x9C) = edi;
    edi = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(esp + 0xA4) = ecx;
    MEM32(esp + 0xA0) = edi;
    ecx = eax + 0x88;
    edi = MEM32(ecx);
    MEM32(esp + 0x88) = edi;
    edi = MEM32(ecx + 4);
    MEM32(esp + 0x8C) = edi;
    edi = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(esp + 0x94) = ecx;
    MEM32(esp + 0x90) = edi;
    ecx = eax + 0x70;
    edi = MEM32(ecx);
    MEM32(esp + 0xA8) = edi;
    edi = MEM32(ecx + 4);
    MEM32(esp + 0xAC) = edi;
    edi = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEMF(esp + 0x104) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x4C)); /* fld float */
    MEM32(esp + 0xB4) = ecx;
    ecx = MEM32(eax + 0x64);
    MEMF(esp + 0x100) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x84)); /* fld float */
    MEM32(esp + 0xE0) = ecx;
    MEM32(esp + 0xE4) = ecx;
    ecx = MEM32(0x6C263C);
    MEM32(esp + 0xB0) = edi;
    MEM32(esp + 0xDC) = 0x3F800000;
    MEMF(esp + 0xFC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM8(esp + 0x108) = 1;
    MEM8(esp + 0x80) = LO8(edx);
    MEM8(esp + 0x81) = LO8(edx);
    edi = MEM32(ecx + 0x29C);
    MEM32(esp + 0xD8) = edi;
    ecx = MEM32(ecx + 0x290);
    MEM32(esp + 0xDC) = ecx;
    _fa = (uint32_t)(MEM8(eax + 0x80)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x80), LO8(edx) (8-bit) */
    MEM32(esp + 0x110) = 0x3F800000;
    MEM32(esp + 0x10C) = 0x3F800000;
    MEM32(esp + 0x84) = edx;
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0051E40F; /* je: equal / zero */

loc_0051E404: ;
    MEM32(esp + 0x80) = 1;

loc_0051E40F: ;
    _fa = (uint32_t)(MEM8(eax + 0x48)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x48), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051E41C; /* je: equal / zero */

loc_0051E414: ;
    MEM32(esp + 0x80) = MEM32(esp + 0x80) | 2;
    _fa = (uint32_t)(MEM32(esp + 0x80)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0051E41C: ;
    _fa = (uint32_t)(MEM8(eax + 0x60)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x60), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051E429; /* je: equal / zero */

loc_0051E421: ;
    MEM32(esp + 0x80) = MEM32(esp + 0x80) | 8;
    _fa = (uint32_t)(MEM32(esp + 0x80)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0051E429: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(edx) (8-bit) */
    eax = MEM32(esi + 0x188);
    MEM32(esp + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0051E43D; /* jne: not equal / not zero */

loc_0051E437: ;
    MEM32(esi + 0x188) = edx;

loc_0051E43D: ;
    ecx = MEM32(esi + 0x184);
    MEM32(esi + 0x184) = edx;
    edx = esp + 0x4C;
    MEM32(esp + 8) = ecx;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0051E459u); RECOMP_ABI_CALL(0x0051C1C0u, sub_0051C1C0); /* call 0x0051C1C0 */

loc_0051E459: ;
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0051E465u); RECOMP_ABI_CALL(0x0051B9A0u, sub_0051B9A0); /* call 0x0051B9A0 */

loc_0051E465: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(esi + 0x184) = ecx;
    MEM32(esi + 0x188) = edx;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0051E490
 * Original: 0x0051E490 - 0x0051EEFF (2671 bytes, 701 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051E490(void)
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

loc_0051E490: ;
    eax = 0x1AF0;
    PUSH32(esp, 0x0051E49Au); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_0051E49A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x0051E4A5u); RECOMP_ABI_CALL(0x005EE9F0u, sub_005EE9F0); /* call 0x005EE9F0 */

loc_0051E4A5: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x0051E4ACu); RECOMP_ABI_CALL(0x005EE1A0u, sub_005EE1A0); /* call 0x005EE1A0 */

loc_0051E4AC: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0051E4B8u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_0051E4B8: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0051E4C0u); RECOMP_ABI_CALL(0x005EE3E0u, sub_005EE3E0); /* call 0x005EE3E0 */

loc_0051E4C0: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x0051E4C7u); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_0051E4C7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0051E4CDu); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_0051E4CD: ;
    PUSH32(esp, 0x679684);
    PUSH32(esp, 0x0051E4D7u); RECOMP_ABI_CALL(0x005EDB20u, sub_005EDB20); /* call 0x005EDB20 */

loc_0051E4D7: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x9C;
    PUSH32(esp, 0x0051E4E6u); RECOMP_ABI_CALL(0x0051A060u, sub_0051A060); /* call 0x0051A060 */

loc_0051E4E6: ;
    eax = MEM32(edi + 0x14);
    ecx = MEM32(edi + 0x10);
    edx = MEM32(edi + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0xB0;
    PUSH32(esp, 0x0051E506u); RECOMP_ABI_CALL(0x0051E130u, sub_0051E130); /* call 0x0051E130 */

loc_0051E506: ;
    _fa = (uint32_t)(MEM32(edi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x24), ebx (32-bit) */
    MEM32(esp + 0x14) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0051E68A; /* je: equal / zero */

loc_0051E513: ;
    edx = MEM32(edi + 0x108);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0051E51Fu); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_0051E51F: ;
    eax = MEM32(edi + 0x38);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0051E66B; /* jle: less or equal (signed <=) */

loc_0051E52D: ;
    ebp = esp + 0x39C;
    esi = edi + 0x1D4;
    MEM32(esp + 0x18) = eax;
    edi = edi;

loc_0051E540: ;
    _fa = (uint32_t)(MEM8(esi + -12)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + -12), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0051E656; /* je: equal / zero */

loc_0051E54A: ;
    _fa = (uint32_t)(MEM8(esi + 0x78)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x78), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0051E656; /* jne: not equal / not zero */

loc_0051E553: ;
    fp_push(MEMF(esp + 0xDC)); /* fld float */
    ecx = MEM32(esi + 0x80);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + -8)); /* fmul dword ptr [esi - 8] */
    MEM32(esp + 0x10) = ecx;
    fp_push(MEMF(esp + 0xE0)); /* fld float */
    edx = esi + -28;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + -4)); /* fmul dword ptr [esi - 4] */
    eax = MEM32(edx);
    fp_push(MEMF(esp + 0xE4)); /* fld float */
    ecx = MEM32(edx + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(edx + 8);
    edx = ebp + -12;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edx) = eax;
    fp_push(MEMF(esp + 0xE8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x6C)); /* fadd dword ptr [esi + 0x6c] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x20);
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    MEM32(edx + 4) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x48)); /* fmul dword ptr [esi + 0x48] */
    MEM32(edx + 8) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xEC)); /* fmul dword ptr [esp + 0xec] */
    MEMF(ebp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x0051E5F8u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0051E5F8: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ebx, LO8(eax));
    PUSH32(esp, 0x0051E60Bu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0051E60B: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_LO8(ebx, LO8(eax));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0051E61Bu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0051E61B: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ecx = ZX8(LO8(eax));
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0051E632u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0051E632: ;
    edx = ZX8(LO8(eax));
    eax = MEM32(esp + 0x14);
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 4) = ebx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + eax * 2 + 0x138) = LO8(ebx);
    MEM8(esp + eax * 2 + 0x139) = LO8(ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x14;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0051E656: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_0051E540; /* jne: not equal / not zero */

loc_0051E66B: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    ecx = esp + 0x13C;
    PUSH32(esp, ecx);
    edx = esp + 0x398;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0051E687u); RECOMP_ABI_CALL(0x005FB7E0u, sub_005FB7E0); /* call 0x005FB7E0 */

loc_0051E687: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0051E68A: ;
    _fa = (uint32_t)(MEM32(edi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x30), ebx (32-bit) */
    MEM32(esp + 0x14) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0051E80D; /* je: equal / zero */

loc_0051E697: ;
    eax = MEM32(edi + 0x118);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0051E6A3u); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_0051E6A3: ;
    eax = MEM32(edi + 0x38);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0051E7EE; /* jle: less or equal (signed <=) */

loc_0051E6B1: ;
    ecx = eax;
    ebp = esp + 0x39C;
    esi = edi + 0x1D4;
    MEM32(esp + 0x18) = ecx;

loc_0051E6C4: ;
    _fa = (uint32_t)(MEM8(esi + -12)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + -12), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0051E7D9; /* je: equal / zero */

loc_0051E6CE: ;
    _fa = (uint32_t)(MEM8(esi + 0x78)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x78), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051E7D9; /* je: equal / zero */

loc_0051E6D7: ;
    fp_push(MEMF(esp + 0xDC)); /* fld float */
    edx = MEM32(esi + 0x80);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + -8)); /* fmul dword ptr [esi - 8] */
    MEM32(esp + 0x10) = edx;
    fp_push(MEMF(esp + 0xE0)); /* fld float */
    eax = esi + -28;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + -4)); /* fmul dword ptr [esi - 4] */
    ecx = eax;
    fp_push(MEMF(esp + 0xE4)); /* fld float */
    eax = MEM32(ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x20) = edx;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    edx = ebp + -12;
    fp_push(MEMF(esp + 0xE8)); /* fld float */
    MEM32(edx) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x6C)); /* fadd dword ptr [esi + 0x6c] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x20);
    fp_push(MEMF(esp + 0xEC)); /* fld float */
    MEM32(edx + 4) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x48)); /* fmul dword ptr [esi + 0x48] */
    MEM32(edx + 8) = ecx;
    MEMF(ebp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x0051E77Bu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0051E77B: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ebx, LO8(eax));
    PUSH32(esp, 0x0051E78Eu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0051E78E: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_LO8(ebx, LO8(eax));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0051E79Eu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0051E79E: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ecx = ZX8(LO8(eax));
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0051E7B5u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0051E7B5: ;
    edx = ZX8(LO8(eax));
    eax = MEM32(esp + 0x14);
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 4) = ebx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + eax * 2 + 0x138) = LO8(ebx);
    MEM8(esp + eax * 2 + 0x139) = LO8(ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x14;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0051E7D9: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_0051E6C4; /* jne: not equal / not zero */

loc_0051E7EE: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    ecx = esp + 0x13C;
    PUSH32(esp, ecx);
    edx = esp + 0x398;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0051E80Au); RECOMP_ABI_CALL(0x005FB7E0u, sub_005FB7E0); /* call 0x005FB7E0 */

loc_0051E80A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0051E80D: ;
    _fa = (uint32_t)(MEM32(edi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x28), ebx (32-bit) */
    MEM32(esp + 0x14) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0051E990; /* je: equal / zero */

loc_0051E81A: ;
    eax = MEM32(edi + 0x104);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0051E826u); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_0051E826: ;
    eax = MEM32(edi + 0x38);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0051E971; /* jle: less or equal (signed <=) */

loc_0051E834: ;
    ecx = eax;
    ebp = esp + 0x39C;
    esi = edi + 0x1E4;
    MEM32(esp + 0x18) = ecx;
    goto loc_0051E850;

    /* nop */

loc_0051E850: ;
    _fa = (uint32_t)(MEM8(esi + -28)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + -28), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0051E95C; /* je: equal / zero */

loc_0051E85A: ;
    fp_push(MEMF(esp + 0xB8)); /* fld float */
    edx = MEM32(esi + 0x70);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + -8)); /* fmul dword ptr [esi - 8] */
    MEM32(esp + 0x10) = edx;
    fp_push(MEMF(esp + 0xBC)); /* fld float */
    eax = esi + -44;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + -4)); /* fmul dword ptr [esi - 4] */
    ecx = eax;
    fp_push(MEMF(esp + 0xC0)); /* fld float */
    eax = MEM32(ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x20) = edx;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(edx, MEM8(esi + 0x68));
    fp_push(MEMF(esp + 0xC4)); /* fld float */
    edx = ebp + -12;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    MEM32(edx) = eax;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x60)); /* fadd dword ptr [esi + 0x60] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x20);
    fp_push(MEMF(esp + 0xC8)); /* fld float */
    MEM32(edx + 4) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x3C)); /* fmul dword ptr [esi + 0x3c] */
    MEM32(edx + 8) = ecx;
    MEMF(ebp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x0051E8FEu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0051E8FE: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ebx, LO8(eax));
    PUSH32(esp, 0x0051E911u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0051E911: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_LO8(ebx, LO8(eax));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0051E921u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0051E921: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ecx = ZX8(LO8(eax));
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0051E938u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0051E938: ;
    edx = ZX8(LO8(eax));
    eax = MEM32(esp + 0x14);
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 4) = ebx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + eax * 2 + 0x138) = LO8(ebx);
    MEM8(esp + eax * 2 + 0x139) = LO8(ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x14;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0051E95C: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_0051E850; /* jne: not equal / not zero */

loc_0051E971: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    ecx = esp + 0x13C;
    PUSH32(esp, ecx);
    edx = esp + 0x398;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0051E98Du); RECOMP_ABI_CALL(0x005FB7E0u, sub_005FB7E0); /* call 0x005FB7E0 */

loc_0051E98D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0051E990: ;
    _fa = (uint32_t)(MEM32(edi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x2C), ebx (32-bit) */
    MEM32(esp + 0x14) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0051EB17; /* je: equal / zero */

loc_0051E99D: ;
    eax = MEM32(edi + 0x114);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0051E9A9u); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_0051E9A9: ;
    eax = MEM32(edi + 0x38);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0051EAF8; /* jle: less or equal (signed <=) */

loc_0051E9B7: ;
    ecx = eax;
    ebp = esp + 0x39C;
    esi = edi + 0x1F4;
    MEM32(esp + 0x18) = ecx;
    /* nop */

loc_0051E9D0: ;
    _fa = (uint32_t)(MEM8(esi + -44)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + -44), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0051EAE3; /* je: equal / zero */

loc_0051E9DA: ;
    fp_push(MEMF(esp + 0x100)); /* fld float */
    edx = MEM32(esi + 0x60);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + -8)); /* fmul dword ptr [esi - 8] */
    MEM32(esp + 0x10) = edx;
    fp_push(MEMF(esp + 0x104)); /* fld float */
    eax = esi + -60;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + -4)); /* fmul dword ptr [esi - 4] */
    ecx = eax;
    fp_push(MEMF(esp + 0x108)); /* fld float */
    eax = MEM32(ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x20) = edx;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    edx = ebp + -12;
    fp_push(MEMF(esp + 0x10C)); /* fld float */
    MEM32(edx) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    fp_push(MEMF(esp + 0x110)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x34)); /* fmul dword ptr [esi + 0x34] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x54)); /* fadd dword ptr [esi + 0x54] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x20);
    MEM32(edx + 4) = eax;
    MEMF(ebp) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edx + 8) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x0051EA85u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0051EA85: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ebx, LO8(eax));
    PUSH32(esp, 0x0051EA98u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0051EA98: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_LO8(ebx, LO8(eax));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0051EAA8u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0051EAA8: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ecx = ZX8(LO8(eax));
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0051EABFu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0051EABF: ;
    edx = ZX8(LO8(eax));
    eax = MEM32(esp + 0x14);
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 4) = ebx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + eax * 2 + 0x138) = LO8(ebx);
    MEM8(esp + eax * 2 + 0x139) = LO8(ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x14;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0051EAE3: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_0051E9D0; /* jne: not equal / not zero */

loc_0051EAF8: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    ecx = esp + 0x13C;
    PUSH32(esp, ecx);
    edx = esp + 0x398;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0051EB14u); RECOMP_ABI_CALL(0x005FB7E0u, sub_005FB7E0); /* call 0x005FB7E0 */

loc_0051EB14: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0051EB17: ;
    eax = MEM32(0x858548);
    ecx = MEM32(0x85854C);
    edx = MEM32(0x858550);
    MEM32(esp + 0x5C) = eax;
    eax = MEM32(0x858558);
    MEM32(esp + 0x60) = ecx;
    ecx = MEM32(0x85855C);
    MEM32(esp + 0x64) = edx;
    edx = MEM32(0x858560);
    MEM32(esp + 0x50) = eax;
    eax = MEM32(0x858430);
    PUSH32(esp, 1);
    MEM32(esp + 0x58) = ecx;
    MEM32(esp + 0x5C) = edx;
    MEM32(esp + 0x6C) = eax;
    PUSH32(esp, 0x0051EB61u); RECOMP_ABI_CALL(0x005EE1A0u, sub_005EE1A0); /* call 0x005EE1A0 */

loc_0051EB61: ;
    eax = MEM32(edi + 0x34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051EEBC; /* je: equal / zero */

loc_0051EB6F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0051EB75u); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_0051EB75: ;
    eax = MEM32(edi + 0x38);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_0051EEBC; /* jle: less or equal (signed <=) */

loc_0051EB87: ;
    esi = edi + 0x1C0;
    /* nop */

loc_0051EB90: ;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 8), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0051EEA2; /* je: equal / zero */

loc_0051EB9A: ;
    fp_push(MEMF(esi + 0x94)); /* fld float */
    ecx = MEM32(esi + -8);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    edx = MEM32(esi + -4);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    eax = MEM32(esi);
    PUSH32(esp, 6);
    PUSH32(esp, 6);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x94)); /* fmul dword ptr [esi + 0x94] */
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x94)); /* fmul dword ptr [esi + 0x94] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x6C)); /* fld float */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0051EC1Bu); RECOMP_ABI_CALL(0x005FB070u, sub_005FB070); /* call 0x005FB070 */

loc_0051EC1B: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x48)); /* fmul dword ptr [esi + 0x48] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x0051EC34u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0051EC34: ;
    fp_push(MEMF(esi + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ebx, LO8(eax));
    PUSH32(esp, 0x0051EC46u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0051EC46: ;
    fp_push(MEMF(esi + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_LO8(ebx, LO8(eax));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0051EC59u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0051EC59: ;
    fp_push(MEMF(esi + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ecx = ZX8(LO8(eax));
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0051EC6Fu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0051EC6F: ;
    ecx = MEM32(esp + 0x1C);
    edx = ZX8(LO8(eax));
    eax = MEM32(0x85B2AC);
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esp + 0x20);
    MEM32(0x85B2C0) = ebx;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = edx;
    ebp = MEM32(0x85B2AC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = ebp;
    fp_push(MEMF(esi + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x0051ECCBu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0051ECCB: ;
    fp_push(MEMF(esi + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ebx, LO8(eax));
    PUSH32(esp, 0x0051ECDDu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0051ECDD: ;
    fp_push(MEMF(esi + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_LO8(ebx, LO8(eax));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0051ECF0u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0051ECF0: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x44)); /* fsub dword ptr [esp + 0x44] */
    eax = ZX8(LO8(eax));
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x85B2C0) = ebx;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    eax = ebp;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x48)); /* fsub dword ptr [esp + 0x48] */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x4C)); /* fsub dword ptr [esp + 0x4c] */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    MEMF(esp + 0x8C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x8C);
    MEM32(eax + 8) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x85B2C0);
    fp_push(MEMF(esp + 0x38)); /* fld float */
    MEM32(eax + 0xC) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x1C)); /* fadd dword ptr [esp + 0x1c] */
    ecx = MEM32(0x85B2A4);
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    MEM32(eax + 0x10) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    edx = MEM32(0x85B2B0);
    fp_push(MEMF(esp + 0x40)); /* fld float */
    MEM32(eax + 0x14) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x24)); /* fadd dword ptr [esp + 0x24] */
    eax = MEM32(0x85B2AC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    MEMF(esp + 0x80) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x80);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = ecx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x85B2C0);
    fp_push(MEMF(esp + 0x44)); /* fld float */
    MEM32(eax + 0xC) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x1C)); /* fadd dword ptr [esp + 0x1c] */
    ecx = MEM32(0x85B2A4);
    fp_push(MEMF(esp + 0x48)); /* fld float */
    MEM32(eax + 0x10) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    edx = MEM32(0x85B2B0);
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    MEM32(eax + 0x14) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x24)); /* fadd dword ptr [esp + 0x24] */
    eax = MEM32(0x85B2AC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    MEMF(esp + 0x98) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x98);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = ecx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(0x85B2A4);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x38)); /* fsub dword ptr [esp + 0x38] */
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(0x85B2B0);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x3C)); /* fsub dword ptr [esp + 0x3c] */
    MEM32(eax + 0x14) = edx;
    eax = MEM32(0x85B2AC);
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x40)); /* fsub dword ptr [esp + 0x40] */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x74);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = ecx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x85B2C0);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(0x85B2A4);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(0x85B2B0);
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 0x14) = edx;
    eax = MEM32(0x85B2AC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    edx = ecx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = edx;
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x85B2AC) = MEM32(0x85B2AC) + 0x18;
    _fa = (uint32_t)(MEM32(0x85B2AC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0051EEA0u); RECOMP_ABI_CALL(0x005FB150u, sub_005FB150); /* call 0x005FB150 */

loc_0051EEA0: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0051EEA2: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(edi + 0x38);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0051EB90; /* jl: less (signed <) */

loc_0051EEBC: ;
    edx = MEM32(esp + 0x68);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0051EEC6u); RECOMP_ABI_CALL(0x005EE1A0u, sub_005EE1A0); /* call 0x005EE1A0 */

loc_0051EEC6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0051EECDu); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_0051EECD: ;
    eax = MEM32(edi + 0x38);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x9C;
    MEM32(edi + 0x3C) = eax;
    MEM32(edi + 0x38) = ebx;
    MEM32(edi + 0x24) = ebx;
    MEM32(edi + 0x28) = ebx;
    MEM32(edi + 0x2C) = ebx;
    MEM32(edi + 0x30) = ebx;
    MEM32(edi + 0x34) = ebx;
    PUSH32(esp, 0x0051EEF4u); RECOMP_ABI_CALL(0x005E3280u, sub_005E3280); /* call 0x005E3280 */

loc_0051EEF4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1AF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1AF0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0051EF00
 * Original: 0x0051EF00 - 0x0051F1ED (749 bytes, 197 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051EF00(void)
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

loc_0051EF00: ;
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x192));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0051F068; /* je: equal / zero */

loc_0051EF1A: ;
    ecx = esp + 0x2C;
    PUSH32(esp, 0x0051EF23u); RECOMP_ABI_CALL(0x0051B2C0u, sub_0051B2C0); /* call 0x0051B2C0 */

loc_0051EF23: ;
    ebx = MEM32(esp + 0x128);
    fp_push(MEMF(ebx + 0x24)); /* fld float */
    eax = MEM32(esp + 0x130);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xB0)); /* fsub dword ptr [esi + 0xb0] */
    fp_push(MEMF(ebx + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xB4)); /* fsub dword ptr [esi + 0xb4] */
    fp_push(MEMF(ebx + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xB8)); /* fsub dword ptr [esi + 0xb8] */
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
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas, _fbs)) goto loc_0051F1E0; /* jle: less or equal (signed <=) */

loc_0051EF70: ;
    edi = MEM32(esp + 0x12C);
    ebp = esi + 0x164;
    MEM32(esp + 0x14) = eax;

loc_0051EF81: ;
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0xF0) = eax;
    ecx = ebp;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x74) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x78) = eax;
    eax = MEM32(ecx + 0xC);
    MEM32(esp + 0x7C) = edx;
    edx = MEM32(ecx);
    MEM32(esp + 0x80) = eax;
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x64) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x68) = eax;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(esi + 0x130);
    MEM32(esp + 0x6C) = edx;
    edx = MEM32(esi + 0x12C);
    PUSH32(esp, ebx);
    MEM32(esp + 0xBC) = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0x34;
    MEM32(esp + 0x78) = eax;
    MEM8(esp + 0x64) = 1;
    MEM8(esp + 0x65) = 0;
    MEM32(esp + 0xBC) = edx;
    MEM32(esp + 0xF4) = 0x3F800000;
    PUSH32(esp, 0x0051F001u); RECOMP_ABI_CALL(0x00606860u, sub_00606860); /* call 0x00606860 */

loc_0051F001: ;
    eax = MEM32(0x662E68);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0xEC) = 0x3F800000;
    MEM32(esp + 0x64) = 0x23;
    MEM32(esp + 0x14) = eax;
    MEM32(0x662E68) = 0x43960000;
    PUSH32(esp, 0x0051F033u); RECOMP_ABI_CALL(0x0051C1C0u, sub_0051C1C0); /* call 0x0051C1C0 */

loc_0051F033: ;
    edx = MEM32(esp + 0x10);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(0x662E68) = edx;
    PUSH32(esp, 0x0051F049u); RECOMP_ABI_CALL(0x0051B9A0u, sub_0051B9A0); /* call 0x0051B9A0 */

loc_0051F049: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_0051EF81; /* jne: not equal / not zero */

loc_0051F05B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_0051F068: ;
    SET_LO8(eax, MEM8(esi + 0x191));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051F16C; /* je: equal / zero */

loc_0051F076: ;
    ebp = MEM32(esp + 0x130);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0051F150; /* jle: less or equal (signed <=) */

loc_0051F085: ;
    ebx = MEM32(esp + 0x128);
    edi = MEM32(esp + 0x12C);

loc_0051F093: ;
    fp_push(MEMF(ebx + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xB0)); /* fsub dword ptr [esi + 0xb0] */
    fp_push(MEMF(ebx + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xB4)); /* fsub dword ptr [esi + 0xb4] */
    fp_push(MEMF(ebx + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xB8)); /* fsub dword ptr [esi + 0xb8] */
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
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0x662E68)); /* fdiv dword ptr [0x662e68] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0051F0E3; /* jp: parity */

loc_0051F0D9: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x65E384)); /* fld float */
    goto loc_0051F0F8;

loc_0051F0E3: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0051F0F8; /* jne: not equal / not zero */

loc_0051F0F0: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_0051F0F8: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esp + 0xFC;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0051F11Cu); RECOMP_ABI_CALL(0x00606860u, sub_00606860); /* call 0x00606860 */

loc_0051F11C: ;
    ecx = MEM32(esi + 0x10C);
    PUSH32(esp, 0x2710);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0x3F400000);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x108;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0051F146u); RECOMP_ABI_CALL(0x0051D630u, sub_0051D630); /* call 0x0051D630 */

loc_0051F146: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0051F093; /* jne: not equal / not zero */

loc_0051F150: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0051F15Cu); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_0051F15C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_0051F16C: ;
    ecx = MEM32(esi + 0x184);
    eax = MEM32(esp + 0x12C);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x138);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10C);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(esp + 0x148);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 0x184) = 0;
    MEM32(esp + 0x3C) = 0x3F800000;
    MEM32(esp + 0x40) = 0x3F800000;
    MEM32(esp + 0x44) = 0x3F800000;
    MEM32(esp + 0x48) = 0x3F800000;
    PUSH32(esp, 0x0051F1D6u); RECOMP_ABI_CALL(0x0051CFF0u, sub_0051CFF0); /* call 0x0051CFF0 */

loc_0051F1D6: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0x184) = ecx;

loc_0051F1E0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0051F1F0
 * Original: 0x0051F1F0 - 0x0051F4A8 (696 bytes, 154 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051F1F0(void)
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

loc_0051F1F0: ;
    _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xE0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x192));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051F428; /* je: equal / zero */

loc_0051F209: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x0051F212u); RECOMP_ABI_CALL(0x0051B2C0u, sub_0051B2C0); /* call 0x0051B2C0 */

loc_0051F212: ;
    ebp = MEM32(esp + 0xF0);
    fp_push(MEMF(ebp + 0x24)); /* fld float */
    ebx = MEM32(esp + 0xF8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xB0)); /* fsub dword ptr [esi + 0xb0] */
    fp_push(MEMF(ebp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xB4)); /* fsub dword ptr [esi + 0xb4] */
    fp_push(MEMF(ebp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xB8)); /* fsub dword ptr [esi + 0xb8] */
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
    if (CMP_LE(_fas, _fbs)) goto loc_0051F49C; /* jle: less or equal (signed <=) */

loc_0051F25F: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xF8);
    goto loc_0051F270;

    /* nop */

loc_0051F270: ;
    fp_push(MEMF(esi + 0x164)); /* fld float */
    eax = MEM32(esp + 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x144)); /* fsub dword ptr [esi + 0x144] */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esp + 0x30;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x108)); /* fmul dword ptr [esp + 0x108] */
    MEM32(esp + 0xF4) = eax;
    MEM8(esp + 0x60) = 1;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x144)); /* fadd dword ptr [esi + 0x144] */
    MEM8(esp + 0x61) = 0;
    MEM32(esp + 0xF0) = 0x3F800000;
    MEMF(esp + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x168)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x148)); /* fsub dword ptr [esi + 0x148] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x108)); /* fmul dword ptr [esp + 0x108] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x148)); /* fadd dword ptr [esi + 0x148] */
    MEMF(esp + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x16C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x14C)); /* fsub dword ptr [esi + 0x14c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x108)); /* fmul dword ptr [esp + 0x108] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x14C)); /* fadd dword ptr [esi + 0x14c] */
    MEMF(esp + 0x80) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x170)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x150)); /* fsub dword ptr [esi + 0x150] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x108)); /* fmul dword ptr [esp + 0x108] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x150)); /* fadd dword ptr [esi + 0x150] */
    MEMF(esp + 0x84) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x164)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x144)); /* fsub dword ptr [esi + 0x144] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x108)); /* fmul dword ptr [esp + 0x108] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x144)); /* fadd dword ptr [esi + 0x144] */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x168)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x148)); /* fsub dword ptr [esi + 0x148] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x108)); /* fmul dword ptr [esp + 0x108] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x148)); /* fadd dword ptr [esi + 0x148] */
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x16C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x14C)); /* fsub dword ptr [esi + 0x14c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x108)); /* fmul dword ptr [esp + 0x108] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x14C)); /* fadd dword ptr [esi + 0x14c] */
    MEMF(esp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x170)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x150)); /* fsub dword ptr [esi + 0x150] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x108)); /* fmul dword ptr [esp + 0x108] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x150)); /* fadd dword ptr [esi + 0x150] */
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x128)); /* fld float */
    fp_push(MEMF(esi + 0x130)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x108)); /* fmul dword ptr [esp + 0x108] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0xBC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x124)); /* fld float */
    fp_push(MEMF(esi + 0x12C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x108)); /* fmul dword ptr [esp + 0x108] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0xB8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0051F3C9u); RECOMP_ABI_CALL(0x00606860u, sub_00606860); /* call 0x00606860 */

loc_0051F3C9: ;
    ecx = MEM32(0x662E68);
    MEM32(esp + 0xE4) = 0x3F800000;
    MEM32(esp + 0x5C) = 0x23;
    MEM32(esp + 0x10) = ecx;
    MEM32(0x662E68) = 0x43960000;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0051F3FCu); RECOMP_ABI_CALL(0x0051C1C0u, sub_0051C1C0); /* call 0x0051C1C0 */

loc_0051F3FC: ;
    eax = MEM32(esp + 0x10);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(0x662E68) = eax;
    PUSH32(esp, 0x0051F411u); RECOMP_ABI_CALL(0x0051B9A0u, sub_0051B9A0); /* call 0x0051B9A0 */

loc_0051F411: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0051F270; /* jne: not equal / not zero */

loc_0051F41B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xE0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_0051F428: ;
    edx = MEM32(esi + 0x184);
    ecx = MEM32(esp + 0xF4);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x100);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x110);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esp + 0x110);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esi + 0x184) = 0;
    MEM32(esp + 0x38) = 0x3F800000;
    MEM32(esp + 0x3C) = 0x3F800000;
    MEM32(esp + 0x40) = 0x3F800000;
    MEM32(esp + 0x44) = 0x3F800000;
    PUSH32(esp, 0x0051F492u); RECOMP_ABI_CALL(0x0051CFF0u, sub_0051CFF0); /* call 0x0051CFF0 */

loc_0051F492: ;
    edx = MEM32(esp + 0xC);
    MEM32(esi + 0x184) = edx;

loc_0051F49C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xE0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0051F4B0
 * Original: 0x0051F4B0 - 0x0051F4CB (27 bytes, 10 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051F4B0(void)
{

loc_0051F4B0: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0051F4C8u); RECOMP_ABI_CALL(0x0051F1F0u, sub_0051F1F0); /* call 0x0051F1F0 */

loc_0051F4C8: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0051F4D0
 * Original: 0x0051F4D0 - 0x0051F4E9 (25 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051F4D0(void)
{

loc_0051F4D0: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0051F4E6u); RECOMP_ABI_CALL(0x0051EF00u, sub_0051EF00); /* call 0x0051EF00 */

loc_0051F4E6: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0051F4F0
 * Original: 0x0051F4F0 - 0x0051F82C (828 bytes, 281 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051F4F0(void)
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

loc_0051F4F0: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x58);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x4C);
    fp_push(MEMF(esi)); /* fld float */
    MEM32(esp + 0x2C) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    ecx = MEM32(eax + 8);
    fp_push(MEMF(esi + 8)); /* fld float */
    MEM32(esp + 0x30) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    MEM32(esp + 0x34) = ecx;
    MEM8(esp + 0x5C) = 1;
    MEM8(esp + 7) = 1;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0xC)); /* fsub dword ptr [eax + 0xc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0051F547; /* jp: parity */

loc_0051F53E: ;
    fp_pop(); /* fstp st(0) */

loc_0051F540: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0051F547: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x50)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x50] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0051F540; /* je: equal / zero */

loc_0051F552: ;
    eax = MEM32(esp + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0051F7EB; /* jle: less or equal (signed <=) */

loc_0051F561: ;
    ecx = MEM32(esp + 0x64);
    edi = 1;
    ebp = esp + 0x44;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0051F571: ;
    eax = edi;
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + -8)); /* fsub dword ptr [ecx - 8] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 0x60)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 0x60))); }
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + -4)); /* fsub dword ptr [ecx - 4] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x64);
    edx = edx + edx * 2;
    fp_push(MEMF(eax + edx * 4)); /* fld float */
    edx = eax + edx * 4;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + -8)); /* fsub dword ptr [ecx - 8] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + -4)); /* fsub dword ptr [ecx - 4] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x3C)); /* fmul dword ptr [esp + 0x3c] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x40)); /* fmul dword ptr [esp + 0x40] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] + fp_top()); fp_pop(); /* faddp st(2) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0051F623; /* jne: not equal / not zero */

loc_0051F612: ;
    MEM32(ebp) = 1;
    MEM8(esp + 0x13) = 0;
    goto loc_0051F6AD;

loc_0051F623: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEM32(ebp) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    MEM8(esp + 0x68) = 0;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0051F661; /* jp: parity */

loc_0051F658: ;
    MEM32(ebp) = 0xFFFFFFFFu;
    goto loc_0051F6AD;

loc_0051F661: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx)); /* fsub dword ptr [edx] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 4)); /* fsub dword ptr [edx + 4] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 8)); /* fsub dword ptr [edx + 8] */
    MEMF(esp + 0x34) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0051F752; /* jne: not equal / not zero */

loc_0051F6A6: ;
    MEM32(ebp) = 0xFFFFFFFEu;

loc_0051F6AD: ;
    ebx = MEM32(esp + 0x60);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edi + -1;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0051F571; /* jl: less (signed <) */

loc_0051F6C3: ;
    SET_LO8(eax, MEM8(esp + 0x68));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0051F7EB; /* jne: not equal / not zero */

loc_0051F6CF: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0051F7EB; /* jne: not equal / not zero */

loc_0051F6DB: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0051F6E0: ;
    _fa = (uint32_t)(MEM32(esp + ecx * 4 + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + ecx * 4 + 0x44), 0xFFFFFFFEu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0051F6F4; /* jne: not equal / not zero */

loc_0051F6E7: ;
    eax = ecx + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    _fa = (uint32_t)(MEM32(esp + edx * 4 + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + edx * 4 + 0x44), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051F6F9; /* je: equal / zero */

loc_0051F6F4: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0051F6E0; /* jl: less (signed <) */

loc_0051F6F9: ;
    eax = ecx + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    ecx = MEM32(esp + 0x64);
    eax = edx + edx * 2;
    fp_push(MEMF(ecx + eax * 4)); /* fld float */
    eax = ecx + eax * 4;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi)); /* fsub dword ptr [esi] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 4)); /* fsub dword ptr [esi + 4] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 8)); /* fsub dword ptr [esi + 8] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x5C)); /* fmul dword ptr [esp + 0x5c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (TEST_NZ(_fa, _fb)) goto loc_0051F7E1; /* jne: not equal / not zero */

loc_0051F745: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0051F752: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 3) & 7]); /* fadd st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() / g_fp_stack[(g_fp_top + 2) & 7]); /* fdiv st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D678)); /* fmul dword ptr [0x62d678] */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x5C)); /* fmul dword ptr [esp + 0x5c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0051F822; /* jnp: not parity */

loc_0051F7D7: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0051F7E1: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0051F7EB: ;
    eax = MEM32(esp + 0x64);
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax)); /* fsub dword ptr [eax] */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x3C)); /* fmul dword ptr [esp + 0x3c] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x40)); /* fmul dword ptr [esp + 0x40] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x5C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x5c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0051F7D7; /* jne: not equal / not zero */

loc_0051F822: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
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
 * sub_0051F830
 * Original: 0x0051F830 - 0x0051F85D (45 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051F830(void)
{

loc_0051F830: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x34) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x38) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x3C) = eax;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    MEM32(ecx + 0x40) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x44) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x48) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0051F860
 * Original: 0x0051F860 - 0x0051F872 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051F860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0051F860: ;
    eax = ecx + 0x3C;
    ecx = 8;

loc_0051F868: ;
    MEM8(eax) = 0;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0051F868; /* jne: not equal / not zero */

loc_0051F871: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0051F880
 * Original: 0x0051F880 - 0x0051F89E (30 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051F880(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0051F880: ;
    eax = MEM32(ecx + 0x14);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0051F898u); RECOMP_ABI_CALL(0x0051F4F0u, sub_0051F4F0); /* call 0x0051F4F0 */

loc_0051F898: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0051F8A0
 * Original: 0x0051F8A0 - 0x0051F8C6 (38 bytes, 12 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051F8A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0051F8A0: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    ecx = eax + ecx + 8;
    PUSH32(esp, 0x0051F8C3u); RECOMP_ABI_CALL(0x00611B30u, sub_00611B30); /* call 0x00611B30 */

loc_0051F8C3: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0051F8D0
 * Original: 0x0051F8D0 - 0x0051F99A (202 bytes, 82 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051F8D0(void)
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

loc_0051F8D0: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(ecx + 9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051F8EA; /* je: equal / zero */

loc_0051F8D8: ;
    eax = MEM32(ecx + 4);
    edx = MEM32(ecx + eax * 4 + 0x26C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0051F8F0; /* jne: not equal / not zero */

loc_0051F8EA: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0051F8F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0051F990; /* jle: less or equal (signed <=) */

loc_0051F8FE: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    edi = MEM32(esp + 0x18);
    eax = eax + eax * 8;
    fp_top() = -fp_top(); /* fchs */
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = eax + ecx + 0x290;
    /* nop */

loc_0051F920: ;
    eax = MEM32(ebx + -4);
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 4)); /* fmul dword ptr [edi + 4] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 8)); /* fmul dword ptr [edi + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0xC)); /* fsub dword ptr [eax + 0xc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0051F988; /* je: equal / zero */

loc_0051F945: ;
    esi = MEM32(ebx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0051F97A; /* jle: less or equal (signed <=) */

loc_0051F94D: ;
    ecx = ebx + 8;

loc_0051F950: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 8)); /* fmul dword ptr [edi + 8] */
    fp_push(MEMF(ecx + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 4)); /* fmul dword ptr [edi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0051F984; /* je: equal / zero */

loc_0051F972: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0051F950; /* jl: less (signed <) */

loc_0051F97A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0051F984: ;
    edx = MEM32(esp + 0x10);

loc_0051F988: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x48;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0051F920; /* jl: less (signed <) */

loc_0051F990: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0051F9A0
 * Original: 0x0051F9A0 - 0x0051F9C5 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051F9A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0051F9A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x41C);
    PUSH32(esp, 0x649B3C);
    PUSH32(esp, 0x30);
    esi = ecx;
    PUSH32(esp, 0x0051F9B4u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0051F9B4: ;
    MEM32(esi + 0x14) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = 4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0051F9D0
 * Original: 0x0051F9D0 - 0x0051F9EC (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051F9D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0051F9D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051F9E3; /* je: equal / zero */

loc_0051F9DA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0051F9E0u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0051F9E0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0051F9E3: ;
    MEM32(esi + 0x14) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0051F9F0
 * Original: 0x0051F9F0 - 0x0051FA14 (36 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051F9F0(void)
{

loc_0051F9F0: ;
    ecx = MEM32(ecx + 0x14);
    eax = MEM32(esp + 4);
    eax = eax + eax * 2;
    eax = ecx + eax * 4;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0051FA20
 * Original: 0x0051FA20 - 0x0051FA30 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051FA20(void)
{

loc_0051FA20: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x14);
    eax = eax + eax * 2;
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0051FA30
 * Original: 0x0051FA30 - 0x0051FA42 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051FA30(void)
{

loc_0051FA30: ;
    eax = MEM32(ecx + 0x14);
    edx = eax + 0x18;
    PUSH32(esp, edx);
    edx = eax + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0051FA41u); RECOMP_ABI_CALL(0x00611B30u, sub_00611B30); /* call 0x00611B30 */

loc_0051FA41: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0051FA50
 * Original: 0x0051FA50 - 0x0051FAC4 (116 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051FA50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0051FA50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    PUSH32(esp, 0x49B);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ecx;
    PUSH32(esp, 0x649B3C);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = ebp;
    PUSH32(esp, 0x0051FA76u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0051FA76: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051FAA6; /* je: equal / zero */

loc_0051FA7D: ;
    ebx = eax + 4;
    MEM32(eax) = edi;
    eax = edi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_0051FAA1; /* jl: less (signed <) */

loc_0051FA8C: ;
    ebp = eax + 1;
    /* nop */

loc_0051FA90: ;
    ecx = esi;
    PUSH32(esp, 0x0051FA97u); RECOMP_ABI_CALL(0x0051F9A0u, sub_0051F9A0); /* call 0x0051F9A0 */

loc_0051FA97: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0051FA90; /* jne: not equal / not zero */

loc_0051FA9D: ;
    ebp = MEM32(esp + 0x10);

loc_0051FAA1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0051FAAF; /* jne: not equal / not zero */

loc_0051FAA6: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0051FAAF: ;
    MEM32(ebp + 0x1490) = edi;
    POP32(esp, edi);
    MEM32(ebp + 0x1494) = ebx;
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0051FAD0
 * Original: 0x0051FAD0 - 0x0051FBB4 (228 bytes, 75 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051FAD0(void)
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

loc_0051FAD0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x649B94);
    ebx = ecx;
    PUSH32(esp, 0x0051FAE1u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0051FAE1: ;
    eax = MEM32(ebx + 0x1490);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 8) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_0051FB96; /* jle: less or equal (signed <=) */

loc_0051FAF8: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    edi = edi;

loc_0051FB00: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648444);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x0051FB0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0051FB09u); } /* indirect call */
    }

loc_0051FB0C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x649B88);
    ecx = esi;
    MEM32(esp + 0x28) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0051FB1Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0051FB19u); } /* indirect call */
    }

loc_0051FB1C: ;
    eax = MEM32(ebx + 0x1494);
    MEMF(eax + ebp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x24);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0051FB6D; /* jle: less or equal (signed <=) */

loc_0051FB30: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0051FB37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0051FB34u); } /* indirect call */
    }

loc_0051FB37: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0051FB42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0051FB3Fu); } /* indirect call */
    }

loc_0051FB42: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0051FB4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0051FB4Au); } /* indirect call */
    }

loc_0051FB4D: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ebx + 0x1494);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0051FB64u); RECOMP_ABI_CALL(0x0051F9F0u, sub_0051F9F0); /* call 0x0051F9F0 */

loc_0051FB64: ;
    eax = MEM32(esp + 0x24);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0051FB30; /* jl: less (signed <) */

loc_0051FB6D: ;
    ecx = MEM32(ebx + 0x1494);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0051FB7Au); RECOMP_ABI_CALL(0x0051FA30u, sub_0051FA30); /* call 0x0051FA30 */

loc_0051FB7A: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(ebx + 0x1490);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x1C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0051FB00; /* jl: less (signed <) */

loc_0051FB94: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0051FB96: ;
    ecx = MEM32(ebx + 0x1490);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x649B48);
    PUSH32(esp, 0x0051FBA7u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0051FBA7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_0051FBC0
 * Original: 0x0051FBC0 - 0x0051FC08 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051FBC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0051FBC0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0x3F800000;
    PUSH32(esp, 0x0051FC02u); RECOMP_ABI_CALL(0x0051F830u, sub_0051F830); /* call 0x0051F830 */

loc_0051FC02: ;
    eax = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0051FC10
 * Original: 0x0051FC10 - 0x0051FC87 (119 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051FC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0051FC10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0xC;
    edi = 8;
    /* nop */

loc_0051FC20: ;
    PUSH32(esp, 0x0051FC25u); RECOMP_ABI_CALL(0x0051FBC0u, sub_0051FBC0); /* call 0x0051FBC0 */

loc_0051FC25: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0051FC20; /* jne: not equal / not zero */

loc_0051FC2B: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x6C2708) = esi;
    MEM32(esi + 0x1490) = edx;
    MEM32(esi + 0x1494) = edx;
    MEM8(esi + 8) = LO8(edx);
    MEM8(esi + 9) = LO8(edx);
    MEM8(esi + 0xA) = LO8(edx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 8;
    edi = esi + 0x26C;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 4) = edx;
    MEM32(esi) = edx;
    ecx = esi;
    MEM8(0x662E75) = 1;
    MEM8(0x6C2938) = LO8(edx);
    MEM8(0x6C2939) = LO8(edx);
    MEM8(0x6C293A) = LO8(edx);
    MEM8(0x6C293B) = LO8(edx);
    PUSH32(esp, 0x0051FC82u); RECOMP_ABI_CALL(0x0051F860u, sub_0051F860); /* call 0x0051F860 */

loc_0051FC82: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0051FC90
 * Original: 0x0051FC90 - 0x0051FF32 (674 bytes, 210 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051FC90(void)
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

loc_0051FC90: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1494);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0051FCB6; /* jne: not equal / not zero */

loc_0051FCA3: ;
    eax = MEM32(esp + 0x4C);
    MEM32(esi + eax * 4 + 0x26C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_0051FCB6: ;
    ecx = MEM32(esp + 0x4C);
    SET_LO8(eax, MEM8(0x6C293A));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x4C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0051FCFA; /* jne: not equal / not zero */

loc_0051FCC7: ;
    edx = MEM32(esp + 0x4C);
    ebx = MEM32(esp + 0x48);
    PUSH32(esp, edx);
    ecx = ecx + esi + 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0051FCDAu); RECOMP_ABI_CALL(0x0051F830u, sub_0051F830); /* call 0x0051F830 */

loc_0051FCDA: ;
    eax = MEM32(esp + 0x54);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0051FCE4u); RECOMP_ABI_CALL(0x0040ADD0u, sub_0040ADD0); /* call 0x0040ADD0 */

loc_0051FCE4: ;
    ecx = MEM32(ebx);
    edx = MEM32(ebx + 4);
    eax = MEM32(ebx + 8);
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = eax;
    goto loc_0051FD12;

loc_0051FCFA: ;
    edx = ecx + esi + 0x40;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = edx;

loc_0051FD12: ;
    SET_LO8(eax, MEM8(0x662E75));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0051FD2F; /* jne: not equal / not zero */

loc_0051FD1B: ;
    eax = MEM32(esp + 0x50);
    POP32(esp, ebx);
    MEM32(esi + eax * 4 + 0x26C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_0051FD2F: ;
    eax = MEM32(esi + 0x1490);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x58) = ebp;
    MEM32(esp + 0x18) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_0051FF1D; /* jle: less or equal (signed <=) */

loc_0051FD48: ;
    MEM32(esp + 0x4C) = edi;
    /* nop */

loc_0051FD50: ;
    ecx = MEM32(esi + 0x1494);
    edx = MEM32(esp + 0x4C);
    ebx = MEM32(ecx + edx + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 8 (32-bit) */
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x10) = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_0051FF1D; /* jge: greater or equal (signed >=) */

loc_0051FD71: ;
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0051FD8E; /* jp: parity */

loc_0051FD85: ;
    eax = MEM32(0x649B38);
    MEM32(esp + 0x14) = eax;

loc_0051FD8E: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0051FD9Du); RECOMP_ABI_CALL(0x0051F880u, sub_0051F880); /* call 0x0051F880 */

loc_0051FD9D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051FEFB; /* je: equal / zero */

loc_0051FDA5: ;
    ecx = MEM32(esp + 0x54);
    eax = ebp + ecx * 8;
    edx = eax + eax * 8;
    ebp = esi + edx * 8;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x14) = ebp;
    MEM32(ebp + 0x290) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_0051FE18; /* jle: less or equal (signed <=) */

loc_0051FDC3: ;
    eax = MEM32(esi + 0x1494);
    ecx = MEM32(esp + 0x4C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = ecx;

loc_0051FDD3: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0051FDDDu); RECOMP_ABI_CALL(0x0051FA20u, sub_0051FA20); /* call 0x0051FA20 */

loc_0051FDDD: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax)); /* fsub dword ptr [eax] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
    eax = MEM32(esp + 0x50);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0051FE18; /* je: equal / zero */

loc_0051FE12: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0051FDD3; /* jl: less (signed <) */

loc_0051FE18: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051FEF5; /* je: equal / zero */

loc_0051FE20: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0051FED8; /* jle: less or equal (signed <=) */

loc_0051FE2A: ;
    /* nop */

loc_0051FE30: ;
    eax = ebx + -1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0051FE3B; /* jne: not equal / not zero */

loc_0051FE37: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0051FE3E;

loc_0051FE3B: ;
    ebp = edi + 1;

loc_0051FE3E: ;
    eax = MEM32(esp + 0x4C);
    edx = MEM32(esi + 0x1494);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = edx;
    PUSH32(esp, 0x0051FE52u); RECOMP_ABI_CALL(0x0051FA20u, sub_0051FA20); /* call 0x0051FA20 */

loc_0051FE52: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x3C) = ecx;
    fp_push(MEMF(eax + 4)); /* fld float */
    MEMF(esp + 0x40) = (float)fp_top(); /* fst */
    eax = MEM32(eax + 8);
    PUSH32(esp, ebp);
    ecx = edx;
    MEM32(esp + 0x48) = eax;
    PUSH32(esp, 0x0051FE6Eu); RECOMP_ABI_CALL(0x0051FA20u, sub_0051FA20); /* call 0x0051FA20 */

loc_0051FE6E: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x662E70)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x662e70] */
    ecx = MEM32(eax);
    MEM32(esp + 0x30) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x34) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x38) = eax;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0051FEA0; /* jp: parity */

loc_0051FE8F: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x662E70)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x662e70] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0051FECB; /* jnp: not parity */

loc_0051FEA0: ;
    ebp = MEM32(esp + 0x10);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x28C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0051FEC6u); RECOMP_ABI_CALL(0x0051F8A0u, sub_0051F8A0); /* call 0x0051F8A0 */

loc_0051FEC6: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ebp;

loc_0051FECB: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0051FE30; /* jl: less (signed <) */

loc_0051FED4: ;
    ebp = MEM32(esp + 0x14);

loc_0051FED8: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x10);
    MEM32(ebp + 0x28C) = eax;
    eax = MEM32(esp + 0x58);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x290) = edx;
    MEM32(esp + 0x58) = eax;

loc_0051FEF5: ;
    ebp = MEM32(esp + 0x58);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0051FEFB: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x4C);
    ecx = MEM32(esi + 0x1490);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x4C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0051FD50; /* jl: less (signed <) */

loc_0051FF1D: ;
    ecx = MEM32(esp + 0x54);
    MEM32(esi + ecx * 4 + 0x26C) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0051FF40
 * Original: 0x0051FF40 - 0x0051FF8E (78 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051FF40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0051FF40: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x1494);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051FF80; /* je: equal / zero */

loc_0051FF4F: ;
    eax = MEM32(ecx + -4);
    PUSH32(esp, ebp);
    ebp = ecx + -4;
    PUSH32(esp, esi);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0051FF73; /* js: sign (negative) */

loc_0051FF61: ;
    PUSH32(esp, ebx);
    ebx = eax + 1;

loc_0051FF65: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x0051FF6Fu); RECOMP_ABI_CALL(0x0051F9D0u, sub_0051F9D0); /* call 0x0051F9D0 */

loc_0051FF6F: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0051FF65; /* jne: not equal / not zero */

loc_0051FF72: ;
    POP32(esp, ebx);

loc_0051FF73: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0051FF79u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0051FF79: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);

loc_0051FF80: ;
    MEM32(edi + 0x1494) = eax;
    MEM32(edi + 0x1490) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0051FF90
 * Original: 0x0051FF90 - 0x00520001 (113 bytes, 39 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051FF90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0051FF90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0051FF99u); RECOMP_ABI_CALL(0x0051FF40u, sub_0051FF40); /* call 0x0051FF40 */

loc_0051FF99: ;
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64844C);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x0051FFA9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0051FFA6u); } /* indirect call */
    }

loc_0051FFA9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0051FFC5; /* je: equal / zero */

loc_0051FFAE: ;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x649C08);
    PUSH32(esp, 0x0051FFBBu); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_0051FFBB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0051FFC5: ;
    MEM32(esi + 0x148C) = 2;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x649BF4);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0051FFDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0051FFD8u); } /* indirect call */
    }

loc_0051FFDB: ;
    edi = eax;
    eax = MEM32(esi + 0x148C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x649BB4);
    PUSH32(esp, 0x0051FFEFu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0051FFEF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0051FFFAu); RECOMP_ABI_CALL(0x0051FA50u, sub_0051FA50); /* call 0x0051FA50 */

loc_0051FFFA: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00520010
 * Original: 0x00520010 - 0x0052002D (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00520010(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00520010: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00520018u); RECOMP_ABI_CALL(0x0051FF40u, sub_0051FF40); /* call 0x0051FF40 */

loc_00520018: ;
    PUSH32(esp, esi);
    MEM32(0x6C2708) = 0;
    PUSH32(esp, 0x00520028u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00520028: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00520030
 * Original: 0x00520030 - 0x00520056 (38 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00520030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00520030: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0052003Eu); RECOMP_ABI_CALL(0x0051FF90u, sub_0051FF90); /* call 0x0051FF90 */

loc_0052003E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00520047; /* jne: not equal / not zero */

loc_00520042: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00520047: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0052004Fu); RECOMP_ABI_CALL(0x0051FAD0u, sub_0051FAD0); /* call 0x0051FAD0 */

loc_0052004F: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00520060
 * Original: 0x00520060 - 0x00520109 (169 bytes, 53 insns)
 * Category: game_io
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00520060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00520060: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xB0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x649CAC);
    PUSH32(esp, edi);
    ebx = ecx;
    ecx = MEM32(0x860220);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052008Cu); RECOMP_ABI_CALL(0x006137C0u, sub_006137C0); /* call 0x006137C0 */

loc_0052008C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x649C88);
    esi = eax;
    PUSH32(esp, 0x00520099u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00520099: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005200C8; /* jne: not equal / not zero */

loc_005200A0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x649C48);
    PUSH32(esp, 0x80);
    _fb = (uint32_t)(0x1498) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x1498;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x005200B7u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_005200B7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_005200C8: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    MEM32(esp + 0x14) = 0x62FF40;
    MEM32(esp + 0xB0) = 0;
    PUSH32(esp, 0x005200E6u); RECOMP_ABI_CALL(0x00615130u, sub_00615130); /* call 0x00615130 */

loc_005200E6: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x005200F2u); RECOMP_ABI_CALL(0x00520030u, sub_00520030); /* call 0x00520030 */

loc_005200F2: ;
    ecx = esi;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x005200FBu); RECOMP_ABI_CALL(0x00617FB0u, sub_00617FB0); /* call 0x00617FB0 */

loc_005200FB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00520110
 * Original: 0x00520110 - 0x00520232 (290 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00520110(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00520110: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00520119u); RECOMP_ABI_CALL(0x005E33D0u, sub_005E33D0); /* call 0x005E33D0 */

loc_00520119: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x649CB4;
    MEM32(esi + 0xC) = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x10;
    ecx = 8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = esi + 0x30;
    ecx = 8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = esi + 0x50;
    ecx = 8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 0x78) = edx;
    MEM32(esi + 0x74) = edx;
    MEM32(esi + 0x70) = edx;
    MEM32(esi + 0x80) = 0x3F95C28F;
    MEM32(esi + 0x84) = edx;
    MEM32(esi + 0x88) = edx;
    MEM32(esi + 0x8C) = 0x40ECCCCD;
    MEM32(esi + 0x90) = edx;
    eax = 0x3F800000;
    MEM32(esi + 0x7C) = eax;
    MEM32(esi + 0xA0) = eax;
    MEM32(esi + 0xA4) = eax;
    ecx = 0x3EC28F5C;
    MEM32(esi + 0x98) = ecx;
    MEM32(esi + 0x9C) = ecx;
    MEM32(esi + 0xA8) = edx;
    MEM32(esi + 0xAC) = edx;
    MEM32(esi + 0xB0) = edx;
    MEM32(esi + 0xB4) = edx;
    MEM32(esi + 0xC0) = 0x3F70A3D7;
    eax = 0x3F28F5C3;
    MEM32(esi + 0xB8) = eax;
    MEM32(esi + 0xBC) = eax;
    MEM32(esi + 0x94) = 0x420C0000;
    MEM8(esi + 0xC4) = LO8(edx);
    MEM8(esi + 0xC5) = LO8(edx);
    MEM8(esi + 0xC6) = LO8(edx);
    MEM32(esi + 0xD8) = edx;
    MEM8(esi + 0xDC) = LO8(edx);
    MEM32(esi + 0xE4) = 0x45;
    MEM32(esi + 0xE8) = edx;
    MEM32(esi + 0xF0) = edx;
    MEM32(esi + 0xE0) = edx;
    MEM32(esi + 0xEC) = edx;
    MEM32(esi + 0xC8) = edx;
    POP32(esp, edi);
    MEM32(esi + 0xD4) = edx;
    MEM32(esi + 0xD0) = edx;
    MEM32(esi + 0xCC) = edx;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00520240
 * Original: 0x00520240 - 0x0052024B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00520240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00520240: ;
    MEM32(ecx) = 0x649CB4;
    g_seh_ebp = ebp; sub_005E3280(); return; /* tail jmp 0x005E3280 */

}

/**
 * sub_00520250
 * Original: 0x00520250 - 0x0052026B (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00520250(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00520250: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ecx + 0xDC) = LO8(eax);
    MEM32(ecx + 0xE8) = eax;
    MEM32(ecx + 0xF0) = eax;
    MEM32(ecx + 0xE0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00520270
 * Original: 0x00520270 - 0x005202E5 (117 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00520270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00520270: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 0x10;
    ebx = 8;
    /* nop */

loc_00520280: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00520288u); RECOMP_ABI_CALL(0x005F3D80u, sub_005F3D80); /* call 0x005F3D80 */

loc_00520288: ;
    MEM32(esi) = 0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00520280; /* jne: not equal / not zero */

loc_00520297: ;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(edi + 0xC) = 0;
    PUSH32(esp, 0x005202A7u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_005202A7: ;
    ecx = MEM32(edi + 0xEC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005202B7; /* je: equal / zero */

loc_005202B1: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x005202B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005202B5u); } /* indirect call */
    }

loc_005202B7: ;
    ecx = MEM32(edi + 0xC8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005202E1; /* je: equal / zero */

loc_005202C1: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x005202C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005202C5u); } /* indirect call */
    }

loc_005202C7: ;
    ecx = MEM32(0x6CE2F4);
    PUSH32(esp, 0x64850C);
    PUSH32(esp, 0x005202D7u); RECOMP_ABI_CALL(0x005D4DF0u, sub_005D4DF0); /* call 0x005D4DF0 */

loc_005202D7: ;
    MEM32(edi + 0xC8) = 0;

loc_005202E1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_005202F0
 * Original: 0x005202F0 - 0x005204ED (509 bytes, 131 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_005202F0(void)
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

loc_005202F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00520350; /* jle: less or equal (signed <=) */

loc_005202FD: ;
    ecx = esi + 0x30;

loc_00520300: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x20)); /* fmul dword ptr [ecx + 0x20] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0052032C; /* jp: parity */

loc_00520324: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x630D78)); /* fadd dword ptr [0x630d78] */
    goto loc_00520343;

loc_0052032C: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x630D78)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x630d78] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00520345; /* jne: not equal / not zero */

loc_00520339: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x630D78)); /* fsub dword ptr [0x630d78] */

loc_00520343: ;
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */

loc_00520345: ;
    eax = MEM32(esi + 0xC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00520300; /* jl: less (signed <) */

loc_00520350: ;
    _fa = (uint32_t)(MEM32(0x6C32D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C32D0), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00520427; /* jne: not equal / not zero */

loc_0052035D: ;
    SET_LO8(eax, MEM8(esi + 0xDC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00520427; /* jne: not equal / not zero */

loc_0052036B: ;
    fp_push(MEMF(0x8602E0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0xE8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0xe8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00520427; /* jne: not equal / not zero */

loc_00520382: ;
    ecx = MEM32(esi + 0xC);
    eax = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00520427; /* jle: less or equal (signed <=) */

loc_00520392: ;
    ecx = MEM32(esi + 0xE8);
    MEM8(esi + 0xDC) = LO8(eax);
    MEM32(esi + 0xD8) = ecx;
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
    MEM32(0x679680) = edx;
    PUSH32(esp, edi);
    MEM32(esi + 0xE4) = eax;
    PUSH32(esp, 0x005203D2u); RECOMP_ABI_CALL(0x0061AD8Bu, sub_0061AD8B); /* call 0x0061AD8B */

loc_005203D2: ;
    ecx = eax;
    eax = MEM32(esi + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax;
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    POP32(esp, edi);
    MEM32(esi + 0xF0) = edx;
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
    MEM32(esp + 0xC) = eax;
    MEM32(0x679680) = edx;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D57C)); /* fadd dword ptr [0x62d57c] */
    MEMF(esi + 0xE0) = (float)fp_top(); fp_pop(); /* fstp */

loc_00520427: ;
    fp_push(MEMF(esi + 0xE0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0052047B; /* jne: not equal / not zero */

loc_0052043A: ;
    fp_push(MEMF(esi + 0xE0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x6797CC)); /* fsub dword ptr [0x6797cc] */
    MEMF(esi + 0xE0) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0052047B; /* jp: parity */

loc_00520459: ;
    ecx = MEM32(esi + 0xC8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0xE0) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0052047B; /* je: equal / zero */

loc_0052046D: ;
    eax = MEM32(0x6CE2E4);
    eax = MEM32(eax + 0x40);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0052047Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00520478u); } /* indirect call */
    }

loc_0052047B: ;
    SET_LO8(eax, MEM8(esi + 0xDC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005204E8; /* je: equal / zero */

loc_00520485: ;
    fp_push(MEMF(0x8602E0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xD8)); /* fsub dword ptr [esi + 0xd8] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005204E8; /* jne: not equal / not zero */

loc_0052049E: ;
    MEM8(esi + 0xDC) = 0;
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
    MEM32(esp + 0xC) = edx;
    MEM32(0x679680) = ecx;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x643FA4)); /* fmul dword ptr [0x643fa4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x8602E0)); /* fadd dword ptr [0x8602e0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x6306E8)); /* fadd dword ptr [0x6306e8] */
    MEMF(esi + 0xE8) = (float)fp_top(); fp_pop(); /* fstp */

loc_005204E8: ;
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
 * sub_005204F0
 * Original: 0x005204F0 - 0x00520563 (115 bytes, 30 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_005204F0(void)
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

loc_005204F0: ;
    SET_LO8(eax, MEM8(ecx + 0xDC));
    fp_push(MEMF(0x65E384)); /* fld float */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052053C; /* je: equal / zero */

loc_00520500: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x8602E0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0xD8)); /* fsub dword ptr [ecx + 0xd8] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x649CD4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x649cd4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00520531; /* jp: parity */

loc_0052051B: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D51C)); /* fmul dword ptr [0x62d51c] */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D57C)); /* fadd dword ptr [0x62d57c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    goto loc_00520539;

loc_00520531: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x65E384)); /* fld float */

loc_00520539: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x7C)); /* fmul dword ptr [ecx + 0x7c] */

loc_0052053C: ;
    eax = MEM32(esp + 4);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xB8)); /* fmul dword ptr [ecx + 0xb8] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xBC)); /* fmul dword ptr [ecx + 0xbc] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC0)); /* fmul dword ptr [ecx + 0xc0] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00520570
 * Original: 0x00520570 - 0x005208A1 (817 bytes, 209 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00520570(void)
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

loc_00520570: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x0052057Du); RECOMP_ABI_CALL(0x005EE3E0u, sub_005EE3E0); /* call 0x005EE3E0 */

loc_0052057D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00520584u); RECOMP_ABI_CALL(0x005EDF80u, sub_005EDF80); /* call 0x005EDF80 */

loc_00520584: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0052058Bu); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_0052058B: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x00520592u); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_00520592: ;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005206E8; /* je: equal / zero */

loc_005205A0: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x005205ACu); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_005205AC: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x005205B3u); RECOMP_ABI_CALL(0x005EE4E0u, sub_005EE4E0); /* call 0x005EE4E0 */

loc_005205B3: ;
    SET_LO8(eax, MEM8(0x8583E0));
    PUSH32(esp, 0);
    MEM8(esp + 0x14) = LO8(eax);
    PUSH32(esp, 0x005205C3u); RECOMP_ABI_CALL(0x005EE520u, sub_005EE520); /* call 0x005EE520 */

loc_005205C3: ;
    fp_push(MEMF(esi + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63EDBC)); /* fmul dword ptr [0x63edbc] */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x30;
    MEM32(esp + 0x30) = 0x3F800000;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x38) = 0;
    MEM32(esp + 0x3C) = 0;
    MEM32(esp + 0x40) = 0x3F800000;
    MEM32(esp + 0x44) = 0;
    MEM32(esp + 0x48) = 0;
    MEM32(esp + 0x4C) = 0;
    MEM32(esp + 0x50) = 0x3F800000;
    MEM32(esp + 0x5C) = 0;
    MEM32(esp + 0x58) = 0;
    MEM32(esp + 0x54) = 0;
    PUSH32(esp, 0x0052063Bu); RECOMP_ABI_CALL(0x006094A0u, sub_006094A0); /* call 0x006094A0 */

loc_0052063B: ;
    fp_push(MEMF(esi + 0x70)); /* fld float */
    eax = MEM32(esp + 0x60);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x24)); /* fadd dword ptr [eax + 0x24] */
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x28)); /* fadd dword ptr [eax + 0x28] */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x2C)); /* fadd dword ptr [eax + 0x2c] */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00520667u); RECOMP_ABI_CALL(0x005EDB20u, sub_005EDB20); /* call 0x005EDB20 */

loc_00520667: ;
    eax = MEM32(0x6C32D0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005206B0; /* jne: not equal / not zero */

loc_00520674: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00520680u); RECOMP_ABI_CALL(0x005204F0u, sub_005204F0); /* call 0x005204F0 */

loc_00520680: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D57C)); /* fadd dword ptr [0x62d57c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x60);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052069Cu); RECOMP_ABI_CALL(0x00420BF0u, sub_00420BF0); /* call 0x00420BF0 */

loc_0052069C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005206A2u); RECOMP_ABI_CALL(0x005EE630u, sub_005EE630); /* call 0x005EE630 */

loc_005206A2: ;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    goto loc_005206B9;

loc_005206B0: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, edx);

loc_005206B9: ;
    PUSH32(esp, 0x005206BEu); RECOMP_ABI_CALL(0x005F25C0u, sub_005F25C0); /* call 0x005F25C0 */

loc_005206BE: ;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005206C8u); RECOMP_ABI_CALL(0x005EDB20u, sub_005EDB20); /* call 0x005EDB20 */

loc_005206C8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xEC);
    PUSH32(esp, 0x005206DBu); RECOMP_ABI_CALL(0x00525260u, sub_00525260); /* call 0x00525260 */

loc_005206DB: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005206E5u); RECOMP_ABI_CALL(0x005EE520u, sub_005EE520); /* call 0x005EE520 */

loc_005206E5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005206E8: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x005206EFu); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_005206EF: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 2);
    PUSH32(esp, 0x005206FBu); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_005206FB: ;
    SET_LO8(eax, MEM8(esi + 0xDC));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00520890; /* je: equal / zero */

loc_0052070C: ;
    fp_push(MEMF(0x8602E0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xD8)); /* fsub dword ptr [esi + 0xd8] */
    MEMF(esp + 0x60) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x649CD4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x649cd4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00520743; /* jp: parity */

loc_00520729: ;
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D51C)); /* fmul dword ptr [0x62d51c] */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D57C)); /* fadd dword ptr [0x62d57c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    goto loc_00520749;

loc_00520743: ;
    fp_push(MEMF(0x65E384)); /* fld float */

loc_00520749: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x7C)); /* fmul dword ptr [esi + 0x7c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00520761; /* jne: not equal / not zero */

loc_00520759: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_00520761: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xB8)); /* fmul dword ptr [esi + 0xb8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x00520775u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00520775: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xBC)); /* fmul dword ptr [esi + 0xbc] */
    edi = ZX8(LO8(eax));
    edi = edi | 0xFFFFFF00u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x00520794u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00520794: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC0)); /* fmul dword ptr [esi + 0xc0] */
    eax = ZX8(LO8(eax));
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x005207ADu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005207AD: ;
    ecx = ZX8(LO8(eax));
    edi = edi | ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x005207B8u); RECOMP_ABI_CALL(0x005EE630u, sub_005EE630); /* call 0x005EE630 */

loc_005207B8: ;
    edx = MEM32(esi + 0xF0);
    ecx = MEM32(esi + edx * 8 + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_005207D5; /* je: equal / zero */

loc_005207CA: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005207D5u); RECOMP_ABI_CALL(0x005F25C0u, sub_005F25C0); /* call 0x005F25C0 */

loc_005207D5: ;
    fp_push(MEMF(esi + 0x8C)); /* fld float */
    ecx = MEM32(esi + 0x94);
    eax = MEM32(esi + 0xF0);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x90)); /* fld float */
    edx = ecx;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 8) = 0;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x10) = edx;
    ecx = MEM32(esi + eax * 4 + 0x80);
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00520820u); RECOMP_ABI_CALL(0x00609A30u, sub_00609A30); /* call 0x00609A30 */

loc_00520820: ;
    edx = MEM32(esi + 0xF0);
    eax = MEM32(esi + edx * 4 + 0x80);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00520837u); RECOMP_ABI_CALL(0x00609A30u, sub_00609A30); /* call 0x00609A30 */

loc_00520837: ;
    ecx = MEM32(esp + 0x60);
    eax = MEM32(esi + 0xE4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    ecx = esi + 0xA8;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x98;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    MEM32(esp + 0x50) = 0;
    MEM32(esp + 0x54) = 0;
    MEM32(esp + 0x58) = 0;
    PUSH32(esp, 0x0052088Du); RECOMP_ABI_CALL(0x0050A970u, sub_0050A970); /* call 0x0050A970 */

loc_0052088D: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00520890: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x00520897u); RECOMP_ABI_CALL(0x005EE630u, sub_005EE630); /* call 0x005EE630 */

loc_00520897: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005208B0
 * Original: 0x005208B0 - 0x00520AC4 (532 bytes, 131 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005208B0(void)
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

loc_005208B0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x005208BDu); RECOMP_ABI_CALL(0x005EE3E0u, sub_005EE3E0); /* call 0x005EE3E0 */

loc_005208BD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x005208C4u); RECOMP_ABI_CALL(0x005EDF80u, sub_005EDF80); /* call 0x005EDF80 */

loc_005208C4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x005208CBu); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_005208CB: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x005208D2u); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_005208D2: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x005208DEu); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_005208DE: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x005208E5u); RECOMP_ABI_CALL(0x005EE4E0u, sub_005EE4E0); /* call 0x005EE4E0 */

loc_005208E5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x005208ECu); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_005208EC: ;
    fp_push(MEMF(esi + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63EDBC)); /* fmul dword ptr [0x63edbc] */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 8;
    MEM32(esp + 8) = 0x3F800000;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0x3F800000;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = 0x3F800000;
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x2C) = 0;
    PUSH32(esp, 0x00520964u); RECOMP_ABI_CALL(0x006094A0u, sub_006094A0); /* call 0x006094A0 */

loc_00520964: ;
    fp_push(MEMF(esi + 0x70)); /* fld float */
    eax = MEM32(esp + 0x38);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x24)); /* fadd dword ptr [eax + 0x24] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x28)); /* fadd dword ptr [eax + 0x28] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x2C)); /* fadd dword ptr [eax + 0x2c] */
    eax = esp + 4;
    PUSH32(esp, eax);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00520990u); RECOMP_ABI_CALL(0x005EDB20u, sub_005EDB20); /* call 0x005EDB20 */

loc_00520990: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0052099Cu); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_0052099C: ;
    SET_LO8(eax, MEM8(esi + 0xDC));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00520A72; /* je: equal / zero */

loc_005209AD: ;
    fp_push(MEMF(0x8602E0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xD8)); /* fsub dword ptr [esi + 0xd8] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x649CD4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x649cd4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005209DC; /* jp: parity */

loc_005209C6: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D51C)); /* fmul dword ptr [0x62d51c] */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D57C)); /* fadd dword ptr [0x62d57c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    goto loc_005209E4;

loc_005209DC: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x65E384)); /* fld float */

loc_005209E4: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x7C)); /* fmul dword ptr [esi + 0x7c] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005209FE; /* jne: not equal / not zero */

loc_005209F6: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_005209FE: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xB8)); /* fmul dword ptr [esi + 0xb8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x00520A12u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00520A12: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xBC)); /* fmul dword ptr [esi + 0xbc] */
    edi = ZX8(LO8(eax));
    edi = edi | 0xFFFFFF00u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x00520A31u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00520A31: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC0)); /* fmul dword ptr [esi + 0xc0] */
    ecx = ZX8(LO8(eax));
    edi = edi | ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00520A4Au); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00520A4A: ;
    edx = ZX8(LO8(eax));
    edi = edi | edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00520A55u); RECOMP_ABI_CALL(0x005EE630u, sub_005EE630); /* call 0x005EE630 */

loc_00520A55: ;
    eax = MEM32(esi + 0xF0);
    ecx = MEM32(esi + eax * 8 + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00520A72; /* je: equal / zero */

loc_00520A67: ;
    edx = MEM32(ecx + 4);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00520A72u); RECOMP_ABI_CALL(0x005F25C0u, sub_005F25C0); /* call 0x005F25C0 */

loc_00520A72: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    eax = esp + 4;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x630320)); /* fmul dword ptr [0x630320] */
    PUSH32(esp, eax);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x630320)); /* fmul dword ptr [0x630320] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x630320)); /* fmul dword ptr [0x630320] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00520AA6u); RECOMP_ABI_CALL(0x005EDB20u, sub_005EDB20); /* call 0x005EDB20 */

loc_00520AA6: ;
    ecx = MEM32(esi + 0xEC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00520ABE; /* je: equal / zero */

loc_00520AB4: ;
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00520ABEu); RECOMP_ABI_CALL(0x00525260u, sub_00525260); /* call 0x00525260 */

loc_00520ABE: ;
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
 * sub_00520AD0
 * Original: 0x00520AD0 - 0x00520C57 (391 bytes, 132 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00520AD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00520AD0: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x110);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = edi + 0x50;
    goto loc_00520AF0;

    /* nop */

loc_00520AF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x649D94);
    eax = esp + 0x18;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00520B05u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00520B05: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x00520B1Bu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00520B1B: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00520AF0; /* jl: less (signed <) */

loc_00520B24: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = edi + 0xCC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x649D84);
    PUSH32(esp, 8);
    ecx = esi;
    PUSH32(esp, 0x00520B3Du); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00520B3D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = edi + 0x7C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x649D70);
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x00520B53u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00520B53: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = edi + 0x80;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x649D60);
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x00520B6Cu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00520B6C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = edi + 0x84;
    PUSH32(esp, edx);
    PUSH32(esp, 0x649D4C);
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x00520B85u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00520B85: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = edi + 0x88;
    PUSH32(esp, eax);
    PUSH32(esp, 0x649D38);
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x00520B9Eu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00520B9E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = edi + 0x8C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x649D2C);
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x00520BB7u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00520BB7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = edi + 0x90;
    PUSH32(esp, edx);
    PUSH32(esp, 0x649D1C);
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x00520BD0u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00520BD0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = edi + 0x94;
    PUSH32(esp, eax);
    PUSH32(esp, 0x649D10);
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x00520BE9u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00520BE9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = edi + 0x98;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x649CFC);
    PUSH32(esp, 9);
    ecx = esi;
    PUSH32(esp, 0x00520C02u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00520C02: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = edi + 0xA8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x649CEC);
    PUSH32(esp, 9);
    ecx = esi;
    PUSH32(esp, 0x00520C1Bu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00520C1B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = edi + 0xB8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x649CE0);
    PUSH32(esp, 8);
    ecx = esi;
    PUSH32(esp, 0x00520C34u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00520C34: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x70;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x649CD8);
    PUSH32(esp, 8);
    ecx = esi;
    PUSH32(esp, 0x00520C4Au); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00520C4A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00520C60
 * Original: 0x00520C60 - 0x00520C66 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00520C60(void)
{

loc_00520C60: ;
    eax = 0x649DBC;
    esp += 4; return; /* ret */

}

/**
 * sub_00520C70
 * Original: 0x00520C70 - 0x00520C8E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00520C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00520C70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00520C78u); RECOMP_ABI_CALL(0x00525200u, sub_00525200); /* call 0x00525200 */

loc_00520C78: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00520C88; /* je: equal / zero */

loc_00520C7F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00520C85u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00520C85: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00520C88: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00520C90
 * Original: 0x00520C90 - 0x00520CAE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00520C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00520C90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00520C98u); RECOMP_ABI_CALL(0x00520240u, sub_00520240); /* call 0x00520240 */

loc_00520C98: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00520CA8; /* je: equal / zero */

loc_00520C9F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00520CA5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00520CA5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00520CA8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00520CB0
 * Original: 0x00520CB0 - 0x00520EC8 (536 bytes, 152 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00520CB0(void)
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

loc_00520CB0: ;
    _fb = (uint32_t)(0x224) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x224;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x234);
    edx = MEM32(esp + 0x230);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(eax * 4 + 0x66327C);
    eax = MEM32(edx * 4 + 0x663270);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x238);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1278);
    edx = MEM32(ecx + 0x6633B0);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x649DF0);
    eax = esp + 0x13C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x00520D0Bu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00520D0B: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x12C;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00520D1Du); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_00520D1D: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x649DE8);
    eax = esp + 0x34;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00520D35u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00520D35: ;
    eax = MEM32(esi + 0xC);
    edi = MEM32(esp + 0x240);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    PUSH32(esp, 0x112);
    edx = esp + 0x40;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00520D5Bu); RECOMP_ABI_CALL(0x005F3D00u, sub_005F3D00); /* call 0x005F3D00 */

loc_00520D5B: ;
    ecx = MEM32(esi + 0xC);
    MEM32(esi + ecx * 4 + 0x10) = eax;
    edx = MEM32(esi + 0xC);
    eax = MEM32(esi + edx * 4 + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00520DE4; /* je: equal / zero */

loc_00520D70: ;
    eax = MEM32(esi + 0xC);
    fp_push(MEMF(esp + 8)); /* fld float */
    MEM32(esi + eax * 4 + 0x30) = 0;
    ecx = MEM32(esi + 0xC);
    MEMF(esi + ecx * 4 + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + 0xC);
    fp_push(MEMF(esp + 8)); /* fld float */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x643048)); /* fmul dword ptr [0x643048] */
    PUSH32(esp, edx);
    PUSH32(esp, 0x649DE8);
    eax = esp + 0x34;
    PUSH32(esp, 0x100);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    MEM32(esi + 0xC) = edx;
    PUSH32(esp, 0x00520DB0u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00520DB0: ;
    eax = MEM32(esi + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    PUSH32(esp, 0x112);
    edx = esp + 0x40;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00520DCFu); RECOMP_ABI_CALL(0x005F3D00u, sub_005F3D00); /* call 0x005F3D00 */

loc_00520DCF: ;
    ecx = MEM32(esi + 0xC);
    MEM32(esi + ecx * 4 + 0x10) = eax;
    edx = MEM32(esi + 0xC);
    eax = MEM32(esi + edx * 4 + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00520D70; /* jne: not equal / not zero */

loc_00520DE4: ;
    PUSH32(esp, 0x78);
    PUSH32(esp, 0x649DDC);
    PUSH32(esp, 0x1910);
    PUSH32(esp, 0x00520DF5u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00520DF5: ;
    edi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00520E19; /* je: equal / zero */

loc_00520DFE: ;
    ecx = edi;
    PUSH32(esp, 0x00520E05u); RECOMP_ABI_CALL(0x005E33D0u, sub_005E33D0); /* call 0x005E33D0 */

loc_00520E05: ;
    MEM32(edi) = 0x649D9C;
    MEM32(edi + 0x18F8) = 0;
    ecx = edi;
    goto loc_00520E1B;

loc_00520E19: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00520E1B: ;
    MEM32(esi + 0xEC) = ecx;
    PUSH32(esp, 0x00520E26u); RECOMP_ABI_CALL(0x00525AB0u, sub_00525AB0); /* call 0x00525AB0 */

loc_00520E26: ;
    _fa = (uint32_t)(MEM32(0x6C32D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C32D0), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00520EBD; /* jne: not equal / not zero */

loc_00520E33: ;
    ecx = MEM32(0x6CE2F4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x64850C);
    PUSH32(esp, 0x00520E49u); RECOMP_ABI_CALL(0x005D5060u, sub_005D5060); /* call 0x005D5060 */

loc_00520E49: ;
    PUSH32(esp, 0x82);
    PUSH32(esp, 0x649DDC);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x00520E5Au); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00520E5A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00520E6A; /* je: equal / zero */

loc_00520E61: ;
    ecx = eax;
    PUSH32(esp, 0x00520E68u); RECOMP_ABI_CALL(0x0052DA70u, sub_0052DA70); /* call 0x0052DA70 */

loc_00520E68: ;
    goto loc_00520E6C;

loc_00520E6A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00520E6C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    ecx = eax;
    MEM32(esi + 0xC8) = eax;
    PUSH32(esp, 0x00520E7Du); RECOMP_ABI_CALL(0x0052D950u, sub_0052D950); /* call 0x0052D950 */

loc_00520E7D: ;
    edi = 1;

loc_00520E82: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x649DC8);
    eax = esp + 0x14;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00520E94u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00520E94: ;
    ecx = MEM32(esi + 0xC8);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00520EA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00520EA4u); } /* indirect call */
    }

loc_00520EA7: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xA (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00520E82; /* jle: less or equal (signed <=) */

loc_00520EAD: ;
    ecx = MEM32(esi + 0xC8);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x00520EBDu); RECOMP_ABI_CALL(0x0052D770u, sub_0052D770); /* call 0x0052D770 */

loc_00520EBD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x224) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x224;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00520ED0
 * Original: 0x00520ED0 - 0x00520F87 (183 bytes, 53 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00520ED0(void)
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

loc_00520ED0: ;
    SET_LO8(eax, MEM8(ecx + 0xDC));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00520F67; /* je: equal / zero */

loc_00520EE1: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00520EEBu); RECOMP_ABI_CALL(0x005204F0u, sub_005204F0); /* call 0x005204F0 */

loc_00520EEB: ;
    edx = MEM32(esp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xCC)); /* fadd dword ptr [ecx + 0xcc] */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xD0)); /* fadd dword ptr [ecx + 0xd0] */
    MEMF(edx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xD4)); /* fadd dword ptr [ecx + 0xd4] */
    ecx = 0x3F800000;
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00520F3B; /* jne: not equal / not zero */

loc_00520F39: ;
    MEM32(edx) = ecx;

loc_00520F3B: ;
    fp_push(MEMF(edx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00520F4E; /* jne: not equal / not zero */

loc_00520F4B: ;
    MEM32(edx + 4) = ecx;

loc_00520F4E: ;
    fp_push(MEMF(edx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00520F81; /* jne: not equal / not zero */

loc_00520F5E: ;
    MEM32(edx + 8) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00520F67: ;
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xCC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;

loc_00520F81: ;
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
 * sub_00520F90
 * Original: 0x00520F90 - 0x00520FEA (90 bytes, 33 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00520F90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00520F90: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_push(MEMF(eax + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x24)); /* fadd dword ptr [eax + 0x24] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_push(MEMF(eax + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x28)); /* fadd dword ptr [eax + 0x28] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x2C)); /* fadd dword ptr [eax + 0x2c] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00520FF0
 * Original: 0x00520FF0 - 0x0052106A (122 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00520FF0(void)
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

loc_00520FF0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x24);
    fp_push(MEMF(eax + 4)); /* fld float */
    ecx = MEM32(eax);
    edx = MEM32(eax + 0xC);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    PUSH32(esp, 0x85B220);
    eax = esp + 4;
    MEM32(esp + 4) = ecx;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    MEM32(esp + 0x14) = 0x3F800000;
    MEM32(esp + 0x2C) = edx;
    PUSH32(esp, 0x0052102Du); RECOMP_ABI_CALL(0x0060A140u, sub_0060A140); /* call 0x0060A140 */

loc_0052102D: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0052105A; /* je: equal / zero */

loc_0052103C: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0052105A; /* je: equal / zero */

loc_0052104B: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00521062; /* jne: not equal / not zero */

loc_0052105A: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00521062: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
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
 * sub_00521070
 * Original: 0x00521070 - 0x0052108D (29 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00521070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00521070: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    MEM32(esi) = 0x649E00;
    PUSH32(esp, 0x00521082u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00521082: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005175D0(); return; /* tail jmp 0x005175D0 */

}

/**
 * sub_00521090
 * Original: 0x00521090 - 0x005210E1 (81 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00521090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00521090: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005210C2; /* jne: not equal / not zero */

loc_00521097: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 9);
    PUSH32(esp, 0x005210A3u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_005210A3: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x005210AAu); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_005210AA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x005210B1u); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_005210B1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x679684);
    PUSH32(esp, 0x005210BEu); RECOMP_ABI_CALL(0x005EDB20u, sub_005EDB20); /* call 0x005EDB20 */

loc_005210BE: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_005210C2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x005210C9u); RECOMP_ABI_CALL(0x00512BB0u, sub_00512BB0); /* call 0x00512BB0 */

loc_005210C9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x005210D0u); RECOMP_ABI_CALL(0x005EE3E0u, sub_005EE3E0); /* call 0x005EE3E0 */

loc_005210D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x679684);
    PUSH32(esp, 0x005210DDu); RECOMP_ABI_CALL(0x005EDB20u, sub_005EDB20); /* call 0x005EDB20 */

loc_005210DD: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005210F0
 * Original: 0x005210F0 - 0x0052111C (44 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005210F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005210F0: ;
    PUSH32(esp, 0x005210F5u); RECOMP_ABI_CALL(0x00512410u, sub_00512410); /* call 0x00512410 */

loc_005210F5: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00521119; /* jne: not equal / not zero */

loc_005210FC: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00521108u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_00521108: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x0052110Fu); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_0052110F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00521116u); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_00521116: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00521119: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00521120
 * Original: 0x00521120 - 0x0052116E (78 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00521120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00521120: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO16(eax, MEM16(esi + 0x16));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00521153; /* je: equal / zero */

loc_0052112F: ;
    ecx = MEM32(ecx + 0x24);
    eax = SX16(LO16(eax));
    edx = ecx + eax * 4;
    eax = MEM32(edx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052114D; /* je: equal / zero */

loc_00521140: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00521157; /* je: equal / zero */

loc_00521144: ;
    ecx = eax;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00521140; /* jne: not equal / not zero */

loc_0052114D: ;
    MEM16(esi + 0x16) = 0xFFFF;

loc_00521153: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00521157: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00521165; /* je: equal / zero */

loc_0052115B: ;
    edx = MEM32(eax + 0x1C);
    MEM32(ecx + 0x1C) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00521165: ;
    eax = MEM32(eax + 0x1C);
    MEM32(edx) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00521170
 * Original: 0x00521170 - 0x005211AF (63 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00521170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00521170: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0052117Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052117Cu); } /* indirect call */
    }

loc_0052117F: ;
    ecx = MEM32(0x6C263C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052118Bu); RECOMP_ABI_CALL(0x005192B0u, sub_005192B0); /* call 0x005192B0 */

loc_0052118B: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    MEM16(esi + 0x16) = LO16(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_005211AA; /* je: equal / zero */

loc_00521195: ;
    ecx = MEM32(edi + 0x24);
    eax = SX16(LO16(eax));
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(eax + ecx);
    MEM32(esi + 0x1C) = edx;
    ecx = MEM32(edi + 0x24);
    MEM32(eax + ecx) = esi;

loc_005211AA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005211B0
 * Original: 0x005211B0 - 0x00521200 (80 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005211B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005211B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx;
    ecx = MEM32(0x6C263C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005211CBu); RECOMP_ABI_CALL(0x005192B0u, sub_005192B0); /* call 0x005192B0 */

loc_005211CB: ;
    edi = eax;
    _fa = (uint32_t)(MEM16(esi + 0x16)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x16), LO16(edi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005211FA; /* je: equal / zero */

loc_005211D3: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x005211DBu); RECOMP_ABI_CALL(0x00521120u, sub_00521120); /* call 0x00521120 */

loc_005211DB: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0xFFFFFFFFu (16-bit) */
    MEM16(esi + 0x16) = LO16(edi);
    if (CMP_EQ(_fa, _fb)) goto loc_005211FA; /* je: equal / zero */

loc_005211E5: ;
    ecx = MEM32(ebx + 0x24);
    eax = SX16(LO16(edi));
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(eax + ecx);
    MEM32(esi + 0x1C) = edx;
    ecx = MEM32(ebx + 0x24);
    MEM32(eax + ecx) = esi;

loc_005211FA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00521200
 * Original: 0x00521200 - 0x0052123E (62 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00521200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00521200: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM16(esi + 0x16)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x16), 0xFFFFFFFFu (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052123A; /* jne: not equal / not zero */

loc_0052120C: ;
    eax = MEM32(ecx + 0x28);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052123A; /* je: equal / zero */

loc_00521215: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00521226; /* je: equal / zero */

loc_00521219: ;
    edx = eax;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00521215; /* jne: not equal / not zero */

loc_00521222: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00521226: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00521234; /* je: equal / zero */

loc_0052122A: ;
    eax = MEM32(eax + 0x1C);
    MEM32(edx + 0x1C) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00521234: ;
    edx = MEM32(eax + 0x1C);
    MEM32(ecx + 0x28) = edx;

loc_0052123A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
